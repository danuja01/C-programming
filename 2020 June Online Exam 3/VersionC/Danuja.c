   #include <stdio.h>
   #define size 10

    int main(void)
    {
 
        int myArray[size],largeNum[size];
        float total = 0,avg;

        printf("Input elements of the array\n ");

        for(int i = 1 ;i<=size;i++){
          scanf("%d",&myArray[i]);
          total = total + myArray[i];
        }

        avg = total /size;

        printf("Average : %.2f\n",avg);
        
        printf("Number Series : ");
        for(int i = 1;i <= size ; i++){
        printf("%d\t",myArray[i]);
        }

        printf("\nlargeNum : ");
        for(int i = 1;i <= size ; i++){
          if(myArray[i] >= avg){
            largeNum[i] = myArray[i];
          printf("%d\t",largeNum[i]);
         }
        }
    }
