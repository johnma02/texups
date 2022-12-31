import random
import math

t1=0
t2=0
t3=0
for i in range(1,1000000):
    yes = 0
    for j in range(0, 20):
        box = random.randint(1,10)
        if(box==1):
            yes+=1
    if(yes == 1):
        t1+=1
    if(yes >= 1):
        t2+=1
    if(yes == 0):
        t3+=1
print("a")
print(t1/1000000)
print("b")
print(t2/1000000)
print("comp")
print(1-(t3/1000000))

