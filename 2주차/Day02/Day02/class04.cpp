#include<stdio.h>

//시험문제 출제

void strcopy(char str1[], char str2[])
{
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}

}

int main() {

	char str1[50] = "HongGilDong\0";
	char str2[50];

	strcopy(str1, str2);

	printf("%s\n", str2);

}