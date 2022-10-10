#include <studio.h>
#include <string.h>
char *concat(char *array[],int n);
int main(){
    char *array[5]= { "aac","dda","ccfc","dzxc"};
    char *result = concat(array,5);
    printf("%S",result+4);
    return 1;
}
char *concat(char *array[],int n){
    char* result[n+100];
    for(int i =0 ;i<n;i++){}
    strcat(result,array[1]);
    strcat(result," ");}
    return result;

}