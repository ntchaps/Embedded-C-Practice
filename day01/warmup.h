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
uint8_t clear_bit(uint8_t value, uint8_t bit){
	value = value & ~(1 << (bit - 1));
	return value;
};
uint8_t toggle_bit(uint8_t value, uint8_t bit) {
	if(is_bit_set(value, bit)){
		value = clear_bit(value, bit);
		return value; 
	}

	else{
		value = set_bit(value, bit);
		return value;
	};
	
};
