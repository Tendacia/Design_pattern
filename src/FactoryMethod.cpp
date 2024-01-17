//
// Created by Tendacia on 2024/1/17.
//

#include "FactoryMethod.h"


int main()
{
  DogFactory dog_factory;
  CatFactory cat_factory;

  auto dog = dog_factory.FactoryMethod();
  auto cat = cat_factory.FactoryMethod();
  dog->Speak();
  cat->Speak();

  exit(EXIT_SUCCESS);
}