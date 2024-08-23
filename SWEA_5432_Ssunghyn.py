T = int(input())

# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    braket = input()

    braketStack = 0
    answer = 0
    idx = 0

    while idx < len(braket) - 1:
        if braket[idx] == '(' and braket[idx+1] == ')':  # 레이저가 있을 경우
            answer += braketStack  # 레이저 뒤로 나뉘는 막대기 수 추가
            idx = idx + 1
        elif braket[idx] == '(':  # 모든 쇠 막대기는 무조건 한 번씩 나뉨.
            answer += 1
            braketStack += 1  # 놓여있는 막대기 수 + 1
        elif braket[idx] == ')':
            braketStack -= 1  # 놓여있는 막대기 수 - 1

        if idx + braketStack == len(braket) - 1: # 남은 괄호가 이제 닫히는 괄호만 남은 경우
            break

        idx += 1

    print(f"#{test_case} {answer}")
