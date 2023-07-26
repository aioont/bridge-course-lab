l=int(input('Enter lower limit : '))
u=int(input('Enter upper limit : '))

for i in range(l, u+1):
   temp=i
   sum=0
   while temp>0:
      digit = temp%10
      sum=sum+digit**3
      temp=temp//10
     
      if(sum==i):
         print('Armstrong number : ', sum)
     
