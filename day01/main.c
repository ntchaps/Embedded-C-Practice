#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "warmup.h"

int main(void){
	// test is_bit_set
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 1));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 2));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 3));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 4));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 5));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 6));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 7));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 8));

	// test set_bit
	printf("set_bit for 01001001: %d\n", set_bit(0b01001001, 2));
	printf("set_bit for 01001001: %d\n", set_bit(0b01001001, 3));
	printf("set_bit for 01001001: %d\n", set_bit(0b01001001, 5));

	// test clear_bit
	printf("clear_bit for 01001001: %d\n", clear_bit(0b01001001, 1));
	printf("clear_bit for 01001001: %d\n", clear_bit(0b01001001, 4));
	printf("clear_bit for 01001001: %d\n", clear_bit(0b01001001, 7));

	// test toggle_bit
	printf("toggle_bit for 01001001: %d\n", toggle_bit(0b01001001, 1));
	printf("toggle_bit for 01001001: %d\n", toggle_bit(0b01001001, 2));
	printf("toggle_bit for 01001001: %d\n", toggle_bit(0b01001001, 3));
	return 0;
};
