def solution(num_list):
    answer = 1
    if len(num_list) >= 11 :
        answer = sum(num_list)
    else :
        for j in num_list :
            answer = answer * j
    return answer