def gen_fat(n, k):
    return n if n <= k else n * gen_fat(n - k, k)

for _ in range(int(input())):
    i = input()
    k = i.count('!')
    n = int(i[:-k])
    print(gen_fat(n, k))