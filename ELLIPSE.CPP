#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main(){
	int gd =DETECT, gm;

	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	float a,b,A,B,x,y, p1,p2;
	printf("Enter the center A and B and x y radius:");
	scanf("%f%f%f%f",&A,&B,&a,&b);

	p1 = (b*b)-(a*a*b)+((a*a)/4);
	x =0;
	y = b;
	putpixel(A+x,B+y,WHITE);
	do{

	    x = x+1;
	    if(p1<0){
		p1 = p1+(2*b*b*x)+(b*b);
		}
	    else{
		y =y-1;
		p1 = p1 +(2*b*b*x) - (b*b)-(2*a*a*y);
		}
	    putpixel(x+A,y+B,WHITE);
	     putpixel(x+A,-y+B,WHITE);

	     putpixel(-x+A,y+B,WHITE);
	     putpixel(-x+A,-y+B,WHITE);



	    } while((2*b*b*x)<=(2*a*a*y));
	p2 = ((b*b)*(x+0.5)*(x+0.5))+((a*a)*(y-1)*(y-1))-(a*a*b*b);
	do{

		y=y-1;
		if(p2>0){

			p2 = p2-(2*a*a*y) +(a*a);

		}
		else{
			x = x+1;
			p2 = p2-(2*a*a*y)+(a*a)+(2*b*b*x);
			}
		// putpixel(x+A,y+B,WHITE);

	    putpixel(x+A,y+B,WHITE);
	     putpixel(x+A,-y+B,WHITE);
	      putpixel(-x+A,y+B,WHITE);
	     putpixel(-x+A,-y+B,WHITE);

		}while(y>0);

	getch();
	closegraph();
	return 0;
	}
















