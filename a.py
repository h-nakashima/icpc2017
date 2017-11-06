# sudo
def solver():
    n, m = map(int, input().split())
    if n == 0 and m ==0:
        return None
    a = [int(x) for x in input().split()]
    ans = None

    for i in range(n):
        for j in range(n):
            if i == j:
                continue
            tmp = a[i] + a[j]
            if tmp > m:
                continue
            if ans is None or tmp > ans:
                ans = tmp
    if ans is None:
        ans = "NONE"
    return ans

outputs = []
while True:
    ans = solver()
    if ans == None:
        break
    outputs.append(ans)
print('\n'.join(map(str,outputs)))
