#include "head.h"
#include "generate.c"
#include "display.c"
#include "sort.c"

int main(void)
{
	int array[size];
	generate(array);
	printf("≈≈–Ú«∞£∫");
	display(array);
	sort(array);
	printf("≈≈–Ú∫Û£∫");
	display(array);
	
	return 0;	 
}
