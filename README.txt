1. Android build
  - Download original android source code ( kitkat 4.4.2 ) from http://source.android.com
  - Untar opensource packages of LG-D405(L90)_Android_KK_D405V10c_Android.tar.gz into downloaded android source directory
		  a) cat LG-D405_Android_KK_D405V10c_Android.tar.gza* | tar -zxvpf -
  - And, merge the source into the android source code
  - Run following scripts to build android
    a) source build/envsetup.sh
    b) lunch
    c) make
  - When you compile the android source code, you have to add google original prebuilt source(toolchain) into the android directory.
  - After build, you can find output at out/target/product/generic

2. Kernel Build  
  - Uncompress using following command at the android directory
         tar xvzf LG-D405_Android_KK_D405V10c_Kernel.tar.gz
  - When you compile the kernel source code, you have to add google original prebuilt source(toolchain) into the android directory.
  - Run following scripts to build kernel
    a)$cd kernel
      $mkdir -p out
    b)$export ARCH=arm
    c)$export TARGET_PRODUCT=w7_global_com
    d)$export DTS_TARGET=msm8226-w7_global_com
    e)$export CROSS_COMPILE=$(pwd)/../prebuilts/gcc/linux-x86/arm/arm-eabi-4.6/bin/arm-eabi-
    f)$make O=./out ARCH=arm w7_global_com_defconfig
    g)$make O=./out -j4
        * "-j4" : The number, 4, is the number of multiple jobs to be invoked simultaneously. 
  - After build, you can find the build image(zImage) at out/arch/arm/boot

3. how  to build chromium_lge (vendor\lge\external\chromium_lge\src),
   please refer to README.txt at the folder mentioned above.