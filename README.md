�����ļ���jointbayesian.h,jointbayesian.cpp

ʵ����һ��JointBayesian�࣬���з�װ����������

1. void jointbayesian_train(Matrix<double, Dynamic, Dynamic>trainset, Matrix<int, Dynamic, 1>trainlabel);
���ܣ�����ѵ��ģ��
������trainset��
							ѵ�����ݼ�����ÿ��Ϊһ��ͼƬ��
			trainlabel��
			        ѵ������ǩ��ÿ��ͼƬ�����ĸ��ˣ�
			      
2.void jointbayesian_test(Matrix<double, Dynamic, Dynamic>testset, Matrix<int, Dynamic, 1>testlabel, double threshold_start, double threshold_end, double step);

���ܣ�����ѵ��ģ�͵�����
������testset��
							���Լ�����ÿ��Ϊһ��ͼƬ��ÿ����ͼƬΪһ�ԣ�
			label��
			      ���Լ���ǩ��1��ʾһ��ͼƬΪͬһ�ˣ�0��ʾһ��ͼƬΪ��ͬ���ˣ�
			threshold_start��
			      ��ֵ��ʼֵ
			threshold_end��
			      ��ֵ����ֵ
			 step��
			      ��ֵ������С��