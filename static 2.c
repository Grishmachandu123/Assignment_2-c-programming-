#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    int n, i, largest1, largest2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest1 = arr[0];
    largest2 = arr[1];
    if(largest2 > largest1) {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

	return 0;
}
