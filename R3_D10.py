#The following 2 questions are of Codechef 25-July 2021 STARTERS-7(Div-3)
#Question link--> https://www.codechef.com/START7C/problems/CHSFORMT
t=int(input())
for i in range(t):
    a,b=input().split()
    a=int(a)
    b=int(b)
    if(a+b<3):
        print(1)
    elif(a+b>=3 and a+b<=10):
        print(2)
    elif(a+b>=11 and a+b<=60):
        print(3)
    else:
        print(4)


# Question link--> https://www.codechef.com/START7C/problems/FODCHAIN
import math
t=int(input())
for i in range(t):
    e,k=input().split()
    e=int(e)
    k=int(k)
    l=0
    while(e!=0):
        e=math.floor(e/k)
        l+=1
    print(l)    
