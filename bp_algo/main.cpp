#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

MatrixXd sigmod(MatrixXd x) {
    auto a = 1 / (1 + Eigen::exp(- x.array()));
    return a.matrix();
}

int main() {
    auto m = MatrixXd::Random(2, 2);
//    MatrixXd m(2, 2);
//    m << 1, 2,
//            3, 4;
    std::cout << "m: " << m << std::endl;
    std::cout << "sigmoid(m): " << sigmod(m) << std::endl;
}
