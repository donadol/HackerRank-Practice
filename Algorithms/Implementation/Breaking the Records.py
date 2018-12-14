#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    min=scores[0]
    max=scores[0]
    cmin=0
    cmax=0
    for x in scores:
        if x < min:
            min=x
            cmin+=1
        if x>max:
            max=x
            cmax+=1
    return cmax, cmin
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    cmax,cmin = breakingRecords(scores)
    result= str(cmax)+' '+str(cmin)
    fptr.write(result)
    fptr.write('\n')

    fptr.close()

