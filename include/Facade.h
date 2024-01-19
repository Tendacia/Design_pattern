//
// Created by Tendacia on 2024/1/19.
//

#ifndef DESIGNPATTERN_SRC_FACADE_H_
#define DESIGNPATTERN_SRC_FACADE_H_

#include <iostream>

class SubSystem1
{
 public:
  void Step1()
  {
    std::cout << "Step 1\n";
  }
};

class SubSystem2
{
 public:
  void Step2()
  {
    std::cout << "Step 2\n";
  }
};


class Facade {
 public:
  void Step()
  {
    SubSystem1 sub_system_1;
    SubSystem2 sub_system_2;
    sub_system_1.Step1();
    sub_system_2.Step2();
  }
};




#endif //DESIGNPATTERN_SRC_FACADE_H_
