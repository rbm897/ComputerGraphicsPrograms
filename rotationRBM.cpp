//ROTATION

#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float x1,y1,x2,y2,r,xf1,yf1,xf2,yf2;
	cin>>x1>>y1>>x2>>y2>>r;
	r*=3.14/180;
	line(x1,y1,x2,y2);
	xf1=x1*cos(r)-y1*sin(r);
	yf1=x1*sin(r)+y1*cos(r);
	xf2=x2*cos(r)-y2*sin(r);
	yf2=x2*sin(r)+y2*cos(r);
	line(xf1,yf1,xf2,yf2);
	delay(2000);
	closegraph();
return 0;
}