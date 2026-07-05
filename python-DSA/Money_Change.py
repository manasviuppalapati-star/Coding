def change(money):
    count = 0

    for coin in [10, 5, 1]:
        count += money // coin
        money %= coin

    return count


money = int(input())
print(change(money))
