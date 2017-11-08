choice = input("Press C to convert from F to C\nPress F to convert from C to F\nYour choice : ")
if choice == "C":
    temperture = float(input("Enter the temperture in F: "))
    print("The temperture in C is",round((temperture-32)*5/9,3))
elif choice == "F":
    temperture = float(input("Enter the temperture in C: "))
    print("The temperture in F is",round(temperture*9/5+32,3))
else:
    print("You entered key wrongly")

