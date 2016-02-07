package com.robinkirkman.edison.sparkfun.ninedofblock;

import java.io.ByteArrayOutputStream;

public class BinaryLogger {
	public static void main(String[] args) throws Exception {
		SFE_LSM9DS0_JNI jni = new SFE_LSM9DS0_JNI();
		
		jni.begin();
		
		byte[] buf = new byte[33];
		ByteArrayOutputStream b
		
		for(;;) {
			boolean gnew = jni.newGData();
			boolean xnew = jni.newXData();
			boolean mnew = jni.newMData();
			long now = System.nanoTime();
			if(gnew) {
				jni.readGyro();
				
				System.out.println(String.format("%s,%d,%f,%f,%f", "G", now, jni.gx, jni.gy, jni.gz));
			}
			if(xnew) {
				jni.readAccel();
				System.out.println(String.format("%s,%d,%f,%f,%f", "X", now, jni.ax, jni.ay, jni.az));
			}
			if(mnew) {
				jni.readMag();
				System.out.println(String.format("%s,%d,%f,%f,%f", "M", now, jni.mx, jni.my, jni.mz));
			}
			if(!read)
				Thread.sleep(1);
		}
	}
}
