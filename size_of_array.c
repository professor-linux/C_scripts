#include <stdio.h>
#include <stddef.h>

int sumArray(int* arr, int size)
{

        int i, sum = 0;
        for (i = 0; i < size; i++){
             sum = sum + arr[i];
}
        return sum;
}

int get_size(int arr, size_t size)
{
    int arr_size = arr / size;
    return arr_size;
}

int main(){

        int myArr[] = {80, 80};

        int result = sumArray(myArr, get_size(sizeof(myArr),sizeof(myArr[0])));
        printf("sum: %d", result);
        return 0;
}
                     
