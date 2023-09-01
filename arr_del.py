# Array insertion and deletion
n=int(input("Enter no. of elements : "))
arr1=[]
arr2=[]
for i in range(n):
   ele=int(input("Enter element : "))
   arr1.append(ele)
print("Orginal array 1 : ", arr1)
arr2=arr1.copy()
print("Orginal array 2 : ", arr2)

dele=int(input("Enter the element to delete : "))

for i in range(n):
   if arr1[i]==dele:
      print(dele," is deleted")
      j=i
      while j<n-1:
         arr1[j]=arr1[j+1]
         j=j+1
      arr1 = arr1[:n]
else:
   if i==n:
      print("Element not present")

print("arr1 after deletion : ", arr1)

print("="*100)

arr2=[x for x in arr2 if x!=dele]
if len(arr2) < n:
    print(dele, "is deleted")
else:
    print("Element not present")

print("arr2 after deletion: ", arr2)
