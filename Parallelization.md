
> We will just do a basic comparison on OPENMP and OPENMPI

The most intuitive idea of parallelization would be to split the code and run it parallely on different computational units. The CPU is the most obvious computational unit. Howevere over the past 50 years, the types of computational units, contained in a computer have increased greatly. Along with that, the methods and technologies to parallelize code have also also increased.

In a very basic way a single modern CPU contains multiple cores (a i7 processror for example has 4 cores). Each core can effectively parallelize some range of code. Now again sometimes work may need to be split amond differnt CPU's themselves (suppose there are 5 old pentium 3 computers and you want to get the maximum performance by making a cluster out of them). In such cases we need a different way to define a 'range of code' since this time the parallelized code needs to run on a different system altogether.

The first concept of importance to parallelization is the difference between a [thread and a process][1].

The different threads inside a process have to run on a single CPU and the multiple cores inside it. Multiple processes can run in different CPUs, and also on multiple cores inside a single processor.

Hence the most basic way to parallelize would be to split a single threaded process into a multiple threaded one and then run the different threads parallely on different cores inside a single node of the CPU. Each method again has its own [advantages and disadvantages][2].

Here is where the different technologies used for parallelization come into the picture. At a very basic level we have OPENMP and OPENMPI. OPENMP allows for multiple threaded processes to utilize the different cores inside a single CPU whereas OPENMPI allows for multiple processes to run parallely (both on different cores and different CPUs).



[1]:http://stackoverflow.com/questions/200469/what-is-the-difference-between-a-process-and-a-thread
[2]:http://blogs.datalogics.com/2013/09/25/threads-vs-processes-for-program-parallelization/
