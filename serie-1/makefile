CC_DBG=gcc -std=c11 -Wall -Wextra -fsanitize=address -fsanitize=leak -fsanitize=undefined -g
CC_REL=gcc -std=c11 -Wall -Wextra -O3

all: static

static: exo2 exo3 exo4

exo2: exo2.c
		$(CC_REL) $< -o $@ -static -lm
		strip -s $@

exo3: exo3.c
		$(CC_REL) $< -o $@ -static -lm
		strip -s $@

exo4: exo4.c
		$(CC_REL) $< -o $@ -static -lm
		strip -s $@

clean:
	rm -f exo2_* exo3_* exo4_* exo2 exo3 exo4

rebuild: clean exo2 exo3 exo4
