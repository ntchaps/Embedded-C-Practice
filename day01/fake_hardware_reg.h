#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

volatile uint8_t CTRL_REG;

#define ENABLE_MASK            (1U << 0)
#define INTERRUPT_ENABLE_MASK  (1U << 1) 
#define MODE_MASK              (3U << 2)
#define ERROR_FLAG_MASK        (1U << 4) 

void enable_device(void){
	CTRL_REG |= ENABLE_MASK;
}

void disable_device(void){
	CTRL_REG &= ~ENABLE_MASK;
}

void enable_interrupt(void){
	CTRL_REG |= INTERRUPT_ENABLE_MASK;
}

void disable_interrupt(void){
	CTRL_REG &= ~INTERRUPT_ENABLE_MASK;
}

void set_mode(uint8_t mode){
	mode &= MODE_MASK; // TODO
	CTRL_REG &= ~MODE_MASK;
	CTRL_REG |= mode << 2;
}

uint8_t get_mode(void){
	CTRL_REG &= MODE_MASK;
}

bool has_error(void){
	CTRL_REG |= ERROR_FLAG_MASK;
};
