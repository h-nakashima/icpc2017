# sudo
def solver():
    S1 = input()
    if S1 == '.':
        return None
    S2 = input()
    if S1 == S2:
        return 'IDENTICAL'
    temp1 = S1.split('"')
    temp2 = S2.split('"')
    others1 = '"'.join(temp1[::2])
    others2 = '"'.join(temp2[::2])
    if others1 != others2:
        return 'DIFFERENT'
    consts1 = temp1[1::2]
    consts2 = temp2[1::2]

    miss = 0
    if len(consts1) != len(consts2):
        return 'DIFFERENT'
    for i in range(len(consts1)):
        if consts1[i] != consts2[i]:
            miss += 1
    if miss == 1:
        return 'CLOSE'
    else:
        return 'DIFFERENT'

outputs = []
while True:
    ans = solver()
    if ans == None:
        break
    outputs.append(ans)
print('\n'.join(map(str,outputs)))
