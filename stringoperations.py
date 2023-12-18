#(4)Write a Python program to compute following operations on String:
#a) To display word with the longest length
#b) To determines the frequency of occurrence of particular character in the string 
#c) To check whether given string is palindrome or not.




#To display word with longest length
print("To display word with the longest length.")
str1 = input("Enter the string: ")
list1 = str1.split()
m = 0
word = 0
print(list1)
for i in range (len(list1)):
    len(list1[i])
    if m < len(list1[i]):
        m = len(list1[i])
        word = i
print("The word with longest length: ",list1[word])

#To determines the frequency of occurrence of particular character in the string
print("To determine the frequency of occurrence of particular character in the string.")
x = input("Enter the string: ")
y = input("Enter the character: ")
a = 0
for i in range (len(x)):
    if y == x[i]:
        a = a + 1
print("The occurrence of '", y ,"' in '", x , "' is ", a)

#To check whether given string is palindrome or not
print("To check whether given string is palindrome or not.")
a = input("Enter sentence / string: ")
if a[0::] == a[::-1]:
    print("It is palindrome string / sentence.")
else:
    print("It is Not a Palindrome String / Sentence.")

#To display index of first appearance of the substring
print("To display index of first appearance of the substring.")
a = input("Enter the string: ")
b = input("Enter the substring: ")
sublen = len(b)
x = 0

y = 0
for i in range (len(a)):
    if b[y] == a[i]:
        flag = 1
        print(a[y], i, y)
        y = y + 1
        if y == sublen:
            x = i - (sublen - 1)
            break
    else:
        flag = 0
        y = 0
print("Substring index is: ", x)

#To count the occurrences of each word in a given string
print("To count the occurrences of each word in a given string.")
a = input("Enter the string: ")
counts = dict()
words = a.split()
for i in words:
    if i in counts:
        counts[i] += 1
    else:
        counts[i] = 1
print(counts)

