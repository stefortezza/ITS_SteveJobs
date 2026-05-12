class Playlist:
    description = "Class used to represent playlists"
    
    def __init__(self, name, pl_descr, songs=[]):
        self.name=name
        self.pl_descr = pl_descr
        self.songs = songs
    
    def __add__(self, other):
        if isinstance(other, Playlist):
            nuovo_nome = self.name + "+" + other.name
            nuova_pldescr = f"Playlist creata automaticmente unendo {self.name} e {other.name}"
            nuove_songs = self.songs + other.songs
            return Playlist(nuovo_nome, nuova_pldescr, nuove_songs)
        else:
            print("Non posso sommare gli elementi richiesti")
            return
    def __str__(self):
        a= f'''Titolo della playlist: {self.name}\n
        {self.pl_descr} \n
        questa playlist contiene esttamente {len(self.songs)} canzoni! \n
        {self.songs}
        '''
        return a

pl1=Playlist("estate 24", "le canzoni di quando ho conosciuto Morena", ["maracaibo", "danza kuduro"])
pl2=Playlist("estate 23", "le canzoni di quando ho conosciuto Stefano", ["volare", "macarena", "buoni o cattivi"])
pl3 = pl1 + pl2

print(pl1.name)
a = input("Inserisci attributo a cui sei interessato")
if hasattr(pl1, a):
    print(getattr(pl1, a, "Attributo non trovato"))
else:
    b = input("Attrbituo non trovato, si prega di inserire adesso il valore che si vuole associare")
    setattr (pl1, a, b)
print(getattr(pl1,a))