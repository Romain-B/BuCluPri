#include "Abr.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  
  Abr mynoeud(4);

  mynoeud.assign(5);
  mynoeud.assign(2);

  
  printf("\nICI AuSSI\n %d\n", mynoeud.noeud_g().cle());

  mynoeud.noeud_g().assign(3);
  // g.gauche(1);

  Abr* se = mynoeud.search(2) ;
  if (se == nullptr)
  {
    printf("\nValeur existe pas\n");
  }

  else
  {
    printf("\nICI : %d\n", (*se).cle()); 
  }


  return 0;
}