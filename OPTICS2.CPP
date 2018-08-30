#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
float fu,fv,ff;
float m;
char itype,otype;
void frontpage()
{    char ans;
    int style,size,gdriver = EGA, gmode = EGAHI;
  initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
  setbkcolor(3);
   style =GOTHIC_FONT;
     settextstyle(style=0, HORIZ_DIR, size=0);
   outtextxy(10,250,"Developer:Prayant Gupta");
     outtextxy(10,270,"College:Bharati Vidyapeeth's College Of Engineering");
   delay(1500);
   cleardevice();
   settextstyle(style=4, HORIZ_DIR, size=6);
   outtextxy(5,58,"OPTICS PROGRAMME");
   gotoxy(10,12);
   cout<<" Want to continue(Y/N)...?";
   gotoxy(40,30);
   cin>>ans;
   while(ans!='y'&&ans!='N'&&ans!='n'&&ans!='Y')
   {
   gotoxy(40,31);
   cout<<"Enter Again:";
   cin>>ans;
   }
  if(ans=='n'||ans=='N')
  exit(0);
 getch();
   closegraph();
 } //front page function ends


class optics                         //class is created
	       {
		 public:
	void type()
	 {
		cout<<" Lens/Mirror(L/M):";
		cin>>otype;
		while(otype!='l'&&otype!='L'&&otype!='m'&&otype!='M')
        {
            cout<<"Enter Again:";cin>>otype;
        }
	 }
	void enteru()
	    {
		char c;
		cout<<" Enter Object Distance(cm):";
		cin>>fu;
		cout<<" Left/Right(L/R):";
		cin>>c;
		while(c!='l'&&c!='L'&&c!='r'&&c!='R')
        {
            cout<<"Enter Again";cin>>c;
        }
		if(c=='l'||c=='L')
		fu=-fu;
	    }
	void enterv()
	 {
		char c;
		cout<<" Enter Image Distance(cm) :";
		cin>>fv;
		cout<<" Left/Right(L/R):";
		cin>>c;
		while(c!='l'&&c!='L'&&c!='r'&&c!='R')
        {
            cout<<"Enter Again";cin>>c;
        }
		if(c=='l'||c=='L')
		 fv=-fv;
	 }
	void enterf()
	 {
		char c;
		cout<<" Enter Focal length(cm)   :";
		cin>>ff;
		cout<<" Concave/Convex(V/X):";
		cin>>itype;
		while(itype!='v'&&itype!='V'&&itype!='x'&&itype!='X')
        {
            cout<<"Enter Again";cin>>itype;
        }
		if(itype=='v'||itype=='V')
		ff=-ff;

	}
	void findu()
	    {
	     if(otype=='l'||otype=='L')
		  fu=(ff*fv)/(ff-fv);
	     else
		 fu=(ff*fv)/(fv-ff);
	   }
	void findv()
	    {
	     cout<<fu<<ff;
	     if(otype=='l'||otype=='L')
		fv=(ff*fu)/(fu+ff);
	     else
		 fv=(ff*fu)/(fu-ff);
	     }

	void findf()
	    {
	     if(otype=='l'||otype=='L')
		ff=(fu*fv)/(fu-fv);
	     else
	      ff=(fv*fu)/(fv+fu);
	     }
	void magn()
	  {
	   if(otype=='l'||otype=='L')
	   m=-fv/fu;
	   else
	   m=fv/fu;
	   cout<<m;
	  }
	void imgprop()
	{
	if(otype=='l'||otype=='L')
	  {
	    if(fv<0)
	    cout<<"\n\t"<<" Virtual Img";
	   else
	   cout<<"\n\t"<<" Real Img";
	   }
      else
	  {
	    if(fv>0)
	     cout<<"\n\t"<<" Virtual Img";
	    else
	    cout<<"\n\t"<<" Real Img";
	  }
     }
	void objprop()
	{
	  if(otype=='l'||otype=='L')
	     {
	       if(fu<0)
	       cout<<" Virtual Obj";
	       else
	       cout<<" Real Obj";
	     }
	 else
	    {
		if(fu>0)
		cout<<" Virtual Obj";
		else
		cout<<" Real Obj";
	   }
	}

void getd()
{
 cout<<"                            OPTICS"<<"\n";

 cout<<"INPUT ALL DETAILS"<<"\n";
 cout<<"______________________________________________________________________________"<<"\n";

 char ch;

 cout<<"What To find?"<<"\n";
 cout<<"  Attributes         |  Button "<<"\n";
 cout<<"  1.Object Distance: |   U"<<"\n";
 cout<<"  2.Image Distance:  |   V"<<"\n";
 cout<<"  3.Focal Length:    |   F"<<"\n";
 cout<<"\n"<<" Press Corresponding Button:";

 cin>>ch;
 while(ch!='u'&&ch!='U'&&ch!='v'&&ch!='V'&&ch!='f'&&ch!='F')
 {
     cout<<"\n"<<"Enter Again:";cin>>ch;
 }
 clrscr();
 cout<<"                            OPTICS"<<"\n";

 cout<<"\n"<<"INPUT ALL DETAILS"<<"\n";
 cout<<"______________________________________________________________________________"<<"\n";

 type();
 if(ch=='u'||ch=='U')
  {
    enterv();
    enterf();
    findu();
   }
 if(ch=='v'||ch=='V')
  {
    enteru();
    enterf();
    findv();

   }

 if(ch=='f'||ch=='F')
  {
    enteru();
    enterv();
    findf();
   }
cout<<"\n"<<"Calculating";
for(int i=0;i<5;i++)
{
cout<<".";
delay(900);
}
putd();
}

void putd()
{ clrscr();

   cout<<"                          OPTICS"<<"\n";
   cout<<" OUTPUT:";
  cout<<"\n"<<"_____________________________________________________________________________"<<"\n" ;

  if(otype=='l'||otype=='L')
   cout<<"\n"<<" Lens:" ;
  else
  cout<<"\n"<<" Mirror:";
  if(ff<0.0)
   cout<<"Concave";
   else
   cout<<"Convex";


cout<<"\n"<<" Object Distance:"<<fu<<" cm";
cout<<"\n"<<" Image Distance :"<<fv<<" cm";
cout<<"\n"<<" Focal Length   :"<<ff<<" cm";
cout<<"\n"<<" Magnification  :";magn();
cout<<"\n"<<" Image Property:";
imgprop();
if(m<0)
cout<<"\n\t"<<" Inverted Image";
else if(m>0.0)
cout<<"\n\t"<<" Erect Image";
if(m<1.0)
cout<<"\n\t"<<" Diminished Image";
if(m>1.0)
cout<<"\n\t"<<" Enlarged Image";

cout<<"\n"<<" Object Property:"<<"\n";
cout<<"\t";objprop();
}
};
int main()
{
clrscr();
frontpage();
textcolor(7);
clrscr();
optics obj;
obj.getd();
getch();
return 0;

}




