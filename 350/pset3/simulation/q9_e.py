import random
success=0
for i in range(0, 1000000):

    sent = ["SOME", "DOGS", "YELLOW"]

    word = random.randint(0, 2)

    letter = random.randint(0, len(sent[word])-1)

    if sent[word][letter] == 'E':
        success+=1
print(success/1000000)
