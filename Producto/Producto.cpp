#include "stdafx.h"  //________________________________________ Producto.cpp
#include "Producto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Producto app;
	return app.BeginDialog(IDI_Producto, hInstance);
}

void Producto::Window_Open(Win::Event& e)
{
}

void Producto::btCalcular_Click(Win::Event& e)
{
	const double x = tbxX.DoubleValue;
	const double y = tbxY.DoubleValue;
	const double resultado = x*y;
	tbxResultado.DoubleValue = resultado;
}

