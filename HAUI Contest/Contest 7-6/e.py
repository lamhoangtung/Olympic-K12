n, k = list(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = sorted([a[i] - b[i] for i in range(n)])
ans = sum(b)

for i in range(n):
	if i < k or c[i] < 0:
            ans+=c[i]
print(ans)
