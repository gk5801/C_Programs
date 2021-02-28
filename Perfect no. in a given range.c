#include<stdio.h>
int perfect(int);
int print(int,int);
int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    print(start,end);
}
int perfect(int n)
{ 
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(n==sum)
    return 1;
    else
    return 0;
}
int print(int start,int end)
{
    while(start<=end)
    {
        if(perfect(start)==1)
       {
           printf("%d ",start);
       }
       start++;
    }
}