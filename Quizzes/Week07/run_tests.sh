#!/bin/sh
./tester < in > out
diff out exp
