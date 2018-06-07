n = int(input())
a = list(map(int, input().split()))
ans = True
for i in range(n):
    while a[i] % 2 == 0:
        a[i] //= 2
    while a[i] % 3 == 0:
        a[i] //= 3
    if a[i] != a[0]:
        ans = False
        break
if ans is True:
    print("Yes")
else:
    print("No")
