#include "Factorial.h"

TEST(FactorialTest, HandlesZeroInput) {
 int result = Factorial(0);
 ASSERT_EQ(result, 1); //Assertion
}
