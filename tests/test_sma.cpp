#define BOOST_TEST_MODULE TESTSMA
#include <boost/test/included/unit_test.hpp>
#include <sma.h>

BOOST_AUTO_TEST_CASE( your_test_case ) {
    std::vector<int> a{1, 2};
    std::vector<int> b{1, 2};
    BOOST_TEST( a == b );
}

BOOST_AUTO_TEST_CASE(GetPricesSize) {
    RealTimeSMA sma(5);
    sma.AddPrice(50);
    sma.AddPrice(51);
    sma.AddPrice(52);
    sma.AddPrice(53);
    sma.AddPrice(54);
    BOOST_TEST(sma.GetPricesSize() == 5);
}

BOOST_AUTO_TEST_CASE(CalculateSMA) {
    RealTimeSMA sma(5);
    sma.AddPrice(50);
    sma.AddPrice(51);
    sma.AddPrice(52);
    sma.AddPrice(53);
    sma.AddPrice(54);
    
    // Calculate the expected SMA
    double expectedSMA = (50 + 51 + 52 + 53 + 54) / 5.0;
    
    // Test the calculateSMA function
    BOOST_TEST(sma.CalculateSMA() == expectedSMA);
}