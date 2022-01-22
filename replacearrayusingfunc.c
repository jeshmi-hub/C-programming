/*Add a new function in the program you have created in
Qno. 3 which takes three parameters: an array, length of the
array and value to replace each element in an array. You
must receive an integer value in the main function. Your
function should not return anything and it should not print
anything. You must print a new array in the main function.*/




#include <stdio.h>

void printArray(int a[] ,int n)
{
	int i;
	
  for(i = 0;i < n;i++){
 
   printf("%d ",a[i]);
}
}
void replaceWithNextGreatest(int a[], int size)
{
    int maximum =  a[size-1];
    a[size-1] = 0;
	 int i;
    for(i = size-2; i >= 0; i--)
    {
        int temp = a[i];
        a[i] = maximum;
        if(maximum < temp)
            maximum = temp;
    }
 printf("After replace the modified array is: ");
 printArray(a , size);	
}

int main()
{
    int i, arr1[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6}; 
    int n = sizeof(arr1) / sizeof(arr1[0]);	
	//------------- print original array ------------------	
	printf("The given array is :  ");
	for(i = 0; i < n; i++)
	{
	printf("%d  ", arr1[i]);
    } 
	printf("\n");
//------------------------------------------------------
    replaceWithNextGreatest(arr1, n);
    return 0;
}
