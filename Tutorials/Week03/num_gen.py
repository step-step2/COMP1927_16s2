#!/bin/python

import sys
import random

if len(sys.argv) != 3:
    exit()

numV = int(sys.argv[1])
maxN = 10000000

if sys.argv[2] == "R":
    print("\n".join(map(str, random.sample(range(maxN), numV))))
elif sys.argv[2] == "TR":
    print("\n".join(str(random.randint(0, maxN)) for i in range(numV)))
elif sys.argv[2] == "A":
    print("\n".join(str(i) for i in range(numV)))
elif sys.argv[2] == "D":
    print("\n".join(str(i) for i in range(numV, 0, -1)))
