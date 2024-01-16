//
// Created by Tendacia on 2024/1/16.
//

#include "Observer.h"

int main() {
  WeatherStation m_station;
  PhoneDisplay m_phone(m_station);
  for (int i = 0; i < 10; ++i) {
    m_station.UpdateTemperature(i);
  }

  exit(EXIT_SUCCESS);
}
