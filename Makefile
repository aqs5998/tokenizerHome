#Thanks to Gustavo Ortiz for helping me understand what all this means and how to add on or make a new one in the future.

all: tester

tester: tester.o tokenizer.o
	cc -o $@ $^

tokenizer.o: tokenizer.c tokenizer.h
	cc -c $(CFLAGS) tokenizer.c

tester.o: tester.c
	cc -c $(CFLAGS) tester.c

clean:
	rm -f *.o *.c~ tester

demo: tester
	./tester

tester2: tester2.o tokenizer.o history.o
	 cc -o $@ $^

tester2.o: tester.c
	cc -c $(CFLAGS) tester.c

history.o: history.c history.h
	cc -c $(CFLAGS) history.c

test: tester
	./tester
