import serial 
import time 
from datetime import datetime

ser = serial.Serial(
	'COM4',9600, timeout=0, parity=serial.PARITY_NONE,rtscts=1
	)

while True:	
	try:
		s = str(ser.readline(100).decode())
		if s != "":
			f = open("adgangslogg.txt", "a+")
			f.write(s)
	except:
		print("ERROR")
		break

	
time.sleep(1)