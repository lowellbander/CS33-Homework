all:
	gcc -m32 -g Homework1.c -o proj

clean:
	rm *~ proj *.out -f
