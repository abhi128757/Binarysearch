#include<stdio.h>
int main()
{
int a[10],n,i,key,low=0,high=n-1,f=0,mid;
printf("enter elements do you want");
for(i=0;i<n;i++)	
{
scanf("\n%d",&a[i]);}
printf("\n elements in sorted order");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
printf("element to be searched");
scanf("%d",&key);
{
mid=low+high/2;}
while(low<=high)
{
if(key==a[mid])	
printf("\n element found in=%d,mid+1");
f=1;
break;
}
 if (key<a[mid])
{high=mid-1;}
else if (key>a[mid])
{low=mid+1;
}
mid=low+high/2;
if(f==0)
printf("\n element not found");}