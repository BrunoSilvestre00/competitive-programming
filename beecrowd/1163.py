import math

PI = 3.14159
G = 9.80665

def baskhara(a, b, c):
    d = math.sqrt(b*b - 4*a*c)
    x1 = (-b + d) / (2*a)
    x2 = (-b - d) / (2*a)
    return x1, x2

def degree_to_rad(degree):
    return (PI * degree) / 180

def solve(h, alpha, v0):
    v0x = v0 * math.cos(alpha)
    v0y = v0 * math.sin(alpha)
    t = max(*baskhara(-G/2, v0y, h))
    return v0x * t
    
def main():
    h = float(input())
    p1, p2 = list(map(int, input().split()))
    n = int(input())
    for _ in range(n):
        a, v = list(map(float, input().split()))
        p = solve(h, degree_to_rad(a), v)
        print(f'{p:.5f} ->', 'DUCK' if p1 <= p <= p2 else 'NUCK')

while True:
    try: 
        main()
    except EOFError:
        break