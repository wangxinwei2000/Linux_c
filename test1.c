#include<stdio.h>
extern  void Print();
int main()
{
    int a[6]={1,23,4,56,6};
    int i,j,locat;
    printf("please put the location of inserting:\t");
    scanf("%d",&locat);
    printf("please put the insert number:\n");
    scanf("%d",&j);
    for(i=5;i>locat;i--)
        *(a+i)=*(a+i-1);
    *(a+locat-1)=j;
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    return 0;
}
