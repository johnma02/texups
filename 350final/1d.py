import random

success = 0
for i in range(1,100000):

    chosen = {}
    for i in range(1, 11):
        chosen[i] = 0
    for j in range(0, 20):
        box = random.randint(1,10)
        chosen[box]+=1
    good = True
    for j in range(1, 11):
        if chosen[j]!=2:
            good = False
    print(chosen)
    if(good):
        success+=1

        print("hit!")
print(success/100000)
