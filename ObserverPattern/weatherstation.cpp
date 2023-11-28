#include <iostream>

#include "WeatherData.h"

#include "CurrentConditionsDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"
#include "HeatIndexDisplay.h"

int main() {
    WeatherData weatherData;

    CurrentConditionsDisplay currentConditionsDisplay(weatherData);
    ForecastDisplay forecastDisplay(weatherData);
    StatisticsDisplay statisticsDisplay(weatherData);
    HeatIndexDisplay heatIndexDisplay(weatherData);

    weatherData.SetMeasurements(80, 65, 30.4f);
    weatherData.SetMeasurements(82, 70, 29.2f);
    weatherData.SetMeasurements(78, 90, 29.2f);
}
