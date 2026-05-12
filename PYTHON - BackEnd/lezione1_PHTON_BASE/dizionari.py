a = ["SF", 27, "M"]

# print(a[0], a[1], a[2])

d = {
    "key": "value",
    "nome": "Stefano",
    "age": 27,
    "gender": "Uomo"
}

# print(type(d))

# print(d)

# print(f"Nome: {d['nome']}, di anni: {d['age']}, di genere: {d['gander']}")


# print(d.get("age", "chiave non esistente"))

# a = input("dimmi cosa vuoi sapere di questo tipo ")
# print(d.get(a,"chiave non esistente" ))

# if not "tifo" in d:
#     d["tifo"] = "Forza Catania"

# print(d)


# gander = d.pop("gender")
#len(d)
# d.popitem()
# d.clear()
# print(len(d))
# print(sorted(d))

# print(d)

for key in d.keys():
    print(key, d["key"])