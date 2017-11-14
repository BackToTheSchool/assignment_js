import random

level = int(input("Input the level : "))
if level == 1 :
    answer = int(random.randrange(1,11))
    guess = int(input("What is your guess? "))
    while answer != guess :
        if(answer < guess ):
            guess = int(input("That's too high\nWhat is your guess? "))
        elif(answer > guess):
            guess = int(input("That's too low\nWhat is your guess? "))
elif level == 2 :
        answer = int(random.randrange(1, 101))
        guess = int(input("What is your guess? "))
        while answer != guess:
            if (answer < guess):
                guess = int(input("That's too high\nWhat is your guess? "))
            elif (answer > guess):
                guess = int(input("That's too low\nWhat is your guess? "))
elif level == 3 :
        answer = int(random.randrange(1, 1001))
        guess = int(input("What is your guess? "))
        while answer != guess:
            if (answer < guess):
                guess = int(input("That's too high\nWhat is your guess? "))
            elif (answer > guess):
                guess = int(input("That's too low\nWhat is your guess? "))
if answer == guess:
    print("You are correct")
