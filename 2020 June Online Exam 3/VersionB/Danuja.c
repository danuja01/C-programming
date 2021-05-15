   #include <stdio.h>
   #define size 10

    int main(void)
    {
 
        int numArr[10],num;


        printf("Input elements of the array\n ");

        for(int i = 1 ;i<=size;i++){
          scanf("%d",&numArr[i]);
        }

        printf("Number Series : ");
        for(int i = 1;i <= size ; i++){
        printf("%d\t",numArr[i]);
        }

        printf("\nPositive Numbers : ");
        for(int i = 1;i <= size ; i++){
          if(numArr[i] >= 0){
          printf("%d\t",numArr[i]);
         }
        }

        printf("\nNegative numbers : ");
        for(int i = 1;i <= size ; i++){
          if(numArr[i] < 0){
          printf("%d\t",numArr[i]);
         }
        }
    }
