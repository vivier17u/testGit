all:
		@gcc part1.c -o part1

build:
		@ ./part1

clean:
		@rm -rf *~ *.o part1
