def calculate_interest(principal,rate,year,comp_year):
    result = principal*pow((1+rate/100/comp_year),year*comp_year)
    return result
principal = float(input("Enter the principal : "))
rate = float(input("Enter the rate : "))
year = int(input("Enter the number of years : "))
comp_year = int(input("Enter the number of times the interest \nis compounded per year : "))
result = calculate_interest(principal,rate,year,comp_year)
print("$%.2f invested at %.2f%% for %d years compounded %d times per year is\n$%.2f" %(principal,rate,year,
      comp_year,result))
