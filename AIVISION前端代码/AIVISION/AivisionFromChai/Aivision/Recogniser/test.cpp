/*
��������Feature,�Ƚϲ��������ƶȣ�0~1��
*/
#include "seetaface.h"
#include <iostream>
using namespace std;

int main(int, char*[])
{
	// ��ʼ������������ѵ���õ�ģ��
	Seetaface sf = Seetaface(
		"model/seeta_fd_frontal_v1.0.bin",
		"model/seeta_fa_v1.0.bin",
		"model/seeta_fr_v1.0.bin"
	);

	Feature f1 = SingleFeatLoader::spawnFeature(sf, "res/6.jpg");
	Feature f2 = SingleFeatLoader::spawnFeature(sf, "res/7.jpg");
	cout << FaceRecognizer::similarity(sf, f1, f2);
	getchar();
	return 0;
}