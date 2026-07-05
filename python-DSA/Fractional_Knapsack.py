def fractional_knapsack(capacity, items):
    items.sort(key=lambda x: x[0] / x[1], reverse=True)

    value = 0

    for v, w in items:
        if capacity == 0:
            break

        take = min(capacity, w)

        value += take * (v / w)

        capacity -= take

    return value


n, capacity = map(int, input().split())

items = []

for _ in range(n):
    value, weight = map(int, input().split())
    items.append((value, weight))

print("{:.4f}".format(fractional_knapsack(capacity, items)))
