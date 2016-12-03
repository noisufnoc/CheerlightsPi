#!/usr/bin/env python

import time
import serial
import requests

# TODO: function for getting color
# TODO: optional logging
# TODO: function for sending color to arduino

# Setup Arduino conneciton
DEVICE = '/dev/ttyACM0'
BAUD = 9600
arduino = serial.Serial(DEVICE, BAUD)

# Zero out RGB list
rgb_list = []

# Zero out color
color = 0

while True:
    try:
        cheerlights = requests.get(
            'http://api.thingspeak.com/channels/1417/field/2/last.json').json()
    except:
        pass

    # Strip leading octothorp
    cheerlights = cheerlights['field2'].strip('#')

    if cheerlights != color:
        # New color, do stuff

        for i in range(0, 5, +2):
            value = int(cheerlights[i:i+2], 16)
            rgb_list.append(value)

        command = ",".join(str(i) for i in rgb_list)
        arduino.write(command)
        print command

        color = cheerlights
        rgb_list = []

        # I must have picked 16s for a reason
        time.sleep(16)
