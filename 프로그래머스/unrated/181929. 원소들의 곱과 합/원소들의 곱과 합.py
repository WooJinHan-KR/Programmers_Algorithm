def solution(num_list):
    answer = 0
    sums = 0
    cals = 1
    for i in num_list :
        cals *= i
        sums += i
        
    if cals < sums*sums :
        answer = 1
    else :
        answer = 0
    return answer