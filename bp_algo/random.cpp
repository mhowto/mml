#include "random.h"
#include <random>

MatrixXd normal_random(double mean, double stddev, int row_size, int col_size) {
    std::random_device rd;
    std::mt19937 gen(rd());

    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<> d(mean,stddev);

    std::vector<double> randoms;
    for (int i = 0; i < row_size * col_size; ++i) {
        randoms.push_back(d(gen));
    }

    Eigen::MatrixXd m = Eigen::Map<Eigen::MatrixXd>(&randoms[0], row_size, col_size);
    return m;
}
