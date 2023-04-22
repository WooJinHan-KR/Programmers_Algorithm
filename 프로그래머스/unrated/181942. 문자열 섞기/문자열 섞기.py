def solution(str1, str2):
    answer = ''
    for a in range(len(str1)) :
        answer += str1[a]
        answer += str2[a]
    return answer