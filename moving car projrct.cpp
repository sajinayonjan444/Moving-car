#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
 
int main() {
    int gd = DETECT, gm;
    int i, maxx, midy;
 
    /* initialize graphic mode */
    initgraph(&gd, &gm, "X:\\TC\\BGI");
    /* maximum pixel in horizontal axis */
    maxx = getmaxx();
    /* mid pixel in vertical axis */
    midy = getmaxy()/2;
 
    for (i=0; i < maxx-150; i=i+5) {
        /* clears screen */
        cleardevice();
 
        /* draw a white road */
        setcolor(WHITE);
        line(0, midy + 37, maxx, midy + 37);
        //1st cloud
        setfillstyle(SOLID_FILL,0);
	ellipse(70,22,0,180,25,20);
	ellipse(95,41,260,90,20,20);
	ellipse(70,61,180,360,20,20);
	ellipse(49,43,90,270,20,20);
	floodfill(140,70,15);
	//2nd cloud
	
	setfillstyle(SOLID_FILL,0);
	ellipse(290,50,0,180,25,20);
	ellipse(315,70,260,90,20,20);
	ellipse(289,90,180,360,20,20);
	ellipse(265,70,90,270,20,20);
	floodfill(200,220,15);
        
        
        
        
     //1st tree    
    line(207,220,207,280);
	line(240,220,240,280);
	ellipse(200,200,90,280,25,30);
	ellipse(186,170,60,240,25,30);
	ellipse(190,142,40,200,29,30);
	ellipse(220,117,20,170,29,30);
	ellipse(250,117,0,120,29,30);
	ellipse(260,127,310,60,35,30);
	ellipse(274,150,280,50,35,30);
	ellipse(270,180,260,22,35,30);
	ellipse(243,200,270,340,35,30);
	
	
	//2nd tree
	line(400,220,400,280);
	line(367,220,367,280);
	ellipse(362,200,90,280,25,30);
	ellipse(351,170,60,240,25,30);
	ellipse(357,142,40,200,29,30);
	ellipse(391,117,20,170,29,30);
	ellipse(424,117,0,120,29,30);
	ellipse(432,127,310,60,35,30);
	ellipse(445,150,280,50,35,30);
	ellipse(434,180,260,22,35,30);
	ellipse(400,200,270,340,35,30);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 
        /* Draw Car */
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, RED);
 
        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        floodfill(5 + i, midy + 22, YELLOW);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, DARKGRAY);
        /*  Draw Wheels */
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);
        floodfill(30 + i, midy + 25, BLUE);
        floodfill(90 + i, midy + 25, BLUE);
        /* Add delay of 0.1 milli seconds */
        delay(100);
    }
 
    getch();
    closegraph();
    return 0;
}
