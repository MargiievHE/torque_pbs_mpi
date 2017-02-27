/*
 *	mpi_test for torque_pbs
 *	Copyright © 2017 MargiievHE (Marhiiev Heorhii)
 *	Author:		Georg (Heorhii Marhiiev)
 *	e-mail1:	margievGE@gmail.com
 *	e-mail2:	marghiievHE@gmail.com
 */
//----------------------------------------------------------------------
#include <mpi.h>
#include <stdio.h>
//----------------------------------------------------------------------
int main(int argc, char** argv) 
{
    int		MyRank;
	int		NumProcs;
	char	HostName[MPI_MAX_PROCESSOR_NAME];
	int 	NameLen;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &NumProcs);
	MPI_Comm_rank(MPI_COMM_WORLD, &MyRank); 
	MPI_Get_processor_name(HostName, &NameLen);
	printf("Hello world from processor %s, rank %d"
           " out of %d processors\n",HostName, MyRank, NumProcs);
	MPI_Finalize();
}
//----------------------------------------------------------------------
