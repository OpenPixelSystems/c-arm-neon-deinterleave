#include <stdio.h>
#include <arm_neon.h>
#include <time.h>
int main ()
{

	uint16_t data[16] = {1, 2, 3, 4,5, 6, 7, 8, 11, 12, 13, 14, 15, 16, 17, 18};
	uint16_t data2[16] = {0};

	uint16x8x2_t tmp = vld2q_u16(data);
	vst1q_u16(&data2[0], tmp.val[0]);
	vst1q_u16(&data2[8], tmp.val[1]);

}
