# [PASSED][PROBLEM] - https://judge.beecrowd.com/pt/problems/view/1022

_OP = {
    '+': lambda x: (x[0]*x[3] + x[1]*x[2], x[2]*x[3]),
    '-': lambda x: (x[0]*x[3] - x[1]*x[2], x[2]*x[3]),
    '*': lambda x: (x[0]*x[1], x[2]*x[3]),
    '/': lambda x: (x[0]*x[3], x[1]*x[2]),
}

def simplify(n, d):
    a, b = n, d
    while b:
        a, b = b, a % b
    return n // a, d // a

def solve(_input):
    n1, _, d1, op, n2, _, d2 = _input
    n, d = _OP[op]([int(x) for x in (n1, n2, d1, d2)])
    ns, ds = simplify(n, d)
    print(f'{n}/{d} = {ns}/{ds}')
    
if __name__ == '__main__':
    for _ in range(int(input())):
        solve(input().split(' '))
