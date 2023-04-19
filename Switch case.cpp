#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
  int i,l,k,x=10,y=200,walk=0,j=0;



      int draw_moving_car();


     int x1=675,y1=380;
 int stangle=35,endangle=140,radius=90;

    int option;
    int gd = DETECT, gm, midx, midy,maxx;
    initgraph(&gm,&gm," ");
    initwindow(1500,800);


    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. House" << std::endl;
    std::cout << "2. Sad Emoji" << std::endl;
    std::cout << "3. Flag" << std::endl;
    std::cout << "4.Fish" << std::endl;
    std::cout << "5.Car" << std::endl;
    std::cout << "6.Flower" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> option;


    switch (option)
    {
    case 1:

       setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);

    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);

    /* Fill colours */
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);

        break;



    case 2:


        setcolor(YELLOW);

    circle(300, 100, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 100, YELLOW);


    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);


    fillellipse(310, 85, 2, 6);
    fillellipse(290, 85, 2, 6);


    ellipse(300, 100, 205, 335, 20, 9);
    ellipse(300, 100, 205, 335, 20, 10);
    ellipse(300, 100, 205, 335, 20, 11);

        break;


    case 3:


    setbkcolor(WHITE);
    setcolor(WHITE);
    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);
    setcolor(WHITE);
    rectangle(138,35,150,450);
    setfillstyle(1,BLUE);
    floodfill(140,40,WHITE);
    setcolor(WHITE);
    bar(130,450,160,460);
    setcolor(WHITE);
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);

        break;


    case 4:


  setbkcolor(BLUE);
 while(!kbhit())
 {
  cleardevice();

setbkcolor(BLUE);
  if(x<640)
  {
   x+=5;
   y+=1;
   arc(x,y,stangle,endangle+35,radius);
   arc(x,y-110,190,323,radius+2);
   circle(x+40,y-60,5);
   line(x-90,y-90,x-90,y-8);
        }
  else
  {
   x1-=5;
   y1-=1;
   arc(x1,y1,stangle-30,endangle+4,radius);
   arc(x1,y1-110,217,350,radius+2);
   circle(x1-40,y1-60,5);
   line(x1+90,y1-90,x1+90,y1-10);
  }
  setcolor(YELLOW);
  delay(90);
 }
        break;


    case 5:

            for (i = 0; i <= 420; i = i + 10) {

        // Set color of car as red
        setcolor(WHITE);

        // These lines for bonnet and
        // body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);

        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);

        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);

        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);

        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);

        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);

        delay(80);

        // To erase previous drawn car, draw
        // the whole car at same position
        // but color using black
        setcolor(BLACK);

        // Lines for bonnet and body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);

        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);

        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);

        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);

        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);

        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);
    }

        break;


    case 6:
 setfillstyle(SOLID_FILL,CYAN);
 circle(300,230,100);
 floodfill(300,230,WHITE);

 setfillstyle(SOLID_FILL,MAGENTA);
 arc(455,220,218,150,80);
 floodfill(445,230,WHITE);

 setfillstyle(SOLID_FILL,MAGENTA);
 arc(300,85,315,230,80);
 floodfill(300,85,WHITE);


 setfillstyle(SOLID_FILL,MAGENTA);
 arc(150,235,40,325,80);
 floodfill(150,235,WHITE);

 setfillstyle(SOLID_FILL,MAGENTA);
 arc(295,380,125,50,80);
 floodfill(295,300,WHITE);


 setfillstyle(SOLID_FILL,GREEN);
 arc(372,495,270,89,200);
  arc(355,515,270,90,200);
 floodfill(510,380,WHITE);
    }
    getch();
    closegraph();
    return 0;
}

