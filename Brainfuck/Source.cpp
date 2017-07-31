#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <fstream>
#include "asciiHandler.h"

using namespace std;

void setShellSize();

void setShellSize() {
	HWND console = GetConsoleWindow();
	RECT r;
	
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 800, 500, TRUE);
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

	setShellSize();
	asciiImg title;
	title.printImg("title.txt");
}