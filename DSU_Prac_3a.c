#include<stdio.h>
int main()
{
    int i,flag=0,search,pos;
    int a[5];
    printf("Enter an array:");
    for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter the number to be searched:");
scanf("%d",&search);
for(i=0;i<5;i++)
   {
       if(a[i]==search)
         {
          flag=1;
          pos=i;
          break;
          }
         }
   if(flag==1)
   {
       printf("Number found at position %d", pos+1);
   }
   else
   printf("Number not found");
   return 0;
}



