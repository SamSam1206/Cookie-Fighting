#include "Border.h"

void Border::Draw(Graphics & gfx)
{
	//top
	for (int i = 0; i < Graphics::ScreenWidth; i++)
	{
		for (int j = 0; j < YBorder; j++)
		{
			gfx.PutPixel(i, j, BorderColor);
		}
	}

	//right
	for (int i = 0; i < XBorder; i++)
	{
		for (int j = 0; j < Graphics::ScreenHeight - YBorder; j++)
		{
			gfx.PutPixel(i, j, BorderColor);
		}
	}

	//Left
	for (int i = Graphics::ScreenWidth - XBorder; i < Graphics::ScreenWidth; i++)
	{
		for (int j = 0; j < Graphics::ScreenHeight - YBorder; j++)
		{
			gfx.PutPixel(i, j, BorderColor);
		}
	}

	//bottom
	for (int i = 0; i < Graphics::ScreenWidth; i++)
	{
		for (int j = Graphics::ScreenHeight - YBorder; j < Graphics::ScreenHeight; j++)
		{
			gfx.PutPixel(i, j, BorderColor);
		}
	}

	//top
	for (int i = XBorder - LimitBorderWidth; i < Graphics::ScreenWidth - XBorder + LimitBorderWidth; i++)
	{
		for (int j = YBorder - LimitBorderWidth; j < YBorder; j++)
		{
			gfx.PutPixel(i, j, LimitBorder);
		}
	}

	//right
	for (int i = XBorder - LimitBorderWidth; i < XBorder; i++)
	{
		for (int j = YBorder; j < Graphics::ScreenHeight - YBorder; j++)
		{
			gfx.PutPixel(i, j, LimitBorder);
		}
	}

	//left
	for (int i = Graphics::ScreenWidth - XBorder; i < Graphics::ScreenWidth - XBorder + LimitBorderWidth; i++)
	{
		for (int j = YBorder; j < Graphics::ScreenHeight - YBorder; j++)
		{
			gfx.PutPixel(i, j, LimitBorder);
		}
	}

	//bottom
	for (int i = XBorder - LimitBorderWidth; i < Graphics::ScreenWidth - XBorder + LimitBorderWidth; i++)
	{
		for (int j = Graphics::ScreenHeight - YBorder; j < Graphics::ScreenHeight - YBorder + LimitBorderWidth; j++)
		{
			gfx.PutPixel(i, j, LimitBorder);
		}
	}
}
