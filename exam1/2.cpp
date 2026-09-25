#include <iostream>
#include <cstdlib>
using namespace std;

//定义学生结构体
struct Student
{
    char name[50];
    int id;
    float score;
};

//输入函数，传结构体指针，使用->访问成员
void input(struct Student *p)
{
    cout << "请输入姓名：";
    cin >> p->name;
    cout << "请输入学号：";
    cin >> p->id;
    cout << "请输入成绩：";
    cin >> p->score;
}

//输出函数，传结构体指针
void display(struct Student *p)
{
    cout << "姓名：" << p->name << endl;
    cout << "学号：" << p->id << endl;
    cout << "成绩：" << p->score << endl;
}

int main()
{
    //动态创建结构体变量
    struct Student *stu = (struct Student *)malloc(sizeof(struct Student));

    input(stu);
    display(stu);

    free(stu);  //释放动态内存
    return 0;
}