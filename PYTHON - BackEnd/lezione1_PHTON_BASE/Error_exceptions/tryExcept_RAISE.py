# try:
#     a = int(input("Inserisi un numero: "))
#     b = 5/a
#     print(b)
#     #tutto 
# except ZeroDivisionError as e:
#     print("Non puoi dividere per zero!")
#     raise ZeroDivisionError("Te lo avevo detto che non puoi dividere per zero!")


age = int(input("Inserisci eta` utente"))

if age > 120 or age < 0:
    raise ValueError("Eta` non verosimile!")

