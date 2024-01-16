//
// Created by Tendacia on 2024/1/16.
//

#ifndef DESIGNPATTERN_SRC_OBSERVER_H_
#define DESIGNPATTERN_SRC_OBSERVER_H_

#include <unordered_set>
#include <iostream>

class Observer
{
 public:
  virtual void Update() = 0;
};

class Observable
{
 public:
  virtual void Add(Observer &o) = 0;
  virtual void Remove(Observer &o) = 0;
  virtual void Notify() = 0;

};

class WeatherStation : public Observable
{
 public:
  void Add(Observer &o) override
  {
    set_.insert(&o);
  }

  void Remove(Observer &o) override
  {
    set_.erase(&o);
  }

  void Notify() override
  {
    for(auto &ele : set_)
    {
      ele->Update();
    }
  }

  int GetTemperature()
  {
    return temperature_;
  }

  void UpdateTemperature(int temperature)
  {
    temperature_ = temperature;
    Notify();
  }


 private:
  std::unordered_set<Observer* > set_;
  int temperature_;

};

class PhoneDisplay : Observer
{
 public:
  PhoneDisplay(WeatherStation& station) : station_(station)
  {
    station_.Add(*this);
  }

  void Update() override
  {
    temperature_ = station_.GetTemperature();
    std::cout << "Update the temperature: " << temperature_ << " from the station\n";
  }

 private:
  WeatherStation& station_;
 int temperature_;
};


#endif //DESIGNPATTERN_SRC_OBSERVER_H_
