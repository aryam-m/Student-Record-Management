#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
class student
{
 private:
 int admno,ano,j,k;
 char name[10];
 char blg;
char addr[50],fname[20],mname[20],focc[25],mocc[25];
int cph,dob,doa;
 public:
 void enter(int);
 int access();
 void display();
 };
 student stud[80];

 void student::enter(int a)
 {
clrscr();
ofstream ofile;
 ofile.open("student.txt",ios::app);
 cout<<"Enter the following details :\n";
 cout<<"\n\nAdmno:";
 cin>>stud[a].admno;
ofile<<stud[a].admno;
 cout<<"\n\nName :";
 gets(stud[a].name);
ofile<<stud[a].name;
cout<<�\n\nDate of Birth :�;
cin>>stud[a].dob;
ofile<<stud[a].dob;
cout<<�\n\nDate of admission :�;
cin>>stud[a].doa;
ofile<<stud[a].doa;
cout<<�\n\nBlood Group :�;
cin>>stud[a].blg;
ofile<<stud[a].blg;
cout<<�\n\nAddress :�;
gets(stud[a].addr);
ofile<<stud[a].addr;
cout<<�\n\nFather�s Name : �;
gets(stud[a].fname);
ofile<<stud[a].fname;
cout<<�\n\nFather�s  Occupation :�;
gets(stud[a].focc);
ofile<<stud[a].focc;
cout<<�\n\nMother�s name : �;
gets(stud[a].mname); 
ofile<<stud[a].mname;
cout<<�\n\nMother�s Occupation :�;
gets(stud[a].mocc);
ofile<<stud[a].mocc;
cout<<�\n\nContact Number :�;
cin>>stud[a].cph;
ofile<<stud[a].cph;
ofile.close();
 }

 void main()
 {
 void designs();
 designs();
 int i;
 clrscr();
 int opt;
 for(i=0;i<78;i++)
 {
 cout<<"\n\nIf you wish to enter a student record enter  1�; 
cout<<�\n\nIf you wish to search for a record enter  2�;
cout<<�\n\nIf you wish to exit the program enter  3\n";
 cin>>opt;
 switch(opt)
 {
 case 1:clrscr( );
             stud[i].enter(i);
             break;
 case 2:clrscr( );
             stud[80].display();
  	break;
 case 3:exit(1);
	break;
 default: cout<<"\nPlease enter a valid value \n";
	 i--;
	 break;
 }
 }
 getch();
  }

 void student::display()
 {
  int x,y;
  k=stud[80].access();
  if(k!=81)
  {
  ifstream ifile;
  ifile.open("student.txt",ios::in);
  ifile>>stud[k].admno;
   cout<<"\nThe student record having the entered admission number is :\n";
  cout<<"\n\nAdmission numbe r :"<<stud[k].admno;
ifile>>stud[k].name;
  cout<<"\n\nName is  :";
  puts(stud[k].name);
ifile>>stud[k].dob;
  cout<<"\n\nDate of birth :"<<stud[k].dob;
ifile>>stud[k].doa;
 cout<<�\n\nDate of admission :�<<stud[k].doa;
ifile>>stud[k].blg;
  cout<<"\n\nBlood Group :"<<stud[k].blg;
ifile>>stud[k].addr;
  cout<<�\n\nAddress :�;
  puts(stud[k].addr);
ifile>>stud[k].fname;
  cout<<�\n\nFather�s Name :�;
  puts(stud[k].fname);
ifile>>stud[k].focc;
  cout<<�\n\nFather�s Occupation :�;
  puts(stud[k].focc);
ifile>>stud[k].mname;
  cout<<�\n\nMother�s Name :�;
  puts(stud[k].mocc);
ifile>>stud[k].cph;
  cout<<�\n\nContact Number :�<<stud[a].cph;
  ifile.close();
  cout<<"\n\nIf you wish to search for another record enter 1, if you wish to exit the program enter 2\n";
  cin>>y;
  switch(y)
  {
  case 1:clrscr();
              stud[80].display();
	break;
  case 2:exit(1);
	 break;
  }

 }
 else
 {
 cout<<"\n\n  the entered record not found ";
 cout<<"\n\nenter 1 for searching a record, 2 to exit";
 cin>>x;
 switch(x)
 {
 case 1:clrscr();
              stud[80].display();
	break;
 case 2:exit(1);
	break;
 } 
}
 }

 int student::access()
 {
 ifstream ifile;
 ifile.open("student.txt",ios::in);
 int w=0;
 cout<<"\n\nEnter the admission number of the student record to be searched\n";
 cin>>ano;
 for(j=0;j<80;j++)
 {
 ifile>>stud[j].admno;
 if(stud[j].admno==ano)
 {
  w++;
  goto label;
 }
 }
 label:cout<<"\n\nwell done\n\n";
 ifile.close();
 if(w!=0)
 return(j);
 else
 return(81);
 }


void designs()
{
clrscr();
cout<<�\t\t\t STUDENT DATA BASE�;
cout<<�\n\t\t\t********************�;
cout<<�\n\n�;
cout<<�\t\t\t STUDENT RECORD�;
cout<<�\n�;
cout<<�\t\t\t___________________\n;
};