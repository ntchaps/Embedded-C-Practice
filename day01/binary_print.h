#include <stdio.h>
#include <stdint.h>

// Prints an integer in binary
// Args: A unsigned 8-bit integer
void binary_print(uint8_t num){
	int i;

	for (i=7; i > -1; i--) {
		printf("%d", (((num & (1 << i)) >> i)));
	}
}
