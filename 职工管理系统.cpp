#include <iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

using namespace std;



//���Դ���
void test01()
{
    WorkerManager wm;
    Worker* w1 = new Employee(1, "����", 1);
    w1->showInfo();
    delete w1;

    Worker* w2 = new Manager(2, "����", 2);
    w2->showInfo();
    delete w2;

    Worker* w3 = new Boss(3, "����", 3);
    w3->showInfo();
    delete w3;
}

int main()
{
    

    //���Դ���
    //test01();

    WorkerManager wm;
    int Choice = 0;
    while (true)
    {
        //չʾ�˵�
        wm.show_Menu();
        cout << "����������ѡ��" << endl;
        cin >> Choice;
        cout << endl;
        switch(Choice)
        {
        case 0://�˳�ϵͳ
            wm.exit_System();
            break;

        case 1://���Ա��
            wm.Add_Emp();
            break;

        case 2://��ʾְ��
            wm.Show_Emp();
            break;

        case 3://ɾ��Ա��
            wm.Del_Emp();
            break;

        case 4://�޸�ְ��
            wm.Mod_Emp();

        case 5://����ְ��
            wm.Find_Emp();
            
        case 6://����ְ��
            wm.Sort_Emp();

        case 7://����ļ�
            wm.Clean_File();

        default:
            break;
        }
    }

    system("pause");
    return 0;
}
