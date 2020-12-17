    max.o : max.c

:insert
 :wq
:wq
:exit


        gcc -Wall -c max.c -o max.Omin.o : min.c 
		gcc -Wall -c min.c -o min.o

	variance.o : variance.c
		gcc -Wall -c variance.c -o variance.o

	test.o : test.c
		gcc -Wall -c test.c -o test.o

	My-binaire : max.o min.o variance.o test.o
		gcc -o My-binaire max.o min.o variance.o test.o

	Install : My-binaire
		install My-binaire /home/moussa

	clean : max.o min.o variance.o test.o
		rm *.o
