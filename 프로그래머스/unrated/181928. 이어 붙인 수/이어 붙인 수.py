def solution(num_list):
    answer = 0
    jak = ""
    hol = ""
    for i in num_list :
        if i%2==0 :
            jak += str(i)
        else :
            hol += str(i)
            
    answer = int(jak) + int(hol)
    return answer