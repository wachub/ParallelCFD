
gcc HelloWorld.c

echo "The time it takes for a normal c program to run a single process iterate a 10^8 times \n"

time ./a.out

mpicc HelloWorldParallel.c

echo "The time it takes for a normal OPENMPI program to run 4 processes each with a simple iteration of around 10^8 times \n"

time mpirun -np 4 ./a.out

