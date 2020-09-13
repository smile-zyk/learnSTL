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
	//测试vector初始化分配空间和直接初始化的表现
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
	//测试vector删除尾部元素和中间元素的速度
	vector<int> vec_rm_tail(10000000, 10);
	time_t start = clock();
	vec_rm_tail.erase(vec_rm_tail.begin() + 5);
	cout << "删除中间元素时间为" << clock() - start << endl;
	start = clock();
	vec_rm_tail.pop_back();
	cout << "删除尾部元素时间为" << clock() - start << endl;
	//测试queue的使用
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
	//迭代器的使用
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
	if (it == vec.end())cout << "没有找到！" << endl;
	else cout << "找到了" << endl;
	//list<int> l;
	//l.push_back(1);
	//l.push_back(2);
	//l.push_back(3);
	//l.push_back(4);
	//l.push_back(5);
	//for (auto p = l.begin(); p < l.end(); p++)错误list和关联容器使用的是双向迭代器而非随机存取迭代器，不能使用<。
	//{
	//	cout << *p << " " << endl;
	//}
}