def is_valid(number):
    try:
        float(number)
        if(float(number) != 0):
            return True
        else :
            return False

    except:
        return False


rate = input("What is rate of return?")
while not is_valid(rate):
    print("It's not a valid input\n")
    rate = input("What is rate of return?")
rate = float(rate)
print("It will be take",72/rate,"years to double")