
t=int(input())
while t != 0:
    n = int(input())
    p = input()
    p = p.split(' ')
    ep=0
    op=0
    for i in range(n):
        if (int(p[i])%2==0):
            ep+=1
        else :
            op+=1
    m = int(input())
    q = input()
    q = q.split(' ')
    eq=0
    oq=0
    for i in range(m):
        if int(q[i]) % 2 == 0:
            eq += 1
        else:
            oq += 1
    print(op*oq+ep*eq)
    t-=1
