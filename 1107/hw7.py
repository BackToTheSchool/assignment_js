length = int(input("What is the length of the room in feet ? "))
width = int(input("What is teh width of the room in feet ? "))
meter = float(length*width*0.0929)
print("You entered dimensions of",length,"feet by",width,"feet \nThe area is",width*length,"sqaure feet\n",round(meter,3))