quantity = int(input())

for i in range(quantity):
    word = input()
    word_list = word.split()
    size = 0
    result = ""

    if(len(word_list[0]) > len(word_list[1])):
        size = len(word_list[0])
        little_size = len(word_list[0]) - len(word_list[1])

        for i in range(little_size):
            word_list[1] += " "

    elif(len(word_list[0]) < len(word_list[1])):
        size = len(word_list[1])

        little_size = len(word_list[1]) - len(word_list[0])

        for i in range(little_size):
            word_list[0] += " " 
    else:
        size = len(word_list[1])

    for i in range(size):
        result += word_list[0][i] + word_list[1][i]
        
    print(result.replace(" ", ""))