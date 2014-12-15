FLAGS = -Wall -Wextra -Werror -g
SRCS_ROOT = ./units

ALL:
	@gcc $(FLAGS) $(SRCS_ROOT)/${test}/main.c sandbox/${test}.c
	@./a.out
	@echo "\x1b[32;01mSUCCESS\x1b[0m"
