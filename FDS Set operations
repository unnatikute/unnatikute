# Write a Python program using functions to compute following: - 
#a) List of students who play both cricket and badminton
#b) List of students who play either cricket or badminton but not both
#c) Number of students who play neither cricket nor badminton
#d) Number of students who play cricket and football but not badminton.




A=[1,2,3,4,5,6,7]  #cricket
B=[2,3,6,7,9,10]    #badminton
C=[2,4,6,8,10,12]  #football

def intersection(l1,l2):
    res=[]
    for student in l1:
        if student in l2:
            res.append(student)

    return res 
def union(l1,l2):
    res=l2.copy()
    for student in l1:
        if not student in l2:
            res.append(student)

    return res
def diff(l1,l2):
    res=[]
    for student in l1:
        if not student in l2:
            res.append(student)

    return res

print(f"a={A}\n b-{B}\n c={C}")
print("a.", end=" ")       
print(intersection(A,B))       # List of students who play both cricket and badminton
print("b.", end=" ")       
print(diff(union(A,B),intersection(A,B)))      # List of students who play either cricket or badminton but not both
print("c.", end=" ")       
print(diff(diff(C,B),A))          #Number of students who play neither cricket nor badminton
print("d.", end=" ")       
print(diff(union(A,C),B))      #Number of students who play cricket and football but not badminton.  
