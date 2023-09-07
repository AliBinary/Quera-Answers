'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.09.2023 19:20:52
'''

n = int(input())
s = input()
k = int(input())

for test in range(k):
    score = 0
    for question in range(n):
        if (s[question] == 'A'):
            ans = "#OOO"
        elif (s[question] == 'B'):
            ans = "O#OO"
        elif (s[question] == 'C'):
            ans = "OO#O"
        else:
            ans = "OOO#"

        entry = input()
        if (entry == ans):
            score += 3
        elif (entry != "OOOO"):
            score -= 1
    print(score)
