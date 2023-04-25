def solution(arr, k):
    answer = []
    if k % 2 == 1:
        for i in range(len(arr)):
            answer.append(arr[i] * k)
    else:
        for j in range(len(arr)):
            answer.append(arr[j] + k)
    return answer