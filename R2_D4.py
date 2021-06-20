#Question link--> https://www.hackerrank.com/challenges/simple-text-editor/problem
l=[]
count=0
q=int(input())
a=''
for i in range (q):
   s=input()
   if(s[0]=='1'):
     l.append(a)
     a=a+s[2:]
   elif(s[0]=='2'):
     h=len(a)
     l.append(a)
     a=a[0:h-int(s[2:])]
   elif(s[0]=='3'):
     h=int(s[2:])
     print(a[h-1])
   else:
        h=len(l)
        a=l[h-1]
        l.pop()
