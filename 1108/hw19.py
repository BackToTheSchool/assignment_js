weight = float(input("How weigh you are ? "))
tall = float(input("How tall are you?"))/100
result = weight/pow(tall,2)
print("Your BMI is",round(result,2))
if result < 18.5 :
    print("You are too skinny")
elif result > 25 :
    print("You are fat")
else :
    print("You are fine")