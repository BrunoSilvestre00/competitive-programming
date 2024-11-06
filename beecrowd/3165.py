# def is_prime(n):
#     for i in range(2, n//2 + 1):
#         if n%i == 0:
#             return False
#     return True

# def get_twin_primes():
#     primes = [i for i in range(1001) if (is_prime(i))]
#     twin_primes = []
#     for i in range(1, len(primes)):
#         if (primes[i] - primes[i-1]) <= 2:
#             twin_primes.append((primes[i-1], primes[i]))
#     return twin_primes, len(twin_primes)

# values get by the brute force algorithm above
TWIN_PRIMES = [(0, 1), (1, 2), (2, 3), (3, 5), (5, 7), (11, 13), (17, 19), (29, 31), (41, 43), (59, 61), (71, 73), (101, 103), (107, 109), (137, 139), (149, 151), (179, 181), (191, 193), (197, 199), (227, 229), (239, 241), (269, 271), (281, 283), (311, 313), (347, 349), (419, 421), (431, 433), (461, 463), (521, 523), (569, 571), (599, 601), (617, 619), (641, 643), (659, 661), (809, 811), (821, 823), (827, 829), (857, 859), (881, 883)]
LEN_TWIN_PRIMES = 38

def get_index(n):
    for i in range(LEN_TWIN_PRIMES):
        if TWIN_PRIMES[i][1] > n:
            return i - 1
    return LEN_TWIN_PRIMES - 1

num = int(input())
i = get_index(num)
print(*TWIN_PRIMES[i])
