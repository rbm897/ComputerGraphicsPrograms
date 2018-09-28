#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x1,y1,x2,y2,tx,ty;
	cin>>x1>>y1>>x2>>y2>>tx>>ty;
	line(x1,y1,x2,y2);
	line(x1+tx,y1+ty,x2+tx,y2+ty);
	delay(2000);
	closegraph();
return 0;
}