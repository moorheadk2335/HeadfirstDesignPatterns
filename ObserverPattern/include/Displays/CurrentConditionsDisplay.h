#ifndef CURRENT_CONDITOINS_DISPLAY_H
#define CURRENT_CONDITOINS_DISPLAY_H

#include "WeatherObserver.h"
#include "WeatherData.h"
#include "DisplayElement.h"

#include <iostream>

#define UNUSED 0.0f

class CurrentConditionsDisplay : public WeatherObserver, public DisplayElement {
    float temperature;
    float humidity;

    WeatherData &weatherData;

public:
    CurrentConditionsDisplay(WeatherData &weatherData) : weatherData(weatherData) {
        // weatherData.RegisterObserver(this);
        weatherData.RegisterPullObserver(this);
    };

    virtual void Update(float newTemperature, float newHumidity, float) override {
        temperature = newTemperature;
        humidity = newHumidity;

        Display();
    };

    virtual void UpdateReady() override {
        Update(weatherData.GetTemperature(), weatherData.GetHumidity(), UNUSED);
    };

    virtual void Display() override {
        std::cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << std::endl;
    };
};

#endif //CURRENT_CONDITOINS_DISPLAY_H