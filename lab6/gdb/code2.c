#include <stdio.h>

// To count 10000000 using a while loop
int main(void){
  int count = 0;

  int is_looping = 1; // sentinel for while()
  while(is_looping == 1){
    count++;
    if(count > 9999999)  is_looping = 0;
  }

  printf("count=%d\n", count);

  return 0;
}
