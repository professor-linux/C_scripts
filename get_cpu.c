#include <stdio.h>
#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <sched.h>

int main() {

  unsigned int cpu, node;
  int result;

  result = getcpu(&cpu, &node);

if (result == 0){
   printf("CPU: %d, NODE: %d \n",cpu, node);
}
else{
  perror("getcpu");
}

}
