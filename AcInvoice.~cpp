//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "AcInvoice.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TAcInvoice *)
{
        new TAcInvoice(NULL);
}
//---------------------------------------------------------------------------
__fastcall TAcInvoice::TAcInvoice(TComponent* Owner)
        : TStringGrid(Owner)
{
    col_count = 6;
    names = new AnsiString[col_count];
    widths = new int[col_count];

    names[0] = "π Á/Ô"; names[1] = "Õ¿«¬¿"; names[2] = "Œ‰. ‚ËÏ.";
    names[3] = " -Ú¸"; names[4] = "÷≥Ì‡ ·ÂÁ œƒ¬"; names[5] = "—ÛÏ‡ ·ÂÁ œƒ¬";

    widths[0] = 40; widths[1] = 160; widths[2] = 60;
    widths[3] = 60; widths[4] = 100; widths[5] = 100;

    TStringGrid::ColCount = col_count;
    TStringGrid::RowCount = 12;
    TStringGrid::FixedRows = 1;
    TStringGrid::FixedCols = 0;
    TStringGrid::DefaultColWidth = 90;
    TStringGrid::Width = 530;
    TStringGrid::Height = 305;

    for(int i = 0; i < col_count; i++) {
        TStringGrid::Cells[i][0] = names[i];
        TStringGrid::ColWidths[i] = widths[i];
    }

}

__fastcall TAcInvoice::~TAcInvoice()
{
    delete[]names;
    delete[]widths;
    widths = NULL;
    names = NULL;
}

//---------------------------------------------------------------------------
namespace Acinvoice
{
        void __fastcall PACKAGE Register()
        {
                 TComponentClass classes[1] = {__classid(TAcInvoice)};
                 RegisterComponents("Samples", classes, 0);
        }
}
//---------------------------------------------------------------------------
