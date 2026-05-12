# #LE LISTE POSSONO ESSERE IMMUTABILI, PERTANTO SE ASSEGNO
# #UN NUOVO VALORE, AVVIENE LA TRASFORMAZIONE
# #IN UNA TUPLA INVECE QUESTO NON E` POSSIBILE`
# #PERTANTO SE IO SUCCESSIVAMENTE SE ASSEGNO UN NUOVO VALORE, DARA` ERRORE!!!!


# #ITERABILI = LISTA 

a = [1, 5.4, False, "Margherita", [1,2,3]]

print(a[4][0])

utenti = ["Stefano", 28], ["Andrea", 22], ["Gianmarco", 27]

utenti[0][0]= "Fortezza"

print(utenti[0][0], "di eta`", utenti[0][1])

#tuple (NON E` ITERABILE`, E' IMMUTABILE)

b = (1,2,"Stefano", False)

print(b[2])

c = ["Pippo", "Sara"]

d = c.copy()

d[0] = "Stefano"

print(c)
print(d)


frutti = ["Ananas", "Banana", "Cocco", "Datteri", "eNonMiVieneNiente"]
print("ARRAY FRUTTI COMPLETO")
print(frutti)
print("PRIMO CASO (1:3) DALLA POSIZIONE 1 FINO ALLA POSIZIONE 3 (QUESTO ESCLUSO)")
print(frutti[1:3]) 
print("SECONDO CASO (1:) DALLA POSIZIONE 1 FINO ALLA FINE")
print(frutti[1:]) 
print("TERZO CASO (:3) DAL INIZIO FINO ALLA POSIZIONE 3 (QUESTO ESCLUSO)")
print(frutti[:3]) 
print("QUARTO CASO (-1) VA COSI A RITROSO")
print(frutti[:-1])

# CONTROLLA SE QUESTO ELEMENTO E` DENTRO IL COMPONENTE ITERABILE (nel nostro caso abbiamo l'array Frutti)
z = "Ananas" in frutti
print(z)

# AGGIUNGE ALL'ULTIMA POSIZIONE L'ELEMENTO TRA () 
frutti.append("Fragola")
print(frutti)

# NEL CASO SOTTOSTANTE: ELIMINA L'ELEMENTO CON INDICE (4)
frutti.pop(4)
print(frutti)

# NEL CASO SOTTOSTANTE: ELIMUNA L'ULTIMO ELEMENTO
frutti.pop()
print(frutti)

#SVUOTA COMPLETAMENTE TUTTO L'ARRAY
print("Abbiamo svuotato tutto l'array(.clear): ")
frutti.clear()
print(frutti)

a = [1,2,3]

b = [19, 5,4 ]

c = a + b
print("NON ORDINATA:")
print(c)

c.sort()
print("ORDINATA:")
print(c)