This program compares the performance gains provided by a few parallel algorithms compared with their sequential ones. The shell script for the comparison is in the compare.sh file. You can also compile the programs individually and compare performance.

> sh compare.sh

to run the program.

This runs both the sequential and the parallel versions of the same program and compares the time advantage gained. 

Note that the time gain may not be strictly proportional to the number of processes since there is an extra overhead involved in creating
processes.

