n = int(input())
l = sorted(list(map(int, input().split())))
s = sum(l)
ans = s
for i in l[:-1]:
    ans += s
    s -= i
print(ans)
