cnt = 0
for i in range(1, 6):
    s = input()
    if ("MOLANA" in s or "HAFEZ" in s):
        print(i, end=" ")
        cnt += 1
if (cnt == 0):
    print("NOT FOUND!")
