def compare(a,b,c):
    if a < b:
        a = b
    if a < c:
        a = c
    return a

first_number = int(input("Enter the first number : "))
second_number = int(input("Enter the second number : "))
third_number = int(input("Enter the third number : "))
print("The largest number is",compare(first_number,second_number,third_number))