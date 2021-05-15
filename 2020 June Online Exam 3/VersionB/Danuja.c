   #include <stdio.h>
   #define SIZE 10

    int main(void)
    {
 
        int numArr[SIZE],positiveNum[SIZE],negativeNum[SIZE];


        printf("Input elements of the array\n ");

        for(int i = 1 ;i<=SIZE;i++){
          scanf("%d",&numArr[i]);
        }

        printf("Number Series : ");
        for(int i = 1;i <= SIZE ; i++){
        printf("%d\t",numArr[i]);
        }

        printf("\nPositive Numbers : ");
        for(int i = 1;i <= SIZE ; i++){
          if(numArr[i] >= 0){
          positiveNum[i] = numArr[i];
          printf("%d\t",positiveNum[i]);
         }
        }

        printf("\nNegative numbers : ");
        for(int i = 1;i <= SIZE ; i++){
          if(numArr[i] < 0){
          negativeNum[i] = numArr[i];
          printf("%d\t",negativeNum[i]);
         }
        }
    }
