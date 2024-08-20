T = int(input())
for tc in range(1, T+1):
    arr = input()
    s = []
    cnt = 0
    razer = 0
    for i in range(len(arr)):
        if arr[i] == '(':
            s.append(i)
        elif s: # 닫는괄호 & s가 있다면
            if arr[i-1] == '(': # 레이저인 경우
                s.pop()
                cnt += len(s) # 여는 괄호 개수 카운팅
            else: # 막대기인 경우
                s.pop()
                cnt += 1
    print(f'#{tc} {cnt}')