#pragma once

/*
�ȽϺ���-�º���
- ģ�崫��
- ��ͬ�������ؼ��������
*/

class Compare
{
public:

	template<class T>
	T operator()(T a, T b)
	{
		return (a > b) ? 1 : ((a == b) ? 0 : -1); // �ü������׳�����
	}

};


//���������� ���ؼ���
//int operator-(Student& a, Student& b)
//{
//	return a.scores - b.scores;
//}
//
//int operator-(Man& a, Man& b)
//{
//	return a.money - b.money;
//}