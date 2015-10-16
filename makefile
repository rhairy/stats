BINDIR		=	./bin
INCDIR		=	./include
SRCDIR		=	./src

stats_test: $(SRCDIR)/stats_test.c
	gcc $(SRCDIR)/stats_math.c $(SRCDIR)/stats_test.c -o $(BINDIR)/stats_test -I $(INCDIR) -Wall
