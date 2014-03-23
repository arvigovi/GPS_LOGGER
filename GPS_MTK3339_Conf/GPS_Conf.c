/* Hi Speed Logger Project - MTK33x9 chipset
* Author: Arvind Govindaraj (arvind.govindaraj@gmail.com)
* GPS_Conf.cpp
* Rev History
* V0.1 - 04/13/2013
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <bcm2835.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <wiringSerial.h>
#include "Adafruit_GPS.h"



int main(int argc, char **argv)
{
	int serFd;
	serFd = serialOpen("/dev/ttyAMA0",9600);
	serialFlush(serFd);
	usleep(1*1000*1000);//sleep for 1s 
	serialPrintf(serFd,PMTK_SET_BAUD_57600); //set baud rate to 57600
	serialClose(serFd);
	
	serFd = serialOpen("/dev/ttyAMA0",57600);
	serialFlush(serFd);
	usleep(1*1000*1000);//sleep for 1s 
	serialPrintf(serFd,PMTK_SET_NMEA_UPDATE_10HZ); //10Hz GPS
	
	
    return 0;
}