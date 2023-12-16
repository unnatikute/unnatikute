#(2)Write a Python program to store marks scored in subject “Fundamental of Data Structure” by N students in the class. 
#Write functions to compute following: 
#a) The average score of class 
#b) Highest score and lowest score of class 
#c) Count of students who were absent for the test
#d) Display mark with highest frequency.


net_amount = 0

while True:
    # input the transaction
    str = input("Enter transaction: ")

    # get the value type and amount to the list
    # seprated by space
    transaction = str.split(" ")

    # get the value of transaction type and amount
    # in the separated variables
    type = transaction[0]
    amount = int(transaction[1])

    if type == "D" or type == "d":
        net_amount += amount
    elif type == "W" or type == "w":
        net_amount -= amount
    else:
        pass

    # input choice
    str = input("want to continue (Y for yes) : ")
    if not (str[0] == "Y" or str[0] == "y"):
        # break the loop
        break

# print the net amount
print("Net amount: ", net_amount)
