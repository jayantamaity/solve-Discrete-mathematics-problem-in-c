// Difference of two sets 
#include <stdio.h>

int main() {
   int a[10],b[10],c[10],i,j,k=0,flag;
   printf("Enter 10 nos");
   for(i=0;i<10;i++)
   {
       printf("Enter a[%d] and b[%d]",(i+1),(i+1));
       scanf("%d%d",&a[i],&b[i]);
   }
   k=0;
   for(i=0;i<10;i++)
   {
       flag=0;
       for(j=0;j<10;j++)
       {
           if(a[i]==b[j])
           {
               flag=1;
           }
           
       }
       if(flag==0)
       {
           c[k]=a[i];
           k++;
       }
   }
   for(i=0;i<k;i++)
   {
       printf("%d ",c[i]);
   }
	
}
