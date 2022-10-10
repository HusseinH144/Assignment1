#include <stdio.h>
int lsb(int y);
int msb(int n);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int a = lsb(num);
    int b = msb(num);
    printf("%d",b-a);
    return 0;
    
}
int lsb(int y){
    if(y & 1)
        return 0;
    else
        return 1;
}
int msb(int n){
    if (n == 0)
        return 0;
 
    int m = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        m++;
    }
 
    return m;
}