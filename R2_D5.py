#The following 2 questions are of Codechef june cook-off 2021(Div-3)
#Question link--> https://www.codechef.com/COOK130C/problems/VISA
t=int(input())
for i in range(t):
    x1,x2,y1,y2,z1,z2=input().split()
    x1=int(x1)
    x2=int(x2)
    y1=int(y1)
    y2=int(y2)
    z1=int(z1)
    z2=int(z2)
    if(x2>=x1 and y2>=y1 and z2<=z1):
        print("YES")
    else:
        print("NO")


# Question link--> https://www.codechef.com/COOK130C/problems/BALLOON
t=int(input())
for i in range(t):
    n=int(input())
    l=input().split()
    check=['1','2','3','4','5','6','7']
    temp=7
    hmm=0
    for i in l:
        if i in check:
            temp-=1
            hmm+=1
            if(temp==0):
                print(hmm)
        else:
            hmm+=1
