m=int(input("Enter no of rows of mat1 : "))
n=int(input("Enter no of cols of mat1 : "))
mat1=[]
for i in range(0,m):
   row=[]
   for j in range(0,n):
      ele=int(input("Enter element : "))
      row.append(ele)
   mat1.append(row)

m2=int(input("Enter no of rows of mat2 : "))
n2=int(input("Enter no of cols of mat2 : "))
mat2=[]
for i in range(0,m2):
   row=[]
   for j in range(0,n2):
      ele=int(input("Enter element : "))
      row.append(ele)
   mat2.append(row)

print(mat1)
print(mat2)

if m==m2 and n==n2:
   sum_mat=[]
   for i in range(0,m):
      sum_row=[]
      for j in range(0,n):
         sum=mat1[i][j]+mat2[i][j]
         sum_row.append(sum)
      sum_mat.append(sum_row)


else:
        print("Both matrix row and column must be same ")



for i in range(m):
   for j in range(n):
       print(sum_mat[i][j], end=" ")
   print()


output = [[sum_mat[i][j] for j in range(n)] for i in range(m)]
for m in output:
    print(*m)
