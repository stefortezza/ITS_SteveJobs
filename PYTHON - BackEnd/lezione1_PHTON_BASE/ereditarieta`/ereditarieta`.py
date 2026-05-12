class Vehicle:
    def __init__(self, model, year):
        self.model = model
        self.year = year
    def accelerate(self):
        print(f"{self.model} sta accelerando")
    def sterzo(self, angolo):
        print(f"{self.model} sta sterzando di {angolo} gradi")

class Car(Vehicle):
    def __init__(self, model, year, doors = 5):
        super().__init__(model, year)
        self.doors = doors
    def accelerate(self):
        print(f"{self.model} sta accelerando, ti ricordo che e`una car a {self.doors} porte")
    def ex_accelerate(self):
        return super().accelerate()

class SuperCar(Car):
    color = "red"
    def __init__(self, model, year, doors=5):
        super().__init__(model, year, doors)
    

class Motorcycle(Vehicle):
    def __init__(self, model, year, cambio = "Manuale"):
        super().__init__(model, year)
        self.cambio = cambio

# c = Vehicle("mazda", 2002)
# c.accelerate()
# c.sterzo(35)
# c1 = Car("Fiat", 2012, 7)
# c2 = Car("BMW", 2023)
# c1.accelerate()
# c2.sterzo(25)

c1 = Car("mazda", 2002)
c1.accelerate()