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
   
```
def longest_common_prefix(strs):
    if not strs:
        return ""
    
    # Sort the array of strings
    strs.sort()
    
    # Take the first and last string after sorting
    first = strs[0]
    last = strs[-1]
    
    # Find the common prefix between the first and last string
    common = []
    for i in range(min(len(first), len(last))):
        if first[i] != last[i]:
            break
        common.append(first[i])
    
    return "".join(common)

# Test the function
input_strs = ["flower", "flow", "flight"]
result = longest_common_prefix(input_strs)
print(f"Input: {input_strs}")
print(f"Output: '{result}'")

# Additional test cases
print(longest_common_prefix(["dog", "racecar", "car"]))  # Should return ""
print(longest_common_prefix(["interspecies", "interstellar", "interstate"]))  # Should return "inters"
print(longest_common_prefix(["throne", "throne"]))  # Should return "throne"
print(longest_common_prefix([]))  # Should return ""
print(longest_common_prefix(["a"]))  # Should return "a"
```

```
str1="42"
if str1.isdigit():
   print(int(str1))
   print(type(int(str1)))
```

class Solution:
    res=[]
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"

        result="1"
        for i in range(1,n):
            res = next_seq(res)

    def next_seq(s):
        res=[]
        count=1
        letter=s[0]

        for i in range(1, len(s)):
            if s[i]==letter:
                count+=1

            else:
                res.append(f"{count}{letter}")
                letter=s[i]
                count=1

        res.append(f"{count}{letter}")

        return "".join(res)
```



```
