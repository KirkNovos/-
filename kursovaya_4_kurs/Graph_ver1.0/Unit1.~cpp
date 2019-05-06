//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>




//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"


using namespace std;

//static int p=0;
//static double A[1000];


static int p=0;
static int p1=0;
int n,m,z,c,aprox;
static int Mass[100];
string strok[2];
string a,b,r;

//vector<int> x;
//vector<int> y;
int X[10];
int Y[10];


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{

       /*
       if (!OpenDialog1->Execute())return;
        FILE*f1;
        f1=fopen(OpenDialog1->FileName.c_str(), "r");
        double value;
        while (fscanf(f1,"%f", &value)==1){
                A[p]=value;
                p++;
        }
        */



        if (!OpenDialog1->Execute())return;
        FILE*f1;
        f1=fopen(OpenDialog1->FileName.c_str(), "r");
        int x1,y1;

        while (!feof(f1)){
        fscanf(f1,"%d %d",&x1,&y1);
        X[p]=x1;
        Y[p]=y1;
        p++;
        }
        //while(fscanf(f1,"%d %d",&x1,&y1)==1){
         //       X[p]=x1;
          //      Y[p1]=y1;
          //      p++;
           //     p1++;

        //}


  /*
  a=Mass[1];
  b=Mass[2];


  istringstream aa(a);
  istringstream bb(b);

  while(aa>>n){
        x.push_back(n);
        z++;
  }
  while(bb>>m){
        y.push_back(m);
        c++;
  }
  */

  /*

  stringstream aa(a);
  stringstream bb(b);

  copy(istream_iterator<int>(aa), {}, back_inserter(x));
  copy(begin(x), end(x), ostream_iterator<int>(count,","));

  copy(istream_iterator<int>(bb), {}, back_inserter(y));
  copy(begin(y), end(y), ostream_iterator<int>(count,","));
  */

  /*
 for (int i=0;i<a.length();i++){
        if (a[i]==' '|| a[i]==','){
                x.push_back(r);
                r.clear();
        }
        else
           r+=a[i];
 }

  for (int j=0;j<b.length();j++){
        if (b[j]==' '|| b[j]==','){
                y.push_back(r);
                r.clear();
        }
        else
           r+=b[j];
 }

*/


//}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{

    const int n=10;
    int u=1;
    int z;
    z=Edit1->Text.ToInt();
    z=StrToInt(Edit1->Text);

    TLineSeries *Series[n];

    for (int f=0;f<u;f++){
        Series[f] =new TLineSeries(Chart1);
        Chart1->AddSeries(Series[f]);
    }


     for (int f=0;f<u;f++){
       for (int i=0; i<p; i++){
                Chart1->Series[f]->AddXY(X[i],Y[i],"",ColorBox1->Selected);
                Series[f]->LinePen->Width=z;
       }
     }
     u++;
     aprox=u;

     //for (int i=0; i<p; i++){
     //Series1->AddXY(i,A[i],"",clBlack);
     //}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
   for (int i = 0; i <= aprox; i++){
        TLineSeries *ls = dynamic_cast<TLineSeries*>(Chart1->Series[i]);
        if(ls) ls->Stairs = !ls->Stairs;
    }
}
//---------------------------------------------------------------------------

