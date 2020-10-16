#include<stdio.h>
#include<conio.h>

int main(){
   int a[20] ,b,c , temp;


   printf("Enter number of Elements \n"); 
   
   scanf("%d",&b);
   
   printf("Enter elements \n");
   
   for (int i =0; i<b; i++)
   scanf("%d", &a[i]);
    
for(int i =0;i<b;i++){
    for(int j =0; j<b-1; j++){
        if(a[j]>a[j+1]){
            temp= a[j];
            a[j]=a[j+1];
            a[j+1] =temp;
        }
    }
}

printf("Sorted Array: \n");
for(int i =0; i<b ; i++){
printf(" %d" , a[i]);
}
   return 0;

}   
