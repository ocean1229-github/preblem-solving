#include<stdio.h>
#define MAXNUM 1000
int findMax(int[MAXNUM]);

void main()
{
	int numList[MAXNUM];
	for (int i = 0; i < MAXNUM; i++)
	{
		numList[i] = i;
	}


	int newmax = findMax(numList);
	printf("%d", newmax);
}
int findMax(int local_array[])
{
	int i, max = local_array[0];
	for (i = 1; i < MAXNUM; i = i + 1) {
		if (max < local_array[i])
		{
			max = local_array[i];
		}

	}
	return max;
}