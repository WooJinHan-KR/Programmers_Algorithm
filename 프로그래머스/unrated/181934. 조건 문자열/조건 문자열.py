def solution(ineq, eq, n, m):
    answer = 0
    strin = ineq + eq
    if strin == ">=" :
        answer = 1 if n>=m else 0
    elif strin == "<=" :
        answer = 1 if n<=m else 0
    elif strin == ">!" :
        answer = 1 if n>m else 0
    elif strin == "<!" :
        answer = 1 if n<m else 0
    return answer