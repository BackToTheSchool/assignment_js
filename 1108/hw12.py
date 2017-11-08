principal = float(input("Enter the principal : "))
rate = float(input("Enter the interest of the rate : "))
year = int(input("Enter the number of years : "))
print("After",year,"years at",rate,"%, the 1nvestment will be $",round(principal*(1+(year*rate/100)),3))