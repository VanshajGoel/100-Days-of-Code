#Code chef August Long Challenge 2021-AUG21
#Question 1-->https://www.codechef.com/AUG21C/problems/OLYRANK
t=int(input())
for i in range(t):
    g1,s1,b1,g2,s2,b2=input().split()
    g1=int(g1)
    s1=int(s1)
    b1=int(b1)
    g2=int(g2)
    s2=int(s2)
    b2=int(b2)
    if((g1+s1+b1)>(g2+b2+s2)):
        print(1)
    else:
        print(2)   