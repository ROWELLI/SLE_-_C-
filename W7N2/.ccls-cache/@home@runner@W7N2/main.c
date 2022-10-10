#include <stdio.h>

int main(void) {
  int text;
  int floor[100], room[100], guest[10000];
  scanf("%d", &text);
  for(int i=0; i<text; i++){
    scanf("%d%d%d", &floor[i], &room[i], &guest[i]);
    }
  for(int i=0; i<text; i++){
    if(guest[i]/floor[i]+1<10){
      printf("%d0%d", guest[i]%floor[i], guest[i]/floor[i]+1);
    }
    else{
      printf("%d%d", guest[i]%floor[i], guest[i]/floor[i]+1);
    }
    printf("\n");
  }  
  return 0;
}