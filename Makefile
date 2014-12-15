FLAGS = -Wall -Wextra -Werror -g
SRCS_ROOT = ./units

usage:
	@echo "usage:"
	@echo "    start u=ft_atoi"
	@echo "    test u=ft_atoi"

run_test:
	@./a.out
	@echo "\x1b[32;01mSUCCESS\x1b[0m"
	
test:
	@if [ -f $(SRCS_ROOT)/${u}/test_exec.c ]; then make test_exec u=$(u); else make test_fn $(u) ; fi

test_fn:
	@gcc $(FLAGS) -I framework framework/framework.c $(SRCS_ROOT)/${u}/test.c sandbox/${u}.c
	@make run_test

test_exec:
	@gcc $(FLAGS) -I framework framework/framework.c $(SRCS_ROOT)/${u}/test_exec.c 
	@make run_test

start:
	@touch sandbox/$(u).c
	@cp sandbox/$(u).c sandbox/$(u).c.bak
	@> sandbox/$(u).c
	@time vim sandbox/$(u).c 
	@make test u=$(u)

view:
	@echo $(SRCS_ROOT)/${u}/${u}.c
	@cat $(SRCS_ROOT)/${u}/${u}.c

