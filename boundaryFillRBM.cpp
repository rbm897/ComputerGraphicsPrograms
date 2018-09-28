#include<iostream>
#include<graphics.h>
using namespace std;
void boundaryFill(int x,int y,int fColor,int bColor)
{
	if(getpixel(x,y)!=bColor&&getpixel(x,y)!=fColor)
	{
		putpixel(x,y,RED);
		boundaryFill(x+1,y,fColor,bColor);
		boundaryFill(x,y+1,fColor,bColor);
		boundaryFill(x-1,y,fColor,bColor);
		boundaryFill(x,y-1,fColor,bColor);
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circle(20,20,15);
	boundaryFill(20,20,4,15);
	delay(2000);
	closegraph();
return 0;
}