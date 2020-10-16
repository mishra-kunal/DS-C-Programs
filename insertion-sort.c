#include<stdio.h>
#include<conio.h>

int main(){
   int a[20] ,b,c , temp;
   int j =0;

   printf("Enter number of Elements \n"); 
   
   scanf("%d",&b);
   
   printf("Enter elements \n");
   
   for (int i =0; i<b; i++)
   scanf("%d", &a[i]);
    
   printf("Elements is added in array \n");
   for(int i=1;i<b;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
        a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
   }

   printf("Elements sorted: \n");
   for(int i=0;i<b;i++){
      printf("  %d",a[i]);
   }
    return 0;
}
