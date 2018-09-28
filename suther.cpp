#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{ 
	int gd=DETECT, gm;
	initgraph(&gd, &gm, NULL);
	int x1,y1,x2,y2,c[10],wx1,wx2,wy1,wy2;
	cout<<"Enter x1 and y1\n";
	cin>>x1>>y1;
	cout<<"Enter x2 and y2\n";
	cin>>x2>>y2;
	cout<<"Enter left top point coordinates\n";
	cin>>wx1>>wy1;
	cout<<"Enter right bottom point coordinates\n";
	cin>>wx2>>wy2;
	int a[10],b[10];
	if(x1<wx1)
	a[3]=1;
	else
	a[3]=0;
	if(x1>wx2)
	a[2]=1;
	else
	a[2]=0;
	if(y1<wy1)
	a[1]=1;
	else
	a[1]=0;
	if(y1>wy2)
	a[0]=1;
	else
	a[0]=0;
	
	if(x2<wx1)
	b[3]=1;
	else
	b[3]=0;
	if(x2>wx2)
	b[2]=1;
	else
	b[2]=0;
	if(y2<wy1)
	b[1]=1;
	else
	b[1]=0;
	if(y2>wy2)
	b[0]=1;
	else
	b[0]=0;
	int i;
	for(i=0;i<4;i++)
	{
	c[i]=a[i]&b[i];
	cout<<c[i]<<endl;
	}
	rectangle(wx1,wy1,wx2,wy2);
	delay(5000);
	}
	
	
