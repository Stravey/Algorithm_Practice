# 本质就是将 BG 变为 GB
n, t = map(int, input().split())
s = input()
for i in range(t):
    s = s.replace("BG", "GB")
print(s, end = "")
