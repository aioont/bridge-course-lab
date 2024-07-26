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

```
def first_unique_char(s):
    # Dictionary to store the count of each character
    d = {}

    # First pass to count the occurrences of each character
    for char in s:
        d[char] = d.get(char, 0) + 1

    # Second pass to find the first non-repeating character
    for i, char in enumerate(s):
        if d[char] == 1:
            return i

    return -1

# Example usage
s1 = "leetcode"
s2 = "loveleetcode"
s3 = "aabb"

print(first_unique_char(s1))  # Output: 0
print(first_unique_char(s2))  # Output: 2
print(first_unique_char(s3))  # Output: -1




from collections import Counter

class Solution:
    def firstUniqChar(self, s: str) -> int:
        # Create a counter object to count the frequency of each character in the string
        char_count = Counter(s)
      
        # Iterate over the characters in the string with their indices
        for index, char in enumerate(s):
            # If the character's count is 1, it is unique
            if char_count[char] == 1:
                # Return the current index as the first unique character's position
                return index
      
        # If no unique character is found, return -1
        return -1


```

```

242. Valid Anagram
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d1={}
        d2={}
        for char in s:
            d1[char] = d1.get(char, 0)+1
        print(d1)
        for char in t:
            d2[char] = d2.get(char, 0)+1 
        print(d2)

        if d1==d2: 
            return True
        else:
            return False
```


```
189. Rotate Array
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        k=k%n
        x=nums[-k:]
        y=nums[:-k]
        print(x)
        print(y)
        nums.clear()
        nums[:]=x+y

        print(nums)
```



```
232. Implement Queue using Stacks

class MyQueue:

    def __init__(self):
        self.a = []
        self.b = []

    def push(self, x: int) -> None:
        self.a.append(x)
        

    def pop(self) -> int:
        self.peek()
        return self.b.pop()

    def peek(self) -> int:
        if not self.b:
            while self.a:
                self.b.append(self.a.pop())
                
        return self.b[-1]

    def empty(self) -> bool:
        return not self.a and not self.b
```



```
215. Kth Largest Element in an Array

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort(reverse=True)
        return nums[k-1]
        
```
```
Stack

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.top = None
        self.size = 0

    def push(self, item):
        """Add an item to the top of the stack."""
        new_node = Node(item)
        new_node.next = self.top
        self.top = new_node
        self.size += 1

    def pop(self):
        """Remove and return the top item from the stack."""
        if self.is_empty():
            raise Exception("Stack is empty")
        item = self.top.data
        self.top = self.top.next
        self.size -= 1
        return item

    def peek(self):
        """Return the top item from the stack without removing it."""
        if self.is_empty():
            raise Exception("Stack is empty")
        return self.top.data

    def is_empty(self):
        """Check if the stack is empty."""
        return self.size == 0

    def get_size(self):
        """Return the number of items in the stack."""
        return self.size

    def __str__(self):
        """Return a string representation of the stack."""
        current = self.top
        items = []
        while current:
            items.append(str(current.data))
            current = current.next
        return " -> ".join(items)

# Example usage
if __name__ == "__main__":
    stack = Stack()

    # Push some items onto the stack
    stack.push(1)
    stack.push(2)
    stack.push(3)

    print("Stack:", stack)
    print("Size:", stack.get_size())
    print("Top item:", stack.peek())

    # Pop an item
    popped_item = stack.pop()
    print("Popped:", popped_item)
    print("Stack after pop:", stack)

    # Push more items
    stack.push(4)
    stack.push(5)

    print("Final stack:", stack)
```



```
Queue

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.front = None
        self.rear = None
        self.size = 0

    def enqueue(self, item):
        """Add an item to the rear of the queue."""
        new_node = Node(item)
        if self.is_empty():
            self.front = self.rear = new_node
        else:
            self.rear.next = new_node
            self.rear = new_node
        self.size += 1

    def dequeue(self):
        """Remove and return the front item from the queue."""
        if self.is_empty():
            raise Exception("Queue is empty")
        item = self.front.data
        self.front = self.front.next
        if self.front is None:
            self.rear = None
        self.size -= 1
        return item

    def peek(self):
        """Return the front item from the queue without removing it."""
        if self.is_empty():
            raise Exception("Queue is empty")
        return self.front.data

    def is_empty(self):
        """Check if the queue is empty."""
        return self.size == 0

    def get_size(self):
        """Return the number of items in the queue."""
        return self.size

    def __str__(self):
        """Return a string representation of the queue."""
        current = self.front
        items = []
        while current:
            items.append(str(current.data))
            current = current.next
        return " -> ".join(items)

# Example usage
if __name__ == "__main__":
    queue = Queue()

    # Enqueue some items
    queue.enqueue(1)
    queue.enqueue(2)
    queue.enqueue(3)

    print("Queue:", queue)
    print("Size:", queue.get_size())
    print("Front item:", queue.peek())

    # Dequeue an item
    dequeued_item = queue.dequeue()
    print("Dequeued:", dequeued_item)
    print("Queue after dequeue:", queue)

    # Enqueue more items
    queue.enqueue(4)
    queue.enqueue(5)

    print("Final queue:", queue)


```
