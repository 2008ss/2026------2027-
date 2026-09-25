#include <iostream>
#include <string>
using namespace std;

//定义Car类
class Car
{
private:
    string color;
    int number;
public:
    //构造函数，初始化颜色、车牌号
    Car(string c, int n)
    {
        color = c;
        number = n;
    }

    //析构函数
    ~Car()
    {

    }

    //输出车辆信息
    void display()
    {
        cout << "车辆颜色：" << color << endl;
        cout << "车牌号码：" << number << endl;
    }
};

int main()
{
    //创建两个车辆对象
    Car car1("红色", 8888);
    Car car2("蓝色", 6666);

    //输出信息
    car1.display();
    car2.display();

    return 0;
}