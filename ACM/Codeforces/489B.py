b=int(input())
bstr=input()
bstr=bstr.split(' ')
for i in range(b):
    bstr.append(int(bstr[0]))
    bstr.pop(0)
bstr.sort()

g=int(input())
gstr=input()
gstr=gstr.split(' ')
for i in range(g):
    gstr.append(int(gstr[0]))
    gstr.pop(0)
gstr.sort()

ans =0

for i in range(b):
    for j in range(g):
        if abs(bstr[i]-gstr[j]) <= 1:
            ans+=1
            gstr[j]=1001
            break
print(ans)