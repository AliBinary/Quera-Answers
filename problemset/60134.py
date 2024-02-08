'''
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 12:02:55
'''


def fruits(output):
    ans = {}
    for fruit in output:
        if (fruit['shape'] == 'sphere' and
           abs(fruit['mass'] - 450) <= 150 and
           abs(fruit['volume'] - 300) <= 200):
            temp = fruit['name']
            print(temp)
            if ans.get(temp) is None:
                ans[temp] = 1
            else:
                ans[temp] += 1
    return ans
