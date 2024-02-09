'''
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 15:58:04
'''


def words_check(text):
    Words = text.split()
    Dic = {}
    for word in Words:
        x = ""
        for i in range(len(word)):
            if (word[i].isalpha()):
                x += word[i]
        x = x.capitalize()
        if (len(x) > len(word)/2):
            if (x in Dic):
                Dic[x] += 1
            else:
                Dic[x] = 1

    return Dic
