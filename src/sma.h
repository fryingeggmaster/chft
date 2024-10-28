// SMA - simple moving average
// SMA is a fundamental technique used to smooth out price data over a specific time frame,
// providing insights into market trends.
#pragma once

#include <iostream>
#include <deque>
#include <numeric>
#include <cstdint>

class RealTimeSMA {
public:
    explicit RealTimeSMA(int period): period(period) {}

    void AddPrice(double price);
    double CalculateSMA() const;

public:
    uint32_t GetPricesSize() const;

private:
    std::deque<double> prices;
    int period;
};