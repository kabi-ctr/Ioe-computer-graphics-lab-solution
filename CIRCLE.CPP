#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

int main(){

	int gm=DETECT,gd,a,b,x,y,r;
	float p;
	initgraph(&gm,&gd,"C:\\TurboC3\\BGI");
	printf("Enter the center A,B and radius R");
	scanf("%d %d %d",&a,&b,&r);
	x = 0;
	y = r;
	p = (5/4)-r;
	putpixel(x+a,y+b,WHITE);
	while(x<=y){
	  if(p<0){
		x = x+1;
		y =y;
		p = p+2*x+1;
		}
	  else{
		x = x+1;
		y = y-1;
		p = p +2*x-2*y+1;
		}
	  putpixel(x+a,y+b,WHITE);
	  putpixel(-x+a,y+b,WHITE);
	  putpixel(x+a,-y+b,WHITE);
	  putpixel(-x+a,-y+b,WHITE);
	  putpixel(-y+b,-x+a,WHITE);
	  putpixel(-y+b,a+x,WHITE);
	  putpixel(y+b,a-x,WHITE);
	  putpixel(+y+b,a+x,WHITE);


	}
	outtextxy(200,200,"Kabir Poudel");
	getch();
	closegraph();
	return 0;
	}



