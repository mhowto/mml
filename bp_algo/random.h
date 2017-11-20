#ifndef MML_RANDOM_H
#define MML_RANDOM_H

#include <Eigen/Dense>
using Eigen::MatrixXd;


MatrixXd normal_random(double mean, double stddev, int row_size, int col_size);

#endif //MML_RANDOM_H
