//---------------------------------------------------------------------------

#include <vcl.h>

#include <stdlib.h>
#include <stdio.h>
#include <iostream.h>
#include <cstdlib.h>

#pragma hdrstop



#include "Graph.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

static int p=0;
static double A[1000];

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{



//OpenDialog1->Execute();
if (!OpenDialog1->Execute())return;
FILE*f1;
f1=fopen(OpenDialog1->FileName.c_str(), "r");
double value;
while (fscanf(f1,"%f", &value)==1){
        A[p]=value;
        p++;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        int n=0;
        //static double Ser[10];

        //for (int j = 0; j < n; j++)
        //{
        //Ser[j]= new TLineSeries(Form1->Chart1);
        //Form1->Chart1->AddSeries(Ser[j]);
         //Form1->Chart1->ParentChart=Form1->Chart1;
        //}


                for (int i=0; i<p; i++){
                //Form1->Chart1->Series[j]->AddXY(i,A[i],"",clBlack);

                        Series1->AddXY(i,A[i],"",clBlack);

                        //TCanvas*pCanvas=Image1->Canvas;
                        //pCanvas->MoveTo(2,0);
                        //pCanvas->LineTo(i,A[i]);

                }
}
//---------------------------------------------------------------------------

