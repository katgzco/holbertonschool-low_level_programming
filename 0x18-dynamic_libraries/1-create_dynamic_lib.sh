#!bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH

