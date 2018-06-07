r, g, b = map(int, input().split())
m = [r, g, b]
m.sort()
print(min(int((r + g + b) / 3), m[0] + m[1]))
