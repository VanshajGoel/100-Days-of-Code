#Question 1-->https://www.hackerrank.com/challenges/sparse-arrays/problem

import math
import os
import random
import re
import sys

def matchingStrings(strings, queries):
    result=[]
    i=0
    for q in queries:
        for s in strings:
            if(q==s):
                i+=1
        result.append(i)
        i=0
    return result            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    strings_count = int(input().strip())

    strings = []

    for _ in range(strings_count):
        strings_item = input()
        strings.append(strings_item)

    queries_count = int(input().strip())

    queries = []

    for _ in range(queries_count):
        queries_item = input()
        queries.append(queries_item)

    res = matchingStrings(strings, queries)

    fptr.write('\n'.join(map(str, res)))
    fptr.write('\n')

    fptr.close()

#Question 1-->https://www.hackerrank.com/challenges/array-left-rotation/problem

import math
import os
import random
import re
import sys

def rotateLeft(d, arr):
    j=0
    for i in arr:
        j+=1
    ans=[0]*j    
    for i in range(j):  
        ans[i-d]=arr[i]
    return ans      
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = rotateLeft(d, arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()