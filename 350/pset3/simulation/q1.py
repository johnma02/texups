import random

success = 0
trials = 0
while trials < 1000000:
    flips =[]
    for i in range(0,3):
        flips.append(random.randint(0,1))
    tails = flips[0]+flips[2]
    if tails != 2:
        success+=1
    trials+=1
print(success/trials)
