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



/*

ROTATION

#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x1,y1,x2,y2,r,xf1,yf1,xf2,yf2;
	cin>>x1>>y1>>x2>>y2>>r;
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

/*
SCALING

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
	line(x1*tx,y1*ty,x2*tx,y2*ty);
	delay(2000);
	closegraph();
return 0;
}
/*
TRANSLATION

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


/*
FLOOD FILL
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


BOUNDARY FILL

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
}*/
