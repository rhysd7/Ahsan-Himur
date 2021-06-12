#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void draw();
int i,who_win();
char box[9]={'1','2','3','4','5','6','7','8','9'};
int main()
{ 
    i=who_win();
    draw();
    moves();
    draw(); 
    moves1();
    New();
    draw(); 
    moves2();
    New();
    draw(); 
    moves3();
    New();
    draw();
    etc();
    New();
    draw();
    i=who_win();
    if(i==3)
    {draw();
    printf("Box is full\n");
    return 0;}
    else if(i==2)
    {draw();
    printf("Computer Win\n");
    return 0;}
    else if(i==1)
    {draw();
    printf("You Win\n");
    return 0;}
    else 
    moves4();
    New();
    draw();
    i=who_win();
    if(i==3)
    {draw();
    printf("Box is full\ni");
    return 0;}
    else if(i==2)
    {draw();
    printf("Computer Win\n");
    return 0;}  
    else if(i==1)
    {draw();
    printf("You Win\n");
    return 0;}
    else 
    etc();
    New();
    draw();
    i=who_win();
    if(i==3)
    {draw();
    printf("Box is full\n");
    return 0;}
    else if(i==2)
    {draw();
    printf("Computer Win\n");
    return 0;}
    else if(i==1)
    {draw();
    printf("You Win\n");
    return 0;}
    else 
    moves5();
    New();
    draw();
    i=who_win();
    if(i==3)
    {draw();
    printf("Box is full\n");
    return 0;}
    else if(i==2)
    {draw();
    printf("Computer Win\n");
    return 0;}
    else if(i==1)
    {draw();
    printf("You Win\n");
    return 0;}
    else 
    moves6();
    New();
    draw();
    i=who_win();
    if(i==3)
    {draw();
    printf("Box is full\n");
    return 0;}
    else if(i==2)
    {draw();
    printf("Computer Win\n");
    return 0;}
    else if(i==1)
    {draw();
    printf("You Win\n");
    return 0;}
    printf("\nTry Again...");
   return 0;
   }
   void draw()
   {system("CLS");
    printf("\tTik Tak Toe\n");
    printf("  You-(X) -- (Y)-Computer\n\n");
    printf("\t %c | %c | %c \n",box[0],box[1],box[2]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n",box[3],box[4],box[5]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n",box[6],box[7],box[8]);
}    
  void New()
   {printf("\n\n\n");}
 int moves()
{
   int k;
    printf("\nComputer is playing\n");
    sleep(1);
    srand(time(0));
    k=rand()%4+1;
    if(k==1 && box[0]=='1')
    box[0]='Y';
    else if(k==2 && box[2]=='3')
    box[2]='Y';
    else if(k==3 && box[6]=='7')
    box[6]='Y';
    else if(k==4 && box[8]=='9')
    box[8]='Y';
}
   void moves1()
    {char h;
     int i;
     printf("Your turn,Enter position\n");
     scanf("%c",&h);
     for(i=0;i<=8;i++)
       {
     if(box[i]==h)
        box[i]='X';
        }
    }
    moves2()
    { printf("\nComputer is playing\n");
    sleep(1);
     if(box[0]=='Y' && box[8]=='9')
        box[8]='Y';
     else if(box[8]=='Y' && box[0]=='1')
        box[0]='Y';
     else if(box[2]=='Y'&&box[6]=='7')
        box[6]='Y';
     else if(box[6]=='Y'&&box[2]=='3')
        box[2]='Y';
     else if(box[4]!='X')
        box[4]='Y';
    }
    moves3()
    { char l;
    int i;
    printf("Your turn,Enter position\n");
    getchar();
    scanf("%c",&l);
    for(i=0;i<=8;i++){
          if(box[i]==l)
            box[i]='X'; }
    }
    void moves4()
    { char m;
     int i;
     printf("Your turn,Enter position\n");
     getchar();
     scanf("%c",&m);
     for(i=0;i<=8;i++)
      {if(box[i]==m)
         { box[i]='X';}
       }
    }
    void moves5()
    {
     char n;
     int i;
     printf("Your turn,Enter position\n");
     getchar();
     scanf("%c",&n);
     for(i=0;i<=8;i++)
     {
      if(box[i]==n)
         {box[i]='X';} }
    }
    void moves6()
    {
       printf("\nComputer is playing\n");
         sleep(1);
        if(box[1]=='2')
              box[1]='Y';
        else if(box[0]=='1')
              box[0]='Y';
        else if(box[5]=='6')
              box[5]='Y';    
        else if(box[3]=='4')
              box[3]='Y';
        else if(box[4]=='5')
              box[4]='Y';
        else if(box[2]=='3')
              box[2]='Y';
        else if(box[6]=='7')
              box[6]='Y';        
        else if(box[7]=='8')
              box[7]='Y';
        else if(box[8]=='9')
              box[8]='Y';    
   }
void etc()
{
    printf("\nComputer is playing\n");
    sleep(1);
    int h;
    char i;
    if(box[0]=='Y'&& box[1]=='Y' && box[2]=='3')
      box[2]='Y';
    else if(box[1]=='Y'&& box[2]=='Y' && box[0]=='1')
      box[0]='Y';
    else if(box[0]=='Y'&& box[2]=='Y' && box[1]=='2')
      box[1]='Y';
    
    else if(box[3]=='Y'&& box[4]=='Y' && box[5]=='6')
      box[5]='Y';
    else if(box[4]=='Y'&& box[5]=='Y' && box[3]=='4')
      box[3]='Y';
    else if(box[3]=='Y'&& box[5]=='Y' && box[4]=='5')
      box[4]='Y';

    else if(box[6]=='Y'&& box[7]=='Y' && box[8]=='9')
      box[8]='Y';
    else if(box[7]=='Y'&& box[8]=='Y' && box[6]=='7')
      box[6]='Y';
    else if(box[6]=='Y'&& box[8]=='Y' && box[7]=='8')
      box[7]='Y';

    else if(box[0]=='Y'&& box[3]=='Y' && box[6]=='7')
      box[6]='Y';
    else if(box[3]=='Y'&& box[6]=='Y' && box[0]=='1')
      box[0]='Y';
    else if(box[0]=='Y'&& box[6]=='Y' && box[3]=='4')
      box[3]='Y';
    
    else if(box[1]=='Y'&& box[4]=='Y' && box[7]=='8')
      box[8]='Y';
    else if(box[4]=='Y'&& box[7]=='Y' && box[1]=='2')
      box[1]='Y';
    else if(box[1]=='Y'&& box[7]=='Y' && box[4]=='5')
      box[4]='Y';
    
    else if(box[2]=='Y'&& box[5]=='Y' && box[8]=='9')
      box[8]='Y';
    else if(box[5]=='Y'&& box[8]=='Y' && box[2]=='3')
      box[2]='Y';
    else if(box[2]=='Y'&& box[8]=='Y' && box[5]=='6')
      box[5]='Y';
    
    else if(box[0]=='Y'&& box[4]=='Y' && box[8]=='9')
      box[8]='Y';
    else if(box[4]=='Y'&& box[8]=='Y' && box[0]=='1')
      box[0]='Y';
    else if(box[0]=='Y'&& box[8]=='Y' && box[4]=='5')
      box[4]='Y';
    
    else if(box[2]=='Y'&& box[4]=='Y' && box[6]=='7')
      box[6]='Y';
    else if(box[4]=='Y'&& box[6]=='Y' && box[2]=='3')
      box[2]='Y';
    else if(box[2]=='Y'&& box[6]=='Y' && box[4]=='5')
      box[4]='Y';
//
    else if(box[0]=='X'&& box[1]=='X' && box[2]=='3')
      box[2]='Y';
    else if(box[1]=='X'&& box[2]=='X' && box[0]=='1')
      box[0]='Y';
    else if(box[0]=='X'&& box[2]=='X' && box[1]=='2')
      box[1]='Y';
    
    else if(box[3]=='X'&& box[4]=='X' && box[5]=='6')
      box[5]='Y';
    else if(box[4]=='X'&& box[5]=='X' && box[3]=='4')
      box[3]='Y';
    else if(box[3]=='X'&& box[5]=='X' && box[4]=='5')
      box[4]='Y';

    else if(box[6]=='X'&& box[7]=='X' && box[8]=='9')
      box[8]='Y';
    else if(box[7]=='X'&& box[8]=='X' && box[6]=='7')
      box[6]='Y';
    else if(box[6]=='X'&& box[8]=='X' && box[7]=='8')
      box[7]='Y';

    else if(box[0]=='X'&& box[3]=='X' && box[6]=='7')
      box[6]='Y';
    else if(box[3]=='X'&& box[6]=='X' && box[0]=='1')
      box[0]='Y';
    else if(box[0]=='X'&& box[6]=='X' && box[3]=='4')
      box[3]='Y';
    
    else if(box[1]=='X'&& box[4]=='X' && box[7]=='8')
      box[7]='Y';
    else if(box[4]=='X'&& box[7]=='X' && box[1]=='2')
      box[1]='Y';
    else if(box[1]=='X'&& box[7]=='X' && box[4]=='5')
      box[4]='Y';
    
    else if(box[2]=='X'&& box[5]=='X' && box[8]=='9')
      box[8]='Y';
    else if(box[5]=='X'&& box[8]=='X' && box[2]=='3')
      box[2]='Y';
    else if(box[2]=='X'&& box[8]=='X' && box[5]=='6')
      box[5]='Y';
     
    else if(box[0]=='X'&& box[4]=='X' && box[8]=='9')
      box[8]='Y';
    else if(box[4]=='X'&& box[8]=='X' && box[0]=='1')
      box[0]='Y';
    else if(box[0]=='X'&& box[8]=='X' && box[4]=='5')
      box[4]='Y';
    
    else if(box[2]=='X'&& box[4]=='X' && box[6]=='7')
      box[6]='Y';
    else if(box[4]=='X'&& box[6]=='X' && box[2]=='3')
      box[2]='Y';
    else if(box[2]=='X'&& box[6]=='X' && box[4]=='5')
      box[4]='Y';
    else if(box[4]=='Y' && box[3]=='4')
      box[3]='Y';
    else if(box[4]=='Y'&& box[5]=='6')
      box[5]='Y';
    else if(box[4]=='Y'&& box[1]=='2')
      box[1]='Y';
    else if(box[4]=='Y'&& box[7]=='8')
      box[7]='Y';
    else
       {if(box[1]=='2')
              box[1]='Y';
        else if(box[0]=='1')
              box[0]='Y';
        else if(box[5]=='6')
              box[5]='Y';    
        else if(box[3]=='4')
              box[3]='Y';
        else if(box[4]=='5')
              box[4]='Y';
        else if(box[2]=='3')
              box[2]='Y';
        else if(box[6]=='7')
              box[6]='Y';        
        else if(box[7]=='8')
              box[7]='Y';
        else if(box[8]=='9')
              box[8]='Y';}
  }
   int who_win()
   {
    if(box[0]=='X' && box[1]=='X' && box[2]=='X')
    return 1;
    else if(box[3]=='X' && box[4]=='X' && box[5]=='X')
    return 1;
    else if(box[6]=='X' && box[7]=='X' && box[8]=='X')
    return 1;
    else if(box[0]=='X' && box[3]=='X' && box[6]=='X')
    return 1;
    else if(box[1]=='X' && box[4]=='X' && box[7]=='X')
    return 1;
    else if(box[2]=='X' && box[5]=='X' && box[8]=='X')
    return 1;
    else if(box[0]=='X' && box[4]=='X' && box[8]=='X')
    return 1;
    else if(box[2]=='X' && box[4]=='X' && box[6]=='X')
    return 1;
    else if(box[0]=='Y' && box[1]=='Y' && box[2]=='Y')
    return 2;
    else if(box[3]=='Y' && box[4]=='Y' && box[5]=='Y')
    return 2;
    else if(box[6]=='Y' && box[7]=='Y' && box[8]=='Y')
    return 2;
    else if(box[0]=='Y' && box[3]=='Y' && box[6]=='Y')
    return 2;
    else if(box[1]=='Y' && box[4]=='Y' && box[7]=='Y')
    return 2;
    else if(box[2]=='Y' && box[5]=='Y' && box[8]=='Y')
    return 2;
    else if(box[0]=='Y' && box[4]=='Y' && box[8]=='Y')
    return 2;
    else if(box[2]=='Y' && box[4]=='Y' && box[6]=='Y')
    return 2;
    else
      {
        for(int i=0;i<=8;i++)
          {
            if(box[i]!='X' || box[i]!='Y')
            return 4;
           }
    return 3;
      }   
  }
  