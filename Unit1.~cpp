//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "AcInvoice.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TAcInvoice* AcInvoice1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
    AcInvoice1 = new TAcInvoice(Form1);
    AcInvoice1->Parent = Form1;
    AcInvoice1->Left = 100;
    AcInvoice1->Top = 100;
}
//---------------------------------------------------------------------------

