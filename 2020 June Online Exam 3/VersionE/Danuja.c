#include <stdio.h>

int main(void) {
  int arrNum[6];

  printf("Input numbers : ");
  for(int i=0 ; i<6 ; i++){
    scanf("%d",&arrNum[i]);
  }

  puts("");

  for(int i=0 ; i<6 ; i++){
    printf("%d\n",arrNum[i]);
  }
 
   for(int i=0 ; i<6 ; i++){
    if(arrNum[i] >= arrNum[i+1]){
      continue;
    }else{
      printf("\nNumbers are not stored in ascending order");
      return 0;
    }
  }
  printf("\nNumbers are stored in ascending order");
  

  return 0;
}
