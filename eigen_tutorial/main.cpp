#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main() {
    MatrixXd m1(3, 1);
    m1(0, 0) = 3;
    m1(1, 0) = 2.5;
    m1(2, 0) = -1;
    std::cout << m1 << std::endl;

    MatrixXd m2(1, 3);
    m2(0, 0) = 3;
    m2(0, 1) = 2.5;
    m2(0, 2) = -1;
    std::cout << m2 << std::endl;
}