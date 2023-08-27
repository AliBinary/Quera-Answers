'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 27.08.2023 09:09:11
'''

nums = []
s = 0
p = 1
for i in range(4):
    nums.append(int(input()))
    s += nums[i]
    p *= nums[i]

print("Sum : {:.6f}".format(s))
print("Average : {:.6f}".format(s/4))
print("Product : {:.6f}".format(p))
print("MAX : {:.6f}".format(max(nums)))
print("MIN : {:.6f}".format(min(nums)))
