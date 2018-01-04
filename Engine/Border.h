#pragma once

#include "Graphics.h"

class Border
{
public:
	void Draw(Graphics& gfx);
	Color BorderColor = Colors::Black;
	Color LimitBorder = Colors::Red;
	static constexpr int XBorder = 40;
	static constexpr int YBorder = 60;
	int LimitBorderWidth = 10;
};