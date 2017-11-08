def print_result(amount,state):
    if state == "WI":
        print("The subtotal is $%.2f\nThe tax is $%.2f\nThe total is $%.2f"
              %(amount,0.055*amount,amount*(1+0.055)))
    if state != "WI":
        print("The subtotal is $%.2f\nThe total is $%.2f" %(amount,amount*(1+0.055)))
amount = float(input("What is the order amount ? "))
state = input("What is the state ? ")
print_result(amount,state)

