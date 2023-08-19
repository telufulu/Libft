#!/bin/zsh
make re -C ../ 
gcc -Wall -Werror -Wextra -fsanitize=address -g3 main.c srcs/part1.c srcs/part2.c srcs/bonus.c -I ../ -L .. -lft
#gcc -Wall -Werror -Wextra main.c srcs/part1.c srcs/part2.c srcs/bonus.c -I ../ -L .. -lft
./a.out $1
