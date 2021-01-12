#include <stdio.h>  
    
int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %d bytes\n", (int)sizeof(a));
  printf("size of long = %d bytes\n", (int)sizeof(b));
  printf("size of long long = %d bytes\n", (int)sizeof(c));
  printf("size of long double= %d bytes\n", (int)sizeof(d));
  return 0;
}
