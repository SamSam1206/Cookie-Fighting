#pragma once

#include "Arrow.h"
#include "Graphics.h"

class Meter
{
public:
	Meter(Arrow& arrow);
	void Update(Graphics & gfx);
	void Draw(int x, int y, Graphics& gfx);
private:
	int ammoLeft = 10;
	Arrow& arrow;
};