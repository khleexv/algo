T = int(input())
for _ in range(T):
    n = int(input())
    x = list(map(int, input().split()))
    print((max(x) - min(x)) * 2)