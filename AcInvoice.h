//---------------------------------------------------------------------------

#ifndef AcInvoiceH
#define AcInvoiceH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <Controls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class PACKAGE TAcInvoice : public TStringGrid
{
private:
    int col_count;
    int* widths;
    AnsiString* names;
protected:
public:
        __fastcall TAcInvoice(TComponent* Owner);
        __fastcall ~TAcInvoice();
__published:
};
//---------------------------------------------------------------------------
#endif
