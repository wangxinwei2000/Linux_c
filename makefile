test: test1.c
	gcc -g test1.c -o test

gdb:  test
	gdb test

clean:
	rm test
