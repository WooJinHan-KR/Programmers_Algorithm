def solution(my_string, target):
    answer = 0
    pos = my_string.find(target)
    if pos != -1 :
        answer = 1
    return answer