#include<stdio.h>
#include<conio.h>

int main(){
   int a[10] ,b,c , temp;

   printf("Enter number of Elements \n"); 
   
   scanf("%d",&b);
   
   printf("Enter elements \n");
   
   for (int i =0; i<b; i++)
   scanf("%d", &a[i]);
    
   printf("Elements is added in array \n");

   printf("Enter element to search \n");
   scanf("%d", &c); 
    
   for(int j= 0; j<b; j++) {
    if(c == a[j]){
    temp = 1;
    break;
    }
   }
if(temp ==1){
printf("Element found \n");
}
else{
    printf("Element not found \n");
}
return  0;
}
