import hw34

john = hw34.employee("John Smith")
jackie = hw34.employee("Jackie Jackson")
chris = hw34.employee("Chris Jones")
amanda = hw34.employee("Amanda Cullen")
jeremy = hw34.employee("Jeremy Goodwin")
john._set__next(jackie)
john._set__next(chris)
john._set__next(amanda)
john._set__next(jeremy)
print("There are 5 employees")
john.show()
name = input("Enter the name you want to delete : ")
john._delete_(name)
john.show()
