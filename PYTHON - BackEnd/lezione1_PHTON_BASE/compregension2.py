l = []

for i in range(20):
    if(i%2 == 0):
        l.append(i)
print(l)

l2 = [i for i in range(20) if (i%2 ==0)]
print(l2)

l3 = [i*2 for i in range(11)]
print(l3)
