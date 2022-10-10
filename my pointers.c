#include <stdio.h>
#include <string.h>
void bubbleSort(char* array[],int a ,int b);
void swapIndex(char* array[],int a ,int b);
char* merge(char* aa[],char* bb[],int a, int b);
int main(){
    printf("Sdddsdasds");
char* aa[] = {"safsf", "abababa","aaaabb"};
    char * bb[] = {"ana", "zzzz"};
    char* solution = merge(aa,bb,3,2);
    printf("Sdasds");
    printf("%s", solution);
    
}
   void swapIndex(char* array[],int a,int b){
       char* x = array[a];
       array[a]=array[b];
       array[b]=x;
    
   }
   void bubbleSort(char* array[],int a,int b)
{
    for (int i = 0; i < a+b; i++)
        for (int j = 0; j < a+b - i ; j++)
            if (array[j] > array[j + 1])
                swapIndex(array,j, j + 1);
}
char* merge(char* aa[],char* bb[],int a, int b){
    char* c[a+b]; 
    int i;
    for(i=0;i<a;i++ )
        c[i] = aa[i];
    for(int j =0;j<b;j++)
        c[i+j] = bb[j];
    bubbleSort(c,a,b);
    return *c ;
}