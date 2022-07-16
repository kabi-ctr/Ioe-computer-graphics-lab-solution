#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main(){
	int gd = DETECT, gm, i, roundx,roundy,x1,x2,y1,y2,dx,dy,k,steps;
	float delx,dely,x,y;
	printf("enter x1,y1,x2,y2");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	dx = x2-x1;
	dy = y2-y1;
	if(fabs(dx)>fabs(dy)){
		steps = fabs(dx);
		}
	else{
		steps = fabs(dy);
		}
	delx = dx/steps;
	dely = dy/steps;
	x = x1;
	y= y1;
	putpixel(x,y,GREEN);
	for(k =0; k<steps; k++){
		x = x+delx;
		y = y+dely;
		roundx = x+0.5;
		roundy = y+0.5;
		putpixel(roundx,roundy,GREEN);
		}
	closegraph();
	getch();
	return 0;
	}






