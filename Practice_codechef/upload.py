import csv
import sys
import json
from firebase import firebase
firebase = firebase.FirebaseApplication('https://haha-4cf04.firebaseio.com', None) # firebase link
data = []
i=0;
print i
if os.path.getsize("All_Details.csv") > 2:
	with open('All_Details.csv')as csvfile: 
		read = csv.reader(csvfile)
		for row in read:
			x =float(row[0])
			y = float(row[1])
			z = float(row[2])	
			lat = float(row[3])
			long1 = float(row[4])
			speed = float(row[5])
			light = float(row[6])
			sound = float(row[7])
			firebase.put('/Roaddata',i,{"x": x,"y": y,"z": z,"lat": lat,"long1": long1,"speed": speed,"light": light,"sound": sound})
f1.close()
