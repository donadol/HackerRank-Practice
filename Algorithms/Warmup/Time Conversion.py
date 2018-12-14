#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    time = list(s)
    h=(int(time[0])*10)+int(time[1])
    if time[8]=='A':
        if h==12: h=0
    elif time[8]=='P':
        if h==12: h=12
        else:
            h+=12
    h1=int(h%10)
    h=int(h/10)
    time[0]=str(h)
    time[1]=str(h1)
    time[8:]=''
    t=''.join(time)
    return t

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()

