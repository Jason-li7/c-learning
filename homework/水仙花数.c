#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int x = n/100;
    int y = n/10-x*10;
    int z = n%10;
    if (n>999||n<0){
        printf("%d不是三位数。\n",n);
    }
    else if (n == x*x*x+y*y*y+z*z*z){
        printf("%d是水仙花数。\n",n);
    }
    else {
        printf("%d不是水仙花数。\n",n);
    }
    
    
    return 0;
}