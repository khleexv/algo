for _ in range(int(input())):
    a, b = map(int, input().split())
    if a < b:
        a, b = b, a
    if a % b != 0:
        print(-1)
    else:


