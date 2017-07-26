#include"EntreeSampler.hpp"
#include<iostream>

int main()
{
  Entree ent1("beef", 100);
  Entree ent2("corn",20);
  Entree ent3("vegetable",200);
  Entree ent4("coffee",1000);

  std::cout<<"entree name "<<ent1.getName()<<std::endl;
  std::cout<<"entree calories "<<ent1.getNumCalories()<<std::endl;

  EntreeSampler sample(ent1, ent2, ent3, ent4);

  std::cout<<"list entrees: "<< std::endl;
  sample.listEntrees();
  std::cout<<"total calories: "<<sample.totalCalories()<<std::endl;
  return 0;
}
