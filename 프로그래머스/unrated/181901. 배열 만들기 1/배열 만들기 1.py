def solution(n, k):
    answer = []
    for a in range(int(n/k)) :
        answer.append((a+1)*k)
    return answer