#ifndef MML_BASE_H
#define MML_BASE_H

#include <Eigen/Dense>
using Eigen::MatrixXd;

class Base {
public:
    Base() {};
//    virtual ~Base() = 0;

    virtual void fit(MatrixXd x, MatrixXd y) = 0;
    virtual MatrixXd predict(MatrixXd x) = 0;
};

#endif //MML_BASE_H


class NeuralNetwork: Base {
public:
    NeuralNetwork(int n_hidden, int epochs, double learn_rate): _n_hidden(n_hidden), _epochs(epochs), _learn_rate(learn_rate) {}
    void fit(MatrixXd x, MatrixXd y);
    MatrixXd predict(MatrixXd x);

private:
    unsigned int _n_hidden;
    unsigned int _epochs;
    double _learn_rate;
};
