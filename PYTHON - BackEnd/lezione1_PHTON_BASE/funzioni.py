def saluto(nome):
    print(f"Ciao, {nome}!")

print("Qui inizia il mio programma")

saluto("Stefano")
saluto("Fortezza")

saluto(3)

def salutoNuovo(nome):
    print(f"Ciao, {nome}!")

nome_utente = input("Inserisci il tuo nome: ")
salutoNuovo(nome_utente)

def moltiplicazione(a,b=5):
    return a*b

numero_1 = int(input("Inserisci il primo numero: "))
numero_2 = int(input("Inserisci il secondo numero: "))

risultato = moltiplicazione(numero_1, numero_2)
print(f"Il risultato della Moltiplicazione tra il primo numero: {numero_1} e il secondo numero: {numero_2}, da come risultato: {risultato}")

def team(**amesquatra):
    print("Ruoli previsti: ", amesquatra.keys())
    print("Ve la presento meglio: ")
    for role,name in amesquatra.items():
        print(role, name)

team(founder = "Stefano")
team(founder = "Stefano", Cofounder = "Fortezza")
team(founder = "Stefano", Cofounder = "Fortezza", ambassadro = "Mirko")