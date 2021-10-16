#include "second.h"

void isPrime(int n){
	if(n % 2 == 0){
		printf("no\n");
	}else{;
	int i = 3;
		for(i; i < n/2; i = i + 2){
			if(n % i == 0){
				printf("no\n");
				return;
			}
		}
	printf("yes\n");
	}
}

int main(int argc, char** argv){
	if(argc == 1){
		printf("error\n");
		return 1;
	}
	int num;
	num = atoi(argv[1]);
	isPrime(num);
	return 0;
}
