n=int(input())
str=input()
str=str.split(' ')
for i in range(n):
    str.append(int(str[0]))
    str.pop(0)

b=n
d=-1

p=0
q=101

for i in range(n):
    if str[i]>p:
        p=str[i]
        b=i
    if str[i]<=q and i>d:
        q=str[i]
        d=i
ans=b+n-1-d
if b>d:
    ans-=1
print(ans)