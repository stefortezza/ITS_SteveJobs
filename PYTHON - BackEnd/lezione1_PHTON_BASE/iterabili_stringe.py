a = "Forza Catania"

c = "Catania" in a

print(a[2:5])

s = "   hello woRLd"

output = s.strip().capitalize()
print(output)

s = "123abc"
s2 = "123abc-?"
s3 = "123"
s4 = "CIAO A TUTTI"

print(s.isalnum(), s2.isalnum())
print(s.isdigit(), s3.isdigit())
print(s4.isupper())

s = "Ciao a tutti, sono Stefano"
s2 = s.split()
print(s2)
lw = [len(i) for i in s2]
print(lw)

ow = ["p" if len(i)%2==0 else "d" for i in s2 if i.isalpha()]