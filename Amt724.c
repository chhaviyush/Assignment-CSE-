//proper vector printing
#include<stdio.h>
#include<math.h>

int main() 
{
    int i;
    printf("enter a no.");
    scanf("%4d",&i);
    i=i-(i/10)*10;
    printf("the first digit is %d",i);
    return 0;
    
}
