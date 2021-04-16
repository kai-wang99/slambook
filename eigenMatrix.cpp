#include <iostream>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Dense>

int main( int argc, char** argv )
{
    Eigen::Matrix<float, 2, 3> matrix_23;
    Eigen::Vector3d v_3d;
    Eigen::Matrix<float,3,1> vd_3d;
    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Ones();
    Eigen::MatrixXd matrix_x;

    matrix_23 << 1, 2, 3, 4, 5, 6;
    cout << matrix_23 << endl;

    v_3d << 3, 2, 1;
    vd_3d << 4,5,6;

    Eigen::Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
    cout << result << endl;

    Eigen::Matrix<float, 2, 1> result2 = matrix_23 * vd_3d;
    cout << result2 << endl;

    matrix_33 = Eigen::Matrix3d::Random();      
    cout << matrix_33 << endl << endl;
    cout << matrix_33.transpose() << endl; 
    cout << matrix_33.sum() << endl; 
    cout << matrix_33.trace() << endl; 
    cout << 10*matrix_33 << endl; 
    cout << matrix_33.inverse() << endl;
    cout << matrix_33.determinant() << endl; 

    cout <<"hello world"  << endl;

    return 0;
}
