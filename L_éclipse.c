#include <stdio.h>
#define repeat(nb) int _loop,_max; for( _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
  repeat(100)
  {
      printf("%d\n",_loop);
  }
  printf("J'arrive !");
}
