dic = {
    'Tetrahedron': 4,
    'Cube': 6,
    'Octahedron': 8,
    'Dodecahedron': 12,
    'Icosahedron': 20
}
ans = 0
n = int(input())
while n != 0:
    text = input()
    ans += dic[text]
    n -= 1
print(ans)
