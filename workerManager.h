#pragma once
#include<iostream>
#include<fstream>
#include"worker.h"

#define FILENAME "empFile.txt"



using namespace std;

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exit_System();

	//���ְ��
	void Add_Emp();

	//���浽�ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ���ڣ�������ڷ���ְ�����������е�λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;






	//��������
	~WorkerManager();


};
