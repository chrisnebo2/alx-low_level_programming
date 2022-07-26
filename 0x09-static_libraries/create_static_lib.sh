#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic *.c
ar cr liball.a *.o

