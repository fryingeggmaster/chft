// order management system (OMS)
/*
The OMS is responsible for the management of orders from
inception through to completion. It tracks the status of
orders, manages the order lifecycle, and ensures
compliance with regulatory requirements.
*/

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <order_type.h>

class Order {
public:
    Order(std::string symbol, double quantity, OrderType type):
    symbol(symbol), quantity(quantity), type(type) {}

    std::string GetSymbol() const;
    double GetQuantity() const;
    OrderType GetType() const;

private:
    std::string symbol;
    double quantity;
    OrderType type;
};

class OrderManagementSystem {
public:
    void AddOrder(const Order& order);
    void ProcessOrders();
    std::vector<Order> GetOrders() const;

private:
    std::vector<Order> orders;
};