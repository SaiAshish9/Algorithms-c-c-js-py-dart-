a = [3, 5, 1, 3]

for i in range(len(a)-1):
    k = i
    for j in range(i,len(a)):
        if a[j] < a[k]:
            k = j
    a[i], a[k] = a[k], a[i]

print(a)
