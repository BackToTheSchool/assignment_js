enter = input("Enter the number seperated by space : ")
number = enter.split(' ')
answer = []
for i in range(0,len(number)):
    if(int(number[i]) % 2 == 0):
        answer.append(number[i])
if len(answer) == 0 :
    print("We don't have any even number")
else :
    print("The even numbers are",answer)
