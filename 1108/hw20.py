price = float(input("What is the order amount ? "))
state = input("What state are you in ? ")
if state == "Wisconsin":
    state_tax = 0.055*price
    county = input("What county are you in ? ")
    if county == "Eau Claire":
        county_tax = 0.005*price
    elif county == "Dunn":
        county_tax = 0.004*price
    else:
        county_tax = 0.0
    print("The state tax is $%.2f\nThe county tax is $%.2f\nThe total tax is $%.2f\nThe total is $%.2f"
          %(state_tax,county_tax,state_tax+county_tax,price+state_tax+county_tax))
elif state == "Illinoy" :
    state_tax = 0.05*price
    print("The state tax is $%.2f\nThe total is $%.2f"
          % (state_tax, price + state_tax ))
else :
    state_tax = 0.045*price
    print("The total is $%.2f"% price+state_tax)