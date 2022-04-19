#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int m, n, o, *z;
  z = &m;
  m = 10;

  printf("\nPointer : int *z\n");
  printf("-----------------------------------------\n");
  printf("Here is m = %d, n and o are two integer variables and *z is an integer\n", m);

  printf("z stores the address of m = %p\n", z);
  printf("*z stores the value of m = %d\n", *z);
  printf("&m stores the address of m = %p\n", &m);
  printf("&n stores the address of n = %p\n", &n);
  printf("&o stores the address of o = %p\n", &o);
  printf("&z stores the address of z = %p\n\n", &z);

  return 0;
}
