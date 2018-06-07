n = int(input())
a = []
a.append(1)
a.append(2)
ans = 1
while a[ans] < n:
    a.append(a[ans] + a[ans - 1])
    ans += 1
if a[ans] == n:
    print(ans)
else:
    print(ans - 1)
