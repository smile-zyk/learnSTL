#include<iostream>
#include<algorithm>
#include<ctime>
#include<vector>
#include<list>
#include<queue>
#include<set>
#include<map>
using namespace std;
template<class T>
void traversal_all(T& val)
{
	for (auto vp = val.begin(); vp != val.end(); vp++)
		cout << *vp << endl;
}

int main()
{
	//����vector��ʼ������ռ��ֱ�ӳ�ʼ���ı���
	vector<int> vec_spc1(3, 100);
	vector<int> vec_spc2(3);
	vector<int> vec_nor;
	vec_spc1.push_back(12);
	vec_spc2.push_back(12);
	vec_nor.push_back(12);
	traversal_all(vec_spc1);
	cout << "---------------------" << endl;
	traversal_all(vec_spc2);
	cout << "---------------------" << endl;
	traversal_all(vec_nor);
	//����vectorɾ��β��Ԫ�غ��м�Ԫ�ص��ٶ�
	vector<int> vec_rm_tail(10000000, 10);
	time_t start = clock();
	vec_rm_tail.erase(vec_rm_tail.begin() + 5);
	cout << "ɾ���м�Ԫ��ʱ��Ϊ" << clock() - start << endl;
	start = clock();
	vec_rm_tail.pop_back();
	cout << "ɾ��β��Ԫ��ʱ��Ϊ" << clock() - start << endl;
	//����queue��ʹ��
	//queue<int> qu_test;
	//int a;
	//while (cin >> a)
	//{
	//	qu_test.push(a);
	//}
	//while (!qu_test.empty())
	//{
	//	cout <<qu_test.front();
	//	qu_test.pop();
	//}
	//��������ʹ��
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vector<int>::iterator p;
	vector<int>::reverse_iterator rp;
	cout << vec.rbegin()[2] << endl;
	for (p=vec.begin(); p != vec.end(); p++)
	{
		cout << *p << " " << endl;
	}
	cout << "---------------------" << endl;
	for (p=vec.begin(); p < vec.end(); p++)
	{
		cout << *p << " " << endl;
	}
	cout << "---------------------" << endl;
	for (rp = vec.rbegin(); rp != vec.rend(); rp++)
	{
		cout << *rp << " " << endl;
	}
	
	cout << "---------------------" << endl;
	auto it=find(vec.begin(),vec.end(),8);
	if (it == vec.end())cout << "û���ҵ���" << endl;
	else cout << "�ҵ���" << endl;
	//list<int> l;
	//l.push_back(1);
	//l.push_back(2);
	//l.push_back(3);
	//l.push_back(4);
	//l.push_back(5);
	//for (auto p = l.begin(); p < l.end(); p++)����list�͹�������ʹ�õ���˫����������������ȡ������������ʹ��<��
	//{
	//	cout << *p << " " << endl;
	//}
}