
//string中单个字符存取方式有两种

#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string str = "hello";

    cout << "str = " << str << endl;

    //把每个字母存取
    //1、通过[]访问单个字符
    for(int i = 0; i< str.size(); i++)
    {
        cout << str[i] << " ";
        
    }
    cout << endl;

    //2、通过at方式访问单个字符
    for(int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;

    //修改单个字符
    str[0] = 'x';

    cout << "str = " << str << endl;


    str.at(1) = 'v';
    cout << "str = " << str << endl;
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}