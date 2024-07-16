#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mile=0;
    float km=0;
    scanf("%d",&mile);
    km=mile*1.6;
    printf("%d mile is %.1f km",mile,km);
    return 0;
}
