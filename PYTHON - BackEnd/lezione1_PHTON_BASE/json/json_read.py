import json

class Vehicle:
        def __init__(self, wheels, steering):
                self.wheels = wheels
                self.steering = steering

with open("json/data.json", "r") as f:
    value = json.load(f)


veicolo = Vehicle(**value)

print(type(veicolo))

print(veicolo.steering, veicolo.wheels)