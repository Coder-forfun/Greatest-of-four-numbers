#include <stdio.h>
int main()
{
    float a,b,c,d,s;
    printf("Enter all the four numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=a>b?a:b>c?b:c>d?c:d;
    printf("The greatest of all number is: %f",s);
    return 0;
}
