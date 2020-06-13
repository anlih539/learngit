void sort(int arr[])
{
	int j, k, temp;
	for (j=size-1;j>=1;j--){
		for (k=0;k<=j-1;k++){
			if (arr[k] > arr[k+1]){
				temp = arr[k+1];
				arr[k+1] = arr[k];
				arr[k] = temp;
			}
		}
	}
}
