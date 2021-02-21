
'''
Given a non-empty array of integers, return the result of multiplying the values together in order
'''
def grow(arr):
    # Intialize variable to store the result
    mul = 1
    
    # Repeat for all variables in the list
    for elements in arr:
        mul*=elements
        
     # Return the list   
    return mul
    