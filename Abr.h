#include <stdio>
#include <stdlib>

class Abr
{
public:
//Getters
  int cle();
  Abr noeud_g();
  Abr noeud_d();

//Methods
  void assign(int ncle); 
  bool not_empty();

//Contructeurs 
  Abr(int ncle);
  //~Abr(); A FAIRE PLUS TARD

protected:
private :
  int cle_;
  Abr* noeud_g_;
  Abr* noeud_d_;
  
};

