# Pyramid
```
pyramid = []
height = 5

for i in range(height):
  num_spaces = height - i - 1
  num_stars = 2 * i + 1

  level = ' ' * num_spaces + '*' * num_stars + ' ' * num_spaces
  pyramid.append(level)

print('\n'.join(pyramid))
```

```
n=6
for i in range(n):
   print(" " * ((n - i)+1 //2), end='')
   for j in range(i):
      print("*", end=' ')  
   print()
```   

```
ip = "aabcccccaaa"
res = []
letter = ip[0]
count = 0

for i in ip:
    if i == letter:
        count += 1
    else:
        res.append(letter + str(count))
        letter = i
        count = 1

res.append(letter + str(count))  

compressed_string = ''.join(res)
print(compressed_string) 
```
   
