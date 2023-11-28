#ifndef HEAT_INDEX_DISPLAY_H
#define HEAT_INDEX_DISPLAY_H

#include "WeatherObserver.h"
#include "WeatherData.h"
#include "DisplayElement.h"

#include <iostream>

#define UNUSED 0.0f

class HeatIndexDisplay : public WeatherObserver, public DisplayElement {
    float ComputeHeatIndex(float t, float rh) {
        float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) +
            (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) +
            (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
            (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *  
            (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
            (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +     
            0.000000000843296 * (t * t * rh * rh * rh)) -
            (0.0000000000481975 * (t * t * t * rh * rh * rh)));

        return index;
    }

    float heatIndex = 0.0f;

    WeatherData &weatherData;

public:
    HeatIndexDisplay(WeatherData &weatherData) : weatherData(weatherData) { 
        weatherData.RegisterObserver(this);
    };

    virtual void Update(float temperature, float humidity, float) override {
        heatIndex = ComputeHeatIndex(temperature, humidity);

        Display();
    };

    virtual void UpdateReady() override {
        Update(weatherData.GetTemperature(), weatherData.GetHumidity(), UNUSED);
    }

    virtual void Display() override {
        std::cout << "Heat index is " << heatIndex << std::endl;
    };
};

    // private 

#endif //HEAT_INDEX_DISPLAY_H