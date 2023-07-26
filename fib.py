def fib(num):
   a=0
   b=1
   c=0
   for i in range(0, num+1):
      print("Fibonacci = ", a)
      c=a+b
      a=b
      b=c     


num=int(input('Enter a limit : '))
print("Fibonacci = ", fib(num))
