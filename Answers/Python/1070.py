value = int(input())
repeats = 0
while True:
    if(value % 2 != 0):
        repeats += 1
        print(value)
    value += 1
    if(repeats == 6):
        break
