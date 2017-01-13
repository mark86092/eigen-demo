#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;
using namespace Eigen;

#define SIZE 4

int main() {
    MatrixXd P(3, 3), Q(3, 3);

    P << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    Q << 1, 0, 0, 0, 1, 0, 0, 1, 1;

    cout << P << endl;
    cout << Q << endl;
    cout << P * Q << endl;
}
