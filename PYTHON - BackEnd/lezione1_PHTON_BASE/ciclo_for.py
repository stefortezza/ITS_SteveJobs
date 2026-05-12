# fruits = ["fragola", "banana", "ananas", [1,2,3]]
 

#for el, che sta per elements, in list (nome della lista):
# for el in fruits:
#     print(el)
    

# for i in range(10):
#     print(i)

# print("QUI CICLA SUGLI INDICI")
# for i in range(len(fruits)):
#     print(f"elemento {i}: {fruits[i]}")

# print("QUI CICLA SUI VALORI ")
# for i, el in enumerate(fruits):
#     print(f"elemento {i+1}: {el}")


a = []
for i in range(100):
    a.append(i*3)
print(a)

l = [i*3 for i in range(100)]
print(l)