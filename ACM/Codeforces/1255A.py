n=int(input())
while n!=0 :
    n-=1
    tstr=input()
    tstr=tstr.split(' ')
    a=int(tstr[0])
    b=int(tstr[1])
    a=abs(b-a)
    b=0
    if a/5 > 0:
        b+=a//5
        a=a%5
    if a/2 > 0:
        b += a // 2
        a = a % 2
    b+=a
    print(b)