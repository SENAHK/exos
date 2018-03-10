CC_DBG=gcc -std=c11 -Wall -Wextra -fsanitize=address -fsanitize=leak -fsanitize=undefined -g
CC_REL=gcc -std=c11 -Wall -Wextra -O3

all: static

static: exo1 exo2

exo1: exo1.c
			$(CC_REL) $< -o $@ -static -lm
			strip -s $@

exo2: exo2.c
			$(CC_REL) $< -o $@ -static -lm
			strip -s $@


clean: rm -f exo1_* exo1 exo2_* exo2

rebuild: clean exo1 exo2
