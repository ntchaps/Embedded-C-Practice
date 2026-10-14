#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

#include "warmup.h"
#include "fake_hardware_reg.h"
#include "binary_print.h"

extern volatile uint8_t CTRL_REG;

int main(void){
	// test is_bit_set
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 0));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 1));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 2));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 3));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 4));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 5));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 6));
	printf("is_bit_set for 01001001: %d\n", is_bit_set(0b01001001, 7));

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

	// Fake hardware register
	CTRL_REG = 0b11111111;

	printf("CTRL_REG	dec: %d	  bit: ", CTRL_REG); 
	binary_print(CTRL_REG); 
	printf("\n");
	printf("\n");


	CTRL_REG = 0b11111111;
	printf("set_mode 2: %d\n", CTRL_REG);
	set_mode(2);
	printf("get_mode: %d\n", get_mode());
	binary_print(CTRL_REG); 
	printf("\n");
	printf("\n");


	CTRL_REG = 0b11111111;
	printf("set_mode 3: %d\n", CTRL_REG);
	set_mode(3);
	printf("get_mode: %d\n", get_mode());
	binary_print(CTRL_REG); 
	printf("\n");
	printf("\n");


	CTRL_REG = 0b11111111;
	printf("set_mode 1: %d\n", CTRL_REG);
	set_mode(1);
	printf("get_mode: %d\n", get_mode());
	binary_print(CTRL_REG); 
	printf("\n");
	printf("\n");


	CTRL_REG = 0b11111111;
	printf("set_mode 7: %d\n", CTRL_REG);
	set_mode(7);
	printf("get_mode: %d\n", get_mode());
	binary_print(CTRL_REG); 
	printf("\n");
	printf("\n");

	CTRL_REG = 0b11111111;
	binary_print(CTRL_REG); 
	printf("\n");
	printf("has_error: %d\n", has_error());
	printf("\n");

	CTRL_REG = 0b11101111;
	binary_print(CTRL_REG); 
	printf("\n");
	printf("has_error: %d\n", has_error());

	CTRL_REG = 0;
	set_mode(0);	
	assert(get_mode() == 0);

	CTRL_REG = 0;
	set_mode(1);	
	assert(get_mode() == 1);

	CTRL_REG = 0;
	set_mode(2);	
	assert(get_mode() == 2);

	CTRL_REG = 0;
	set_mode(3);	
	assert(get_mode() == 3);

	CTRL_REG = 0b10101010;
	set_mode(7);	
	assert(get_mode() == 2);

	return 0;
};
