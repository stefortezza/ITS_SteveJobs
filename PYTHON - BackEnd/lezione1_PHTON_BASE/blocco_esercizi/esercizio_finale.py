class Libro:
    def __init__(self, titolo, autore, casa_editrice, prezzo_di_acquisto):
        self.titolo = titolo
        self.autore = autore
        self.casa_editrice = casa_editrice
        self.__prezzo_di_acquisto = prezzo_di_acquisto
        
    def get_prezzo_di_acquisto(self):
        return self.__prezzo_di_acquisto
    
    def set_prezzo_di_acquisto(self, nuovo_prezzo_di_acquisto):
        if nuovo_prezzo_di_acquisto > 0:
            self.__prezzo_di_acquisto = nuovo_prezzo_di_acquisto
        else:
            raise ValueError("Il prezzo deve essere maggiore di 0")
        
    def __eq__(self, other):
        if isinstance(other, Libro):
            return (
            self.titolo == other.titolo and
            self.autore == other.autore and
            self.casa_editrice == other.casa_editrice and
            self.get_prezzo_di_acquisto() == other.get_prezzo_di_acquisto()
        )
        return False
        
class Catalogo:
    def __init__(self, nome, descrizione, lista_libro=[]):
        self.nome = nome
        self.descrizione = descrizione
        self.lista_libro = list(lista_libro)
        self.__valore_totale = 0
        self.aggiorna_valore_totale()

    def get_valore_totale(self):
        return self.__valore_totale

    def set_valore_totale(self, nuovo_valore):
        if nuovo_valore >= 0:
            self.__valore_totale = nuovo_valore
        else:
            raise ValueError("Il valore totale non può essere negativo")

    def aggiorna_valore_totale(self):
        totale = 0
        for libro in self.lista_libro:
            totale += libro.get_prezzo_di_acquisto()
        self.__valore_totale = totale

    def aggiungi_libro(self, libro):
        self.lista_libro.append(libro)
        self.aggiorna_valore_totale()

    def rimuovi_libro(self, libro):
        if libro in self.lista_libro:
            self.lista_libro.remove(libro)
            self.aggiorna_valore_totale()
        else:
            print("Libro non presente nel catalogo")
    
    def __eq__(self, other):
        if isinstance(other, Catalogo):
        
            self_set = {
                (libro.titolo, libro.autore, libro.casa_editrice, libro.get_prezzo_di_acquisto())
                for libro in self.lista_libro
            }

            other_set = {
                (libro.titolo, libro.autore, libro.casa_editrice, libro.get_prezzo_di_acquisto())
                for libro in other.lista_libro
            }

            return self_set == other_set
        return False

libro1 = Libro("A", "Autore1", "Editore1", 10)
libro2 = Libro("B", "Autore2", "Editore2", 20)
libro3 = Libro("C", "Autore3", "Editore3", 30)
libro4 = Libro("D", "Autore4", "Editore4", 40)

catalogo1 = Catalogo("C1", "Desc1")
catalogo2 = Catalogo("C2", "Desc2")

catalogo1.aggiungi_libro(libro1)
catalogo1.aggiungi_libro(libro2)

catalogo2.aggiungi_libro(libro1)
catalogo2.aggiungi_libro(libro2)
catalogo2.aggiungi_libro(libro4)

print("Catalogo1:")
for l in catalogo1.lista_libro:
    print(l.titolo)

print("\nCatalogo2:")
for l in catalogo2.lista_libro:
    print(l.titolo)

print("\nCatalogo1 == Catalogo2:", catalogo1 == catalogo2)