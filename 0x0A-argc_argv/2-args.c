#include"main.h"
int main(int argc , char* argv[]){
for (int i = 0 ; i < argc ; i++ ){
char * s = argv[i];
  while (*s != '\0')
    {
      _putchar(*s);
      ++s ;
    }
  _putchar('\n');
}
 return 0 ; 
}
