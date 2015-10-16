BINDIR		=	./bin
INCDIR		=	./include
SRCDIR		=	./src

st: $(SRCDIR)/main.c
	gcc $(SRCDIR)/main.c $(SRCDIR)/stats_math.c $(SRCDIR)/stats_utils.c -o $(BINDIR)/st -Wall -I $(INCDIR)



