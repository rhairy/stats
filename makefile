all: st

st: main.c
	gcc main.c stats.c -o st -Wall



