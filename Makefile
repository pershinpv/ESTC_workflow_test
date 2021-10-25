testvect: main.o vect3d.o
	gcc -o testvect main.o vect3d.o

main.o: main.c
	gcc -c main.c

vect3d.o: vect3d.c
	gcc -c vect3d.c

clean:
	rm -f main.o vect3d.o testvect

.PHONY: clean
