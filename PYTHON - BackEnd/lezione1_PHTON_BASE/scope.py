def saluto(nome):
    global b
    print(f"Ciao, {nome}")
    b = 343
    print(b)

b = 5    
saluto("Stefano")
print(b)

