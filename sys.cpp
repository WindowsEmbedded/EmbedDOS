/*
*�������ݣ�
*0.01��Codename "EXEUX"��ʼ����
*0.02:����ΪEmbeddedOS
*1.0:С���£�����ʱ����ɫ�ĳ�07
*2.0:ͼ�ν����ָ��
*3.0alpha1:ֻʣ��ͼ�ν���
*3.0alpha2:�����ɫ����
*3.0beta1:ɾ��Ӧ���̵꣬����������һ��������
*3.0prertm:Terminal
*3.0:�ļ���
*3.1alpha1:ϵͳĿ¼����ע�ͺ�ɾ�˵�ʺɽ
*3.1alpha1.1:����һ���ϴ���ŷ��ֵ�bug
*3.1alpha2:YunSystem
*/
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "OpenEXEUX.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop *///

int main(int argc, char **argv);

void startsys();
void MainScreen();
void About();
void Software(); //����鿴��
void Themes(); //��ɫ/�����л���
void Terminal(); //�ն�
void YunSystem(); //YunSystem

int Software1Downed = 0;

class SystemKernel {
		//ϵͳ�ں�ģ��
	protected:
		short RegHideCursor;
	public:
		int SystemBSOD(long int Code) {
			//��������
			switch (Code) {
				case 0x0: //�������� 0x0��δ֪����
					system("cls");
					cout << "System file is missing\nSTOP:0x000000";
					system("color 17");
					break;
				case 0x114514:
				default:
					system("cls");
					cout << "Unknown system error\nSTOP:0x114514";
					system("color 17");
					break;
			}

		}

};



void startsys() {
	//��������
	cout << "Starting...";
	Sleep(1000);
	MainScreen();
}

void MainScreen() {
	//������
	int a;
	int b;
	int c;
	system("cls");
	cout << "|-----------------------|\n";
	cout << "|EmbeddedDOS v3.1  [Esc]|\n";
	cout << "|-----------------------|\n";
	cout << "|[A]����                |\n";
	cout << "|[C]����б�            |\n";
	cout << "|                       |\n";
	cout << "|                       |\n";
	cout << "|                       |\n";
	cout << "|-----------------------|\n";
	while (true) {
		a = GetKeyState(65);
		b = GetKeyState(27);
		c = GetKeyState(67);
		if (a < 0) {
			About();
			break;
		}
		if (b < 0) {
			exit(0); //�˳�
		}
		if (c < 0) {
			Sleep(100); //����
			Software();
			break;
		}
	}
}

void About() {
	//����ϵͳ
	int a;
	system("cls");//����
	cout << "|-------------------------------|\n";
	cout << "|����                        [x]|\n";
	cout << "|-------------------------------|\n";
	cout << "|EmbeddedDOS v3                 |\n";
	cout << "|-------------------------------|\n";
	cout << "|�汾��3.10.16.0                |\n";
	cout << "|�������ݣ�                     |\n";
	cout << "|0.01:Codename'EXEUX'��ʼ����   |\n";
	cout << "|0.02:����ΪEmbeddedOS          |\n";
	cout << "|1.0:С���£�����ʱ����ɫ�ĳ�07 |\n";
	cout << "|2.0:ͼ�ν����ָ��             |\n";
	cout << "|3.0alpha1:ֻʣ��ͼ�ν���       |\n";
	cout << "|3.0alpha2:�����ɫ���ú�����   |\n";
	cout << "|3.0beta1:����������ɾ���̵�  |\n";
	cout << "|3.0rc1:                        |\n";
	cout << "|3.0prertm:Terminal             |\n";
	cout << "|3.0:�ļ���                     |\n";
	cout << "|3.1alpha1:ϵͳĿ¼             |\n";
	cout << "|3.1alpha1.1:�޸�bug            |\n";
	cout << "|3.1alpha2:YunSystem            |\n";
	cout << "|-------------------------------|\n";
	while (true) {
		a = GetKeyState(88);
		if (a < 0) {
			MainScreen();
			break;
		}
	}
}


void Software() {
	int a;
	int x;
	int b;
	int c;
	int d;
	SystemKernel syskrnl;
	system("cls");
	cout << "|----------------------------|\n";
	cout << "|����б�                 [x]|\n";
	cout << "|----------------------------|\n";
	cout << "|[A]��ɫ�л���               |\n";
	cout << "|[B]һ������                 |\n";
	cout << "|[D]Terminal                 |\n";
	cout << "|----------------------------|\n";
	while (true) {
		a = GetKeyState(65);
		x = GetKeyState(88);
		b = GetKeyState(66);
		c = GetKeyState(67);
		d = GetKeyState(68);
		if (x < 0) {
			MainScreen();
			break;
		}
		if (a < 0) {
			if (Software1Downed = 1) {
				Themes();
			} else {
				cout << "δ�������\n";
				Sleep(1000);
				Software();
			}
		}
		if (b < 0) {
			while (true) {
				syskrnl.SystemBSOD(0);
				break;

			}

		}
		if (d < 0) {
			Terminal();
			break;
		}
	}
}

void Themes() {
	//07ָǰ���ף���������ɫ
	//70ָǰ���ڣ���������ɫ
	//17ָǰ���ף���������ɫ
	int a;
	int b;
	int c;
	int x;
	system("cls");
	cout << "|-----------------------|\n";
	cout << "|��ɫ�л���        [x]  |\n";
	cout << "|-----------------------|\n";
	cout << "|[A]07 [B]70 [C]17      |\n";
	cout << "|-----------------------|\n";
	while (true) {
		a = GetKeyState(65);
		b = GetKeyState(66);
		c = GetKeyState(67);
		x = GetKeyState(88);
		if (a < 0) {
			system("color 07"); //����ɫ���07
		}
		if (b < 0) {
			system("color 70");
		}
		if (c < 0) {
			system("color 17");
		}
		if (x < 0) {
			Software();
			break;
		}
	}
}

void YunSystem() {
	system("cls");
	cout << "Please wait,YunSystem is starting...\n";
	Sleep(2000); //�ӳ�����
	goto mainscre;
mainscre:
	system("cls");
	cout << "|-----------------|\n";
	cout << "|                 |\n";
	cout << "|YunSystem������  |\n";
	cout << "|                 |\n";
	cout << "|-----------------|\n";
	pause("");
	Terminal();
}

void Terminal() {
	system("cls"); //����
	string Dir;
	string command1;
	string command2;
	string SubDir;
	Dir = "C:/";
	SubDir = "/";
	while (true) { //����ѭ������������break�˳�
		cout << ">>";
		cin >> command1 >> command2;
		if (command1 == "switch") { //switch:�л�
			if (command2 == "Network") {
				Dir = "Net:/";
				cout << "okay\n";
			} else if (command2 == "Local") {
				Dir = "C:/";
				cout << "okay\n";
			} else {
				cout << "Error\n";
				continue;
			}
			SubDir = "/";
		} else if (command1 == "dir") { //dir:���Ŀ¼������
			if (Dir == "Net:/") {
				if (SubDir == "/") {
					cout << "Directory:" << Dir << "\n";
					cout << "backup   <DIR>\n";
					cout << "YunSystem   <DIR>\n";
					cout << "README   TXT\n";
				} else if (SubDir == "/YunSystem") {
					cout << "Directory:" << Dir << SubDir << "\n";
					cout << "png                  <DIR>\n";
					cout << "Script               <DIR>\n";
					cout << "main                 HTM\n";
					cout << "main                 JS\n";
					cout << "main                 CSS\n";

				} else if (SubDir == "/backup") {
					cout << "Directory:" << Dir << SubDir << "\n";
					cout << "System.old      <DIR>\n";
					cout << "System.old.001  <DIR>\n";
					cout << "img             <DIR>\n";
					cout << "README            TXT\n";
				}
			} else if (Dir == "C:/") {
				cout << "Directory:" << Dir << "\n";
				cout << "DOS      <DIR>\n";
				cout << "README   TXT\n";
			}
			continue;
		} else if (command1 == "run") {
			if (command2 == "README.TXT") {
				if (Dir == "C:/") {
					cout << "C://README.TXT\n";
					cout << "https://gitee.com/EmbeddedGitee/embedded-dos/blob/master/README.md\n";
					cout << "--------------------------------------------------------------------\n";
					continue;
				} else if (Dir == "Net:/" && SubDir == "/") {
					cout << "Net://README.TXT\n";
					cout << "���ڰ汾Ӧ�û���һ��αbrowser��������������YunSystem�ļ��е���ϵͳ(��ʵ��)\n";
					continue;
				} else if (Dir == "Net:/" && SubDir == "/backup") {
					cout << "Net://backup/README.TXT\n";
					cout << "������ļ���Ŀǰ�޷�����\n";
					continue;
				}
			} else if (command2 == "main.htm" || command2 == "main.HTM") {
				if (Dir == "Net:/" && SubDir == "/YunSystem") {
					YunSystem();
					break;
				}
			}
		} else if (command1 == "exit") {//exit:�˳�
			Software();
			break; //�������Ҫ�ɲ�Ҫ���������������з���ֵ
		} else if (command1 == "cd") {
			if (command2 == "/") {
				cout << SubDir << "\n";
				continue;
			} else if (Dir == "Net:/" && command2 == "YunSystem") {
				if ( SubDir == "/") {
					SubDir = "/YunSystem";
				}
			} else if (Dir == "Net:/" && command2 == "backup") {
				if (SubDir == "/") {
					SubDir = "/backup";
				}
			} else if (command2 == "..") {
				if (SubDir == "/YunSystem") {
					SubDir = "/";
				}
			} else if (Dir == "C:/" && command2 == "DOS") {
				cout << "����Ȩ���ʴ��ļ���\n"; //
			}
		} else if (command1 == "browser") {
			if (command2 == "www.search.com") {
				cout << "�����ڴ�\n";
			} else if (command2 == "yun.system.com") {
				YunSystem();
				break;
			}
		}
	}
}



int main(int argc, char **argv) {
	system("title Embedded DOS ");
	startsys();
	return 0;
}
