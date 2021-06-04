#Codechef June Long Challenge 
#Question 1-->Summer Heat-->https://www.codechef.com/JUNE21C/problems/COCONUT
t=int(input())
for i in range(t):
    a,b,c,d=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    d=int(d)
    print(int(c/a+d/b))