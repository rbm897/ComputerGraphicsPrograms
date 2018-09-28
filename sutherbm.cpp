#include<iostream>
#include<cstdio>
#include<graphics.h>
using namespace std;
void codee(int x1,int y1,int left,int top,int right,int bottom,int *code1)
{
	if(x1<=left)
		code1[3]=1;
	if(y1<=top)
		code1[0]=1;
	if(x1>=right)
		code1[2]=1;
	if(y1>=bottom)
		code1[1]=1;
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int left,top,bottom,right;
	left=100;top=100;bottom=300;right=300;
	//cin>>left>>top>>bottom>>right;
	rectangle(left,top,bottom,right);
	int x1,y1,x2,y2;
	x1=60;y1=150;x2=150;y2=60;
	//cin>>x1>>y1>>x2>>y2;
	line(x1,y1,x2,y2);
	int code1[4];
	int code2[4];
	int res[4];
	for(int i=0;i<4;i++)
	{
	code1[i]=0;
	code2[i]=0;
	res[i]=0;
	}
	codee(x1,y1,left,top,bottom,right,code1);
	codee(x2,y2,left,top,bottom,right,code2);
	int cnt=0,cnt1=0;
	for(int i=0;i<4;i++)
	cout<<code1[i]<<" "<<code2[i]<<endl;
	for(int i=0;i<4;i++)
	{
		if(code1[i]==0 && code2[i]==0)
		{
			cnt++;
		}
		else
		{
			res[i]=code1[i] and code2[i];
			if(res[i]==0)
			cnt1++;
		}
	}
	if(cnt==4)
	cout<<"Visible"<<endl;
	else if(cnt1!=4)
	cout<<"Invisible"<<endl;
	else
	cout<<"Partially visible"<<endl;	
	delay(2000);
	closegraph();
return 0;
}


/*
100
100
300
300
60
150
150
60



100
100
300
300
*/
