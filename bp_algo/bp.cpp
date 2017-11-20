#include "bp.h"
#include "random.h"
#include <cmath>
#include <cassert>

void NeuralNetwork::fit(MatrixXd x, MatrixXd y) {
    assert(x.rows() == y.rows());

    auto n_records = x.rows();
    auto n_features = x.cols();

    // init weights
    double stddev = 1.0 / std::pow(n_features, 0.05);
    auto weights_input_hidden = normal_random(0, stddev, n_features, this->_n_hidden);
    auto weights_hidden_output = normal_random(0, stddev, 1, n_features);

    for (unsigned int i = 0; i < this->_epochs; i++) {
        auto del_w_input_hidden = MatrixXd::Zero(n_features, this->_n_hidden);
        auto del_w_hidden_output = MatrixXd::Zero(1, n_features);

        for (size_t i = 0; i < n_records; ++i) {
//            x.data();
//            for (size_t j = 0; j < nRows; ++j) {
//            }
        }
    }
}

MatrixXd NeuralNetwork::predict(MatrixXd x) {
    return Eigen::MatrixXd();
}
