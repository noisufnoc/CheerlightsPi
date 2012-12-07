import serial
import time
import requests

# Setup serial connection to arduino

DEVICE = '/dev/ttyACM0'
BAUD = 9600
arduino = serial.Serial(DEVICE, BAUD)

# Read the thingspeak feed to get the current color

color = 'black'

while True:
	try:
        	cheerlights_feed = requests.get('http://api.thingspeak.com/channels/1417/field/1/last.json').json
	except:
		pass
	if cheerlights_feed['field1'] == color:
		#I've seen this before, skip
	else:
		#New color, do stuff
        	arduino.write(cheerlights_feed['field1'])
	        print cheerlights_feed['field1']
		color = cheerlights_feed['filed1']
        time.sleep(16)
