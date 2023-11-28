#include "WeatherData.h"

#include <algorithm>
#include <iostream>

void WeatherData::RegisterObserver(WeatherObserver *observer)
{
    observers.push_back(observer);
}

void WeatherData::RegisterPullObserver(WeatherObserver *observer)
{
    pullObservers.push_back(observer);
}

void WeatherData::RemoveObserver(WeatherObserver *observer)
{
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator == observers.end()) return;

    observers.erase(iterator);
}

void WeatherData::NotifyObservers()
{
    for (auto observer : observers) {
        observer->Update(temperature, humidity, pressure);
    }

    for (auto observer : pullObservers) {
        observer->UpdateReady();
    }
}

void WeatherData::MeasurementsChanged()
{
    NotifyObservers();
}

void WeatherData::SetMeasurements(float newTemperature, float newHumidity, float newPressure)
{
    std::cout << std::endl << "======== Updating Weather Data ========" << std::endl;

    temperature = newTemperature;
    humidity = newHumidity;
    pressure = newPressure;

    MeasurementsChanged();
}
