#!/usr/bin/env python
import time
import requests

# Read the thingspeak feed to get the current color

while True:
	cheerlights_feed = requests.get('http://api.thingspeak.com/channels/1417/field/1/last.json').json

	# ToDo: Update the LED using GPIO
	print cheerlights_feed['field1']

	# ToDo: Find thinkspeek update interval to not DoS them every 5 seconds.
	time.sleep(5)
