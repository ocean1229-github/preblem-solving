#include<stdio.h>
#define MAXNUM 5
void mille2km(int[MAXNUM]);

void main()
{
	float miles[MAXNUM];
	/* store into the miles array */
	miles2km(miles);
}

void mile2km(float local_array[])
{
	int i;
	for (i = 1; i < MAXNUM; i = i + 1)
		printf(¡° % f¡±, local_array[i] * 1.6093);
}