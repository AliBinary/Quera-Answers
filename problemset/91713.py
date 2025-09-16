t = int(input())


def condition1(s):
    for i in range(0, 10):
        if (s.count(str(i)) >= 4):
            return True
    return False


def condition2(s):
    x = 1
    for i in range(1, len(s)):
        if (s[i] == s[i-1]):
            x += 1
            if (x >= 3):
                return True
        else:
            x = 1
    return False


def condition3(s):
    n = len(s)
    for i in range(n // 2):
        if (s[i] == s[n-i-1]):
            continue
        return False
    return True


def main():
    k = input()
    if (condition1(k) or condition2(k) or condition3(k)):
        print('Ronde!')
    else:
        print('Rond Nist')


while (t):
    main()
    t -= 1
