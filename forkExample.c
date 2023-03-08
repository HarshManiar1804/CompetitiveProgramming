#include <stdio.h>
#include <unistd.h>
int n=1,m=1;
void ans()
{
    fork();
    n+=2;
    m++;
    printf("example");
    printf("child id is : %d",getpid())
    printf("parent id is : %d",getppid())
}
int main()
{
    ans();
}