#!/bin/zsh
make re -C ../ 
#gcc -Wall -Werror -Wextra -fsanitize=address -g3 main.c -I ../inc/ -L .. -lft
gcc -Wall -Werror -Wextra main.c part1.c part2.c bonus.c -I ../inc/ -L .. -lft
./a.out $1
