package com.grame.faust;

import com.grame.faust.MultiParams.OnMultiParamsChangeListener;
import com.grame.faust.PianoKeyboard.OnKeyboardChangeListener;
import com.grame.faust_dsp.faust_dsp;

import android.app.Activity;
import android.content.SharedPreferences;
import android.os.Bundle;

public class MultiKeyboardActivity extends Activity {
	int nParams;
	float[] values;
	ParametersInfo parametersInfo;
	
	@Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.combined);
        
        final PianoKeyboard keyboard = (PianoKeyboard) this.findViewById(R.id.PianoKeyboard);
        keyboard.setOnKeyboardChangeListener(new OnKeyboardChangeListener(){
			@Override
			public void onKeyChanged(int note, int velocity, boolean i) {
				if(i) faust_dsp.keyOn(note,velocity);
				else faust_dsp.keyOff(note);
			}
			
			@Override
			public void onPitchBend(int refPitch, float pitch) {
				faust_dsp.pitchBend(refPitch, pitch);
			}

			@Override
			public void onYChanged(int pitch, float y) {
				faust_dsp.setVoiceGain(pitch,y);
			}
        });
        
        int numberOfParameters = faust_dsp.getParamsCount();
        parametersInfo = new ParametersInfo();
        parametersInfo.init(numberOfParameters);
        SharedPreferences settings = getSharedPreferences("savedParameters", 0);
        parametersInfo.getSavedParameters(settings);
        
        final MultiParams mp = (MultiParams) this.findViewById(R.id.MultiParams);
        int nMultiParams = parametersInfo.nMultiParams;
        nParams = parametersInfo.nParams;
        String[] labels = new String[nMultiParams];
        final String[] addresses = new String[nMultiParams];
		float[] min = new float[nMultiParams];
		float[] max = new float[nMultiParams];
		values = new float[nMultiParams];
		
		for(int i=0; i<nParams; i++){
			int currentIndex = parametersInfo.order[i];
			if(currentIndex != -1){	
				addresses[currentIndex] = faust_dsp.getParamAddress(i);
				labels[currentIndex] = parametersInfo.label[i];
				min[currentIndex] = parametersInfo.min[i];
				max[currentIndex] = parametersInfo.max[i];
				values[currentIndex] = faust_dsp.getParam(addresses[currentIndex]);
			}
		}
		mp.setParams(labels, min, max, values);
		
		mp.setOnMultiParamsChangeListener(new OnMultiParamsChangeListener(){
			@Override
			public void onParamChange(int paramID, float value) {
				faust_dsp.setParam(addresses[paramID], value);
			}	
		});
	}
	
	@Override
	public void onDestroy(){
    	super.onDestroy();
    }
}