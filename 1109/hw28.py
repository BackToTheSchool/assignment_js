number = []
for i in range(0,5) :
    number.append(int(input("Enter the number : ")))
result = 0
for i in range(0,5) :
    result = result + number[i]
print("Result is",result)