//
// Created by Tendacia on 2024/1/18.
//

#include "Command.h"

int main()
{
  Receiver m_receiver;
  Invoker m_invoker(new OnOffCommand(&m_receiver));
  m_receiver.on();
  m_receiver.off();

  exit(EXIT_SUCCESS);
}