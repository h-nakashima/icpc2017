# 最後に0が来たら終わる入力
# 1
# 10
# 100
# 35
# 0

p = []
while True:
    n = int(input())
    if n == 0:
        break
    p.append(n)

ans = max(p)

print(ans)
