/*************************************************

文件描述：随机生成10个100以内的随机数排序并显示

院    系：汽车工程学院

作    者：李浩

学    号：31903132

**************************************************/

#include "Generate.h"
#include "Display.h"
#include "Sort.h"

int main(void)
{
	int RandArray[SIZE], LengthOfArray;
	Generate(RandArray);//生成随机数组
	LengthOfArray = sizeof(RandArray) / sizeof(int);//获取数组长度
	printf("排序前：");
	Display(RandArray, LengthOfArray);//输出未经过排序的数组
	Sort(RandArray, LengthOfArray);//对数组元素进行排序
	printf("排序后：");
	Display(RandArray, LengthOfArray);//输出排序后的数组

	return 0;
}