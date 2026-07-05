def max_dot_product(a, b):
    a.sort()
    b.sort()

    answer = 0

    for i in range(len(a)):
        answer += a[i] * b[i]

    return answer


n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

print(max_dot_product(a, b))
