#include<stdio.h>
#include<conio.h>

int main(){
   int a[10] ,b,c , temp;
   int m , h ,l;

   printf("Enter number of Elements \n"); 
   
   scanf("%d",&b);
   
   printf("Enter elements \n");
   
   for (int i =0; i<b; i++)
   scanf("%d", &a[i]);
    
   printf("Elements is added in array \n");

   printf("Enter element to search \n");
   scanf("%d", &c); 
    
   l = 0;
   h= b-1;
   m = (h +l)/2 ;

    while(l<=h){
       if(c == a[m]){
        temp=1;
        break;
    }
       else if(c < a[m]){
        h=m-1;
    }
       else {
        l=m+1;
       }
    }
   
  if (temp == 1){
  printf("Element found \n");
   }
  else{
    printf("Element not found \n");
     }
  return  0;
}
