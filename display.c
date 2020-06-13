void display(int arr[]) 
{
	int i;
	for (i=0;i<=size-1;i++){
		if (i%5 == 0){
			printf("\n");
		}
		printf("%5d", arr[i]);
	}
	printf("\n");
 } 
