#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>


void translation(int *a, int *b){
	int i,tx,ty,x[3],y[3];
	printf("enter the translation factor");
	scanf("%d%d",&tx,&ty);
	for(i=0; i<3;i++){
		x[i]=a[i]+tx;
		y[i]= b[i]+ty;
		putpixel(x[i],y[i],WHITE);
		}
	for(i=0;i<2;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
		if(i==0){
			line(x[i],y[i],x[i+2],y[i+2]);
			}
		}
	}
void scaling(int *a, int *b){
	int sx,sy,x[3],y[3],i;
	printf("enter the scaling factor");
	scanf("%d%d",&sx,&sy);
	for(i=0; i<3; i++){
		x[i] = a[i]*sx;
		y[i] = b[i]*sy;
		}
	for(i=0;i<2;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
		if(i==0){
			line(x[i],y[i],x[i+2],y[i+2]);
			}
		}
	}
void fixed_point(int *a, int *b){
	int sx,sy,p,q,x[3],y[3],i;
	printf("enter the fixed point");
	scanf("%d%d",&p,&q);
	printf("enter the scaling factors");
	scanf("%d%d",&sx,&sy);
	for(i=0; i<3; i++){
		x[i] = a[i]*sx-p*sx+p;
		y[i] = b[i]*sy-q*sy+q;
		}
	for(i=0;i<2;i++){
		line(x[i],y[i],x[i+1],y[i+1]);
		if(i==0){
			line(x[i],y[i],x[i+2],y[i+2]);
			}
		}
	}







int main(){
	int gd=DETECT, gm,a[3],b[3],i;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("Enter the coordinates of the triangle");
	for(i=0; i<3; i++){
		scanf("%d%d",&a[i],&b[i]);
		}
	for(i=0;i<2;i++){
		line(a[i],b[i],a[i+1],b[i+1]);
		if(i==0){
			line(a[i],b[i],a[i+2],b[i+2]);
			}
		}
    //now here we will add a switch statement in order to call functions as required
	//translation(a,b);
    //scaling(a,b);
	//fixed_point(a,b);
	getch();
	closegraph();
	return 0;
	}