#include "Generate.h" 

//Generate()�������������������
void Generate(int RandArray[])
{
	assert(NULL != RandArray);
	srand((unsigned)time(0));
	int i;
	for (i = 0; i <= SIZE - 1; ++i) {
		assert(i >= 0 && i < SIZE);
		RandArray[i] = rand() % (MAXNUM);
	}
}