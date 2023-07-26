num = int(input('Enter a numer : '))
flag=0
for i in range(2,(num//2)+1):
   if num%i==0:
      flag=1
      break
if flag==0:
   print(num, "is a prime number  !")
else:
   print(num, 'is not prime number')
