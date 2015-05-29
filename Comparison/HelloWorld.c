#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	int i;
	int k=9999;
	for(i=0;i<100000000;i++)
	{
		if(argc==2)
		if(atoi(argv[1])==1)
		{
			k=k<<4;
			k=k%9999;
		}
	}	
	return 0;
}
