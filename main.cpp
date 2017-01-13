#include "Abr.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  
  Abr mynoeud(4);

  //Assign test
  mynoeud.assign(5);
  mynoeud.assign(2);

  //Cle test
  printf("\nCle de noeud.noeud_g\n %d\n", mynoeud.noeud_g().cle());
  mynoeud.noeud_g().assign(3);

  //Search Test
  Abr* se = mynoeud.search(2) ;
  if (se == nullptr)
  {
    printf("\nValeur existe pas\n");
  }

  else
  {
    printf("\nICI : %d\n", (*se).cle()); 
  }

  //Test max
  printf("\nValeur max de mynoeud : %d \n", mynoeud.max());


  //Test de depth

  Abr tree(2);
  tree.assign(3);
  tree.assign(4);
  tree.assign(5);
  tree.assign(6);

  printf("\n La profondeur de tree est : %d \n", tree.depth());

  return 0;
}