# https://www.hackerrank.com/challenges/capitalize/problem


#!/bin/python3


def solve(s):

    for line in s.split():      
        s = s.replace(line, line.capitalize())

    return s


s = input()
result = solve(s)

print(result)


""" HackerRank Format

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()
    result = solve(s)

    fptr.write(result + '\n')
    fptr.close()

"""
