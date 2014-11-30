/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.grame.dsp_faust;

public class dsp_faustJNI {

  static {
    try {
        java.lang.System.loadLibrary("dsp_faust");
    } catch (UnsatisfiedLinkError e) {
        java.lang.System.err.println("native code library failed to load.\n" + e);
        java.lang.System.exit(1);
    }
  }

  public final static native void init(int jarg1, int jarg2);
  public final static native int start();
  public final static native void stop();
  public final static native boolean isRunning();
  public final static native int keyOn(int jarg1, int jarg2);
  public final static native int keyOff(int jarg1);
  public final static native int pitchBend(int jarg1, float jarg2);
  public final static native String getJSON();
  public final static native int getParamsCount();
  public final static native float getParam(String jarg1);
  public final static native void setParam(String jarg1, float jarg2);
  public final static native int setVoiceParam(String jarg1, int jarg2, float jarg3);
  public final static native int setVoiceGain(int jarg1, float jarg2);
  public final static native String getParamAddress(int jarg1);
}
