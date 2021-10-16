#include "first.h"

void oddOrEven(int n){
	if(n % 2 == 0){
		printf("even\n");
	}
	if(n % 2 == 1){
		printf("odd\n");
	}
}

int main(int argc, char** argv){
	if(argc == 1){
		printf("error\n");
		return 1;
	}
	int number;
	number = atoi(argv[1]);
	oddOrEven(number);
	return 0;
}
