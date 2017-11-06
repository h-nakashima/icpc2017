# k.py
# x1 y1
# x2 y2
# ...
# xn yn
# 0 0


def solver():
    m, n = map(int, input().split())
    if m == 0 and n == 0:
        return None
    ans = -1

    ans = m / n

    return ans

outputs = []
while True:
    ans = solver()
    if ans == None:
        break
    outputs.append(ans)
print('\n'.join(map(str, outputs)))
