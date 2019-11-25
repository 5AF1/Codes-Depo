n=int(input())
#d=[1,55,8,'g']
#print(d)
while n!=0 :
    n-=1
    p=int(input())
    tem=input()
    tem=tem.split(' ')
    for i in range(4*p):
        tem.append(int(tem[0]))
        tem.pop(0)
    tem.sort()
    flag=True
    ar=tem[0]*tem[4*p-1]
    for i in range(2*p):
        if tem[2*i+1]!=tem[2*i]:
            flag=False
            break
        if tem[i]*tem[4*p-1-i]!=ar:
            flag=False
            break
    if flag:
        print("YES")
    else:
        print("NO")

