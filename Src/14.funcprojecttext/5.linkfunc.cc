
//关系仿函数
//实现关系对比

#include <iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>
//内建函数对象 _关系仿函数
//大于 greater
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};
void test01()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";

    }
    cout << endl;

    //降序
    //sort()默认是升序
    //sort(v.begin(),v.end(),MyCompare());
    //greater<int> 内建仿函数实现也是升序  和上面的仿函数是一样的
    sort(v.begin(),v.end(),greater<int>());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}
int main()
{
    
    test01();
    system("pause");
    return 0; 
}