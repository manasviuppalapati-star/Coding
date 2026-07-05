def min_refills(distance, tank, stops):
    stops = [0] + stops + [distance]

    num_refills = 0
    current = 0

    while current < len(stops) - 1:
        last = current

        while (current < len(stops) - 1 and
               stops[current + 1] - stops[last] <= tank):
            current += 1

        if current == last:
            return -1

        if current < len(stops) - 1:
            num_refills += 1

    return num_refills


distance = int(input())
tank = int(input())
n = int(input())
stops = list(map(int, input().split()))

print(min_refills(distance, tank, stops))
