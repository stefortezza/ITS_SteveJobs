class VehicleError(Exception):
    def __init__(self, message = "Vehicle is broken"):
        super().__init__(message)
        
a = input()

raise VehicleError()