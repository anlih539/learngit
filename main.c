#include "head.h"
#include "generate.c"
#include "display.c"
#include "sort.c"

int main(void)
{
	int array[size];
	generate(array);
	printf("����ǰ��");
	display(array);
	sort(array);
	printf("�����");
	display(array);
	
	return 0;	 
}
