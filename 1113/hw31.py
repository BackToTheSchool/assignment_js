pulse = int(input("Resting pulse: "))
age = int(input("Age : "))
print("Intesnsity   |Rate\n-------------|----")

for i in range(11,20):
    result = int((((220-age)-pulse)*i*5/100)+pulse)
    print(i*5,"%---------|",result," bpm")
