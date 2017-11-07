people = int(input("How many people are there ? "))
pizzas = int(input("How many pizzas are there ? "))
pieces = int(input("How many pieces are in pizza ? "))
print(people,"people with",pizzas,"pizzas\nEach person gets",pizzas*pieces/people,"pieces of pizzas\nThere are",pizzas*pieces%people,"left over")