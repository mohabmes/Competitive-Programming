def solution(A):
    A = set(sorted(A))
    maxnum = max(A) + 1
    assoc = [False] * maxnum

    for x in A:
        if x > 0:
            assoc[x] = True
    if assoc.count(False) == 1:
        return maxnum
    for i in range(1, len(assoc)):
        if assoc[i] == False:
            return i
    return 1
