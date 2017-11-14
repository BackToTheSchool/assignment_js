import math
list_number = []
count = 0
result = 0
number = input("Enter the number : ")
while number != "done" :
    number = int(number)
    list_number.append(number)
    number = input("Enter the number : ")
print("Numbers :",list_number)
print("The average : ",sum(list_number,0)/len(list_number))
print("The minimum : ",min(list_number))
print("The maximum : ",max(list_number))
while count < len(list_number) :
    result = result + pow((list_number[count]-(sum(list_number,0)/len(list_number))),2)
    count = count + 1
result = result / (len(list_number)-1)
result = math.sqrt(result)
print("The standard deviation is",round(result,2))

