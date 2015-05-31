# EWControl

This small graphical user interface attaches itself to earthworm and allows you to control the modules from a GUI. 
It can be used to stop, restart, and reconfigure EW. 
It has the ability to automatically refresh as well as manual refresh at the press of a button.

## Installation

 1. This module requires the lastes version of a 32 Bit QT (https://www.qt.io/download/) to be availible. If you wish to compile it, use the "-xplatform linux-g++-32" flag when configuring QT.
 2. After running the enviorment/ew_params.bash
 3. cd into the /src
 4. qmake
 5. make
 6. make install 
 
That should be all that is required. Alternatively a statically compiled version is provided, just move the ewcontrol to the /bin folder.

## Use

 1. Add the MOD_GUISTATUS to the modules in earthworm.d
 2. run ewcontrol
 3. Go to the system menu and hit connect ( 30s after a succesfull conection it should show the status, alternatively you can manually refresh)
 4. Activate Auto Update if desired.

## To do:

 1. Maybe add the ability to change configuration files.
 2. Sense changes in configuration files and auto restart the proccesses.
 3. Add other statistics.

====

If anyone is interested in this proyect or would like to help, contact me!

######Credits:
* The people over at Instrumental Software Technologies, Inc. (ISTI) @ http://www.isti.com/
* Everyone who has ever worked with in the development of earthworm @ http://earthwormcentral.org
* The QT Community @ http://qt-project.org/

Thanks,
Fran89.
