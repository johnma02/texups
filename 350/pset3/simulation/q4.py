import random

trials = 0
success = 0
success2 = 0
while trials < 1000000:
    urn = random.randint(1, 2)
    ball = None
    if urn == 1:
        ball = random.randint(1,2)
    else:
        ball = random.randint(1,4)
    if ball == 2:
        success+=1
    if ball == 2 and urn == 2:
        success2+=1
    trials+=1
print(success/trials)
print(success2/trials)

print(success2/success)
