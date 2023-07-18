#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int arr[16][2] = {{250, 300}, {225, 275}, {200, 250}, {150, 200}, {150, 350}, {415, 615}, {415, 465}, {465, 515}, {785, 835}, {785, 835}, {785, 985}, {1075, 1275}, {1075, 1125}, {1125, 1175}, {1125, 1175}, {1150, 1200}};
int arr_wr[10][2] = {{250, 300}, {225, 275}, {200, 250}, {150, 200}, {150, 350}, {1075, 1275}, {1075, 1125}, {1125, 1175}, {1125, 1175}, {1150, 1200}};
vector<string> name = {"AA", "RT", "BZ", "QW", "LK", "ER", "OP", "JK", "HV", "MN"};
int random;

void text3()
{
  setcolor(0);
  setbkcolor(15);
  outtextxy(700, 200, (char *)"Router");
  outtextxy(205, 25, (char *)"LAN 1");
  outtextxy(1105, 25, (char *)"LAN 2");
  setcolor(15);
  setbkcolor(0);
  outtextxy(270, 120, (char *)"A1");
  outtextxy(270, 340, (char *)"A2");
  outtextxy(270, 560, (char *)"A3");
  outtextxy(1170, 120, (char *)"B1");
  outtextxy(1170, 340, (char *)"B2");
  outtextxy(1170, 560, (char *)"B3");
  setcolor(0);
  setbkcolor(0);
}

void text2()
{
  char *a;
  setcolor(0);
  setbkcolor(15);
  // strcpy(a,("MAC Address of the Sender : "+name[random]).c_str());
  outtextxy(620, 50, (char *)"IP Address of the Sender : 10\n");
  outtextxy(620, 70, (char *)"IP Address of the Receiver : 11\n");
  outtextxy(620, 90, (char *)"IP Address of the Router : 01\n");
  // outtextxy(620, 110, a);
  outtextxy(620, 110, (char *)"MAC Address of the Sender : AA\n");
  outtextxy(620, 130, (char *)"MAC Address of the Receiver : BZ\n");
  outtextxy(620, 150, (char *)"MAC Address of the Router : RT\n");
  outtextxy(250, 25, (char *)"Sender\n");
  outtextxy(1145, 25, (char *)"Receiver\n");
  outtextxy(700, 235, (char *)"Router\n");
  setbkcolor(0);
}
void text2_wr()
{
  setcolor(0);
  setbkcolor(15);
  outtextxy(620, 50, (char *)"IP Address of the Sender : 71\n");
  outtextxy(620, 70, (char *)"IP Address of the Receiver : 73\n");
  outtextxy(620, 110, (char *)"MAC Address of the Sender : OP\n");
  outtextxy(620, 130, (char *)"MAC Address of the Receiver : QZ\n");
  outtextxy(250, 25, (char *)"Sender\n");
  outtextxy(1145, 25, (char *)"Receiver\n");
  setbkcolor(0);
}

void text(int l, int t, int r, int b)
{
  int i = 5;
  while (i--)
  {
    rectangle(l - 175, t + 150 + (i * 100), r - 205, b + 105 + (i * 100));
  }
  outtextxy(l - 170, t + 170, (char *)"Application Layer");
  outtextxy(l - 170, t + 270, (char *)"Transport Layer");
  outtextxy(l - 165, t + 370, (char *)"Network Layer");
  outtextxy(l - 165, t + 470, (char *)"Datalink Layer");
  outtextxy(l - 165, t + 570, (char *)"Physical Layer");
}

void bus()
{
  rectangle(100, 100, 125, 125);
  rectangle(100, 665, 125, 690);
  setlinestyle(SOLID_LINE, 0, 5);
  line(112, 125, 112, 665);
  setlinestyle(SOLID_LINE, 0, 1);
  rectangle(1000, 100, 1025, 125);
  rectangle(1000, 665, 1025, 690);
  setlinestyle(SOLID_LINE, 0, 5);
  line(1012, 125, 1012, 665);
  setlinestyle(SOLID_LINE, 0, 3);

  line(275, 200, 275, 225);
  line(275, 225, 112, 225);
  line(275, 425, 275, 450);
  line(275, 450, 112, 450);
  line(275, 635, 275, 660);
  line(275, 660, 112, 660);

  line(1175, 200, 1175, 225);
  line(1175, 225, 1012, 225);
  line(1175, 425, 1175, 450);
  line(1175, 450, 1012, 450);
  line(1175, 635, 1175, 660);
  line(1175, 660, 1012, 660);

  setlinestyle(SOLID_LINE, 0, 1);
}

void pc(int l, int t, int r, int b)
{
  rectangle(l - 5, t - 5, r + 5, b + 5);
  rectangle(l, t, r, b);
  rectangle(l + 50, b, r - 50, b + 25);
}

void router(int l, int t, int r, int b)
{
  rectangle(l - 5, t - 5, r + 5, b + 5);
  rectangle(l, t, r, b);
  rectangle(685, 275, 695, 300);
  rectangle(755, 275, 765, 300);
  circle(690, 270, 7);
  circle(760, 270, 7);
  circle(690, 325, 6);
  circle(710, 325, 6);
  setfillstyle(SOLID_FILL, 15);
  floodfill(690, 325, 15);
  floodfill(710, 325, 15);
}

void layout()
{
  pc(200, 50, 350, 150);
  text(200, 50, 350, 150);
  pc(1100, 50, 1250, 150);
  router(675, 300, 775, 350);
}
void layout_wr()
{
  pc(200, 50, 350, 150);
  text(200, 50, 350, 150);
  pc(1100, 50, 1250, 150);
}

void exit_button()
{
  setcolor(0);
  setfillstyle(SOLID_FILL, 0);
  bar(GetSystemMetrics(SM_CXSCREEN) - 25, 0, GetSystemMetrics(SM_CXSCREEN), 25);
  setcolor(15);
  line(GetSystemMetrics(SM_CXSCREEN) - 22, 3, GetSystemMetrics(SM_CXSCREEN) - 3, 22);
  line(GetSystemMetrics(SM_CXSCREEN) - 3, 3, GetSystemMetrics(SM_CXSCREEN) - 22, 22);
  setcolor(0);
  setfillstyle(SOLID_FILL, 15);
}

int topo_arr[6] = {75, 175, 300, 400, 520, 620};

void topology()
{
  setcolor(15);
  pc(200, topo_arr[0], 350, topo_arr[1]);
  pc(200, topo_arr[2], 350, topo_arr[3]);
  pc(200, topo_arr[4], 350, topo_arr[5]);
  pc(1100, 75, 1250, 175);
  pc(1100, 300, 1250, 400);
  pc(1100, 520, 1250, 620);
  router(675, 300, 775, 350);
  setfillstyle(SOLID_FILL, WHITE);
  floodfill(0, 0, WHITE);
  setcolor(0);
  bus();
  text3();
  exit_button();
}

void application_layer(int l, int r, int t = 200, int b = 255)
{
  setcolor(8);
  rectangle(l, t, r, b);
  setfillstyle(SOLID_FILL, 8);
  floodfill(l + 5, t + 5, 8);
  setcolor(0);
  setbkcolor(8);
  outtextxy(l + 7, t + 20, (char *)"DATA");
  setcolor(0);
}

void transport_layer(int l, int r, int t = 300, int b = 355)
{
  setcolor(12);
  rectangle(l, t, r, b);
  setfillstyle(SOLID_FILL, 12);
  floodfill(l + 5, t + 5, 12);
  application_layer(r + 1, r + 51, t, b);
  setcolor(0);
  setbkcolor(12);
  outtextxy(l + 16, t + 20, (char *)"H1");
  setbkcolor(0);
}

void network_layer(int l, int r, char* s="10-11", int t = 400, int b = 455)
{
  setcolor(11);
  rectangle(l, t, r, b);
  setfillstyle(SOLID_FILL, 11);
  floodfill(l + 5, t + 5, 11);
  transport_layer(r + 1, r + 51, t, b);
  setcolor(0);
  setbkcolor(11);
  outtextxy(l + 7, t + 20, (char *)s);
  setbkcolor(0);
}

void datalink_layer(int l, int r, int i, char* n="10-11", char* s="RT-BZ",char* c="AA-RT", int t = 500, int b = 555)
{
  setcolor(10);
  rectangle(l, t, r, b);
  setfillstyle(SOLID_FILL, 10);
  floodfill(l + 5, t + 5, 10);
  network_layer(r + 1, r + 51,n, t, b);
  setcolor(0);
  setbkcolor(10);

  if (i > 8)
    outtextxy(l + 6, t + 20, (char *)s);
  else
    outtextxy(l + 6, t + 20, (char *)c);

  setcolor(13);
  rectangle(l + 201, t, l + 251, b);
  setfillstyle(SOLID_FILL, 13);
  floodfill(l + 206, t + 5, 13);
  setcolor(0);
  setbkcolor(13);
  outtextxy(l + 223, t + 20, (char *)"T");
  setbkcolor(0);
}

void physical_layer(int l, int r, int t = 620, int b = 650)
{
  setcolor(0);
  rectangle(l, t, r, b);
  rectangle(r + 1, t, r + 51, b);
  setfillstyle(SOLID_FILL, 0);
  floodfill(l + 5, t + 5, 0);
  setcolor(15);
  outtextxy(l + 50, t + 8, (char *)"1   0   0   1");
  setbkcolor(15);
  setcolor(0);
  outtextxy(r + 20, t + 8, (char *)"0");
  setbkcolor(0);
}

void d_arrow(int x, int y)
{
  line(x, y, x + 5, y - 5);
  line(x, y, x - 5, y - 5);
}

void u_arrow(int x, int y)
{
  line(x, y, x + 5, y + 5);
  line(x, y, x - 5, y + 5);
}

void l(int i)
{
  setcolor(0);
  setlinestyle(SOLID_LINE, 0, 3);
  if (i >= 0)
  {
    if (i < 5)
    {
      line(275, 175, 275, 200 + 100 * (i));
      d_arrow(275, 200 + 100 * (i));
    }
    else
    {
      line(275, 175, 275, 665);
      line(275, 665, 565, 665);
      if (i < 8)
      {
        line(565, 665, 565, 655 - 100 * (i - 5));
        u_arrow(565, 655 - 100 * (i - 5));
      }
      else
      {
        line(565, 665, 565, 325);
        line(565, 325, 675, 325);
        line(775, 325, 885, 325);
        if (i < 11)
        {
          line(885, 325, 885, 400 + 100 * (i - 8));
          d_arrow(885, 400 + 100 * (i - 8));
        }
        else
        {
          line(885, 325, 885, 665);
          line(885, 665, 1175, 665);
          if (i < 16)
          {
            line(1175, 665, 1175, 655 - 100 * (i - 11));
            u_arrow(1175, 655 - 100 * (i - 11));
          }
          else
          {
            line(1175, 665, 1175, 175);
            u_arrow(1175, 175);
          }
        }
      }
    }
  }
}

void l_wr(int i)
{
  setcolor(0);
  setlinestyle(SOLID_LINE, 0, 3);
  if (i >= 0)
  {
    if (i < 5)
    {
      line(275, 175, 275, 200 + 100 * (i));
      d_arrow(275, 200 + 100 * (i));
    }
    else
    {
      line(275, 175, 275, 665);
      line(275, 665, 1175, 665);
      if (i < 10)
      {
        line(1175, 665, 1175, 655 - 100 * (i - 5));
        u_arrow(1175, 655 - 100 * (i - 5));
      }
      else
      {
        line(1175, 665, 1175, 175);
        u_arrow(1175, 175);
      }
    }
  }
}

void layer(int i)
{
  if (i == 0 || i == 15)
  {
    application_layer(arr[i][0], arr[i][1]);
  }
  else if (i == 1 || i == 14)
  {
    transport_layer(arr[i][0], arr[i][1]);
  }
  else if (i == 2 || i == 7 || i == 8 || i == 13)
  {
    network_layer(arr[i][0], arr[i][1]);
  }
  else if (i == 3 || i == 6 || i == 9 || i == 12)
  {
    datalink_layer(arr[i][0], arr[i][1], i);
  }
  else if (i == 4 || i == 5 || i == 10 || i == 11)
  {
    physical_layer(arr[i][0], arr[i][1]);
  }
  else if (i == -1)
  {
    setfillstyle(SOLID_FILL, 3);
    floodfill(225, 75, WHITE);
    setcolor(15);
    setbkcolor(3);
    outtextxy(250, 90, (char *)"HELLO!");
    setcolor(0);
  }
  else if (i == 16)
  {
    setfillstyle(SOLID_FILL, 3);
    floodfill(1125, 75, WHITE);
    setcolor(15);
    setbkcolor(3);
    outtextxy(1150, 90, (char *)"HELLO!");
    setcolor(0);
  }
  l(i);
  text2();
}

void layer_wr(int i)
{
  if (i == 0 || i == 9)
  {
    application_layer(arr_wr[i][0], arr_wr[i][1]);
  }
  else if (i == 1 || i == 8)
  {
    transport_layer(arr_wr[i][0], arr_wr[i][1]);
  }
  else if (i == 2 || i == 7)
  {
    network_layer(arr_wr[i][0], arr_wr[i][1],(char *)"71-73");
  }
  else if (i == 3 || i == 6)
  {
    datalink_layer(arr_wr[i][0], arr_wr[i][1], i, (char *)"71-73", (char *)"OP-QZ", (char *)"OP-QZ");
  }
  else if (i == 4 || i == 5)
  {
    physical_layer(arr_wr[i][0], arr_wr[i][1]);
  }
  else if (i == -1)
  {
    setfillstyle(SOLID_FILL, 3);
    floodfill(225, 75, WHITE);
    setcolor(15);
    setbkcolor(3);
    outtextxy(250, 90, (char *)"HELLO!");
    setcolor(0);
  }
  else if (i == 10)
  {
    setfillstyle(SOLID_FILL, 3);
    floodfill(1125, 75, WHITE);
    setcolor(15);
    setbkcolor(3);
    outtextxy(1150, 90, (char *)"HELLO!");
    setcolor(0);
  }
  l_wr(i);
  text2_wr();
}

void tcp()
{

  srand(time(0));
  random = rand() % 10;
  if (random > 7)
    random -= 2;
  int page = 0;
  int f_page = 1;
  int t;
  int i = 0;
  int b_page = 2;
  setactivepage(page);
  readimagefile((char *)"C:\\Users\\KEYA GOHIL\\Downloads\\3.jpg", 0, 0, 1366, 768);

  while (true)
  {

    // settextstyle(0,HORIZ_DIR,1);
    setvisualpage(page);
    setactivepage(f_page);
    cleardevice();
    setlinestyle(SOLID_LINE, 0, 1);
    setcolor(15);
    layout();
    setfillstyle(SOLID_FILL, WHITE);
    // floodfill(200,255,WHITE);
    floodfill(0, 0, WHITE);
    layer(i - 1);
    if (i > 0)
    {
      setactivepage(b_page);
      setlinestyle(SOLID_LINE, 0, 1);
      cleardevice();
      setcolor(15);
      layout();
      setfillstyle(SOLID_FILL, WHITE);
      floodfill(200, 255, WHITE);
      layer(i - 2);
    }
    else if (i == 0)
    {
      setactivepage(b_page);
      setlinestyle(SOLID_LINE, 0, 1);
      setcolor(15);
      cleardevice();
      readimagefile((char *)"C:\\Users\\KEYA GOHIL\\Downloads\\3.jpg", 0, 0, 1366, 768);
    }
    getch();
    getch();
    if (GetAsyncKeyState(VK_RIGHT))
    {
      i = i + 1;
      t = page;
      page = f_page;
      f_page = t;
    }
    else if (GetAsyncKeyState(VK_LEFT))
    {
      if (i > 0)
        i = i - 1;
      t = page;
      page = b_page;
      b_page = t;
    }
    else
      continue;
    if (i == 19)
    {
      delay(3000);
      break;
    }
  }
}

void tcp_wr()
{

  int page = 0;
  int f_page = 1;
  int t;
  int i = 0;
  int b_page = 2;
  setactivepage(page);
  readimagefile((char *)"C:\\Users\\KEYA GOHIL\\Downloads\\3.jpg", 0, 0, 1366, 768);

  while (true)
  {

    // settextstyle(0,HORIZ_DIR,1);
    setvisualpage(page);
    setactivepage(f_page);
    cleardevice();
    setlinestyle(SOLID_LINE, 0, 1);
    setcolor(15);
    layout_wr();
    setfillstyle(SOLID_FILL, WHITE);
    // floodfill(200,255,WHITE);
    floodfill(0, 0, WHITE);
    layer_wr(i - 1);
    if (i > 0)
    {
      setactivepage(b_page);
      setlinestyle(SOLID_LINE, 0, 1);
      cleardevice();
      setcolor(15);
      layout_wr();
      setfillstyle(SOLID_FILL, WHITE);
      floodfill(200, 255, WHITE);
      layer_wr(i - 2);
    }
    else if (i == 0)
    {
      setactivepage(b_page);
      setlinestyle(SOLID_LINE, 0, 1);
      setcolor(15);
      cleardevice();
      readimagefile((char *)"C:\\Users\\KEYA GOHIL\\Downloads\\3.jpg", 0, 0, 1366, 768);
    }
    getch();
    getch();
    if (GetAsyncKeyState(VK_RIGHT))
    {
      i = i + 1;
      t = page;
      page = f_page;
      f_page = t;
    }
    else if (GetAsyncKeyState(VK_LEFT))
    {
      if (i > 0)
        i = i - 1;
      t = page;
      page = b_page;
      b_page = t;
    }
    else
      continue;
    if (i == 13)
    {
      delay(3000);
      break;
    }
  }
}

int check(POINT cp)
{
  int x, y;
  x = cp.x;
  y = cp.y;
  if (x > GetSystemMetrics(SM_CXSCREEN) - 25 && y < 50)
    return -2;
  else if (x >= 200 && x <= 350)
  {
    if (y >= topo_arr[0] && y <= topo_arr[1])
    {
      return 1;
    }
    if (y >= topo_arr[2] && y <= topo_arr[3])
    {
      return 3;
    }
    if (y >= topo_arr[4] && y <= topo_arr[5])
    {
      return 5;
    }
  }
  else if (x >= 1100 && x <= 1250)
  {
    if (y >= topo_arr[0] && y <= topo_arr[1])
    {
      return 7;
    }
    if (y >= topo_arr[2] && y <= topo_arr[3])
    {
      return 9;
    }
    if (y >= topo_arr[4] && y <= topo_arr[5])
    {
      return 11;
    }
  }
  else
    return -1;
}

void changes(int i)
{
  if (i == -1 || i == -2)
  {
    return;
  }
  else
  {
    setlinestyle(SOLID_LINE, 0, 3);
    setcolor(3);
    if (i < 6)
    {
      if (i != 5)
      {
        line(275, topo_arr[i] + 25, 275, topo_arr[i] + 25 + 25);
        line(275, topo_arr[i] + 25 + 25, 112, topo_arr[i] + 25 + 25);
      }
      else
      {
        line(275, topo_arr[i] + 25, 275, topo_arr[i] + 15 + 25);
        line(275, topo_arr[i] + 15 + 25, 112, topo_arr[i] + 15 + 25);
      }
      setlinestyle(SOLID_LINE, 0, 5);
      line(112, 125, 112, 665);
    }
    else if (i > 6 && i < 12)
    {
      i %= 6;
      if (i != 5)
      {
        line(1175, topo_arr[i] + 25, 1175, topo_arr[i] + 25 + 25);
        line(1175, topo_arr[i] + 25 + 25, 1012, topo_arr[i] + 25 + 25);
      }
      else
      {
        line(1175, topo_arr[i] + 25, 1175, topo_arr[i] + 15 + 25);
        line(1175, topo_arr[i] + 15 + 25, 1012, topo_arr[i] + 15 + 25);
      }
      setlinestyle(SOLID_LINE, 0, 5);
      line(1012, 125, 1012, 665);
    }
    setlinestyle(SOLID_LINE, 0, 1);
    setcolor(0);
  }
}

void modify_router(){
     setlinestyle(SOLID_LINE,0,5);
     setcolor(LIGHTCYAN);
     arc(690,270,45,135,10);   
     arc(690,270,45,135,20);   
     arc(690,270,45,135,30); 
     arc(760,270,45,135,10);   
     arc(760,270,45,135,20);   
     arc(760,270,45,135,30); 
}

int main(int argc, char const *argv[])
{
  DWORD sw = GetSystemMetrics(SM_CXSCREEN);
  DWORD sh = GetSystemMetrics(SM_CYSCREEN);
  int page = 0;
  int i = -1, j = -1, temp = -3;
  initwindow(sw, sh, (char *)"C:\\TC\\BGI");
  setactivepage(page);
  readimagefile((char *)"C:\\Users\\KEYA GOHIL\\Downloads\\2.jpg", 0, 0, 1366, 768);
  setvisualpage(page);
  page = 1 - page;
  setactivepage(page);
  cleardevice();
  topology();
  getch();
  while (true)
  {
    setvisualpage(page);
    if (i != -1 && j != -1)
    {
      if ((i < 6 && j > 6) || (i > 6 && j < 6))
      {
        modify_router();
        delay(3000);
        tcp();
        i = -1;
        j = -1;
      }
      else
      {
        delay(3000);
        tcp_wr();
        i = -1;
        j = -1;
      }
    }
    setlinestyle(SOLID_LINE, 0, 1);
    setactivepage(1 - page);
    cleardevice();
    topology();
    POINT cp;
    while (1)
    {
      if (GetAsyncKeyState(VK_LBUTTON))
      {
        GetAsyncKeyState(VK_LBUTTON);
        GetCursorPos(&cp);
        temp = check(cp);
        if (temp != i)
        {
          j = i;
          i = temp;
          changes(i);
          changes(j);
          break;
        }
        else
        {
          i = -1;
          break;
        }
      }
    }
    if (temp == -2)
    {
      delay(2000);
      break;
    }
    page = 1 - page;
  }
  closegraph();
  return 0;
}