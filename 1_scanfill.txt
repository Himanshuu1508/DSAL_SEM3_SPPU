#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
using namespace std;
class point{
	public:
	int x,y;
};
class polygon{
	point p[20];
	int inter[20],x,y;
	int v,xmin,xmax,ymin,ymax;
	public:
		int c;
	void read(){
		cout<<"enter number of vertices: "<<endl;
		cin>>v;
		int i;
		if(v>2){
			for( i=0;i<v;i++){
			cout<<"enter x coord.: "<<endl;
			cin>>p[i].x;
			cout<<"enter y coord: "<<endl;
			cin>>p[i].y;
		}
		p[i].x=p[0].x;
		p[i].y=p[0].y;
		xmin=xmax=p[0].x;
		ymin=ymax=p[0].y;
	}
		else{
			cout<<"machuda"<<endl;
		}
		}
		void calcs(){
			for(int i=0;i<v;i++){
				if(p[i].x>xmax){
					xmax=p[i].x;
				}
				if(p[i].x<xmin){
					xmin=p[i].x;
				}
				if(p[i].y>ymax){
					ymax=p[i].y;
				}
				if(p[i].y<ymin){
					ymin=p[i].y;
				}
			}
				}
		void display(){
			float s;
			s=ymin+0.01;
			delay(100);
			while(s!=ymax){
				ints(s);
				sort(s);
				s++;
			}
			
		}
		void ints(float z){
			c=0;
			int x1,y1,x2,y2,temp;
			for(int i=0;i<v;i++){
				x1=p[i].x;
				y1=p[i].y;
				x2=p[i+1].x;
				y2=p[i+1].y;
				if(y1>y2){
					temp=x1;
					x1=x2;
					x2=temp;
					temp=y1;
					y1=y2;
					y2=temp;
				}
				if(z<=y2&&z>=y1){
					if(y2-y1==0){
						x=x1;
					}
					else{
						x=x1+(((z-y1)/(y2-y1))*(x2-x1));
					}
					if(x<=xmax&&x>=xmin){
						inter[c]=x;
						c=c+1;
					}
				}
			}
			
		}
		void sort(float s){
			int i,j;
			for(i=0;i<v;i++){
				line(p[i].x,p[i].y,p[i+1].x,p[i+1].y);
			}
			delay(100);
			for(j=0;j<c;j+=2){
				line(inter[j],s,inter[j+1],s);
			}
		}
				
};
int main()
{
	int gd=DETECT;
	int cl;
	initwindow(500,600);
	cleardevice();
	polygon x;
	x.read();
	x.calcs();
	cleardevice();
	cout<<"enter color 0 to 15"<<endl;
	cin>>cl;
	setcolor(cl);
	x.display();
	closegraph();
	getch();
	return 0;
}

