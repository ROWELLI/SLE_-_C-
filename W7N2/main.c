#include <stdio.h>

int main(void) {
  int text;
  int floor, room, guest;
  int floor_num, room_num;
  scanf("%d", &text);
  for(int i=0; i<text; i++){
    scanf("%d%d%d", &floor, &room, &guest);
    if(guest%floor==0){
      floor_num = floor;
      room_num = guest/floor;
      }
    else{
      floor_num = guest%floor;
      room_num = guest/floor+1;
    } 
    printf("%d%02d\n", floor_num, room_num);
    }
  
  return 0;
}
