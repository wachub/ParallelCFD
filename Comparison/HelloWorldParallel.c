#include <mpi.h>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    MPI_Init(NULL, NULL);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);

	int i;
	int k=23432;

	for(i=0;i<100000000;i++)
	{
		if(argc==2)
		if(atoi(argv[1])==1)
		{
			k=k<<4;
			k=k%9999;
		}
	}	

    // Finalize the MPI environment.
    MPI_Finalize();
}

