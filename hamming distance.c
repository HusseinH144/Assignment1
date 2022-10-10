int hammingDistance(int n1, int n2)
{
    int x = n1 ^ n2;
    int setBits = 0;
 
    while (x > 0) {
        setBits += x & 1;
        x >>= 1;
    }
 
    return setBits;
}
 
// Driver code
int main()
{   printf("Enter 2 integers with a space in between");
    int x,y;
    scanf(“%d  %d”, &x, &y);
    printf("%d\n", hammingDistance(x, y));
 
    return 0;
}