sudo ./gpsconf #gps 57600, 10HZ
stty speed 57600 </dev/ttyAMA0 # short-circuit the autobaud if you use stty(1) to set the bit rate just before starting gpsd
sudo gpsd /dev/ttyAMA0


