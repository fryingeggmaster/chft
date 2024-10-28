#include <sma.h>

void RealTimeSMA::AddPrice(double price) {
    if (prices.size() == period) {
        prices.pop_front();
    }

    prices.push_back(price);
}

double RealTimeSMA::CalculateSMA() const {
    return std::accumulate(prices.begin(), prices.end(), 0.0) / prices.size();
}

uint32_t RealTimeSMA::GetPricesSize() const {
    return prices.size();
}