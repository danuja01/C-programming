#include <stdio.h>
#define SIZE 8

int main(void) {
  
  int num[SIZE],count = 0;

  printf("input num : \n");
  for(int i=1 ; i <= SIZE;i++){
      scanf("%d",&num[i]);

        if(num[i]<1 || num[i]>4){
        printf("Invalid number, Re-enter :\n");
        i--;
      }
      }

  printf("num array : ");
  for(int i=1 ; i <= SIZE;i++){
    printf("%d\t",num[i]);
  }
for(int i=1 ; i <= SIZE;i++){
  if(num[i]==1 && num[i+1]==3){
    count++;
  }
}

printf("\nNumber of times the pattern “1 3” appear : %d",count);
  
  return 0;
}
