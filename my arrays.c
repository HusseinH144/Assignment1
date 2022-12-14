#include <stdio.h>
#define SIZE 10 
void swapIndex(int array[SIZE],int a,int b);
void printarray(int x[SIZE]);
void printHistogram(int y[SIZE]);
void bubbleSort(int array[SIZE]);
int median(int array[SIZE]);
int mode(int array[SIZE]);
int isSorted(int array[SIZE]);
int main(){
    int array[SIZE] = {1,1,1,1,1,2,2,2,3,3 }; 
     printarray(array);
     printHistogram(array);
     swapIndex(array,1,9);
     printf(" is sorted %d \n",isSorted(array));
     printarray(array);
     bubbleSort(array);
     printf("is sorted %d \n",isSorted(array));
     printarray(array);
     printf("%d \n",median(array));
     printf("%d \n",mode(array));
     swapIndex(array,2,5);
     int isSorted(int array[SIZE]);
     swapIndex(array,4,8);
     int isSorted(int array[SIZE]);
     swapIndex(array,3,2);
     int isSorted(int array[SIZE]);
     printf("%d \n",median(array));
     printf("%d \n",mode(array));
     int isSorted(int array[SIZE]);
     void printarray(int x[SIZE]);
    return 0;
}
void printarray(int x[SIZE]){
    printf("Index Value\n");
    for(int i = 0; i < SIZE; i++)
        printf("%5d %5d \n",i,x[i]);
  
}
void printHistogram(int array[SIZE]) {
    int results[SIZE] = {0};
    for (int i = 0; i < SIZE; ++i) {   
      for(int j = 0; j <SIZE; j++) {
         if ( array[j] == i){
            results[i]++;
         }
      } 
   }
    
      for (int i = 0; i < SIZE; i++) {
          if(results[i]!=0){
      printf("[%d] ", i);
      for ( int j = 0; j < results[i]; j++) {
      printf("*");
      }
      printf("\n");}
   }
    
}
   void swapIndex(int array[SIZE],int a,int b){
       int x = array[a];
       array[a]=array[b];
       array[b]=x;
    
   }
   void bubbleSort(int array[])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE - i ; j++)
            if (array[j] > array[j + 1])
                swapIndex(array,j, j + 1);
}

int median(int array[SIZE]){
    bubbleSort(array);
    return array[SIZE/2];
}
int mode(int array[SIZE]){
    int count[SIZE] = {0};
    for (int i = 0; i < SIZE; ++i) {   
      for(int j = 0; j <SIZE; j++) {
         if ( array[j] == i){
            count[i]++;
         }
      } 
}
    int max = 0;
   for(int i =0;i<SIZE;i++){
        if(count[i]>max)
        max = i;}
        return max;
}
int isSorted(int array[SIZE]){
    for(int i=0;i<SIZE;i++){
        for(int j = i+1;j<SIZE;j++)
            if(array[j]<array[i])
                return 0;
            
                            }
    return 1;
}
