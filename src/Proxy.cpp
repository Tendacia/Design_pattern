//
// Created by Tendacia on 2024/1/19.
//

#include "Proxy.h"

int main()
{
  auto m_subject = new RealSubject;
  auto m_proxy = new Proxy(m_subject);
  m_proxy->Request();

  exit(EXIT_SUCCESS);
}