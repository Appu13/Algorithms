'''
Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this  y isn't considered a vowel.
'''



def disemvowel(string):
    # Declare a tuple of vowels
    vowels = ('a', 'e', 'i', 'o', 'u')

    # Iterate through the string
    for a in string.lower():
        # Check if the alphabet is part of the vowel
        if a in vowels:
            # Replace the alphabet
           string = string.replace(a, "")
        
    return string

print(disemvowel("This website is for losers LOL!"))