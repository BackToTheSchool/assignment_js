weigh = float(input("How weigh are you ?"))
gender = input("What is your gender ? ")
hour = int(input("When did you drink ? "))
drink = float(input("How much did you drink ?" ))
if gender == "male":
    result = (drink*5.14/weigh*0.73)-0.015*hour
elif gender == "female":
    result = (drink * 5.14/weigh*0.6)-0.015*hour
else :
    print("You entered gender wrong")
print("Your BAC is",round(result,3))
if result < 0.08 :
    print("You can drive")
else:
    print("You can't drive")