#pragma once

#include <ostream>

enum class OrderType {
    Buy,
    Sell,
};

inline std::ostream& operator<<(std::ostream& os, const OrderType& type) {
    switch (type) {
        case OrderType::Buy:
            os << "Buy";
            break;
        case OrderType::Sell:
            os << "Sell";
            break;
    }
    return os;
}