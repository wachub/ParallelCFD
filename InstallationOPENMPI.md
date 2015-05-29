# Installation Procedure in Linux (ubuntu)

> This document covers only the basic details of installation in the Linux environment.

Follow the instructions of [this document](http://www.itp.phys.ethz.ch/education/hs12/programming_techniques/openmpi.pdf) very carefully.

Follow the procedures mentioned in the [1. How do I build Open MPI?](https://www.open-mpi.org/faq/?category=building) question with a slight modification.


>Instead of 
```sh
$ gunzip -c openmpi-1.8.5.tar.gz | tar xf -
$ cd openmpi-1.8.5
$ ./configure --prefix=/usr/local
<...lots of output...>
$ make all install
```

>add sudo before the last command..

```sh
$ gunzip -c openmpi-1.8.5.tar.gz | tar xf -
$ cd openmpi-1.8.5
$ ./configure --prefix=/usr/local
<...lots of output...>
$ sudo make all install
```
> This is done to take care of errors that may arise with permissions.

> Some great error debugging help available [in the openmp mailing list archives](https://www.open-mpi.org/community/lists/).
