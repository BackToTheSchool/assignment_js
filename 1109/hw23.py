answer = input("Question 1?")
if answer == "Y":
    answer = input("Question 2?")
    if answer == "Y":
        print("Question 3")
    elif answer == "N":
        print("Question 4")
elif answer == "N":
    answer = input("Question 5?")
    if answer == "Y":
        print("Question 6")
    elif answer == "N":
        answer = input("Question 7?")
        if answer == "Y":
            print("Question 8")
        elif answer == "N":
            answer = input("Quesetion 9?")
            if answer == "Y":
                answer = input("Question 10?")
                if answer == "Y":
                    print("Question 11")
                elif answer == "N":
                    print("Question 12")