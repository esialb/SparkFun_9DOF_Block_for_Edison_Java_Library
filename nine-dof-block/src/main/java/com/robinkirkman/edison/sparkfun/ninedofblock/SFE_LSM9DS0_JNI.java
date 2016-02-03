package com.robinkirkman.edison.sparkfun.ninedofblock;

public final class SFE_LSM9DS0_JNI {

	// gyro_scale defines the possible full-scale ranges of the gyroscope:
	public static enum GyroScale {
		G_SCALE_245DPS(0b00),		// 00:  245 degrees per second
		G_SCALE_500DPS(0b01),		// 01:  500 dps
		G_SCALE_2000DPS(0b10),	// 10:  2000 dps
		;
		
		final int value;
		
		private GyroScale(int v) {
			this.ordinal();
			this.value = v;
		}
	}
	
	// accel_scale defines all possible FSR's of the accelerometer:
	public static enum AccelScale {
		A_SCALE_2G(0b000),	// 000:  2g
		A_SCALE_4G(0b001),	// 001:  4g
		A_SCALE_6G(0b010),	// 010:  6g
		A_SCALE_8G(0b011),	// 011:  8g
		A_SCALE_16G(0b100)	// 100:  16g
		;
		
		final int value;
		private AccelScale(int v) {
			this.value = v;
		}
	}
	
	public static enum MagScale {
		M_SCALE_2GS(0b00),	// 00:  2Gs
		M_SCALE_4GS(0b01), 	// 01:  4Gs
		M_SCALE_8GS(0b10),	// 10:  8Gs
		M_SCALE_12GS(0b11),	// 11:  12Gs
		;
		
		final int value;
		private MagScale(int v) {
			this.value = v;
		}
	}
	
	// gyro_odr defines all possible data rate/bandwidth combos of the gyro:
	public static enum GyroODR
	{							// ODR (Hz) --- Cutoff
		G_ODR_95_BW_125  (0x0), //   95         12.5
		G_ODR_95_BW_25   (0x1), //   95          25
		// 0x2 and 0x3 define the same data rate and bandwidth
		G_ODR_190_BW_125 (0x4), //   190        12.5
		G_ODR_190_BW_25  (0x5), //   190         25
		G_ODR_190_BW_50  (0x6), //   190         50
		G_ODR_190_BW_70  (0x7), //   190         70
		G_ODR_380_BW_20  (0x8), //   380         20
		G_ODR_380_BW_25  (0x9), //   380         25
		G_ODR_380_BW_50  (0xA), //   380         50
		G_ODR_380_BW_100 (0xB), //   380         100
		G_ODR_760_BW_30  (0xC), //   760         30
		G_ODR_760_BW_35  (0xD), //   760         35
		G_ODR_760_BW_50  (0xE), //   760         50
		G_ODR_760_BW_100 (0xF), //   760         100
		;
		
		final int value;
		private GyroODR(int v) {
			this.value = v;
		}
	};
	// accel_oder defines all possible output data rates of the accelerometer:
	public static enum AccelODR
	{
		A_POWER_DOWN(0x0), 	// Power-down mode (0x0)
		A_ODR_3125(0x1),		// 3.125 Hz	(0x1)
		A_ODR_625(0x2),		// 6.25 Hz (0x2)
		A_ODR_125(0x3),		// 12.5 Hz (0x3)
		A_ODR_25(0x4),		// 25 Hz (0x4)
		A_ODR_50(0x5),		// 50 Hz (0x5)
		A_ODR_100(0x6),		// 100 Hz (0x6)
		A_ODR_200(0x7),		// 200 Hz (0x7)
		A_ODR_400(0x8),		// 400 Hz (0x8)
		A_ODR_800(0x9),		// 800 Hz (9)
		A_ODR_1600(0xA)		// 1600 Hz (0xA)
		;
		
		final int value;
		private AccelODR(int v) {
			this.value = v;
		}
	};

      // accel_abw defines all possible anti-aliasing filter rates of the accelerometer:
	public static enum AccelABW
	{
		A_ABW_773(0x0),		// 773 Hz (0x0)
		A_ABW_194(0x1),		// 194 Hz (0x1)
		A_ABW_362(0x2),		// 362 Hz (0x2)
		A_ABW_50(0x3),		//  50 Hz (0x3)
		;
		
		final int value;
		private AccelABW(int v) {
			this.value = v;
		}
	};


	// mag_oder defines all possible output data rates of the magnetometer:
	public static enum MagODR
	{
		M_ODR_3125(0x0),	// 3.125 Hz (0x00)
		M_ODR_625(0x1),	// 6.25 Hz (0x01)
		M_ODR_125(0x2),	// 12.5 Hz (0x02)
		M_ODR_25(0x3),	// 25 Hz (0x03)
		M_ODR_50(0x4),	// 50 (0x04)
		M_ODR_100(0x5),	// 100 Hz (0x05)
		;
		
		final int value;
		private MagODR(int v) {
			this.value = v;
		}
	};
	
	static {
		NarSystem.loadLibrary();
	}
	
	private long ptr;
	
	public SFE_LSM9DS0_JNI() {
		ptr = ctor0();
	}
	
	public float gx, gy, gz;
	public float ax, ay, az;
	public float mx, my, mz;
	public short temperature;
	
	private static native long ctor0();
	private static native short gx0(long ptr);
	private static native short gy0(long ptr);
	private static native short gz0(long ptr);
	private static native short ax0(long ptr);
	private static native short ay0(long ptr);
	private static native short az0(long ptr);
	private static native short mx0(long ptr);
	private static native short my0(long ptr);
	private static native short mz0(long ptr);
	private static native short temperature0(long ptr);
	
	private static native short begin0(long ptr, int gScl, int aScl, int mScl, int gODR, int aODR, int mODR);
	private static native void readGyro0(long ptr);
	private static native void readAccel0(long ptr);
	private static native void readMag0(long ptr);
	private static native void readTemp0(long ptr);
	private static native float calcGyro0(long ptr, short gyro);
	private static native float calcAccel0(long ptr, short accel);
	private static native float calcMag0(long ptr, short mag);
	private static native void setGryoScale0(long ptr, int gScl);
	private static native void setAccelScale0(long ptr, int aScl);
	private static native void setMagScale0(long ptr, int mScl);
	private static native void setGyroODR0(long ptr, int gRate);
	private static native void setAccelODR0(long ptr, int aRate);
	private static native void setAccelABW0(long ptr, int abwRate);
	private static native void setMagODR0(long ptr, int mRate);
	private static native boolean newXData0(long ptr);
	private static native boolean newMData0(long ptr);
	private static native boolean newGData0(long ptr);
	private static native boolean xDataOverflow0(long ptr);
	private static native boolean gDataOverflow0(long ptr);
	private static native boolean mDataOverflow0(long ptr);
	
	public short begin(GyroScale gScl, AccelScale aScl, MagScale mScl, GyroODR gRate, AccelODR aRate, MagODR mRate) {
		return begin0(
				ptr,
				gScl.value,
				aScl.value,
				mScl.value,
				gRate.value,
				aRate.value,
				mRate.value);
	}
	
	public void readGyro() { 
		readGyro0(ptr);
		gx = calcGyro0(ptr, gx0(ptr));
		gy = calcGyro0(ptr, gy0(ptr));
		gz = calcGyro0(ptr, gz0(ptr));
	}
	public void readAccel() { 
		readAccel0(ptr); 
		ax = calcAccel0(ptr, ax0(ptr));
		ay = calcAccel0(ptr, ay0(ptr));
		az = calcAccel0(ptr, az0(ptr));
	}
	public void readMag() { 
		readMag0(ptr); 
		mx = calcMag0(ptr, mx0(ptr));
		my = calcMag0(ptr, my0(ptr));
		mz = calcMag0(ptr, mz0(ptr));
	}
	public void readTemp() { 
		readTemp0(ptr);
		temperature = temperature0(ptr);
	}
	
	public void setGryoScale(GyroScale gScl) {
		setGryoScale0(ptr, gScl.value);
	}
	
	public void setAccelScale(AccelScale aScl) {
		setAccelScale0(ptr, aScl.value);
	}
	
	public void setMagScale(MagScale mScl) {
		setMagScale0(ptr, mScl.value);
	}
	
	public void setGyroODR(GyroODR gRate) {
		setGyroODR0(ptr, gRate.value);
	}
	
	public void setAccelODR(AccelODR aRate) {
		setAccelODR0(ptr, aRate.value);
	}
	
	public void setAccelABW(AccelABW abwRate) {
		setAccelABW0(ptr, abwRate.value);
	}
	
	public void setMagODR(MagODR mRate) {
		setMagODR0(ptr, mRate.value);
	}
	
	public boolean newXData() {
		return newXData0(ptr);
	}
	
	public boolean newGData() {
		return newGData0(ptr);
	}
	
	public boolean newMData() {
		return newMData0(ptr);
	}
	
	public boolean xDataOverflow() {
		return xDataOverflow0(ptr);
	}
	
	public boolean gDataOverflow() {
		return gDataOverflow0(ptr);
	}
	
	public boolean mDataOverflow() {
		return mDataOverflow0(ptr);
	}
}
