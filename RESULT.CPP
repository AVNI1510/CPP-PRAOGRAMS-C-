#RESULT OF STUDENT 

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int i,j;
struct Info
{
 int Rno,m[5];
 char name[20],g[5];
 float avg,t;
};
void Accept(Info S[50],int n)
{
 for(i=0;i<n;i++)
 {
  cout<<"Enter info of student "<<i+1<<endl;
  cout<<"Enter Rno=";
  cin>>S[i].Rno;
  cout<<"Enter name ";
  gets(S[i].name);
  cout<<"Enter marks in 5 subjects"<<endl;
  for(j=0;j<5;j++)
   cin>>S[i].m[j];
 }
}
void Grade(Info S[50],int n)
{
 for(i=0;i<n;i++)
 {
  S[i].t=0;
  for(j=0;j<5;j++)
   S[i].t+=S[i].m[j];
  S[i].avg=S[i].t/5.0;
  if(S[i].avg>=91)
     strcpy(S[i].g,"A1");
  else
   if(S[i].avg>=81)
      strcpy(S[i].g,"A2");
  else
   if(S[i].avg>=71)
   strcpy(S[i].g,"B1");
  else
   if(S[i].avg>=61)
   strcpy(S[i].g,"B2");
  else
   if(S[i].avg>=51)
   strcpy(S[i].g,"C1");
  else
   if(S[i].avg>=41)
   strcpy(S[i].g,"C2");
  else
   if(S[i].avg>=33)
   strcpy(S[i].g,"D");
 else
  strcpy(S[i].g,"CDB");
 }
}
void Report(Info S[50],int n)
{
 cout<<endl;
 for(i=0;i<n;i++)
 {
  cout<<"Report Card of student "<<i+1<<endl;
  cout<<"Roll no="<<S[i].Rno<<" Name is "<<S[i].name<<endl;
  cout<<"Marks in 5 subjects"<<endl;
  for(j=0;j<5;j++)
   cout<<S[i].m[j]<<" ";
  cout<<"Average="<<S[i].avg<<" Grade is "<<S[i].g<<endl;
  if(S[i].g=="CDB")
   cout<<"FAIL";
  else
  cout<<"PASS";
  cout<<endl;
  cout<<endl;
 }
}
void main()
{int n;
 Info S[50];
 clrscr();
 cout<<"Enter n=";
 cin>>n;
 Accept(S,n);
 Grade(S,n);
 Report(S,n);
 getch();
}