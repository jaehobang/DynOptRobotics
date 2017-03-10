#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double update_parameters( double sigma)
{
  //Box-muller method
  double epsilon = 0.0000000001;
  double two_pi = 2.0*3.14159265358979323846;

  double z0, z1;
  double u1, u2;
  do
  {
    u1 = rand() * (1.0 / RAND_MAX);
    u2 = rand() * (1.0 / RAND_MAX);
  }
  while ( u1 <= epsilon );

  z0 = sqrt(-2.0 * log(u1)) * cos(two_pi * u2);

  return abs(z0 * sigma);

}


int main()
{
  double sigma = 20;
  double noise_array[10];
  int i;
  for(i = 0; i < 10; i++){
    noise_array[i] = update_parameters(sigma);
    printf("noise is %f\n", noise_array[i]);
  }

  return;
}
