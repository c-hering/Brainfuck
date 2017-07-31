#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <fstream>
#include "asciiHandler.h"

using namespace std;

void setShellSize();
void prompt(int delay, string text);
void helpResponse();
void readFile(string fpath);

void setShellSize() {
	HWND console = GetConsoleWindow();
	RECT r;
	
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 800, 500, TRUE);
}

void prompt(int delay, string text) {
	for (int i = 0; i < text.length(); i++) {
		cout << text[i];
		Sleep(delay);
	}
	cout << endl;
}

void helpResponse() {
	cout << " I need help too so I dont think I can help you..." << endl;
}

void readFile(string fpath) {
	ifstream fin;
	string line;
	fin.open(fpath);

	if (fin.is_open()) {
		cout << "Reading File From: " << fpath << endl;
		while (getline(fin, line)) {
			cout << " #  " << line << endl;
		}
	}
	else {
		cout << "Couldn't Find File" << endl;
	}
}

int main() {
	/*
	credits: http://www.chris.com/ascii/index.php?art=cartoons/simpsons , http://patorjk.com/software/taag/#p=display&f=Sub-Zero&t=Brainfuck
                               . .  ,  , 
                              |` \/ \/ \,', 
                              ;          ` \/\,. 
                             :               ` \,/ 
                             |                  / 
                             ;                 : 
                            :                  ; 
                            |      ,---.      / 
                           :     ,'     `,-._ \ 
                           ;    (   o    \   `' 
                         _:      .      ,'  o ; 
                        /,.`      `.__,'`-.__, 
                        \_  _               \ 
                       ,'  / `,          `.,' 
                 ___,'`-._ \_/ `,._        ; 
              __;_,'      `-.`-'./ `--.____) 
           ,-'           _,--\^-' 
         ,:_____      ,-'     \ 
        (,'     `--.  \;-._    ; 
        :    Y      `-/    `,  : 
        :    :       :     /_;' 
        :    :       |    : 
         \    \      :    : 
          `-._ `-.__, \    `. 
             \   \  `. \     `. 
           ,-;    \---)_\ ,','/ 
           \_ `---'--'" ,'^-;' 
           (_`     ---'" ,-') 
           / `--.__,. ,-'    \ 
  -hrr-    )-.__,-- ||___,--' `-. 
          /._______,|__________,'\ 
          `--.____,'|_________,-' 

		 ______     ______     ______     __     __   __     ______   __  __     ______     __  __
		/\  == \   /\  == \   /\  __ \   /\ \   /\ "-.\ \   /\  ___\ /\ \/\ \   /\  ___\   /\ \/ /
    	\ \  __<   \ \  __<   \ \  __ \  \ \ \  \ \ \-.  \  \ \  __\ \ \ \_\ \  \ \ \____  \ \  _"-.
	     \ \_____\  \ \_\ \_\  \ \_\ \_\  \ \_\  \ \_\\"\_\  \ \_\    \ \_____\  \ \_____\  \ \_\ \_\
		  \/_____/   \/_/ /_/   \/_/\/_/   \/_/   \/_/ \/_/   \/_/     \/_____/   \/_____/   \/_/\/_/

	*/
	//Vars
	asciiImg title;
	string input;
	bool promptLoop = true;

	//Resizing
	setShellSize();
	
	//Main Menu, Title
	title.printImg("title.txt");
	cout << endl << "Developed By: c-hering, toastyyyyy, whatever u wanna call me" << endl;
	cout << "Checkout my github at: https://github.com/c-hering" << endl << endl;
	while (promptLoop) {
		prompt(50, "**Please Input SOMETHING**");
		cout << ">> ";
		getline(cin, input);
		if (input == "help") {
			helpResponse();
		}
		else if (input == "exit") {
			exit(0);
		}
		else if (input == "read file") {
			string path;
			system("cd");
			system("dir");
			prompt(10, "Reading File :: Please Give a File Path");
			cout << "	>>";
			getline(cin, path);
			readFile(path);
		}
		else {
			cout << "I dont know what to do with this information..." << endl << "Hello World" << endl;
		}
	}
}