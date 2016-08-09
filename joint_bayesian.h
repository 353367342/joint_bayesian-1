#include<Eigen/Dense>
#include<iostream>
using namespace Eigen;



class JointBayesian{
public:
	Matrix<double, Dynamic, Dynamic>A, G;//�洢ѵ��ģ��
	Matrix<double, 1, Dynamic>ratio;//�洢���Ա���
	JointBayesian(){};
	void jointbayesian_train(Matrix<double, Dynamic, Dynamic>trainset, Matrix<int, Dynamic, 1>trainlabel);
	void jointbayesian_test(Matrix<double, Dynamic, Dynamic>testset, Matrix<int, Dynamic, 1>testlabel, double threshold_start, double threshold_end, double step);
};