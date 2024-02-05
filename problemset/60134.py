def fruits(output):
    ans = {}
    for fruit in output:
        if (fruit['shape'] == 'sphere' and
           abs(fruit['mass'] - 450) <= 150 and
           abs(fruit['volume'] - 300) <= 200):
            temp = fruit['name']
            print(temp)
            if (ans.get(temp) == None):
                ans[temp] = 1
            else:
                ans[temp] += 1
    return ans
