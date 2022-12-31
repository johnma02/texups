import random
import math
success = 0
for i in range(0, 1000):
    six = 0
    for j in range(0, 1001):
        roll = random.randint(1,6)
        if roll == 6:
            six+=1
    if six < 170:
        success+=1


print(success/1000)
actual =0 
for i in range(1,170):
    actual+=math.comb(1000,i)*((1/6)**i)*(5/6)**(1000-i)
print(actual)
