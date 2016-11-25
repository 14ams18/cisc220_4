#Rule 1
mystring.o : mystring.c mystring.h
  gcc -Wall -c cal.c
  
#Rule 2
main.o: main.c
  gcc -Wall -c main.c
  
#Rule 3
mystring: main.o mystring.o
  gcc -Wall -o mystring main.o mystring.o
