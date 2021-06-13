#include <stdio.h>
#include <stdint.h>
#include <string.h>

void main() {
	uint16_t x = 0x1234;
	uint8_t px1 = (uint8_t)x;
	uint8_t px2 = *((uint8_t*)&x + 1);
	printf("%x\r\n", px1);
	printf("%x\r\n", px2);
}