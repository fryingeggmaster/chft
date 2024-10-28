#include <oms.h>

std::string Order::GetSymbol() const {
    return symbol;
}

double Order::GetQuantity() const {
    return quantity;
}

OrderType Order::GetType() const {
    return type;
}

void OrderManagementSystem::AddOrder(const Order& order) {
    orders.push_back(order);
}

void OrderManagementSystem::ProcessOrders() {
    for (const auto& order: orders) {
        std::cout << "Processing order: " << order.GetSymbol() 
        << ", Quantity: " << order.GetQuantity()
        << ", Type: " << order.GetType()
        << std::endl;

        // Orders would be sent to EMS for execution here.
    }
}

std::vector<Order> OrderManagementSystem::GetOrders() const {
    return orders;
}
