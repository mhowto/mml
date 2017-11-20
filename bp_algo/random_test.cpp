#include "random.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(RandomTest, NormalDistribution) {
    MatrixXd m = normal_random(0, 1.0, 4, 5);
    std::cout << "normal_dist:" << m << std::endl;
}
