#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    my_dict = dict(a_dictionary)
    for K, V in my_dict.items():
        my_dict[K] = V * 2
    return my_dict
