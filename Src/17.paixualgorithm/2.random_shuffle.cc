
//洗牌 指定范围内的元素随机调整次序

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>
//常用排序算法 random_shuffle
void myPrint(int val)
{
    cout << val << " ";
}
void test01()
{
    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //利用洗牌 算法 打乱顺序
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{
    srand((unsigned int)time(NULL));
    
    test01();
    system("pause");
    return 0; 
}