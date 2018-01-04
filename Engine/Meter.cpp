#include "Meter.h"

Meter::Meter(Arrow & arrow)
	:
	arrow(arrow)
{
}

void Meter::Update(Graphics & gfx)
{
	ammoLeft = 10 - arrow.GetBulletNumber();
	for (int i = 1; i <= ammoLeft; i++)
	{
		Draw(20 * i + 10, 17, gfx);
	}
}

void Meter::Draw(int x, int y, Graphics & gfx)
{
	gfx.PutPixel(5 + x, 0 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 0 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 0 + y, 224, 32, 64);
	gfx.PutPixel(8 + x, 0 + y, 224, 32, 64);
	gfx.PutPixel(9 + x, 0 + y, 224, 32, 64);
	gfx.PutPixel(10 + x, 0 + y, 128, 0, 0);
	gfx.PutPixel(11 + x, 0 + y, 128, 0, 0);
	gfx.PutPixel(4 + x, 1 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 1 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 1 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 1 + y, 224, 32, 64);
	gfx.PutPixel(8 + x, 1 + y, 224, 32, 64);
	gfx.PutPixel(9 + x, 1 + y, 128, 0, 0);
	gfx.PutPixel(10 + x, 1 + y, 128, 0, 0);
	gfx.PutPixel(11 + x, 1 + y, 128, 0, 0);
	gfx.PutPixel(4 + x, 2 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 2 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 2 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 2 + y, 224, 32, 64);
	gfx.PutPixel(8 + x, 2 + y, 128, 0, 0);
	gfx.PutPixel(9 + x, 2 + y, 128, 0, 0);
	gfx.PutPixel(10 + x, 2 + y, 128, 0, 0);
	gfx.PutPixel(3 + x, 3 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 3 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 3 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 3 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 3 + y, 128, 0, 0);
	gfx.PutPixel(8 + x, 3 + y, 128, 0, 0);
	gfx.PutPixel(9 + x, 3 + y, 128, 0, 0);
	gfx.PutPixel(2 + x, 4 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 4 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 4 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 4 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 4 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 4 + y, 128, 0, 0);
	gfx.PutPixel(8 + x, 4 + y, 128, 0, 0);
	gfx.PutPixel(1 + x, 5 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 5 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 5 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 5 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 5 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 5 + y, 128, 0, 0);
	gfx.PutPixel(7 + x, 5 + y, 128, 0, 0);
	gfx.PutPixel(8 + x, 5 + y, 128, 0, 0);
	gfx.PutPixel(9 + x, 5 + y, 128, 0, 0);
	gfx.PutPixel(10 + x, 5 + y, 128, 0, 0);
	gfx.PutPixel(11 + x, 5 + y, 128, 0, 0);
	gfx.PutPixel(0 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(1 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(8 + x, 6 + y, 224, 32, 64);
	gfx.PutPixel(9 + x, 6 + y, 128, 0, 0);
	gfx.PutPixel(10 + x, 6 + y, 128, 0, 0);
	gfx.PutPixel(11 + x, 6 + y, 128, 0, 0);
	gfx.PutPixel(12 + x, 6 + y, 128, 0, 0);
	gfx.PutPixel(0 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(1 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(8 + x, 7 + y, 224, 32, 64);
	gfx.PutPixel(9 + x, 7 + y, 224, 32, 0);
	gfx.PutPixel(10 + x, 7 + y, 128, 0, 0);
	gfx.PutPixel(11 + x, 7 + y, 128, 0, 0);
	gfx.PutPixel(12 + x, 7 + y, 128, 0, 0);
	gfx.PutPixel(5 + x, 8 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 8 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 8 + y, 224, 32, 64);
	gfx.PutPixel(8 + x, 8 + y, 224, 32, 0);
	gfx.PutPixel(9 + x, 8 + y, 128, 0, 0);
	gfx.PutPixel(10 + x, 8 + y, 128, 0, 0);
	gfx.PutPixel(11 + x, 8 + y, 128, 0, 0);
	gfx.PutPixel(4 + x, 9 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 9 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 9 + y, 224, 32, 64);
	gfx.PutPixel(7 + x, 9 + y, 224, 32, 0);
	gfx.PutPixel(8 + x, 9 + y, 128, 0, 0);
	gfx.PutPixel(9 + x, 9 + y, 128, 0, 0);
	gfx.PutPixel(10 + x, 9 + y, 128, 0, 0);
	gfx.PutPixel(3 + x, 10 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 10 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 10 + y, 224, 32, 64);
	gfx.PutPixel(6 + x, 10 + y, 224, 32, 0);
	gfx.PutPixel(7 + x, 10 + y, 128, 0, 0);
	gfx.PutPixel(8 + x, 10 + y, 128, 0, 0);
	gfx.PutPixel(9 + x, 10 + y, 128, 0, 0);
	gfx.PutPixel(2 + x, 11 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 11 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 11 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 11 + y, 224, 32, 0);
	gfx.PutPixel(6 + x, 11 + y, 128, 0, 0);
	gfx.PutPixel(7 + x, 11 + y, 128, 0, 0);
	gfx.PutPixel(8 + x, 11 + y, 128, 0, 0);
	gfx.PutPixel(1 + x, 12 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 12 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 12 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 12 + y, 224, 32, 64);
	gfx.PutPixel(5 + x, 12 + y, 128, 0, 0);
	gfx.PutPixel(6 + x, 12 + y, 128, 0, 0);
	gfx.PutPixel(7 + x, 12 + y, 128, 0, 0);
	gfx.PutPixel(0 + x, 13 + y, 224, 32, 64);
	gfx.PutPixel(1 + x, 13 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 13 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 13 + y, 224, 32, 64);
	gfx.PutPixel(4 + x, 13 + y, 128, 0, 0);
	gfx.PutPixel(5 + x, 13 + y, 128, 0, 0);
	gfx.PutPixel(6 + x, 13 + y, 128, 0, 0);
	gfx.PutPixel(0 + x, 14 + y, 224, 32, 64);
	gfx.PutPixel(1 + x, 14 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 14 + y, 224, 32, 64);
	gfx.PutPixel(3 + x, 14 + y, 128, 0, 0);
	gfx.PutPixel(4 + x, 14 + y, 128, 0, 0);
	gfx.PutPixel(5 + x, 14 + y, 128, 0, 0);
	gfx.PutPixel(0 + x, 15 + y, 224, 32, 64);
	gfx.PutPixel(1 + x, 15 + y, 224, 32, 64);
	gfx.PutPixel(2 + x, 15 + y, 128, 0, 0);
	gfx.PutPixel(3 + x, 15 + y, 128, 0, 0);
	gfx.PutPixel(4 + x, 15 + y, 128, 0, 0);
}