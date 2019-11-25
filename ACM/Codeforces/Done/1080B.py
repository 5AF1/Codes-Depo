n=int(input())

while n!=0:
    str=input()
    str = str.split(' ')
    f=int(str[0])
    t=int(str[1])
    f-=1
    if f % 2 == 0:
        f = f / 2
    else:
        f = -(f + 1) / 2
    if t%2==0:
        t=t/2
    else:
        t=-(t+1)/2
    print(int(t-f))
    n-=1