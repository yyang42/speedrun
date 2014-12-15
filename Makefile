FLAGS = -Wall -Wextra -Werror -g
SRCS_ROOT = ./units

usage:
	@echo "usage:"
	@echo "    start u=ft_atoi"
	@echo "    test u=ft_atoi"

test:
	@gcc $(FLAGS) $(SRCS_ROOT)/${u}/main.c sandbox/${u}.c
	@./a.out
	@echo "\x1b[32;01mSUCCESS\x1b[0m"

start:
	@cp sandbox/$(u).c sandbox/$(u).c.bak
	@> sandbox/$(u).c
	@time vim sandbox/$(u).c 
	@make test u=$(u)

view:
	@echo $(SRCS_ROOT)/${u}/${u}.c
	@cat $(SRCS_ROOT)/${u}/${u}.c

