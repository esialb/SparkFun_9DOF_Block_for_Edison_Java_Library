package com.robinkirkman.edison.sparkfun.ninedofblock;

public class Logger {
	public static void main(String[] args) throws Exception {
		SFE_LSM9DS0_JNI jni = new SFE_LSM9DS0_JNI();
		
		jni.begin();
		
		for(;;) {
			boolean read = false;
			if(jni.newGData()) {
				read = true;
				long now = System.nanoTime();
				jni.readGyro();
				System.out.println(String.format("%s,%d,%f,%f,%f", "G", now, jni.gx, jni.gy, jni.gz));
			}
			if(jni.newXData()) {
				read = true;
				long now = System.nanoTime();
				jni.readAccel();
				System.out.println(String.format("%s,%d,%f,%f,%f", "G", now, jni.ax, jni.ay, jni.az));
			}
			if(jni.newMData()) {
				read = true;
				long now = System.nanoTime();
				jni.readMag();
				System.out.println(String.format("%s,%d,%f,%f,%f", "G", now, jni.mx, jni.my, jni.mz));
			}
			if(!read)
				Thread.sleep(1);
		}
	}
}
