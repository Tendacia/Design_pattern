//
// Created by Tendacia on 2024/1/16.
//

#include <iostream>

#include "Decorator.h"


int main()
{
  auto coffe = new Decaf;
  auto add_on = new Soy(coffe);

  auto add_on_es = new Caramel(coffe);
  std::cout << add_on->Cost() << std::endl;
  std::cout << add_on_es->Cost() << std::endl;




}
