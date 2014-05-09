//este programa es la primera version del juego
#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <time.h>
#include <ncurses.h>

using namespace std;

void pantalla(int L, int A){
	for(int i=0;i<L;i++)
	{
			 move(i,0);
			 addch(ACS_PI);
			 move(i,A);
			 addch(ACS_PI);
		 }
		 	for(int j=0;j<A;j++){
	
	   move(0,j);
	   addch(ACS_PI);
	   move(L,j+1);
	   addch(ACS_PI);
	}

}

void scoreandtime(int L, int A){
	mvprintw(20,60,"SCORE: 00000");
	mvprintw(10,60,"TIME : 00000");
}
void tabla(int y, int x){

  move(y,x);
    addch(ACS_S9);
    addch(ACS_S9);
    addch(ACS_S9);
    addch(ACS_S9);
    addch(ACS_S9);
    addch(ACS_S9);
    mvprintw(29,20,"o");
}

int main()
{
	int L = 30;
	int A = 50;
    int x = 30;
    int y = 29;

    int ch; 
    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);     
    noecho(); 
 

 
    
    while (1)
    {
		pantalla(L,A);
		tabla(y,x);
        move(y, x);
       scoreandtime(L,A);
        ch = getch();
     
        if (ch == KEY_LEFT)
        {
            x--;
            clear();
        }
        if (ch == KEY_RIGHT)
        {
            x++;
            clear();
        }
        refresh();
    }
    endwin();     


    return 0;
}  


