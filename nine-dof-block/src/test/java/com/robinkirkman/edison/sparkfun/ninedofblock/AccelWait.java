package com.robinkirkman.edison.sparkfun.ninedofblock;

public class AccelWait {

	public static void main(String[] args) throws Exception {
		SFE_LSM9DS0_JNI jni = new SFE_LSM9DS0_JNI();
		jni.begin();
		while(!jni.newXData())
			Thread.sleep(5);
		jni.readAccel();
		double[] origin = new double[] { jni.ax, jni.ay, jni.az };
		while(true) {
			while(!jni.newXData())
				Thread.sleep(5);
			double[] now = new double[] { jni.ax, jni.ay, jni.az };
			double dist = Math.sqrt(Math.pow(origin[0] - now[0], 2) + Math.pow(origin[1] - now[1], 2) + Math.pow(origin[2] - now[2], 2));
			if(dist > 0.25)
				System.exit(0);
		}
	}

}
