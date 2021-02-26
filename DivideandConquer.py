
'''
Given a mixed array of number and string representations of integers,
add up the string integers and subtract this from the total of the non-string integers.

Return as a number.
'''


def div_con(x):
    
    # Variable to hold the string total
    strtot = 0
    # Variable to hold the digit total
    digitot = 0

    # Iterate through the list
    for ch in x:
       
       # Check if the current element is of type  string
       if isinstance(ch, str):
           # Convert to integer and add to string total
        strtot += int(ch)
       # Else add to digit total
       else:
        digitot += ch

    # return the difference
    return digitot - strtot
    
