#Write a python program to store first year percentage of students in array.
#Write function for sorting array of floating-point numbers in ascending order using 
#a) Selection Sort b) Bubble sort and display top five scores.


stud_list=[10,20,300,23,34,56,87]


def linear_search(l,key):
    for i in range (len(l)):
        if l[i]==key:
            return i
        
    return -1 
 
index=linear_search(stud_list,34)
if index==-1:
  print("Not found(Linear Search)")
else:
    print("Student present at",index,"(Linear Search)")
    
def sentinel_search(l,key):
    last = l[-1]
    l[-1] = key
    i = 0
    while l[i] != key:
        i+=1

    if i != len(l) - 1:
        return i
    if last == key:
        return len(l) - 1
    
    return -1


index = sentinel_search(stud_list, 300)
if index == -1:
    print("Student not present (Sentinel Search)")
else:
    print("Stuednt found at position",index,"(Sentinel Search)")




# Bubble Sort
Percentage = []
number = int(input("Enter the Total Number of Students:\n"))
for i in range(number):
    value = float(input("Enter the Percentage:\n "))
    Percentage.append(value)

print("Percentage before sortin",Percentage)

for i in range(number-1):
    for j in range(number-i-1):
        if (Percentage[j]>Percentage[j+1]):
            temp = Percentage[j]
            Percentage[j] = Percentage[j+1]
            Percentage[j+1] = temp

print("The Top five scores are after Bubble sort sort are:",Percentage)
minimum = len(Percentage)-6
maximum = len(Percentage)-1
index = 1
for i in range(maximum,minimum,-1):
    if i>=0:
        print(f"{index} Top Scorer:",Percentage[i],"\n")
        index+=1           

Percentage = []
number = int(input("Enter the Total Number of Students:\n"))
for i in range(number):
    value = float(input("Enter the Percentage:\n "))
    Percentage.append(value)

print("Percentage before sorting",Percentage)

for i in range(len(Percentage)-1):
    m_ind=i
    for j in range(i+1,len(Percentage)):
        if Percentage[j]<Percentage[m_ind]:
            m_ind = j
    if Percentage[i] != Percentage[m_ind]:
        Percentage[i],Percentage[m_ind] = Percentage[m_ind],Percentage[i] 

print("The Top five scores are after Selection sort are:",Percentage)
minimum = len(Percentage)-6
maximum = len(Percentage)-1
index = 1
for i in range(maximum,minimum,-1):
    if i>=0:
        print(f"{index} Top Scorer:",Percentage[i],"\n")
        index+=1
