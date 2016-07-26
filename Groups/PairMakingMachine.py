from random import shuffle
fin = open('Tue16B')
x = [i.strip() for i in fin]
shuffle(x)

for i in range(0, len(x) - len(x) % 2 * 3, 2):
    print(x[i], x[i+1])

if len(x) % 2:
    print(x[-3], x[-2], x[-1])
