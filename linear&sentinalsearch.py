#Write a python program to store roll numbers of student in array who attended training program in random order. 
#Write function for searching whether particular student attended training program or not, using Linear search and Sentinel search.


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

