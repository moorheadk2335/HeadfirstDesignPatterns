#ifndef FORECAST_DISPLAY_H
#define FORECAST_DISPLAY_H

#include "WeatherObserver.h"
#include "WeatherData.h"
#include "DisplayElement.h"

#include <iostream>

#define UNUSED 0.0f

class ForecastDisplay : public WeatherObserver, public DisplayElement {
    float currentPressure = 0.0f, lastPressure = 0.0f;
    WeatherData &weatherData;

public:
    ForecastDisplay(WeatherData &weatherData) : weatherData(weatherData) {
        weatherData.RegisterObserver(this);
    };

    virtual void Update(float, float, float newPressure) override {
        lastPressure = currentPressure;
        currentPressure = newPressure;

        Display();
    };

    virtual void UpdateReady() override {
        Update(UNUSED, UNUSED, weatherData.GetPressure());
    };

    virtual void Display() override {
        std::cout << "Forecast: ";
        
		if (currentPressure > lastPressure) {
			std::cout << "Improving weather on the way!";
		} else if (currentPressure == lastPressure) {
			std::cout << "More of the same";
		} else if (currentPressure < lastPressure) {
			std::cout << "Watch out for cooler, rainy weather";
		}

        std::cout << std::endl;
    };
};

#endif //FORECAST_DISPLAY_H