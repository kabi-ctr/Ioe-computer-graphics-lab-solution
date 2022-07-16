#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

int main(){
	int gm = DETECT, gd,x,y,x1,x2,y1,y2,labelx,labely,delx,dely,k,p;
	initgraph(&gm,&gd,"C:\\TurboC3\\BGI");
	printf("Enter the coordinates x1,y1, x2 ,y2\n");
	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

	if(x1<x2){
		labelx =1;
		}
	else{
		labelx = -1;
	}
	if(y2>y1){
		labely = 1;

	}
	else{
		labely =-1;

	}

	x = x1;
	y = y1;
	putpixel(x,y,WHITE);

	delx = fabs(x2-x1);
	dely = fabs(y2-y1);

	if(delx>dely){
		p = 2*dely - delx;
		for(k=1; k<=delx;k++){
			if(p<0){
				x = x+labelx;
				y = y;
				p = p+2*dely;

			}

			else{
				x=x+labelx;
				y = y+labely;
				p= p+2*dely-2*delx;
			}
			putpixel(x,y,WHITE);
		}
		}

	else{

		p = 2*delx-dely;

		for(k = 1; k<=dely; k++){
			if(p<0){
				x=x;
				y=y+labely;
				p = p+2*delx;
				}
			else{
				x = x+ labelx;
				y = y+labely;
				p = p + 2*dely-2*dely;

					}
			putpixel(x,y,WHITE);

			}
		}
     outtextxy(300,300,"Kabir Poudel");

	getch();
	closegraph();
	return 0 ;

}





