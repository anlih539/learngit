#include "Display.h" 

//Display()函数按次序逐个输出数组元素
void Display(int RandArray[], int LengthOfArray)
{
	assert(NULL != RandArray);
	assert(SIZE == LengthOfArray);
	int i;
	for (i = 0; i <= SIZE - 1; ++i) {
		assert(i >= 0 && i < SIZE);
		if (i % 5 == 0) {
			printf("\n");
		}
		printf("%5d", RandArray[i]);
	}
	printf("\n");
}