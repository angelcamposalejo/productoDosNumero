#pragma once  //______________________________________ Producto.h  
#include "Resource.h"
class Producto : public Win::Dialog
{
public:
	Producto()
	{
	}
	~Producto()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxX;
	Win::Label lb1;
	Win::Textbox tbxY;
	Win::Label lb2;
	Win::Textbox tbxResultado;
	Win::Button btCalcular;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(531);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(71);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Producto";
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 39, 35, 85, 25, hWnd, 1000);
		lb1.Create(NULL, L"X", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 141, 38, 26, 25, hWnd, 1001);
		tbxY.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 178, 36, 89, 25, hWnd, 1002);
		lb2.Create(NULL, L"=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 278, 36, 51, 25, hWnd, 1003);
		tbxResultado.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 347, 37, 88, 25, hWnd, 1004);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 458, 36, 66, 28, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxX.Font = fontArial014A;
		lb1.Font = fontArial014A;
		tbxY.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxResultado.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
