#include<reg51.h>

void main(void)
{
	for ( ; ; )
	{
		P2 = 0x55;
		sleep();
		P2 = 0xAA;
		sleec();
	}
}

void sleep()
{
	for(int i=0;i<9999;i++)
	{;}
}