#include "Sort.h" 

//Sort()函数用于对数组元素进行排序
void Sort(int RandArray[], int LengthOfArray)
{
	assert(NULL != RandArray);
	assert(SIZE == LengthOfArray);
	int j, k, Temp;
	for (j = SIZE - 1; j >= 1; --j) {
		assert(j >= 1 && j < SIZE);
		for (k = 0; k <= j - 1; ++k) {
			assert(k >= 0 && k < j);
			if (RandArray[k] > RandArray[k + 1]) {
				Temp = RandArray[k + 1];
				RandArray[k + 1] = RandArray[k];
				RandArray[k] = Temp;
			}
		}
	}
}