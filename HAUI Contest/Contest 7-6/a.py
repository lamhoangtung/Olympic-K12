n = int(input())
m = []
for i in range(n):
	x, y = map(int, input().split())
	m.append([x, y])
m = sorted(m)
ans = m[0][1]
for i in range(1, n):
	if m[i][1] >= ans:
		ans = m[i][1]
	else:
		ans = m[i][0]
print(ans)
