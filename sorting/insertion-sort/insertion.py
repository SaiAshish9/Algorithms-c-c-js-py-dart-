a = [1,5,4,3]
length = len(a)
for i in range(length):
	j=i-1
	x=a[i]
	while j>-1 and a[j]>x:
		a[j+1]=a[j]
		j=j-1
	a[j+1]=x
print(a)
# 0(n) O(n^2) O(n^2)


