import random
import matplotlib.pyplot as plt
a = 0 
b = 0
aub = 0
trials = 1000000
nums = []
for i in range(trials):
    dice = random.randint(1,3)
    if(dice == 1):
        num = random.randint(1, 6)
        num2 = random.randint(1, 6)
    elif(dice == 2):
        num = random.randint(1, 4)
        num2 = random.randint(1, 4)
    else:
        num = random.randint(1, 12)
        num2 = random.randint(1, 12)
    nums.append(num)
    
    if(dice == 1 and num == 3 and num2 == 4):
        aub += 1

    if(num == 3 and num2 == 4):
        b+= 1
    if(dice == 1):
        a+= 1

print((aub/trials)/(b/trials))

     
plt.hist(nums, density=True, bins=12)
plt.show()

