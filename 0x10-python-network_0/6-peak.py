#!/usr/bin/python03
""" A function that finds a peak in a list of unsorted integers """
def find_peak(list_of_integers):
    if list_of_integers == []:
        return None
    else:
        max_value = list_of_integers[0]
        for item in list_of_integers:
            if item > max_value:
                max_value = item
        return (max_value)
