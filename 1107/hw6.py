import time
age = int(input("What is your current age ? "))
retireAge = int(input("What age do you want to retire ? "))
year = time.ctime()
year = int(year.split(' ')[5])
print ("You have",retireAge-age,"year left until you can retire.\nIt's",year,", So you can retire at",year+retireAge-age)