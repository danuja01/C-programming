   #include <stdio.h>
   #define size 6
   
    int main(void)
    {
 
        int numArr[100];

        printf("Input elements of the array\n ");

        for(int i = 1 ;i<=size;i++){
          scanf("%d",&numArr[i]);
        }

        printf("Number Series : ");
        for(int i = 1;i <= size ; i++){
        printf("%d\t",numArr[i]);
        }

        printf("\nOdd numbers : ");
        for(int i = 1;i <= size ; i++){
          if(numArr[i]%2 == 1){
          printf("%d\t",numArr[i]);
         }
        }

        printf("\nEven numbers : ");
        for(int i = 1;i <= size ; i++){
          if(numArr[i]%2 == 0){
          printf("%d\t",numArr[i]);
         }
        }
    }