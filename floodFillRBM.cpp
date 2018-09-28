#include<iostream>
#include<graphics.h>
using namespace std;
void floodFill(int x,int y,int oldColor,int newColor)
{
	if(getpixel(x,y)==oldColor)
	
	{
		putpixel(x,y,newColor);
		floodFill(x+1,y,oldColor,newColor);
		floodFill(x,y+1,oldColor,newColor);
		floodFill(x-1,y,oldColor,newColor);
		floodFill(x,y-1,oldColor,newColor);
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circle(20,20,15);
	floodFill(20,20,0,4);
	delay(2000);
	closegraph();
return 0;
}