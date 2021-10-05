#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm,midx,midy,i,j,k;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
midx = getmaxx()/2;
midy = getmaxy()/2;
for (i=0;i<=245;i++)
{
//Uranium atom
setcolor(GREEN);
circle(midx,midy,20);
setfillstyle(SOLID_FILL,GREEN);
floodfill(midx,midy,GREEN);
setcolor(WHITE);
outtextxy(midx-25,midy-30,"URANIUM");

//Attacking neutron
setcolor(YELLOW);
circle(midx-250+i,midy,10);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(midx-250+i,midy,YELLOW);
setcolor(WHITE);
outtextxy(midx-275+i,midy+30,"NEUTRON");

setcolor(BLUE);
outtextxy(150,435,"----------------Saumiya----------------");

if(i==245)
break;
clearviewport();
}
for(i=0;i<=80;i++)
{

setcolor(GREEN);
circle(midx,midy,20);
setfillstyle(SOLID_FILL,GREEN);
floodfill(midx,midy,GREEN);
setcolor(WHITE);
outtextxy(midx-25,midy-30,"URANIUM");

//neutron1
setcolor(WHITE);
circle(midx+i,midy,10);
setfillstyle(SOLID_FILL,WHITE);
floodfill(midx+i,midy,WHITE);
outtextxy(midx+i-25,midy-30,"Neutron(2)");

//neutron2
circle(midx+i,midy-i,10);
setfillstyle(SOLID_FILL,WHITE);
floodfill(midx+i,midy-i,WHITE);
outtextxy(midx+i-25,midy-i-30,"Neutron(1)");

//neutron3
circle(midx+i,midy+i,10);
setfillstyle(SOLID_FILL,WHITE);
floodfill(midx+i,midy+i,WHITE);
outtextxy(midx+i-25,midy+i-30,"Neutron(3)");

setcolor(BLUE);
outtextxy(150,435,"----------------Saumiya----------------");

if(i==70)
break;
clearviewport();
}
//Uranium Atom
for(j=0;j<=160;j++)
{
setcolor(GREEN);
circle(midx,midy,20);
setfillstyle(SOLID_FILL,GREEN);
floodfill(midx,midy,GREEN);
setcolor(WHITE);
outtextxy(midx-25,midy-30,"URANIUM");

//neutron1(b)
setcolor(RED);
circle(midx+i+j,midy,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy,RED);
outtextxy(midx+i+j+25,midy,"Neutron(2(b))");

//neutron1(a)
circle(midx+i+j,midy-j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy-j,RED);
outtextxy(midx+i+j+25,midy-j,"Neutron(2(a))");

//neutron1(c)
circle(midx+i+j,midy+j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy+j,RED);
outtextxy(midx+i+j+25,midy+j,"Neutron(2(c))");

//neutron2(b)
circle(midx+i+j,midy-i,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy-i,RED);
outtextxy(midx+i+j+25,midy-i,"Neutron(1(b))");

//neutron2(a)
circle(midx+i+j,midy-i-j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy-i-j,RED);
outtextxy(midx+i+j+25,midy-i-j,"Neutron(1(a))");

//neutron2(c)
circle(midx+i+j,midy-i+j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy-i+j,RED);
outtextxy(midx+i+j+25,midy-i+j,"Neutron(1(c))");

//neutron3(b)
circle(midx+i+j,midy+i,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy+i,RED);
outtextxy(midx+i+j+25,midy+i,"Neutron(3(b))");

//neutron3(a)
circle(midx+i+j,midy+i-j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy+i-j,RED);
outtextxy(midx+i+j+25,midy+i-j,"Neutron(3(a))");

//neutron3(c)
circle(midx+i+j,midy+i+j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(midx+i+j,midy+i+j,RED);
outtextxy(midx+i+j+25,midy+i+j,"Neutron(3(c))");

setcolor(BLUE);
outtextxy(150,435,"----------------Saumiya----------------");

if(j==108)
break;
clearviewport();
}
getch();
closegraph();
}