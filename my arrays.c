#include <stdio.h>
#define SIZE 10 
int printarray(int x[SIZE]);
int main(){
    int array[SIZE] = {1,1,1,1,1,2,2,2,3,3 }; 
    int a = printarray(array);
    return 0;
}
int printarray(int x[SIZE]){
    printf("Index Value\n");
    for(int i = 0; i < SIZE; i++)
        printf("%5d %5d \n",i,x[i]);
    return 0;
}