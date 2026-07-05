#Improving QuickSort
import random

def partition3(a, l, r):
    pivot = a[l]
    lt = l
    gt = r
    i = l

    while i <= gt:
        if a[i] < pivot:
            a[lt], a[i] = a[i], a[lt]
            lt += 1
            i += 1

        elif a[i] > pivot:
            a[i], a[gt] = a[gt], a[i]
            gt -= 1

        else:
            i += 1

    return lt, gt


def quicksort(a, l, r):
    if l >= r:
        return

    k = random.randint(l, r)
    a[l], a[k] = a[k], a[l]

    m1, m2 = partition3(a, l, r)

    quicksort(a, l, m1-1)
    quicksort(a, m2+1, r)


n = int(input())
a = list(map(int, input().split()))

quicksort(a, 0, n-1)

print(*a)
