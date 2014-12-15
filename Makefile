FLAGS = -Wall -Wextra -Werror -g
SRCS_ROOT = ./units

usage:
	@echo "usage:"
	@echo "    make u=ft_atoi start # start a timed session"
	@echo "    make u=ft_atoi test # test your code"
	@echo "    make u=ft_atoi edit # edit last opened file"
	@echo "    make u=ft_atoi view # view reference code"

run_test:
	@./a.out
	@echo "\x1b[32;01mSUCCESS\x1b[0m"
	
test:
	@if [ -f $(SRCS_ROOT)/${u}/test_exec.c ]; then make test_exec u=$(u); else make test_fn u=$(u) ; fi

t: test

test_fn:
	@gcc $(FLAGS) -I framework framework/framework.c $(SRCS_ROOT)/${u}/test.c sandbox/${u}.c
	@make run_test

test_exec:
	@gcc $(FLAGS) -I framework framework/framework.c $(SRCS_ROOT)/${u}/test_exec.c 
	@make run_test

start:
	@touch sandbox/$(u).c
	@cp sandbox/$(u).c sandbox/$(u).c.bak
	@echo "sandbox/$(u).c.bak"
	@cat sandbox/$(u).c
	@echo "------------------------------"
	@> sandbox/$(u).c
	@time vim sandbox/$(u).c 
	@make test u=$(u)

s: start

edit:
	@vim sandbox/$(u).c 

e: edit

view:
	@echo $(SRCS_ROOT)/${u}/${u}.c
	@cat $(SRCS_ROOT)/${u}/${u}.c

v: view
