#include <stdio.h>
#define SIZE 10 
void printarray(int x[SIZE]);
void printHistogram(int y[SIZE]);
int main(){
    int array[SIZE] = {1,1,1,1,1,2,2,2,3,3 }; 
     printarray(array);
     printHistogram(array);
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