#include <stdio.h>

#define LOWER 0   /* lower limit of termperature table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300 */
int main() {
  float fahr, celcius;

  fahr = LOWER;
  while (fahr <= UPPER) {
    celcius = 5 * (fahr - 32) / 9;
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr += STEP;
  }
}
