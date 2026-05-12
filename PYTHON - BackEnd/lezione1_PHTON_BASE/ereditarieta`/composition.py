class Avviamento:
    def start(self):
        print("Il meccanismo si avvia!")

class AvviamentoElettrico(Avviamento):
    def start(self):
        print("Il motorino elettrico!")

class AvviamentoPedale(Avviamento):
     def start(self):
        print("Il pedale funziona!")

class Vehicle:
    def __init__(self, model, avviamento):
        self.model = model
        self.avviamento = avviamento
    
    def partenza(self):
        self.avviamento.start()

m1 = Vehicle("KTM", AvviamentoPedale())
m2 = Vehicle("Panda", AvviamentoElettrico())

m1.partenza()
m2.partenza()


