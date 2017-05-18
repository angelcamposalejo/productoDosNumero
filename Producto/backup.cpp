#include "stdafx.h"  //________________________________________ Producto.cpp
#include "Producto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Producto app;
	return app.BeginDialog(IDI_Producto, hInstance);
}

void Producto::Window_Open(Win::Event& e)
{
}

void Producto::bt1_Click(Win::Event& e)
{
}

