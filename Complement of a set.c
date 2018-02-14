//Complement of a set 
#include <stdio.h>

int main() {
   int a[100],b[100],c[100],i,j,k=0,flag,S,M;
   printf("Enter no of elements in set");
   scanf("%d",&S);
   for(i=0;i<S;i++)
   {
       printf("Enter a[%d]",(i+1));
       scanf("%d",&a[i]);
   }
   printf("Enter no of elements in set");
   scanf("%d",&M);
   for(i=0;i<M;i++)
   {
       printf("Enter and b[%d]",(i+1));
       scanf("%d",&b[i]);
   }
   if(M>S)
   {
       printf("Subset cannot be larger than set");
   }
   else
   {
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
	
}
