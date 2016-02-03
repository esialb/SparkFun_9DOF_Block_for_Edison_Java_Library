package com.robinkirkman.edison.sparkfun.ninedofblock;

import java.util.concurrent.TimeUnit;

import org.junit.Test;

public class SFE_LSM9DS0_JNITest {
	@Test
	public void testNew() throws Exception {
		SFE_LSM9DS0_JNI dof = new SFE_LSM9DS0_JNI();
		dof.begin();
		long stop = System.currentTimeMillis() + TimeUnit.MILLISECONDS.convert(10, TimeUnit.SECONDS);
		while(System.currentTimeMillis() < stop) {
			dof.readAccel();
			if(dof.newXData()) {
				System.out.println(String.format("%f %f %f", dof.ax, dof.ay, dof.az));
			} else
				Thread.sleep(50);
		}
	}
}
