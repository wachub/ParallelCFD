The most intuitive idea of parallelization would be to split the code and run it parallely on different computational units. The CPU is the most obvious computational unit. Howevere over the past 50 years, the types of computational units, contained in a computer have increased greatly. Along with that, the methods and technologies to parallelize code have also also increased.

The first concept of importance to parallelization is the difference between a [thread and a process][1].


The different threads inside a process have to run on a single CPU and the multiple cores inside it. Multiple processes can run in different CPUs, and also on multiple cores inside a single processor.

Hence the most basic way to parallelize would be to split a single threaded process into a multiple threaded one and then run the different threads parallely on different cores inside a single node of the CPU. 

[1]:http://stackoverflow.com/questions/200469/what-is-the-difference-between-a-process-and-a-thread
