password = input("Enter the password : ")
if password.__len__() < 8 :
    if password.isdigit() :
        print("This is very weak password")
    elif password.isalpha():
        print("This is weak password")
else :
    if password.isalnum() and  not password.isdigit() and not password.isalpha() :
        print("This is strong password")
    elif not password.isalnum() :
        print("This is very strong password")
