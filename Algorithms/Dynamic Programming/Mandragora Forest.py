#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the mandragora function below.
def mandragora(H):
    suma=0
    for x in H:
        suma+=x
    
    H.sort()
    S=1
    P=suma
    var=0
    for x in H:
        S+=1
        suma-=x
        var=suma*S
        if var>P:
            P=var
    return P

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        H = list(map(int, input().rstrip().split()))

        result = mandragora(H)

        fptr.write(str(result) + '\n')

    fptr.close()

