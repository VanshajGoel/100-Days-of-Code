#Code chef June Lunchtime 2021-LTIME97C
#Question 1-->https://www.codechef.com/LTIME97C/problems/CHFRICH
t=int(input())
for i in range(t):
    a,b,x=input().split()
    a=int(a)
    b=int(b)
    x=int(x)
    ans=(b-a)/x
    ans=int(ans)
    print(ans)
#Question 1-->https://www.codechef.com/LTIME97C/problems/FALSNUM
t=int(input())
for i in range(t):
    a=input()
    if(a[0]=='1'):
        ans=a[0]+'0'+a[1:]
    else:
        ans="1"+a[0:]
    print(ans)        