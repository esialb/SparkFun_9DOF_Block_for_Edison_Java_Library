package com.robinkirkman.edison.sparkfun.ninedofblock;

public class BinaryLogger {
	public static void main(String[] args) throws Exception {
		SFE_LSM9DS0_JNI jni = new SFE_LSM9DS0_JNI();
		
		jni.begin();
		
		byte[] buf = new byte[33];
		
		for(;;) {
			boolean gnew = jni.newGData();
			boolean xnew = jni.newXData();
			boolean mnew = jni.newMData();
			long now = System.nanoTime();
			if(gnew) {
				jni.readGyro();
				buf[0] = (byte) 'G';
				putLong(buf, 1, now);
				putDouble(buf, 9, jni.gx);
				putDouble(buf, 17, jni.gy);
				putDouble(buf, 25, jni.gz);
				System.out.write(buf);
			}
			if(xnew) {
				jni.readAccel();
				buf[0] = (byte) 'X';
				putLong(buf, 1, now);
				putDouble(buf, 9, jni.ax);
				putDouble(buf, 17, jni.ay);
				putDouble(buf, 25, jni.az);
				System.out.write(buf);
			}
			if(mnew) {
				jni.readMag();
				buf[0] = (byte) 'M';
				putLong(buf, 1, now);
				putDouble(buf, 9, jni.mx);
				putDouble(buf, 17, jni.my);
				putDouble(buf, 25, jni.mz);
				System.out.write(buf);
			}
			if(!(gnew || xnew || mnew))
				Thread.sleep(1);
		}
	}
	
	private static void putDouble(byte[] b, int off, double v) {
		putLong(b, off, Double.doubleToRawLongBits(v));
	}
	
	private static void putLong(byte[] b, int off, long v) {
		for(int i = 7; i >= 0; i--) {
			b[off + i] = (byte) v;
			v = v >>> 8;
		}
	}
}
