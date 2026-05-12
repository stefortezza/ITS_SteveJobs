file = "path/assets/testo.txt"
file_non_esistente = "assets/testoNonEsistente.txt"


# LETTURA FILE

with open(file, "r") as file_stream:

    content = file_stream.read()

    print("CONTENUTO FILE:")
    print(content)


# SCRITTURA IN APPEND
# "a" aggiunge testo senza cancellare quello esistente

with open(file, "a") as file_stream:

    nuovo_testo = '''

Questa nuova linea verra` inserita alla fine del file!

'''

    file_stream.write(nuovo_testo)

    print("\nNuovo testo aggiunto correttamente!")


# CREAZIONE FILE NON ESISTENTE
# Se non esiste, "w" lo crea automaticamente

with open(file_non_esistente, "w") as file_stream:

    testo = '''
Questo file non esisteva ed e` stato creato automaticamente!
'''

    file_stream.write(testo)

    print("\nFile non esistente creato!")