pwd = "123abc"

tentativi = 3
count = 0

while count < tentativi:
    count += 1
    a = input("Inserisci la password: ")
    a = a.strip().lower()

    if a == pwd:
        print("Login effettuato con successo")
        break
    else:
        if count != tentativi:
            print(f"Password non corretta. Tentativi rimasti: {tentativi - count}")
else:
    print("Numero di tentativi scaduti. SISTEMA BLOCCATO PER 30 MINUTI")
