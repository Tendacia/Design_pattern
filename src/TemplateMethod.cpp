//
// Created by Tendacia on 2024/1/26.
//

#include "TemplateMethod.h"


int main()
{

  ConcreteClass1 class_1;
  ConcreteClass2 m_class_2;
  class_1.TemplateMethod();
  m_class_2.TemplateMethod();

  AbstractClass* m_1 = new ConcreteClass1;
  AbstractClass * m_2 = new ConcreteClass2;

  m_1->TemplateMethod();
  m_2->TemplateMethod();

  exit(EXIT_SUCCESS);
}