#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	for(float u=0;u<=1;)
	{
		float x,y;
		x=abs(pow((1-u),3)*x1+3*pow((1-u),2)*u*x2+3*pow(u,2)*(u-1)*x3+pow(u,3)*x4);
		y=abs(pow((1-u),3)*y1+3*pow((1-u),2)*u*y2+3*pow(u,2)*(u-1)*y3+pow(u,3)*y4);
		putpixel(x,y,8);
		u+=0.00001;
	}
	delay(2000);
	closegraph();
return 0;
}

/*
0
0
100
0
100
100
0
100

*/
