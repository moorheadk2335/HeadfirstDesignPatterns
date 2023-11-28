#ifndef SUBJECT_H
#define SUBJECT_H

#include "WeatherObserver.h"

class WeatherSubject {
protected:
    float temperature = 0.0f;
    float humidity = 0.0f;
    float pressure = 0.0f;

public:
    virtual void RegisterObserver(WeatherObserver *observer) = 0;
    virtual void RegisterPullObserver(WeatherObserver *observer) = 0;
    virtual void RemoveObserver(WeatherObserver *observer) = 0;
    virtual void NotifyObservers() = 0;

    float GetTemperature() {
        return temperature;
    };

    float GetHumidity() {
        return humidity;
    };

    float GetPressure() {
        return pressure;
    };
};

#endif //SUBJECT_H
