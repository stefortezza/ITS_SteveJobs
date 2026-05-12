try:
    a = int(input("Inserisi un numero: "))
    b = 5/a
    print(b)
    #tutto 
except (ValueError, ZeroDivisionError) as e:
    print(f"Errore {e}, {type(e)}")
    print(f"Errore {str(e)}, {repr(e)}")
except:
    print("ERRORE GENERICO")
else: #SI ATTIVA SOLO SE IL TRY VA A BUON FINE
    print("Andato a buon fine!")
finally:
    print("Questo si attiva in ogni caso....")
