#!/bin/zsh
make re -C ../ 
#gcc -Wall -Werror -Wextra -fsanitize=address -g3 main.c -I ../inc/ -L .. -lft
gcc -Wall -Werror -Wextra main.c -I ../inc/ -L .. -lft
./a.out $1
