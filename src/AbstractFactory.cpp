//
// Created by Tendacia on 2024/1/17.
//

#include "AbstractFactory.h"

int main()
{
  Client m_client(new ConcreteFactory1);
  m_client.test();

  Client m_client2(new ConcreteFactory2);
  m_client2.test();

  exit(EXIT_SUCCESS);
}