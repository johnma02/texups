import random

k = {}
p = .10
runsum = 0
def flip():
    return 1 if random.random() <= .10 else 0
for i in range(0, 1000000):
    k[i] = 0
for i in range(0, 1000000):
    h = False
    t = False
    trials=0
    while not h or not t:
        coin = flip()
        if coin == 1:
            h = True
        else:
            t = True
        trials+=1;
    k[trials]+=1
    runsum += trials
for i in range(2, 15):
    print(k[i]/1000000)
print("assumed solution")
for k in range(2,15):
    print(((p**k)/p)*(1-p) + (((1-p)**k)/(1-p))*p)
print(runsum / 1000000)

print(1/(1-p) + 1/p)
print(1/p + 1/(1-p) -1)


expect = 0
print("sim")
for k in range(2, 10000):
    expect+=k*((p**(k-1))*(1-p)+((1-p)**(k-1))*p)
print(expect)
    
