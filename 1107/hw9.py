width = int(input("Enter width of roof : "))
length = int(input("Enter length of roof : "))
paint = int(width*length/9)
if width*length%9 != 0 :
    paint = paint+1
print("You need",paint,"liters of paint to cover",width*length,"square meters")