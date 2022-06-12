def isValidSubsequence(array, sequence):
    pos = 0
    for i in array:
        if  pos == len(sequence):
            break
        if i == sequence[pos]:
            pos += 1

    return pos == len(sequence)
