//
// Created by Tendacia on 2024/1/17.
//

#include <iostream>

#ifndef DESIGNPATTERN_SRC_FACTORYMETHOD_H_
#define DESIGNPATTERN_SRC_FACTORYMETHOD_H_

class Animal
{
 public:
  virtual void Speak() = 0;
};

class Dog: public  Animal
{
 public:
  void Speak() override
  {
    std::cout << "Dog \n";
  }
};

class Cat : public Animal
{
 public:
  void Speak() override
  {
    std::cout << "Cat \n";
  }

};

class AnimalCreator
{
 public:
  virtual Animal * FactoryMethod() = 0;
};

class DogFactory : AnimalCreator
{
 public:
  Animal* FactoryMethod() override
  {
    return new Dog;
  }
};

class CatFactory: AnimalCreator
{
 public:
  Animal * FactoryMethod() override
  {
    return new Cat;
  }
};




#endif //DESIGNPATTERN_SRC_FACTORYMETHOD_H_
