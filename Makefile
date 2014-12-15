FLAGS = -Wall -Wextra -Werror -g
SRCS_ROOT = ./units

test:
	@gcc $(FLAGS) $(SRCS_ROOT)/${u}/main.c sandbox/${u}.c
	@./a.out
	@echo "\x1b[32;01mSUCCESS\x1b[0m"

start:
	> sandbox/$(u).c
	time vim sandbox/$(u).c
	make test u=$(u)
