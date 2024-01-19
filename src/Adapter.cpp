//
// Created by Tendacia on 2024/1/19.
//

#include "Adapter.h"


int main()
{
  Adaptee * m_adaptee = new Adaptee;
  Adapter * m_adapter = new Adapter(m_adaptee);
  Target * m_target = m_adapter ;
  m_target->Request();


  exit(EXIT_SUCCESS);
}