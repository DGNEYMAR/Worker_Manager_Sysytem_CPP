#include <iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

using namespace std;



//测试代码
void test01()
{
    WorkerManager wm;
    Worker* w1 = new Employee(1, "张三", 1);
    w1->showInfo();
    delete w1;

    Worker* w2 = new Manager(2, "张三", 2);
    w2->showInfo();
    delete w2;

    Worker* w3 = new Boss(3, "张三", 3);
    w3->showInfo();
    delete w3;
}

int main()
{
    

    //测试代码
    //test01();

    WorkerManager wm;
    int Choice = 0;
    while (true)
    {
        //展示菜单
        wm.show_Menu();
        cout << "请输入您的选择：" << endl;
        cin >> Choice;
        cout << endl;
        switch(Choice)
        {
        case 0://退出系统
            wm.exit_System();
            break;

        case 1://添加员工
            wm.Add_Emp();
            break;

        case 2://显示职工
            wm.Show_Emp();
            break;

        case 3://删除员工
            wm.Del_Emp();
            break;

        case 4://修改职工
            wm.Mod_Emp();

        case 5://查找职工
            wm.Find_Emp();
            
        case 6://排序职工
            wm.Sort_Emp();

        case 7://清空文件
            wm.Clean_File();

        default:
            break;
        }
    }

    system("pause");
    return 0;
}
