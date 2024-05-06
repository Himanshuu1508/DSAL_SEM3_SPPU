#include<graphics.h>
#include<iostream>
using  namespace std;
int main(){
	int gd=DETECT,gm;

	initwindow(500,500);
	cleardevice();
	int midx=getmaxx()/2;
	int mid,r;
	r=10;
	while(r<30){
		cleardevice();
		setcolor(WHITE);
		line(0,250,125,0);
		line(125,0,250,250);
		line(250,250,375,0);
		line(375,0,500,250);
		line(0,300,500,300);
		setfillstyle(1,LIGHTRED);
		
		floodfill(250,0,WHITE);
		floodfill(0,0,WHITE);
		floodfill(475,0,WHITE);
		setfillstyle(1,BROWN);
		floodfill(250,275,WHITE);
		arc(250,250,55,120,r);
		setfillstyle(1,YELLOW);
		floodfill(250,245,WHITE);
		setfillstyle(2,BLUE);
		floodfill(480,480,WHITE);
		r=r+1;
		delay(150);
	}
	while(r>28&&r<60){
		cleardevice();
		setcolor(WHITE);
		line(0,250,125,0);
		line(125,0,250,250);
		line(250,250,375,0);
		line(375,0,500,250);
		line(0,300,500,300);
		setfillstyle(1,LIGHTBLUE);
		floodfill(250,0,WHITE);
		floodfill(0,0,WHITE);
		floodfill(475,0,WHITE);
		setfillstyle(1,BROWN);
		floodfill(250,275,WHITE);
		arc(250,250,55,120,r);
		setfillstyle(1,YELLOW);
		floodfill(250,245,WHITE);
			setfillstyle(2,BLUE);
		floodfill(480,480,WHITE);
		r=r+1;
		delay(150);
	}
	
	closegraph();
	getch();
}

