//
// Created by Tendacia on 2024/1/18.
//

#include <iostream>
#include <thread>
#include <vector>

#include "Singleton.h"


Singleton* Singleton::instance_ = nullptr;
SingletonThreadSafe* SingletonThreadSafe::instance_ = nullptr;
std::once_flag SingletonThreadSafe::init_flag;

std::mutex mt;

void test1()
{
  auto instance1 = Singleton::GetInstance();
  instance1->CountAdd();
  std::cout << instance1->GetCount() << std::endl;

  auto instance2 = Singleton::GetInstance();
  std::cout << instance1->GetCount() << " " << instance2->GetCount() << std::endl;
}

void test2()
{
  std::vector<std::thread> thread_vec{10};
  for(auto i = 0; i < 10; ++i)
  {
    thread_vec[i] = (std::thread ([i](){
      mt.lock();
      std::cout << "Thread: " << i << std::endl;
      mt.unlock();
      auto instance = SingletonThreadSafe::GetInstance();
    }));
  }

  for(auto & ele : thread_vec)
  {
    if(ele.joinable())
    {
      ele.join();
    }
  }
}

int main()
{
  std::cout << "--------------Begin Test1----------------\n";
  test1();
  std::cout << "--------------End Test1------------------\n";
  std::cout << "--------------Begin Test2-----------------\n";
  test2();
  std::cout << "--------------End Test2-------------------\n";

  exit(EXIT_SUCCESS);
}