#include <stdio.h>
#include <string.h>

union val {
	int int_num;
	float fl_num;
	char str[20];
};

int main() {
	union val info;
	union val *ptr = NULL;
	ptr = &info;
	ptr -> int_num = 10;
	printf("info.int_num is %d", info.int_num);

	return 0;
}

/*
 * A pointer to a union points to the memory of the union.
 * In the e.g. above the pointer "*ptr" is pointing to the "info".
 * For access a union members through a pointer you need to use "->".
*/