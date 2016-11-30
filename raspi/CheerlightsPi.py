import requests

cheerlights = requests.get(
    'http://api.thingspeak.com/channels/1417/field/2/last.json').json()


color = cheerlights['field2'].strip('#')

rgb_list = []

for i in range(0, 5, +2):
    value = int(color[i:i+2], 16)
    rgb_list.append(value)

foo = ",".join(str(i) for i in rgb_list)
print foo

# TODO: function for getting color
# TODO: optional logging
# TODO: function for sending color to arduino
