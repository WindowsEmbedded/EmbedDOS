/*
*更新内容：
*0.01：Codename "EXEUX"开始开发
*0.02:改名为EmbeddedOS
*1.0:小更新，启动时把配色改成07
*2.0:图形界面和指令
*3.0alpha1:只剩下图形界面
*3.0alpha2:添加配色设置
*3.0beta1:删除应用商店，添加新软件：一键蓝屏器
*3.0prertm:Terminal
*3.0:文件夹
*3.1alpha1:系统目录，加注释和删了点屎山
*3.1alpha1.1:修了一下上传后才发现的bug
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
void Software(); //软件查看器
void Themes(); //配色/主题切换器
void Terminal(); //终端
void YunSystem(); //YunSystem

int Software1Downed = 0;

class SystemKernel {
		//系统内核模块
	protected:
		short RegHideCursor;
	public:
		int SystemBSOD(long int Code) {
			//蓝屏函数
			switch (Code) {
				case 0x0: //蓝屏代码 0x0：未知错误
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
	//启动界面
	cout << "Starting...";
	Sleep(1000);
	MainScreen();
}

void MainScreen() {
	//主界面
	int a;
	int b;
	int c;
	system("cls");
	cout << "|-----------------------|\n";
	cout << "|EmbeddedDOS v3.1  [Esc]|\n";
	cout << "|-----------------------|\n";
	cout << "|[A]关于                |\n";
	cout << "|[C]软件列表            |\n";
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
			exit(0); //退出
		}
		if (c < 0) {
			Sleep(100); //缓冲
			Software();
			break;
		}
	}
}

void About() {
	//关于系统
	int a;
	system("cls");//清屏
	cout << "|-------------------------------|\n";
	cout << "|关于                        [x]|\n";
	cout << "|-------------------------------|\n";
	cout << "|EmbeddedDOS v3                 |\n";
	cout << "|-------------------------------|\n";
	cout << "|版本：3.10.16.0                |\n";
	cout << "|更新内容：                     |\n";
	cout << "|0.01:Codename'EXEUX'开始开发   |\n";
	cout << "|0.02:改名为EmbeddedOS          |\n";
	cout << "|1.0:小更新，启动时把配色改成07 |\n";
	cout << "|2.0:图形界面和指令             |\n";
	cout << "|3.0alpha1:只剩下图形界面       |\n";
	cout << "|3.0alpha2:添加配色设置和其他   |\n";
	cout << "|3.0beta1:添加新软件和删除商店  |\n";
	cout << "|3.0rc1:                        |\n";
	cout << "|3.0prertm:Terminal             |\n";
	cout << "|3.0:文件夹                     |\n";
	cout << "|3.1alpha1:系统目录             |\n";
	cout << "|3.1alpha1.1:修复bug            |\n";
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
	cout << "|软件列表                 [x]|\n";
	cout << "|----------------------------|\n";
	cout << "|[A]配色切换器               |\n";
	cout << "|[B]一键蓝屏                 |\n";
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
				cout << "未下载软件\n";
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
	//07指前景白，背景黑配色
	//70指前景黑，背景白配色
	//17指前景白，背景蓝配色
	int a;
	int b;
	int c;
	int x;
	system("cls");
	cout << "|-----------------------|\n";
	cout << "|配色切换器        [x]  |\n";
	cout << "|-----------------------|\n";
	cout << "|[A]07 [B]70 [C]17      |\n";
	cout << "|-----------------------|\n";
	while (true) {
		a = GetKeyState(65);
		b = GetKeyState(66);
		c = GetKeyState(67);
		x = GetKeyState(88);
		if (a < 0) {
			system("color 07"); //将配色设成07
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
	Sleep(2000); //延迟两秒
	goto mainscre;
mainscre:
	system("cls");
	cout << "|-----------------|\n";
	cout << "|                 |\n";
	cout << "|YunSystem制作中  |\n";
	cout << "|                 |\n";
	cout << "|-----------------|\n";
	pause("");
	Terminal();
}

void Terminal() {
	system("cls"); //清屏
	string Dir;
	string command1;
	string command2;
	string SubDir;
	Dir = "C:/";
	SubDir = "/";
	while (true) { //无限循环，但可以用break退出
		cout << ">>";
		cin >> command1 >> command2;
		if (command1 == "switch") { //switch:切换
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
		} else if (command1 == "dir") { //dir:输出目录的内容
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
					cout << "后期版本应该会做一个伪browser，可以用来访问YunSystem文件夹的云系统(已实现)\n";
					continue;
				} else if (Dir == "Net:/" && SubDir == "/backup") {
					cout << "Net://backup/README.TXT\n";
					cout << "这里的文件夹目前无法访问\n";
					continue;
				}
			} else if (command2 == "main.htm" || command2 == "main.HTM") {
				if (Dir == "Net:/" && SubDir == "/YunSystem") {
					YunSystem();
					break;
				}
			}
		} else if (command1 == "exit") {//exit:退出
			Software();
			break; //这个语句可要可不要，除非上面的语句有返回值
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
				cout << "你无权访问此文件夹\n"; //
			}
		} else if (command1 == "browser") {
			if (command2 == "www.search.com") {
				cout << "敬请期待\n";
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
