def solution(myString, pat):
    answer = 0
    myString = myString.upper()
    pat = pat.upper()
    if myString.find(pat) != -1 :
        answer = 1
    print(myString + ' ' + pat)
    return answer