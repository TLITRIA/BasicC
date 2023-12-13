count:demoFunc.o calculateFunc.o myString.o
	gcc demoFunc.o calculateFunc.o myString.o -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

calculateFunc.o:calculateFunc.c
	gcc -c calculateFunc.c -o calculateFunc.o

myString.o:myString.c
	gcc -c myString.c -o myString.o

clean:
	@rm -rf *.o count