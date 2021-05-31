#2 Codes of Code Chef Lunch time contest(Division-3) held on 31/6/21
#Contest ID- LTIME96
#Question 1-->https://www.codechef.com/LTIME96C/problems/HOOPS
#Problem Code: HOOPS
t=int(input())
for i in range(t):
    n=int(input())
    print(int(n/2+1))

#Question 2 -->https://www.codechef.com/LTIME96C/problems/TANDJ1
#Problem Code: TANDJ1
t=int(input())
for i in range(t):
    a,b,c,d,k=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    d=int(d)
    k=int(k)
    x=abs(a-c)
    y=abs(b-d)
    if(x+y==k):
        print("YES")
    elif((x+y)>k):
        print("NO")
    elif(abs(k-(x+y))%2==0):
        print("YES")
    else:
        print("NO")