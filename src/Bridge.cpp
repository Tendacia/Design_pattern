//
// Created by Tendacia on 2024/1/20.
//

#include "Bridge.h"

int main()
{
  RefineAbstraction1 m_refineAbstarction(new ConcreteImplementorA);
  RefineAbstraction2 m_refineAbstraction2(new ConcreteImplementorB);
  m_refineAbstarction.Operation();
  m_refineAbstraction2.Operation();

  exit(EXIT_SUCCESS);
}