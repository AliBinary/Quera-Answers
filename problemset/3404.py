'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.10.2023 17:01:22
'''

weight = float(input())
height = float(input())
BMI = weight / height / height

print("{:.2f}".format(BMI))
if (BMI < 18.5):
    print("Underweight")
elif (BMI < 25):
    print("Normal")
elif (BMI < 30):
    print("Overweight")
else:
    print("Obese")
