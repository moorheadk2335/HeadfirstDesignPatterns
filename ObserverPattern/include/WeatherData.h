#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include "WeatherSubject.h"
#include "WeatherObserver.h"

#include <vector>

class WeatherData : public WeatherSubject {
    std::vector<WeatherObserver*> observers;
    std::vector<WeatherObserver*> pullObservers;

public:
    virtual void RegisterObserver(WeatherObserver *observer) override;
    virtual void RegisterPullObserver(WeatherObserver *observer) override;
    virtual void RemoveObserver(WeatherObserver *observer) override;
    virtual void NotifyObservers() override;

    void MeasurementsChanged();
    
    // Test function for exercising functionality
    void SetMeasurements(float temperature, float humidity, float pressure);
};

#endif //WEATHER_DATA_H