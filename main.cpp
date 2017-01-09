#include "Abr.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  
  Abr mynoeud(12);

  printf("\nICI : %d\n", mynoeud.cle() );

  std::cout<<mynoeud.noeud_g()<<std::endl;


  return 0;
}