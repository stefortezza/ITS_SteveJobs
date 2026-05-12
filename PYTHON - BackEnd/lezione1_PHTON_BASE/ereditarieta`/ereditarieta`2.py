class Car:
    def accelerate(self):
        print("La macchina accelera col pedale")
        
class Moto:
    def accelerate(self):
        print("La moto accellera con la monopola")

class Bici:
    def accelerate(self):
        print("La bici accellera spingendo")
    

# pandino = SuperCar() #MRO = METHOD RESOLUTION ORDER = DA SINISTRA VERSO DESTRA EREDITA I METODI
# pandino.accelerate()

lista = []
c1 = Car()
lista.append(c1)

m1 = Moto()
lista.append(m1)

b1 = Bici()
lista.append(b1)

print(lista)

for el in lista:
    el.accelerate()