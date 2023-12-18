#Write a python program to compute following computation on matrix: 
#a) Addition of two matrices 
#b) Subtraction of two matrices 
#c) Multiplication of two matrices 
#d) Transpose of a matrix


import numpy
a=numpy.array([[3,4],[4,3]])
b=numpy.array([[3,5],[6,7]])

# Addition of two matrices 
print("Addition is:     ")
print(numpy.add(a,b))

# Subtraction of two matrices 
print("Subtraction is:     ")
print(numpy.subtract(a,b))

# Multiplication of two matrices 
print("Multiplication is:     ")
print(numpy.dot(a,b))

# Transpose of a matrix
print("Transpose is:     ")
print(a.T)
