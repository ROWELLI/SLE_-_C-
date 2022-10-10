#include <stdio.h>

int main(void) {
  int i, j;
  int size;    
   
  scanf("%d", &size);
  for(i=0; i<size-1; i++){
    for(j=0; j<size-i-1; j++){
      printf(" ");
    }    
      printf("*");    
    if(i>0){
    for(j=0; j<i*2-1; j++){ 
      printf(" ");
      }
      printf("*");  
    } 
    printf("\n");
  }
  for(j=0; j<2*i+1; j++){
    printf("*");
  } 

           
  
  return 0;
}
