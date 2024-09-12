#include<stdio.h>


int main(int argc, char* argv) {
	
	int ON = 0;

	char buf[4] = {'0', '0', '0', 0};

	printf("Please enter a THREE digit number\n");
	gets(buf);

	if (ON == 1) {
		printf("YOU SHOULD NOT BE ABLE TO RUN THIS\n");
	} else {
		printf("INTENDED THING TO HAPPEN\n");
	}


	return 0;
}
