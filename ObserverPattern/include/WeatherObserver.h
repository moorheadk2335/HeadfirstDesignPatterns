#ifndef OBSERVER_H
#define OBSERVER_H

class WeatherObserver {
protected:
public:
    virtual void Update(float temperature, float humidity, float pressure) = 0;
    virtual void UpdateReady() = 0;
};

#endif //OBSERVER_H