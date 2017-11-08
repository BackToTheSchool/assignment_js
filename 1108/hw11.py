euro = float(input("How many Euro are you exchanging?"))
euro_rate = float(input("What is the exchange rate ? "))
dollar_rate = 1114.8272
print(euro,"Euros at an exchange rate of",euro_rate,"is",round(euro*euro_rate/dollar_rate,3))
