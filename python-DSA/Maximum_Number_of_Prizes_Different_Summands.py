def summands(n):
    result = []

    k = 1

    while n > 2 * k:
        result.append(k)
        n -= k
        k += 1

    result.append(n)

    return result


n = int(input())

ans = summands(n)

print(len(ans))
print(*ans)
