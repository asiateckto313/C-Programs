#include <stdio.h>
//#define repeat(nb)  for( int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
//int _loop,_max;
{
    repeat (39)
    {
      repeat(39)
            {
                printf("oxox");
            }
            printf("\n");
                repeat(39)
                    {
                        printf("xoxo");
                    }
                    printf("\n");
    }
    return 0;
}
