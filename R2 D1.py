#Question 1-->https://www.hackerrank.com/challenges/balanced-brackets/problem
#!/bin/python3

import math
import os
import random
import re
import sys

def isBalanced(s):
    l=[]
    for i in(s):
      if(len(l)==0):
          l.append(ord(i))
      else:
          if((l[-1]==ord(i)-2) or (l[-1]==ord(i)-1)):
              l.pop()
          else:
              l.append(ord(i))
    if(len(l)==0):
        return "YES"
    else:
        return "NO"          
                

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        s = input()

        result = isBalanced(s)

        fptr.write(result + '\n')

    fptr.close()