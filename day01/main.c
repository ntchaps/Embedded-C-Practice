#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool is_bit_set(uint8_t value, uint8_t bit) {
	if (((value >> (bit - 1)) & 1) == 1) {
		return true;
	}

	else return false;
};
uint8_t set_bit(uint8_t value, uint8_t bit){
	value = (value | (1 << (bit - 1)));
	return value;
};
uint8_t clear_bit(uint8_t value, uint8_t bit);
uint8_t toggle_bit(uint8_t value, uint8_t bit);

int main(void){
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 1));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 2));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 3));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 4));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 5));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 6));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 7));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 8));

	printf("set_bit for 01001001: %d\n", set_bit(0b01001001, 2));
	printf("set_bit for 01001001: %d\n", set_bit(0b01001001, 3));
	printf("set_bit for 01001001: %d\n", set_bit(0b01001001, 5));

	return 0;
};
