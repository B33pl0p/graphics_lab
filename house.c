//housecode


# include <stdio.h>
# include <conio.h>
#include<graphics.h>
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
line(300,0,250,50);
line(300,0,350,50);
line(250,50,350,50);
line(250,50,250,200);
ellipse(250,150, 270,90,20,20);
line(350,50,350,200);
line(350,120,330,120);
line(330,120,330,150);
line(330,150,350,150);
line(250,200,290,200);
line(290,200,290,180);
line(290,180,310,180);
line(310,180,310,200);
line(310,200,350,200);
line(290,220,290,300);
line(290,300,250,300);
line(310,220,310,320);
line(310,320,250,320);

getch();
closegraph();
return 0;
}
