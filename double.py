'''
Given an array of integers, return a new array with each value doubled.
'''


def double(a):
    # Using list comprehension to iterate over the passed list and store the value in doublear
    doublear = [i*2 for i in a]

    # Return the array
    return doublear
