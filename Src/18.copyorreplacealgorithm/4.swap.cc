
//呼唤两个容器的元素 （同种类型的容器）

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void myPrint(int val)
{
    cout << val << " ";
}
//常用 swap
void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i+1);
    }
    cout << "交换前: " << endl;
    for_each(v1.begin(),v1.end(),myPrint);
    cout << endl;
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;


    cout << "===========================" << endl;
    cout << "交换后: " << endl;

    swap(v1,v2);
    for_each(v1.begin(),v1.end(),myPrint);
    cout << endl;
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}