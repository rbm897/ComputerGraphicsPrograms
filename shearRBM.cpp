#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x1,y1,x2,y2,r,shx,shy,x3,x4,x5,x6,x7,x8,y3,y4,y5,y6,y7,y8;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>shx;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	line(x1,y1,x2,y2);
	line(x2+shx*y2,y2,x3+shx*y3,y3);
	line(x3+shx*y3,y3,x4+shx*y4,y4);
	line(x4+shx*y4,y4,x1+shx*y1,y1);

	delay(2000);
	closegraph();
return 0;
}