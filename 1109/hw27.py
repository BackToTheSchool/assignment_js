class Human:
    first_name = input("Enter your first name : ")
    second_name = input("Enter your second name : ")
    zip_code = input("Enter your zip code : ")
    id = input("Enter your Employee ID : ")
    def check_Human(self):
        a = True
        if self.first_name.__len__() < 2 or self.second_name.__len__() < 2:
            print("Check your first name or second name")
            a = False
        if not self.zip_code.isdigit() :
            print("Check your Zip code")
            a = False
        if self.id.__len__() < 4 :
            print("Check your ID")
        elif not (self.id[0:1].isalpha()) or (self.id[2] != '-') or not (self.id[3:self.id.__len__()].isdigit()) \
                or (self.id.__len__() != 7) :
            print("Check your ID")
            a = False
        if a :
            print("There are no errors found")



employee = Human()
employee.check_Human()