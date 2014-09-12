#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double bessel(int n, double x)
{
  double bessel;

  bessel = -(1/x)*cos(x-(n*3.14/2));
//  bessel = pow(x,n);
//  bessel = (1/x)*sin(x-(n*3.14/2));
  return bessel;
}

int main(int argc, char **argv){

  int x = atoi(argv[1]);
  int N = atoi(argv[2]);

  int i;
  for(i=1; i<=N; i++)
  {
  double f1before, f, f1after;

  f = bessel(i,x);
  f1before = bessel(i-1,x);
  f1after = bessel(i+1,x);

  printf("\n");
  printf("n:%d \n", i);
  printf("When plugged into fn:  f1before:%f  fn:%f  f1after:%f \n", f1before, f, f1after);
  printf("Downward Recursion:    f1before:%f  fn:%f  f1after:%f \n", (((2*i+1)/x)*f-f1after),f, f1after);
  printf("Upward Recursion:      f1before:%f  fn:%f  f1after:%f \n \n", f1before, f, (((2*i+1))*f-f1before));
  }

  return 0;
  }

