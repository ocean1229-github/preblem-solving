#include<stdio.h>

int main() {
	char message[81] = "Program";
	char names[10][20] = { "Hong Gil Dong" };

	puts(message);
	puts(names[0]);

	//names	
	//			[0]  [1]  [2]
	//		[0] Hong Gil Dong
	//		[1]
	//		[2]
	// names[0]은 홍길동 출력 
	// names[1]은 출력 안함
}

