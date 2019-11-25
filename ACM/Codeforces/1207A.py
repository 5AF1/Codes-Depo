n=int(input())
for i in range(n):
    count=0
    (b,p,f)=map(int,input().split())
    (h,c)=map(int,input().split())
    if c>h:
        h,c=c,h
        p,f=f,p
    b=int(b/2)
    if b>0:
        count=count+min(b,p)*h
        b=b-min(b,p)
    #print(b,p,h)
    if b>0:
        count=count+min(b,f)*c
        b=b-min(b,f)
    print(count)
    