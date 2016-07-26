from random import shuffle
from sys import argv

if len(argv) != 2:
    print("You disappoint me")
    exit()

fin = open(argv[1], 'r')

x = [i.strip() for i in fin]
shuffle(x)
for i, q in zip(x[::2], x[1::2]):
    print("%s, %s" % (i, q))
if (len(x) % 2):
    print(x[-1])
