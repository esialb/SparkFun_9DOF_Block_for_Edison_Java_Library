package com.robinkirkman.edison.sparkfun.ninedofblock;

import java.util.concurrent.TimeUnit;

import org.junit.Test;

public class SFE_LSM9DS0_JNITest {
	@Test
	public void testAccel() throws Exception {
		SFE_LSM9DS0_JNI dof = new SFE_LSM9DS0_JNI();
		dof.begin();
		long stop = System.currentTimeMillis() + TimeUnit.MILLISECONDS.convert(5, TimeUnit.SECONDS);
		while(System.currentTimeMillis() < stop) {
			if(dof.newXData()) {
				dof.readAccel();
				System.out.println(String.format("accel: %f %f %f", dof.ax, dof.ay, dof.az));
			} else
				Thread.sleep(5);
		}
	}

	@Test
	public void testGyro() throws Exception {
		SFE_LSM9DS0_JNI dof = new SFE_LSM9DS0_JNI();
		dof.begin();
		long stop = System.currentTimeMillis() + TimeUnit.MILLISECONDS.convert(5, TimeUnit.SECONDS);
		while(System.currentTimeMillis() < stop) {
			if(dof.newGData()) {
				dof.readGyro();
				System.out.println(String.format("gyro: %f %f %f", dof.gx, dof.gy, dof.gz));
			} else
				Thread.sleep(5);
		}
	}

	@Test
	public void testMag() throws Exception {
		SFE_LSM9DS0_JNI dof = new SFE_LSM9DS0_JNI();
		dof.begin();
		long stop = System.currentTimeMillis() + TimeUnit.MILLISECONDS.convert(5, TimeUnit.SECONDS);
		while(System.currentTimeMillis() < stop) {
			if(dof.newMData()) {
				dof.readMag();
				System.out.println(String.format("mag: %f %f %f", dof.mx, dof.my, dof.mz));
			} else
				Thread.sleep(5);
		}
	}
}
