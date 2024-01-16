//
// Created by Tendacia on 2024/1/16.
//

#ifndef DESIGNPATTERN_SRC_DECORATOR_H_
#define DESIGNPATTERN_SRC_DECORATOR_H_


class Beverage
{
 public:
  virtual  int Cost() = 0;
};

class Decaf : public Beverage
{
 public:
  int Cost() override
  {
    return 1;
  }
};

class Espress : public Beverage
{
 public:
  int Cost() override
  {
    return 2;
  }
};

class AddonDecorator : public  Beverage
{
 public:
  AddonDecorator(Beverage * beverage) : beverage_(beverage){}
  virtual int Cost()
  {
    return beverage_->Cost();
  }

 private:
  Beverage * beverage_;

};


class Caramel : public  AddonDecorator
{
 public:
  Caramel(Beverage* beverage): AddonDecorator(beverage){}

  virtual  int Cost()
  {
    return 2 + AddonDecorator::Cost();
  }

};

class Soy: public  AddonDecorator
{
 public:
  Soy(Beverage* beverage): AddonDecorator(beverage){}

  virtual int Cost()
  {
    return 1 + AddonDecorator::Cost();
  }
};




#endif //DESIGNPATTERN_SRC_DECORATOR_H_
