#include <stdio.h>


int add_numbers(int a, int b) {
	int sum = a + b;
	return sum;
}
int main(int argc, char *argv[]) {

	int result;

	int (*myfunction_ptr) (int, int);

	myfunction_ptr = &add_numbers;

	result = myfunction_ptr(3, 7);

	printf("result is = %d\n", result);

	return 0;
}
