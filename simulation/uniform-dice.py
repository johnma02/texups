import random
import matplotlib.pyplot as plt

success = 0
graph = []

for i in range(0, 1000000):
    roll = random.randint(1,6)
    num = random.uniform(0, roll)
    if(num < 4 and num > 3):
        success += 1
    graph.append(num)
print(success/1000000)
plt.hist(graph, density=True, bins=30)
plt.savefig("uniform-dice-real-numbers")
