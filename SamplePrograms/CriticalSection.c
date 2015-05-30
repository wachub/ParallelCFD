#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <math.h>

/* Mpi send receive program where the master process  broadcasts to all the other slave processes */
int main(argc,argv)
int argc;
char *argv[];
{

	int myid, numprocs;
	int tag,source,destination,count;
	int buffer;
	MPI_Status status;
	MPI_Request request;
 
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&myid);
	tag=1234;
	source=0;
	
	count=1;
	request=MPI_REQUEST_NULL;
	if(myid == source){
	buffer=5678;

	int i;
	for(i=0;i<numprocs;i++)
	{
	
		MPI_Isend(&buffer,count,MPI_INT,i,tag,MPI_COMM_WORLD,&request);
	}
	
}
if(myid == 1||myid==2||myid==3){
	MPI_Irecv(&buffer,count,MPI_INT,source,tag,MPI_COMM_WORLD,&request);
}

MPI_Wait(&request,&status);
if(myid == source){
	printf("processor %d  sent %d\n",myid,buffer);
}

if(myid !=0){
	printf("processor %d  got %d\n",myid,buffer);
	}

	printf("Here we are anyway\n");

	MPI_Finalize();


}


