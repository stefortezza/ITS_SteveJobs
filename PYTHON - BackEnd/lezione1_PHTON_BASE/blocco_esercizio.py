# print("----ESERCOZIO 1----")
# a = int(input("Inserisci un nunero "))
# b = int(input("Inserisci un secondo nunero "))

# if( a < b ):
#     print("Il primo numero e` maggiore del secondo numero")
# elif( a > b ):
#     print("Il secondo numero e` maggiore del primo numero")
# else:
#     print("Sono uguali")

# print("----ESERCOZIO 2----")
# x = int(input("Inserisci un nunero intero "))
# y = float(input("Inserisci un secondo nunero (decimale)"))

# if(x == y):
#     print("OK. Sono uguali")
# else:
#     print("DIVERSI")

# print("----ESERCOZIO 3----")
# str_1 = input("Inserisci una parola ")
# str_2 = input("Inserisci una seconda parola ")

# if(str_1 > str_2):
#     print("La prima parola viene prima")
# else:
#     print("La seconda parola viene prima")

# print("----ESERCOZIO 4----")
# str_1 = input("Inserisci una parola ").upper()
# str_2 = input("Inserisci una seconda parola ").upper()

# if (str_1 == str_2):
#     print("Equal")
# else:
#     print("Different")

# print("----ESERCOZIO 5----")

# age = int(input("Inserisci la tua eta`"))
# has_id = False

# if(age >= 18):
#     print("Access granted")
#     has_id = True
#     print(has_id)
# else:
#     print("Access denied")
#     print(has_id)

# print("----ESERCOZIO 6----")
# age = int(input("Inserisci la tua eta` "))

# if(age < 14):
#     print("Child")
# elif(age >= 14 and age <= 17):
#     print("Teen")
# else:
#     print("sii cunsumatooo")

# print("----ESERCOZIO 7----")
# username = input("Inserisci il tuo username ")
# password = input("Inserisci la tua password ")

# if(username == "admin" and password != None):
#     print("Login OK")
# else:
#     print("Login failed")

# print("----ESERCOZIO 8----")
# a = True
# b = False
# c = False

# risultato = a and b or not c
# print(risultato)

# a = True
# b = False
# c = True

# risultato = a and (b or not c)
# print(risultato)   

# print("----ESERCOZIO 9----")
# voto = float(input("Inserisci il voto da 0 a 100 "))

# if (voto>=0 and voto <= 100):
#     if(voto < 60):
#         print("Fail")
#     elif(voto < 80):
#         print("Pass")
#     else:
#         print("Excellent")
# else:
#     print("Inserisci un numero compreso tra 0 e 100")

# print("----ESERCOZIO 10----")
# number = int(input("Inserisci un numero intero: "))

# if( number == 0 ):
#     print("")
# elif(number >=0):
#         print("Positive")
# else:
#         print("Negative")

# print("----ESERCIZIO 11----")
# num = int(input("Inserisci un numero: "))
# ow = "even" if num % 2 == 0 else "odd"
# print(ow)

# print("----ESERCIZIO 12----")
# logged_in = False
# login = "Active" if (logged_in) == True else "Inactive"
# print(login)

# print("----ESERCIZIO 13----")
# command = input("Inserisci una schelta: ")

# match command:
#     case "start":
#         print("start")
#     case "stop":
#         print("stop")
#     case "exit":
#         print("exit")
#     case _:
#         print("Invalid Choise")

# print("----ESERCIZIO 14----")
# day = input("Inserisci un valore: ")


# match day:
#     case "Monday" | "Tuesday" | "Wednesday" | "Thursday":
#         print("WeekDay")
#     case "Friday" | "Saturday" | "Sunday":
#         print("WeekEnd")

# print("----ESERCIZIO 15----")
# a = 0
# while a <= 10:
#     print(a)
#     a += 1
#     if(a==0):
#         break

print("----ESERCIZIO 16----")
psw = "python"

psw_new = input
while psw == psw:
    print("Access granted")
