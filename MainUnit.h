//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	TRadioGroup *RadioGroup4;
	TRadioGroup *RadioGroup5;
	TComboBox *ComboBox1;
	TCheckBox *CheckBox1;
	TComboBox *ComboBox2;
	TCheckBox *CheckBox2;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
