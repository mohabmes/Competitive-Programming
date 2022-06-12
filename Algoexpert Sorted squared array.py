def sortedSquaredArray(array):
    ssa = [0] * len(array)

    for i in range(0, len(array)):
        tmp = array[i]
        ssa[i] = tmp * tmp

    ssa.sort()
    # Write your code here.
    return ssa
