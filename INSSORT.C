//Insertion sorting
#include<math.h>
#include<stdio.h>
#include<conio.h>
void insertionSort(int arr[50], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[50], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i],"\n");
}
int main()
{
	int arr[50];
	int n,i;
	clrscr();
printf("Enter no. of elements:\n");
scanf("%d",&n);
printf("\nEnter array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
	insertionSort(arr, n);
printf("Sorted array is:\n");
	printArray(arr, n);

getch();
	return 0;
}