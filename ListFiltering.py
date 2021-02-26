'''
In this method you will create a function that takes a list of non-negative integers and strings 
return a new list with the strings filtered out.
'''

def filter_list(l):
    
    # create a new list using list comprehension
    # Test for int using the isinstance of function
    new_list = [x for x in l if isinstance(x,int)]
    return new_list