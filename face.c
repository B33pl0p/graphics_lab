#include <stdio.h>
#include <conio.h>
#include<graphics.h>
int main() {
int gd = DETECT ,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
//outline
ellipse(300,200,0,360,80,80);
//ear
ellipse(220,200,90,270,15,15);
ellipse(380,200,270,90,15,15);
//eyes
ellipse(250,200,0,360,15,10);
putpixel(250,200,RED);
ellipse(350,200,0,360,15,10);
putpixel(350,200,RED);
//nose
line(300,205,305,210);
line(300,205,295,210);
line(295,210,305,210);
//mouth
line(280,240,320,240);
ellipse(300,240,180,0,19,19);
getch();
closegraph();
return 0;
}

