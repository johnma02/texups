import math
import matplotlib.pyplot as plt

prob = []
cdf = [0]
for i in range(0, 11):
    prob.append(math.comb(10, i)*(1/3)**i*(2/3)**(10-i))
    cdf.append(math.comb(10, i)*(1/3)**i*(2/3)**(10-i) + cdf[i])
plt.plot(prob)
plt.plot(cdf)
plt.savefig("binomdist")
print(prob)
