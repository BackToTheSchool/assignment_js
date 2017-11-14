import random

list_name = []
name = input("Enter the name : ")
while name != '':
    list_name.append(name)
    name = input("Enter the name : ")
print("The winner is ..",random.choice(list_name))

