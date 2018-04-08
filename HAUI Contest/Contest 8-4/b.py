n, r, x = map(int, input().split())
diem, tien = [], []
for _ in range(n):
    a, b = map(int, input().split())
    diem.append(a)
    tien.append(b)
sum = sum(diem)
diemcan = n * x
ans = 0
while sum < diemcan:
    k = sorted(range(n), key=tien.__getitem__)
    for i in k:
        a, b = diem[i], tien[i]
        temp = min(diemcan - sum, r - a)
        ans += b * temp
        sum += temp
print(ans)
