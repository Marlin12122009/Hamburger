#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{

  int32_t arr[5] = {1, 7, 3, 12, 13};
  int32_t Ablage = 0;

  for (int32_t count0 = 0; count0 < 5; count0 ++)
  {
    for (int32_t count = 0; count < 5; count++)
    {
      if (arr[count] > arr[count + 1])
      {
        Ablage = arr[count];
        arr[count] = arr[count + 1];
        arr[count + 1] = Ablage;
      }
    }
  }
  printf("%d,%d,%d,%d,%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}
