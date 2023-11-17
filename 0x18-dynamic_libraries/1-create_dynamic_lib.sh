#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -fPIC -shared *.c -o liball.so
