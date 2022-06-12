def twoNumberSum(array, targetSum):
    for i in range(0, len(array)):
        fn = array[i]
        for x in range(i+1, len(array)):
            sn = array[x]
            if fn + sn == targetSum:
             return [fn, sn]
    return []
