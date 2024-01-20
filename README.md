# OtpX


Only a basic project setup for now.

Work in progress...



## Donations
To support this project, you can make a donation to its current maintainer:

[![paypal](https://github.com/Ximi1970/Donate/blob/master/paypal_btn_donateCC_LG_2.gif)](https://paypal.me/Ximi1970)
[![bitcoin-qrcode-black](https://github.com/Ximi1970/Donate/blob/master/bitcoin-donate-qrcode-black.png)](https://raw.githubusercontent.com/Ximi1970/Donate/master/bitcoin-address.txt)


## Building

### Linux

Requirements:

- [Qt](https://www.qt.io/download-open-source) (QtCreator, Qt 5.15.2)
- openJDK 12.0.2

Dowload and install at least QtCreator and Qt 5.15.2 with all the modules.
Create a directory ~/AndroidQt/Jdk
Create a directory ~/AndroidQt/Sdk
Install openJDK 17.0.2 into ~/AndroidQt/Jdk/jdk-17.0.2
Open the settings in QtCreator, goto Preferences->Devices->Android
JDK location: ~/AndroidQt/Jdk/jdk-17.0.2, QtCreator needs this to install the basic Android tools
Android SDK location: ~/AndroidQt/Sdk
Click on Set Up SDK, install the default modules.

If you want to develop for at least Android 8.1 (Pixel C tablet) also install the 8.1 tools and modules
Install openJDK 12.0.2 into ~/AndroidQt/Jdk/jdk-12.0.2
Click on "SDK Manager"
Select Tools->Android SDK Build-Tools 27.0.3
Select Android 8.1 ("Oreo")-> All modules

Quit and start QtCreator. The preferences should now be up to date again.
Goto Preferences->Devices->Add...
Select "Android Device"
Name: "Pixel-C-Api27-x86-GoogleApis"
Device def: Phone?, pixel_c
Architecture (ABI): x86
Target API: android-27 (google_apis)

Goto Preferences->Kits
Mark "Android Qt 5.15.2 Clang Multi-Abi"
Click "Clone"
Goto the cloned kit and select.
Select run device: "Pixel-C-Api27-x86-GoogleApis"
Debugger: Android Debugger (Multi-Abi, NDK 25.1.8937393)
Click "OK"


Load the OtpX.pro file in QtCreator.
Add the Android Qt 5.15.2 Clang Multi-Abi under manually added, last in the list.
Add the Desktop Qt 5.15.2 GCC 64bit
Click "Configure Project"
Goto "Projects" and select "Build" from the Android Qt 5.15.2 Clang x86.
Scroll down to "Build Android APK"
Set the build-tools version to: 27.0.3
Set the build platform SDK: android-27
Scroll furher down.
Open the "Details" for the "Build environment"
Find these vars: JAVA_BINDIR, JAVA_HOME, JAVA_ROOT, JDK_HOME, JRE_HOME
Change JAVA_BINDIR into: /home/<your home>/AndroidQt/Jdk/jdk-12.0.2/bin
And the others into: /home/<your home>/AndroidQt/Jdk/jdk-12.0.2
Leave the "Projects" by clicking on "Edit"

You can now select the Android toolkit and compile, run and debug the project using the emulator.
There will be still some warnings, ignore them.




### Windows

- [Git for Windows](https://gitforwindows.org/)
- [TortoiseGit](https://tortoisegit.org/)
- [PuTTY](https://www.putty.org/)
- [Qt](https://www.qt.io/download-open-source) (QtCreator, Qt 5.15.2)

