
//pair对组创建
//成对出现的数据，利用对组可以返回两个数据
//pair<type,type> p(value1,value2);
//pair<type,type> p = make_pair(value1,value2);

#include <iostream>
using namespace std;
#include <string>

//pair对组的创建
void test01()
{
    //第一种方式创建
    pair<string,int>p("Tom",20);

    cout << "姓名: " << p.first << "年龄: " << p.second << endl;

    //第二种方式
    pair<string,int>p2 = make_pair("Jerry",30);
    cout << "姓名: " << p2.first << "年龄: " << p2.second << endl;

}
int main()
{
    
    test01();
    system("pause");
    return 0; 
}