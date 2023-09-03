
//push(elem);//向栈顶添加元素
//pop();//从栈顶移除第一个元素
//top(); //返回栈顶元素
//size();//大小
//empty();//判断是否为空

#include <iostream>
using namespace std;
#include <stack>

void test01()
{
    //特点: 符合先进后出数据结构
    stack<int> s;

    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "栈的大小: " << s.size() << endl;
    //只要栈不为空，查看栈顶，并且执行出栈操作
    while(!s.empty())
    {
        //查看栈顶元素
        cout << "栈顶元素为: " << s.top() << endl;

        //出栈
        s.pop();
    }
    cout << "栈的大小: " << s.size() << endl;
}
int main()
{
    
    test01();
    system("pause");
    return 0; 
} 