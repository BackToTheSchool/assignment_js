import random
length = int(input("Enter the minimum length : "))
special = int(input("How many special characters ? "))
number = int(input("How many numbers ? "))
password = []
for i in range(0,special):
    password.append(chr(random.randrange(33,48)))
for i in range(0,number):
    password.append(str(random.randrange(0,10)))
if length > special + number:
    for i in range(0,length-special-number):
        password.append(chr(random.randrange(97,123)))
random.shuffle(password)
print("The password is", "".join(password))