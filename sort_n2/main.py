import random


def insert_sort(a):
    """Сортировка вставками"""
    N = len(a)
    for top in range(1, N):
        k = top
        while k > 0 and a[k - 1] > a[k]:
            a[k], a[k - 1] = a[k - 1], a[k]
            k -= 1
    return a


def chose_sort(a):
    """Сортировка выбором"""
    N = len(a)
    for pos in range(0, N - 1):
        for k in range(pos + 1, N):
            if a[k] < a[pos]:
                a[k], a[pos] = a[pos], a[k]
    return a


def bubble_sort(a):
    """Сортировка пузырьком"""
    N = len(a)
    for bypass in range(1, N):
        for k in range(0, N - bypass):
            if a[k] > a[k + 1]:
                a[k], a[k + 1] = a[k + 1], a[k]
    return a


A = [random.randint(0, 2000) for i in range(0, 1000)]

print(insert_sort(A))
print(chose_sort(A))
print(bubble_sort(A))
