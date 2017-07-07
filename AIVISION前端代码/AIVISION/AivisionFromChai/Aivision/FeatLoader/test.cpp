/*
���ַ�ʽ�洢����ֵ��
1. �����ļ�Ŀ¼������ֵ�ļ�Ŀ¼��������ֵ���浽����ֵ�ļ���
2. �����ļ��У���ȡ���е�����ֵ������������ֵ�ļ���

����õ�����ֵ�ļ�����ֱ��ʹ�ã���Ϊ����ʶ�������
*/
#include <iostream>
#include <fstream>
#include "seetaface.h"
using namespace cv;
using namespace std;

int main(int, char*[])
{
	// ��ʼ������������ѵ���õ�ģ��
	Seetaface sf = Seetaface(
		"model/seeta_fd_frontal_v1.0.bin",
		"model/seeta_fa_v1.0.bin",
		"model/seeta_fr_v1.0.bin"
	);

	while (true)
	{
		cout << "ѡ�񱣴淽ʽ��\n";
		cout << "1. �� 1 ��ȡ����ͼƬ������ֵ�����浽�ļ�\n";
		cout << "2. �� 2 ��ȡ����Ŀ¼������ֵ�����浽�ļ�\n";
		char c; 
		cin >> c;
		switch (c)
		{
		case '1':
		{
			cout << "����ͼƬ·��\n";
			string file;
			cin >> file;
			Feature f = SingleFeatLoader::spawnFeature(sf, file);
			cout << "���뱣����ļ�·��\n";
			string modelFile;
			cin >> modelFile; 
			cout << "�洢��...\n";
			SingleFeatLoader::saveModelToFile(f, modelFile);
			break;
		}
		case '2':
			cout << "����Ŀ¼\n";
			string dir;
			cin >> dir; 
			cout << "���뱣����ļ�·��\n";
			string modelFile;
			cin >> modelFile;
			cout << "�洢��...\n";
			SingleFeatLoader::loadDirToFile(sf, dir, modelFile);
			break;
		}
	}

	return 0;
}