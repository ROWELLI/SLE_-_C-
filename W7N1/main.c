#include <stdio.h>

int main(void) {
  int x, y, w, h;
  scanf("%d%d%d%d", &x, &y, &w, &h);
  if(w-x>=h-y){
    if(x<=h-y && x<=y){
      printf("%d", x);
    }    
    else if(y<=h-y && y<=x){
      printf("%d", y);
    }
    else if(h-y<=x && h-y<=y){
      printf("%d", h-y);
    }
  }
  else if(w-x<=h-y){
    if(x<=w-x && x<=y){
      printf("%d", x);
    }
    else if(y<=w-x && y<=x){
      printf("%d", y);
    }
    else if(w-x<=x && w-x<=y){
      printf("%d", w-x);
    }
  }
  return 0;
}