#include <stdio.h>

#define LOWER 0   /* lower limit of termperature table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* print Fahrenheit-Celcius table */
int main() {
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
