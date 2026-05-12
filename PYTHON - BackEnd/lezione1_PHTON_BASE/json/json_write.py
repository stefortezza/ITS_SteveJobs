# import json 

# class Vehicle:
#         def __init__(self, wheels, steering):
#                 self.wheels = wheels
#                 self.steering = steering
            
# x= Vehicle(4, "manubrio")
# y= Vehicle(2, "test")

# with open('data.json', 'a') as f:
#           json.dump(x.__dict__, f)
#           json.dump(y.__dict__, f)


import json 

class Vehicle:

    def __init__(self, wheels, steering):

        self.wheels = wheels
        self.steering = steering
            
x = Vehicle(4, "manubrio")
y = Vehicle(2, "test")
z = Vehicle(3, "testZ")


data = [x.__dict__, y.__dict__, z.__dict__]


with open('data.json', 'a') as f:

    json.dump(data, f)