#include "Abr.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  
  Abr mynoeud(4);

  mynoeud.droit(5);
  mynoeud.gauche(2);

  
  printf("\nICI AuSSI\n %d\n", mynoeud.noeud_g().cle());

  mynoeud.noeud_g().droit(3);
  // g.gauche(1);

  Abr* se = mynoeud.search(15) ;
  if (se == nullptr)
  {
    printf("\nValeur existe pas\n");
  }

  else
  {
    printf("\nICI : %d\n", (*se).cle()); //mynoeud.noeud_g().noeud_d().cle() );
  }


  return 0;
}