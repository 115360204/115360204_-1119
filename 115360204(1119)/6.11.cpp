#include <stdio.h>
#define SIZE 10

int main(void) {
    
    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int n = SIZE;

    printf("排序前的資料順序:\n");
    for (int i = 0; i < n; i++)
        {
            printf("%4d", arr[i]);
        }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {               
        int swapped = 0;                           

        for (int j = 0; j < n - 1 - i; j++) 
            {       
            if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                
                swapped = 1;                        
                }
    
            if (swapped == 0) 
                {
                break;
                }
            }

    printf("\n排序後的資料順序:\n");
    for (int i = 0; i < n; i++) 
        {
            printf("%4d", arr[i]);
        }
    printf("\n");

    return 0;
}