C = []

for _ in range(0,3):
    row = list(map(int, input().split()))
    C.append(row)

a = [0,0,0]
b = [0,0,0]

a[0] = 0
for i in range(3):
    b[i] = C[0][i] - a[0]
for i in range(1,3):
    a[i] = C[i][0] - b[0]

ok = True

for i in range(3):
    for j in range(3):
        if a[i] + b[j] != C[i][j]:
            ok = False

if ok:
    print("Yes")
else:
    print("No")
