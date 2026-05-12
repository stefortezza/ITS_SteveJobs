if 35 < 5:
    print("Sei dentro l'IF")
else:
    print("Sei dentro l'ELSE")
    

# TRUTHY e FALSY VALUES

a = input("Cosa stai pensando?")

if a:
    print(f"Hai inserito il seguente messagio: \n {a}")
else:
    print("Messaggio non valido")
    

lista_spesa = []

if lista_spesa:
    print(f"Le cose da comprare sono: {lista_spesa}")
else:
    print("La lista della spesa e` vuota, niente da visualizzare")
    
age = int(input("Inserisci la tua eta`"))

is_ad = False if age < 18 else True
print(is_ad)

age = int(input("Inserisci l'eta"))
if age < 18:
    print("Sei minorenne")
elif age > 18 and age < 35:
    print("Membro junior")
elif age > 35 and age < 50:
    print("Membro mid")
else:
    print("Membro sunior")

a = 0
while a < 5:
    print(a)
    a += 1
    if(a==3):
        break
else:
    print("Ciclo finito")
    

while a < 11:
    a+=1
    if(a%2 != 0):
        continue
    print(a)
else:
    print("Ciclo finito")