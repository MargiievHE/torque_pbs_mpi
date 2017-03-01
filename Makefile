#COMPILER=/opt/openmpi/bin/mpicc
COMPILER=/opt/mpich2/bin/mpicc

all:		mpi_test

mpi_test:	mpi_test.o
			$(COMPILER) obj/*.o -o bin/mpi_test
			
mpi_test.o:	src/mpi_test.c
			$(COMPILER) -c src/mpi_test.c -o obj/mpi_test.o
			
clean:	
			rm -rf obj/*.o bin/*.*
