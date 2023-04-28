#include <iostream>
#include <fstream>
#include <cstring>
#include<conio.h>
#include<windows.h>
#include <stdlib.h>
using namespace std;
ifstream f("sebi5.txt");
ifstream f1("sebi9.txt");
ifstream f2("sebi16.txt");
void m4(int d, int p,int a[4], int b[4],int c[4])
{int ok=0;
    if(d==1){if(p==2){ if(a[1]!=0){ if(b[4]==0){b[4]=a[1];a[1]=0;ok=1;}
                                    else if(b[3]==0&& b[4]>a[1]){b[3]=a[1];a[1]=0;ok=1;}
                                      else if(b[2]==0&&b[3]>a[1]){b[2]=a[1];a[1]=0;ok=1;}
                                             else if(b[1]==0&&b[2]>a[1]){b[1]=a[1]; a[1]=0;ok=1;}}


                            else if(a[2]!=0){if(b[4]==0){b[4]=a[2];a[2]=0;ok=1;}
                                               else if(b[3]==0&&b[4]>a[2]){b[3]=a[2];a[2]=0;ok=1;}
                                                 else if(b[2]==0&&b[3]>a[2]){b[2]=a[2];a[2]=0;ok=1;}
                                                      else if(b[1]==0&&b[2]>a[2]){b[1]=a[2]; a[2]=0;ok=1;}}

                                    else if(a[3]!=0){if(b[4]==0){b[4]=a[3];a[3]=0;ok=1;}
                                            else if(b[3]==0&&b[4]>a[3]){b[3]=a[3];a[3]=0;ok=1;}
                                        else if(b[2]==0&&b[3]>a[3]){b[2]=a[3];a[3]=0;ok=1;}
                                                else if(b[1]==0&&b[2]>a[3]){b[1]=a[3]; a[3]=0;ok=1;}}
                        else if(a[4]!=0){if(b[4]==0){b[4]=a[4];a[4]=0;ok=1;}
                                    else if(b[3]==0&&b[4]>a[4]){b[3]=a[4];a[4]=0;ok=1;}
                                        else if(b[2]==0&&b[3]>a[4]){b[2]=a[4];a[4]=0;ok=1;}
                                                else if(b[1]==0&&b[2]>a[4]){b[1]=a[4]; a[4]=0;ok=1;}}
                      }
             else if(p==3){ if(a[1]!=0){ if(c[4]==0){c[4]=a[1];a[1]=0;ok=1;}
                                else if(c[3]==0&&c[4]>a[1]){c[3]=a[1];a[1]=0;ok=1;}
                                      else if(c[2]==0&&c[3]>a[1]){c[2]=a[1];a[1]=0;ok=1;}
                                             else if(c[1]==0&&c[2]>a[1]){c[1]=a[1]; a[1]=0;ok=1;}}


                            else if(a[2]!=0){ if(c[4]==0){c[4]=a[2];a[2]=0;ok=1;}

                                  else  if(c[3]==0&&c[4]>a[2]){c[3]=a[2];a[2]=0;ok=1;}
                                                 else if(c[2]==0&&c[3]>a[2]){c[2]=a[2];a[2]=0;ok=1;}
                                                      else if(c[1]==0&&c[2]>a[2]){c[1]=a[2]; a[2]=0;ok=1;}}

                                    else if(a[3]!=0) {if(c[4]==0){c[4]=a[3];a[3]=0;ok=1;}
                                           else if(c[3]==0&&c[4]>a[3]){c[3]=a[3];a[3]=0;ok=1;}
                                        else if(c[2]==0&&c[3]>a[3]){c[2]=a[3];a[3]=0;ok=1;}
                                                else if(c[1]==0&&c[2]>a[3]){c[1]=a[3]; a[3]=0;ok=1;}}
                                  else if(a[4]!=0) {if(c[4]==0){c[4]=a[4];a[4]=0;ok=1;}
                                           else if(c[3]==0&&c[4]>a[4]){c[3]=a[4];a[4]=0;ok=1;}
                                        else if(c[2]==0&&c[3]>a[4]){c[2]=a[4];a[4]=0;ok=1;}
                                                else if(c[1]==0&&c[2]>a[4]){c[1]=a[4]; a[4]=0;ok=1;}}
                       }

}
else if(d==2){if(p==3){ if(b[1]!=0){ if(c[4]==0){c[4]=b[1];b[1]=0;ok=1;}
                                     else if(c[3]==0 && c[4]>b[1]){c[3]=b[1];b[1]=0;ok=1;}
                                      else if(c[2]==0&&c[3]>b[1]){c[2]=b[1];b[1]=0;ok=1;}
                                             else if(c[1]==0&&c[2]>b[1]){c[1]=b[1]; b[1]=0;ok=1;}}


                            else if(b[2]!=0){if(c[4]==0){c[4]=b[2];b[2]=0;ok=1;}
                                   else if(c[3]==0&&c[4]>b[2]){c[3]=b[2];b[2]=0;ok=1;}
                                                 else if(c[2]==0&&c[3]>b[2]){c[2]=b[2];b[2]=0;ok=1;}
                                                      else if(c[1]==0&&c[2]>b[2]){c[1]=b[2]; b[2]=0;ok=1;}}

                                    else if(b[3]!=0) {if(c[4]==0){c[4]=b[3];b[3]=0;ok=1;}
                                           else if(c[3]==0&&c[4]>b[3]){c[3]=b[3];b[3]=0;ok=1;}
                                        else if(c[2]==0&&c[3]>b[3]){c[2]=b[3];b[3]=0;ok=1;}
                                                else if(c[1]==0&&c[2]>b[3]){c[1]=b[3]; b[3]=0;ok=1;}}
                                   else if(b[4]!=0) {if(c[4]==0){c[4]=b[4];b[4]=0;ok=1;}
                                           else if(c[3]==0&&c[4]>b[4]){c[3]=b[4];b[4]=0;ok=1;}
                                        else if(c[2]==0&&c[3]>b[4]){c[2]=b[4];b[4]=0;ok=1;}
                                                else if(c[1]==0&&c[2]>b[4]){c[1]=b[4]; b[4]=0;ok=1;}}
                       }
          else if(p==1){ if(b[1]!=0){ if(a[4]==0){a[4]=b[1];b[1]=0;ok=1;}
                                   else  if(a[3]==0&&a[4]>b[1]){a[3]=b[1];b[1]=0;ok=1;}
                                      else if(a[2]==0&&a[3]>b[1]){a[2]=b[1];b[1]=0;ok=1;}
                                             else if(a[1]==0&&a[2]>b[1]){a[1]=b[1]; b[1]=0;ok=1;}}


                            else if(b[2]!=0){if(a[4]==0){a[4]=b[2];b[2]=0;ok=1;}
                                   else if(a[3]==0&&a[4]>b[2]){a[3]=b[2];b[2]=0;ok=1;}
                                                 else if(a[2]==0&&a[3]>b[2]){a[2]=b[2];b[2]=0;ok=1;}
                                                      else if(a[1]==0&&a[2]>b[2]){a[1]=b[2]; b[2]=0;ok=1;}}

                                    else if(b[3]!=0){if(a[4]==0){a[4]=b[3];b[3]=0;ok=1;}
                                          else  if(a[3]==0 && a[4]>b[3]){a[3]=b[3];b[3]=0;ok=1;}
                                        else if(a[2]==0&&a[3]>b[3]){a[2]=b[3];b[3]=0;ok=1;}
                                                else if(a[1]==0&&a[2]>b[3]){a[1]=b[3]; b[3]=0;ok=1;}}

                          if(b[4]!=0){ if(a[4]==0){a[4]=b[4];b[4]=0;ok=1;}
                                   else  if(a[3]==0&&a[4]>b[4]){a[3]=b[4];b[4]=0;ok=1;}
                                      else if(a[2]==0&&a[3]>b[4]){a[2]=b[4];b[4]=0;ok=1;}
                                             else if(a[1]==0&&a[2]>b[4]){a[1]=b[4]; b[4]=0;ok=1;}}
                       }}

      else if(d==3){if(p==2){ if(c[1]!=0){if(b[4]==0){b[4]=c[1];c[1]=0;ok=1;}
                                    else  if(b[3]==0&&b[4]>c[1]){b[3]=c[1];c[1]=0;ok=1;}
                                      else if(b[2]==0&&b[3]>c[1]){b[2]=c[1];c[1]=0;ok=1;}
                                             else if(b[1]==0&&b[2]>c[1]){b[1]=c[1]; c[1]=0;ok=1;}}


                            else if(c[2]!=0){if(b[4]==0){b[4]=c[2];c[2]=0;ok=1;}
                                    else if(b[3]==0&& b[4]>c[2]){b[3]=c[2];c[2]=0;ok=1;}
                                                 else if(b[2]==0&&b[3]>c[2]){b[2]=c[2];c[2]=0;ok=1;}
                                                      else if(b[1]==0&&b[2]>c[2]){b[1]=c[2]; c[2]=0;ok=1;}}

                                    else if(c[3]!=0){if(b[4]==0){b[4]=c[3];c[3]=0;ok=1;}
                                    else if(b[3]==0&& b[4]>c[3]){b[3]=c[3];c[3]=0;ok=1;}
                                        else if(b[2]==0&&b[3]>c[3]){b[2]=c[3];c[3]=0;ok=1;}
                                                else if(b[1]==0&&b[2]>c[3]){b[1]=c[3]; c[3]=0;ok=1;}}
                                       else if(c[4]!=0){if(b[4]==0){b[4]=c[4];c[4]=0;ok=1;}
                                    else if(b[3]==0&& b[4]>c[4]){b[3]=c[4];c[4]=0;ok=1;}
                                        else if(b[2]==0&&b[3]>c[4]){b[2]=c[4];c[4]=0;ok=1;}
                                                else if(b[1]==0&&b[2]>c[4]){b[1]=c[4]; c[4]=0;ok=1;}}

                      }
                   else if(p==1){ if(c[1]!=0){if(a[4]==0){a[4]=c[1];c[1]=0;ok=1;}
                                  else if(a[3]==0&&a[4]>c[1]){a[3]=c[1];c[1]=0;ok=1;}
                                      else if(a[2]==0&&a[3]>c[1]){a[2]=c[1];c[1]=0;ok=1;}
                                             else if(a[1]==0&&a[2]>c[1]){a[1]=c[1]; c[1]=0;ok=1;}}


                            else if(c[2]!=0){ if(a[4]==0){a[4]=c[2];c[2]=0;ok=1;}
                                              else if(a[3]==0&&a[4]>c[2]){a[3]=c[2];c[2]=0;ok=1;}
                                                 else if(a[2]==0&&a[3]>c[2]){a[2]=c[2];c[2]=0;ok=1;}
                                                      else if(a[1]==0&&a[2]>c[2]){a[1]=c[2]; c[2]=0;ok=1;}}

                                    else if(c[3]!=0){if(a[4]==0){a[4]=c[3];c[3]=0;ok=1;}
                                                       else if(a[3]==0&&a[4]>c[3]){a[3]=c[3];c[3]=0;ok=1;}
                                                       else if(a[2]==0&&a[3]>c[3]){a[2]=c[3];c[3]=0;ok=1;}
                                              else if(a[1]==0&&a[2]>c[3]){a[1]=c[3]; c[3]=0;ok=1;}}

                                else if(c[4]!=0){if(a[4]==0){a[4]=c[4];c[4]=0;ok=1;}
                                    else if(a[3]==0&& a[4]>c[4]){a[3]=c[4];c[4]=0;ok=1;}
                                        else if(a[2]==0&&a[3]>c[4]){a[2]=c[4];c[4]=0;ok=1;}
                                                else if(a[1]==0&&a[2]>c[4]){a[1]=c[4]; c[4]=0;ok=1;}}
                                   }
                      }


if(ok==0)cout<<"Miscare nepermisa"<<endl;

}
void afis4(int a[4],int b[4],int c[4])
{for(int i=1;i<=4;i++)
   { if(a[i]==1)cout<<"   "<<char(254)<<"   ";
       else if(a[i]==2)cout<<"  "<<char(254)<<char(254)<<char(254)<<"  ";
         else if(a[i]==3)cout<<" "<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<" ";
          else if(a[i]==0)cout<<"       ";
          else if(a[i]==4)cout<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
    if(b[i]==1)cout<<"   "<<char(254)<<"   ";
       else if(b[i]==2)cout<<"  "<<char(254)<<char(254)<<char(254)<<"  ";
         else if(b[i]==3)cout<<" "<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<" ";
          else if(b[i]==0)cout<<"       ";
          else if(b[i]==4)cout<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
     if(c[i]==1)cout<<"   "<<char(254)<<"   ";
      else if(c[i]==2)cout<<"  "<<char(254)<<char(254)<<char(254)<<"  ";
         else if(c[i]==3)cout<<" "<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<" ";
          else if(c[i]==0)cout<<"       ";
          else if(c[i]==4)cout<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
          cout<<endl;}
cout<<"   1      2      3   ";
}
int verificare4(int c[3])
{
    if(c[3]==3 &&c[2]==2 && c[1]==1&&c[4]==4) return 1;
    else return 0;
}
void m1(int d, int p,int a1[3], int b[3],int c[3])
{int ok=0;
    if(d==1){if(p==2){ if(a1[1]!=0){if(b[3]==0){b[3]=a1[1];a1[1]=0;ok=1;}
                                      else if(b[2]==0&&b[3]>a1[1]){b[2]=a1[1];a1[1]=0;ok=1;}
                                             else if(b[1]==0&&b[2]>a1[1]){b[1]=a1[1]; a1[1]=0;ok=1;}}


                            else if(a1[2]!=0){if(b[3]==0){b[3]=a1[2];a1[2]=0;ok=1;}
                                                 else if(b[2]==0&&b[3]>a1[2]){b[2]=a1[2];a1[2]=0;ok=1;}
                                                      else if(b[1]==0&&b[2]>a1[2]){b[1]=a1[2]; a1[2]=0;ok=1;}}

                                    else if(a1[3]!=0){if(b[3]==0){b[3]=a1[3];a1[3]=0;ok=1;}
                                        else if(b[2]==0&&b[2]>a1[3]){b[2]=a1[3];a1[3]=0;ok=1;}
                                                else if(b[1]==0&&b[2]>a1[3]){b[1]=a1[3]; a1[3]=0;ok=1;}}
                      }
             else if(p==3){ if(a1[1]!=0){if(c[3]==0){c[3]=a1[1];a1[1]=0;ok=1;}
                                      else if(c[2]==0&&c[3]>a1[1]){c[2]=a1[1];a1[1]=0;ok=1;}
                                             else if(c[1]==0&&c[2]>a1[1]){c[1]=a1[1]; a1[1]=0;ok=1;}}


                            else if(a1[2]!=0){if(c[3]==0){c[3]=a1[2];a1[2]=0;ok=1;}
                                                 else if(c[2]==0&&c[3]>a1[2]){c[2]=a1[2];a1[2]=0;ok=1;}
                                                      else if(c[1]==0&&c[2]>a1[2]){c[1]=a1[2]; a1[2]=0;ok=1;}}

                                    else if(a1[3]!=0) {if(c[3]==0){c[3]=a1[3];a1[3]=0;ok=1;}
                                        else if(c[2]==0&&c[3]>a1[3]){c[2]=a1[3];a1[3]=0;ok=1;}
                                                else if(c[1]==0&&c[2]>a1[3]){c[1]=a1[3]; a1[3]=0;ok=1;}}
                       }

}
else if(d==2){if(p==3){ if(b[1]!=0){if(c[3]==0){c[3]=b[1];b[1]=0;ok=1;}
                                      else if(c[2]==0&&c[3]>b[1]){c[2]=b[1];b[1]=0;ok=1;}
                                             else if(c[1]==0&&c[2]>b[1]){c[1]=b[1]; b[1]=0;ok=1;}}


                            else if(b[2]!=0){if(c[3]==0){c[3]=b[2];b[2]=0;ok=1;}
                                                 else if(c[2]==0&&c[3]>b[2]){c[2]=b[2];b[2]=0;ok=1;}
                                                      else if(c[1]==0&&c[2]>b[2]){c[1]=b[2]; b[2]=0;ok=1;}}

                                    else if(b[3]!=0) {if(c[3]==0){c[3]=b[3];b[3]=0;ok=1;}
                                        else if(c[2]==0&&c[3]>b[3]){c[2]=b[3];b[3]=0;ok=1;}
                                                else if(c[1]==0&&c[2]>b[3]){c[1]=b[3]; b[3]=0;ok=1;}}
                       }
          else if(p==1){ if(b[1]!=0){if(a1[3]==0){a1[3]=b[1];b[1]=0;ok=1;}
                                      else if(a1[2]==0&&a1[3]>b[1]){a1[2]=b[1];b[1]=0;ok=1;}
                                             else if(a1[1]==0&&a1[2]>b[1]){a1[1]=b[1]; b[1]=0;ok=1;}}


                            else if(b[2]!=0){if(a1[3]==0){a1[3]=b[2];b[2]=0;ok=1;}
                                                 else if(a1[2]==0&&a1[3]>b[2]){a1[2]=b[2];b[2]=0;ok=1;}
                                                      else if(a1[1]==0&&a1[2]>b[2]){a1[1]=b[2]; b[2]=0;ok=1;}}

                                    else if(b[3]!=0){if(a1[3]==0){a1[3]=b[3];b[3]=0;ok=1;}
                                        else if(a1[2]==0&&a1[3]>b[3]){a1[2]=b[3];b[3]=0;ok=1;}
                                                else if(a1[1]==0&&a1[2]>b[3]){a1[1]=b[3]; b[3]=0;ok=1;}}
                       }}

      else if(d==3){if(p==2){ if(c[1]!=0){if(b[3]==0){b[3]=c[1];c[1]=0;ok=1;}
                                      else if(b[2]==0&&b[3]>c[1]){b[2]=c[1];c[1]=0;ok=1;}
                                             else if(b[1]==0&&b[2]>c[1]){b[1]=c[1]; c[1]=0;ok=1;}}


                            else if(c[2]!=0){if(b[3]==0){b[3]=c[2];c[2]=0;ok=1;}
                                                 else if(b[2]==0&&b[3]>c[2]){b[2]=c[2];c[2]=0;ok=1;}
                                                      else if(b[1]==0&&b[2]>c[2]){b[1]=c[2]; c[2]=0;ok=1;}}

                                    else if(c[3]!=0){if(b[3]==0){b[3]=c[3];c[3]=0;ok=1;}
                                        else if(b[2]==0&&b[3]>c[3]){b[2]=c[3];c[3]=0;ok=1;}
                                                else if(b[1]==0&&b[2]>c[3]){b[1]=c[3]; c[3]=0;ok=1;}}
                      }
                   else if(p==1){ if(c[1]!=0){if(a1[3]==0){a1[3]=c[1];c[1]=0;ok=1;}
                                      else if(a1[2]==0&&a1[3]>c[1]){a1[2]=c[1];c[1]=0;ok=1;}
                                             else if(a1[1]==0&&a1[2]>c[1]){a1[1]=c[1]; c[1]=0;ok=1;}}


                            else if(c[2]!=0){if(a1[3]==0){a1[3]=c[2];c[2]=0;ok=1;}
                                                 else if(a1[2]==0&&a1[3]>c[2]){a1[2]=c[2];c[2]=0;ok=1;}
                                                      else if(a1[1]==0&&a1[2]>c[2]){a1[1]=c[2]; c[2]=0;ok=1;}}

                                    else if(c[3]!=0){if(a1[3]==0){a1[3]=c[3];c[3]=0;ok=1;}
                                                       else if(a1[2]==0&&a1[3]>c[3]){a1[2]=c[3];c[3]=0;ok=1;}
                                                        else if(a1[1]==0&&a1[2]>c[3]){a1[1]=c[3]; c[3]=0;ok=1;}}
                                   }
                      }


if(ok==0){ system("cls"); cout<<"Miscare nepermisa"<<endl;}
else system("cls");

}
void afis(int a1[4],int b[4],int c[4])
{for(int i=1;i<=3;i++)
   { if(a1[i]==1)cout<<"  "<<char(254)<<"  ";
       else if(a1[i]==2)cout<<" "<<char(254)<<char(254)<<char(254)<<" ";
         else if(a1[i]==3)cout<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
          else if(a1[i]==0)cout<<"     ";
    if(b[i]==1)cout<<"  "<<char(254)<<"  ";
       else if(b[i]==2)cout<<" "<<char(254)<<char(254)<<char(254)<<" ";
         else if(b[i]==3)cout<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
          else if(b[i]==0)cout<<"     ";
     if(c[i]==1)cout<<"  "<<char(254)<<"  ";
       else if(c[i]==2)cout<<" "<<char(254)<<char(254)<<char(254)<<" ";
         else if(c[i]==3)cout<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
          else if(c[i]==0)cout<<"     ";
          cout<<endl;}
cout<<"  1    2    3  ";
}
int verificare(int c[3])
{
    if(c[3]==3 &&c[2]==2 && c[1]==1) return 1;
    else return 0;
}
int a1[4],b[4],c[4];

int main()
{a1[1]=1;a1[2]=2;a1[3]=3;
 int d,p,w1,we=0,r1=0;
    int i,j,n,i1,j1,m,s,r,w;
 short ok3,ok,ok1;
char key=' ',gc=' ';
unsigned short win=0;
char a[100][100];
cout<<"Vrei sa joci un joc?(d/n)"<<endl;
gc=_getch();
system("cls");
while(we==0)
if(gc=='d'|| gc=='D')
{
we=1;
while(r1==0)
 { cout<<"    Alege un joc:"<<endl<<endl<<"1.Labirint"<<endl<<"2.Turnurile din Hanoi"<<endl;
    w1=_getch();

while(w1==49||w1==50)
{ r1=1;

if(w1==49)
{system("cls");

cout<<endl<<endl;
    cout<<"        Se incarca"<<endl;
    cout<<endl;
    cout<<"       ";
for(w=1;w<=12;w++)
{cout<<char(254);
    Sleep(150);
}system("cls");
  cout<<endl;  cout<<"   Reguli de miscare:"<<endl<<endl;
Sleep(1000);
cout<<" >Pentru in jos=s"<<endl;
Sleep(1000);
cout<<" >Pentru in sus=w"<<endl;
Sleep(1000);
cout<<" >Pentru in dreapta=d"<<endl;
Sleep(1000);
cout<<" >Pentru in stanga=a"<<endl<<endl;
Sleep(1000);
cout<<"       Pentru a iesi din joc apasa pe ESC"<<endl<<endl;
Sleep(1000);
system("cls");
cout<<"Jocul incepe in:"<<endl;
Sleep(700);
system("cls");
cout<<endl;
cout<<"       3"<<endl<<endl;
Sleep(700);
system("cls");
cout<<endl;
cout<<"       2"<<endl<<endl;
Sleep(700);
system("cls");
cout<<endl;
cout<<"       1"<<endl<<endl;
Sleep(700);
system("cls");

cout<<endl<<"    Nivelul 1"<<endl;

Sleep(500);
system("cls");
f>>n;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) f>>a[i][j];
f>>i1;f>>j1;
f>>s; f>>r;
a[s][r]=254;
for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;}

while(win==0)
{ok3=1;
key=_getch();
if((s==1)&&key=='w'){system("cls");

for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;
}  cout<<"Nu poti trisa";}
else{
if (key==27) win=1;
 if(key=='d'|| key=='D'){if(a[s][r+1]!='|'){a[s][r+1]=254; a[s][r]='.'; r=r+1;}
             else ok3=0;}
if(key=='s'||key=='S'){if(a[s+1][r]!='|') {a[s+1][r]=254; a[s][r]='.'; s=s+1;}
             else ok3=0;}
 if(key=='w'|| key=='W'){if(a[s-1][r]!='|'){a[s-1][r]=254; a[s][r]='.'; s=s-1;}
              else ok3=0;}
if(key=='a'||key=='A'){if(a[s][r-1]!='|'){a[s][r-1]=254; a[s][r]='.'; r=r-1;}
               else ok3=0;}
system("cls");

for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;}}
if(ok3==0) cout<<"Miscare nepermisa"<<endl;
if(s==n){win=1; cout<<endl<<"Felicitari,Ai castigat!";
Sleep(1000);}
cout<<endl;
}

Sleep(700);
system("cls");
if(key==27) {cout<<"Iesind...";ok=2;}
Sleep(1000);
system("cls");
if(ok!=2)
{win=0;

cout<<endl<<"    Nivelul 2"<<endl;
f1>>n;
Sleep(500);
system("cls");
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) f1>>a[i][j];
f1>>i1;f1>>j1;
f1>>s; f1>>r;
a[s][r]=254;
for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;}

while(win==0)
{ok3=1;
key=_getch();
if((s==1)&&key=='w'){system("cls");

for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;
}  cout<<"Nu poti trisa";}
else{
if (key==27) win=1;
 if(key=='d'|| key=='D'){if(a[s][r+1]!='|'){a[s][r+1]=254; a[s][r]='.'; r=r+1;}
             else ok3=0;}
if(key=='s'||key=='S'){if(a[s+1][r]!='|') {a[s+1][r]=254; a[s][r]='.'; s=s+1;}
             else ok3=0;}
 if(key=='w'|| key=='W'){if(a[s-1][r]!='|'){a[s-1][r]=254; a[s][r]='.'; s=s-1;}
              else ok3=0;}
if(key=='a'||key=='A'){if(a[s][r-1]!='|'){a[s][r-1]=254; a[s][r]='.'; r=r-1;}
               else ok3=0;}
system("cls");

for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;}}
if(ok3==0) cout<<"Miscare nepermisa"<<endl;
if(j1==s && r==i1){win=1; cout<<endl<<"Felicitari,Ai castigat!";
Sleep(1000);}
cout<<endl;
}

Sleep(700);
system("cls");
if(key==27) {cout<<"Iesind...";ok1=2;}
Sleep(1000);
system("cls");

if(ok1!=2)
{
cout<<endl<<"    Nivelul 3"<<endl;
f2>>n;
Sleep(500);
system("cls");
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) f2>>a[i][j];
f2>>i1;f2>>j1;
f2>>s; f2>>r;
a[s][r]=254;
for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;}
win=0;
while(win==0)
{ok3=1;
key=_getch();
if((s==1)&&key=='w'){system("cls");

for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;
}  cout<<"nu poti trisa";}
else{
if (key==27) win=1;
 if(key=='d'|| key=='D'){if(a[s][r+1]!='|'){a[s][r+1]=254; a[s][r]='.'; r=r+1;}
             else ok3=0;}
if(key=='s'||key=='S'){if(a[s+1][r]!='|') {a[s+1][r]=254; a[s][r]='.'; s=s+1;}
             else ok3=0;}
 if(key=='w'|| key=='W'){if(a[s-1][r]!='|'){a[s-1][r]=254; a[s][r]='.'; s=s-1;}
              else ok3=0;}
if(key=='a'||key=='A'){if(a[s][r-1]!='|'){a[s][r-1]=254; a[s][r]='.'; r=r-1;}
               else ok3=0;}
system("cls");

for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
       if(a[i][j]=='.') cout<<" ";
       else cout<<a[i][j];
       cout<<endl;}}
if(ok3==0) cout<<"Miscare nepermisa"<<endl;
if(n==s ){win=1; cout<<endl<<"Felicitari,Ai castigat!";
Sleep(1000);}
cout<<endl;
}

Sleep(700);
system("cls");
if(key==27) cout<<"Iesind...";
Sleep(1000);
system("cls");
}
}

}

else if(w1==50)
{system("cls");
cout<<endl<<endl;
    cout<<"        Se incarca"<<endl;
    cout<<endl;
    cout<<"       ";
for(w=1;w<=12;w++)
{cout<<char(254);
    Sleep(150);
}system("cls");

cout<<endl;  cout<<"   Reguli generale:"<<endl<<endl;
Sleep(300);
cout<<" >Pentru a castiga trebuie ca toate piesele din primul turn sa ajunga in ultimul."<<endl;
Sleep(2000);
cout<<" >Nu ai voie sa pui o piesa mare peste una mica."<<endl;
Sleep(2000);
cout<<" >Pentru a iesi apasa ESC"<<endl;
Sleep(2000);
system("cls");
cout<<endl<<endl<<endl;
cout<<"      Succes!";
Sleep(1000);
system("cls");
cout<<"Nivel incepator"<<endl;
Sleep(1000);
system("cls");
    afis(a1,b,c);


 while(verificare(c)==0)
 {cout<<endl;
     cout<<"de la ";d=_getch();if(d==49)d=1;if(d==50)d=2; if(d==51) d=3;if(d==27) break;cout<<d;
  cout<<" pana la "; p=_getch();if(p==49)p=1;if(p==50)p=2;if(p==51) p=3;if(p==27) break;cout<<p;
cout<<endl;


 m1(d,p,a1,b,c);


 afis(a1,b,c);
 }
 cout<<endl;system("cls");
 if(verificare(c)==0) {cout<<"Iesind..."; Sleep(600); system("cls");}
 else
{cout<<"    AI CASTIGAT PRIMUL NIVEL";
 Sleep(1000);
system("cls");
a1[1]=1;a1[2]=2;a1[3]=3;a1[4]=4;
 b[1]=b[2]=b[3]=b[4]=0;
 c[1]=c[2]=c[3]=c[4]=0;
  system("cls");
  cout<<"Nivel AVANSAT"<<endl;
Sleep(1000);
system("cls");
   afis4(a1,b,c);
while(verificare4(c)==0)
 {cout<<endl;
     cout<<"de la ";d=_getch();if(d==49)d=1;if(d==50)d=2; if(d==51) d=3;if(d==27) break;cout<<d;
  cout<<" pana la "; p=_getch();if(p==49)p=1;if(p==50)p=2;if(p==51) p=3;if(p==27) break;cout<<p;
cout<<endl;

 m4(d,p,a1,b,c);


 system("cls");
 afis4(a1,b,c);
 }

 if(verificare4(c)==0) {system("cls"); cout<<"Iesind..."; Sleep(600);system("cls");}
 else{cout<<endl;
 cout<<"    YOU WON";}
 Sleep(1000);
system("cls");




 }
}
else cout<<"Nu exista";
cout<<endl;
cout<<"Mai vrei sa mai joci inca odata sau sa incerci celalalt joc?"<<endl<<endl<<"1.Labirit"<<endl<<"2.Turnurile din Hanoi"<<endl;
cout<<"daca vrei sa iesi apasa 3 sau ESC";
     w1=0;    w1=_getch();
while((w1!=49)&&(w1!=50)&&(w1!=51)&&(w1!=27))
    { system("cls");
        cout<<"Tastare eronata"<<endl<<"tastati din nou";
       Sleep(500);system("cls");
       cout<<"Mai vrei sa mai joci inca odata sau sa incerci celalalt joc?"<<endl<<endl<<"1.Labirit"<<endl<<"2.Turnurile din Hanoi"<<endl;
cout<<"daca vrei sa iesi apasa 3 sau ESC";
 w1=_getch();
 }

}
 if(r1==0){system("cls");  cout<<"Tastare gresita"; Sleep(500);system("cls");}
//
 }
}
else if(gc=='N'|| gc=='n') we=1;
       else {cout<<"Tastare eronata"; we=0; Sleep(1000); system("cls");

cout<<"Vrei sa joci un joc?(d/n)"<<endl;
 gc=_getch();
       }
return 0;
}
