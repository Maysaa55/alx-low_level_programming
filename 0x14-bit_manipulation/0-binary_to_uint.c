#include"main.h"
#include<stdio.h>

unsigned int binary_to_uint(const char *b){
  if(b == 0)
    return (0);
  else
  {
    int sum, len, counter;

    sum = 0; len = 0; counter = 1;
    while (b[len] != '\0')
     len++;
    if (b[len - 1] == '1')
     sum = 1;
    for (int i = len - 2; i >= 0; i--)
 {
     if (b[i] == '1')
  {
    sum += (2 *counter);
    counter *= 2;
  }
    else if (b[i] == '0')
     counter *= 2;
    else
     return (0);
 }
    return (sum);
  }
  return (0);
}
