#include <stdio.h>

int fact(int n)
{
    if(n<0)
        return 0;
    else if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);


}
int main()
{
    int n;
    scanf("%d",&n);
    int result = fact(n);
    printf("Result %d\n",result);
    return 0;
}
