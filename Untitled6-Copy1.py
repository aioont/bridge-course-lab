#!/usr/bin/env python
# coding: utf-8

# In[6]:


r1=int(input("Enter no. of row of matrix 1: "))
c1=int(input("Enter no. of col of matrix 1: "))
mat1=[]
for i in range(r1):
   a=[]
   for j in range(c1):
      v=int(input("Enter element  : "))
      a.append(v)
   mat1.append(a)

r2=int(input("Enter no. of row of matrix 2 : "))
c2=int(input("Enter no. of col of matrix 2 : "))
mat2=[]
for i in range(r2):
   a=[]
   for j in range(c2): 
      v=int(input("Enter element  : "))
      a.append(v)
   mat2.append(a)

if(r1==r2 and c1==c2):
    mat3=[]
    for i in range(r1):
        a=[]
        for j in range(c1):
            v=mat1[i][j]+mat2[i][j]
            a.append(v)
        mat3.append(a)
        
    for i in range(r1):
        for j in range(c1):
            print(mat3[i][j], end=" ")
        print()
else:
    print("Number of rows and column of matrix must be same")
        


# In[21]:


dict1={"Aadhil": 1, "Aathira": 2,  "Abhinand": 3}
print(dict1)
a=dict1["Aadhil"]
print("+++++++++ a ========", a)
dict1.get("Aathira")


# In[34]:


dict1["Aathira"]="Momo"
print(dict1)
for i in dict1:
    print(i)
for i in dict1:
    print(dict[i])
    
len(dict1)

dict1["age"]=18
print(dict1)

del dict1['age']
print(dict1)


# Matrix multiplication

# In[50]:


r1=int(input("Enter no. of row of matrix 1: "))
c1=int(input("Enter no. of col of matrix 1: "))
print("Enter elements to first matrix : ")
matrix1=[[int(input()) for i in range(r1)] for j in range(c1)]

r2=int(input("Enter no. of row of matrix 2: "))
c2=int(input("Enter no. of col of matrix 2: "))
print("Enter elements to first matrix : ")
matrix2=[[int(input()) for i in range(r1)] for j in range(c1)]

mul=[[0 for i in range(r1)] for j in range(c1)]

if r1==c2:
    for i in range(r1):
        for j in range(c1):
            mul[i][j]=0
            for k in range(c1):
                mul[i][j]=mul[i][j]+matrix1[i][k]*matrix2[k][j]
    for i in range(r1):
        for j in range(c1):
            print(mul[i][j], end=" ")
        print()

else:
    print("Matrix mul not possible")
    
    
    
                


# In[70]:


r=int(input("Enter number of  rows : "))
c=int(input("Enter number of  cols : "))
mat=[[int(input("Enter element : ")) for i in range(r)] for j in range(c)]
print(mat)

transpose_mat = [[mat[j][i] for j in range(c)] for i in range(r)]


print("Transpose of matrix : ")
for i in range(r):
    for j in range(c):
        print(transpose_mat[i][j], end=" ")
    print()


# In[76]:


tup1=(1,2,3,4,5)
print(tup1)
tup2=("a",1,"b",2)
print(tup2[2])
tup3=(8)*10
print(tup3)
tup4=('8')*10
print(tup4)
len(tup4)
t2=


# In[ ]:





# In[ ]:




