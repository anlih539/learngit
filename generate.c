void generate(int arr[])
{
	int i;
	for (i=0;i<=size-1;i++){
		arr[i] = rand()%(maxnum+1);
	}
}
