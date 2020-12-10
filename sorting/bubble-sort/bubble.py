arr = [1,4,3,5]
for i in range(len(arr)):
	for j in range(len(arr) - i -1) :
		if arr[j]>arr[j+1]:
				arr[j],arr[j+1] = arr[j+1],arr[j]
print(arr)
# 0(1) O(n^2) O(n^2)