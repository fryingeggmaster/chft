#define BOOST_TEST_MODULE TESTSMA
#include <boost/test/included/unit_test.hpp>
#include <oms.h>

BOOST_AUTO_TEST_CASE(AddOrder) {
    OrderManagementSystem oms;

    oms.AddOrder(Order("AAPL", 100, OrderType::Buy));
    oms.AddOrder(Order("MSFT", 150, OrderType::Sell));

    BOOST_TEST(oms.GetOrders().size() == 2);
}