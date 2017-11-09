def check_anagram(first_word, second_word):
    first_word=list(first_word)
    second_word=list(second_word)
    first_word.sort()
    second_word.sort()
    if first_word == second_word:
        print("They are anagram")
    else:
        print("They are not anagram")


first_word = input("Enter the first word : ")
second_word = input("Enter the first word : ")
check_anagram(first_word, second_word)
