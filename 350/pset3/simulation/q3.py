import random


success = 0
success2 = 0
trials = 0
while trials < 100000:
    rolls = []
    rolls.append(random.randint(1,6))
    rolls.append(random.randint(1,6))

    if rolls[0]+rolls[1] == 8 and rolls[0]%2 == 0:
        success+=1

    trials+=1
    if rolls[0] + rolls[1] == 8:
        success2+=1
print(success/trials)
print(success2/trials)
print((success/trials) / (success2/trials))
