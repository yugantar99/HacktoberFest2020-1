/*Name: Micaela Cerilla
  User: https://github.com/Mica56
  Country: Philippines
  Bio: Computer Science Student
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//declaration for gotoxy function
COORD c = {0, 0};
void gotoxy (short x, short y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main(){
	int r, h, ctr, ctr1, ctr2=0, x=0, y=1, n, i;
	
	printf("Input 2 integers:");
	scanf("%d %d", &h, &r);
	i=r;
	for(ctr=0;ctr<h;ctr++){
		gotoxy(x,y);
		for(ctr1=0;ctr1<r;ctr1++){
			for(n=0;n<(i+(i-1));n++){
				printf("*");
				--i;
				n=0;
			}
			i=r;
			++x;
			++y;
		}
	}
}
