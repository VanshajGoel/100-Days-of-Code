#Question 1-->https://www.hackerrank.com/challenges/crush/problem
#!/bin/python3

import math
import os
import random
import re
import sys

def arrayManipulation(n, queries):
    # Write your code here
    arr=[0]*n
    q=0
    for i in queries:
        q+=1
    for i in range(q):
        for j in range(queries[i][0]-1,queries[i][1]):
                arr[j]=arr[j]+queries[i][2]
    return max(arr)            
        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()
