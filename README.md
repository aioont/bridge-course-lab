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
28. Find the Index of the First Occurrence in a String

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle=="" or needle not in haystack:
           return -1
        x = haystack.find(needle)
        return x
        
```


```
3. Longest Substring Without Repeating Characters
Solved
Medium
Topics
Companies
Hint
Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_set = set()  # Set to store characters in the current window
        left = 0  # Left pointer of the sliding window
        max_length = 0  # Variable to store the maximum length of substring found

        for right in range(len(s)):
            # If the character is already in the set, remove characters from the left
            while s[right] in char_set:
                char_set.remove(s[left])
                left += 1
            
            # Add the current character to the set
            char_set.add(s[right])
            
            # Update the maximum length
            max_length = max(max_length, right - left + 1)
        
        return max_length
```



```
3. Longest Substring Without Repeating Characters

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(set(s)) == 1 and len(s) == 1:
            return 1

        uni = []
        max_len = [0]
        max_len2 = 0

        for i in s:
            if i not in uni:
                uni.append(i)
                print(":", uni)
                max_len2 = len(uni)
                print("max_len2:", max_len2)
            else:
                max_len.append(len(uni))
                print("max_len:", max_len)

                # Reset the `uni` list to exclude the first occurrence of the duplicate character
                uni = uni[uni.index(i) + 1:]
                uni.append(i)
                print("uni reset:", uni)

            max_len.append(len(uni))

        # Determine the maximum length of the unique substrings
        x = max(max_len) if max(max_len) > max_len2 else max_len2

        return x
```
