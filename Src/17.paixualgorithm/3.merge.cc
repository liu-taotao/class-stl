
//两个容器元素合并，并存储到另一个容器中

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void myPrint(int val)
{
    cout << val << " ";
}
//常用排序算法
void test01()
{
    //两个容器必须有序，且相同升序或降序
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i+1);
    }
    //目标容器
    vector<int> vTarget;
    //一定要记得指定空间
    vTarget.resize(v1.size() + v2.size());
    

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    
    for_each(vTarget.begin(),vTarget.end(),myPrint);
    cout << endl;
}


int main()
{
    
    test01();
    system("pause");
    return 0; 
}