#ifndef STATISTICS_DISPLAY_H
#define STATISTICS_DISPLAY_H

#include "WeatherObserver.h"
#include "WeatherData.h"
#include "DisplayElement.h"

#include <algorithm>
#include <iostream>

#define UNUSED 0.0f

class StatisticsDisplay : public WeatherObserver, public DisplayElement {
    float maxTemp = 0.0f;
	float minTemp = 200;
	float tempSum= 0.0f;
	int numReadings = 0;

    WeatherData &weatherData;

public:
    StatisticsDisplay(WeatherData &weatherData) : weatherData(weatherData) {
        // weatherData.RegisterObserver(this);
        weatherData.RegisterPullObserver(this);
    };

    virtual void Update(float temperature, float, float) override {
        numReadings++;

        tempSum += temperature;
        maxTemp = std::max(temperature, maxTemp);
        minTemp = std::min(temperature, minTemp);

        Display();
    };

    virtual void UpdateReady() override {
        Update(weatherData.GetTemperature(), UNUSED, UNUSED);
    };

    virtual void Display() override {
        std::cout << "Avg/Max/Min temperature = " << (tempSum / numReadings)
			<< "/" << maxTemp << "/" << minTemp << std::endl;
    };
};

#endif //STATISTICS_DISPLAY_H