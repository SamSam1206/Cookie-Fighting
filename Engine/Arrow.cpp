#include "Arrow.h"
#include "Border.h"

void Arrow::Update(Graphics& gfx, Keyboard& kbd, float dt)
{
	if (kbd.KeyIsPressed(VK_UP))
	{
		y -= speed * dt*60.0f;
	}
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		y += speed * dt*60.0f;
	}
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		x += speed * dt*60.0f;
	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		x -= speed * dt*60.0f;
	}
	if (kbd.KeyIsPressed('R'))
	{
		ammoShot = 0;
	}

	Shoot(kbd, dt);
	for (int i = 0; i < ammo.size(); i++)
	{
		ammo[i].Update(gfx, *this, dt);
	}

	ClampToScreen();
}

void Arrow::ClampToScreen()
{
	if (y < Border::YBorder)
	{
		y = Border::YBorder;
	}
	if (y + height > float(Graphics::ScreenHeight - 1 - Border::YBorder))
	{
		y = float(Graphics::ScreenHeight - 1 - Border::YBorder) - height;
	}
	if (x < Border::XBorder + 1)
	{
		x = Border::XBorder + 1;
	}
	if (x + width > float(Graphics::ScreenWidth - 1 - Border::XBorder))
	{
		x = float(Graphics::ScreenWidth - 1 - Border::XBorder) - width;
	}
}

void Arrow::Shoot(Keyboard& kbd, const float dt)
{
	shootEverySeconds += dt;
	if (kbd.KeyIsPressed(VK_SPACE))
	{
		if (shootEverySeconds > 0.3 && ammoShot < 10)
		{
			ammoShot++;
			ammo.push_back(Ammo());
			shootEverySeconds = 0.0f;
		}
	}
}

void Arrow::Draw(Graphics & gfx)
{
	int i_x = int(x);
	int i_y = int(y);
	gfx.PutPixel(0 + i_x, 0 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 0 + i_y, 127, 127, 127);
	gfx.PutPixel(2 + i_x, 0 + i_y, 127, 127, 127);
	gfx.PutPixel(3 + i_x, 0 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 1 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 1 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 1 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 1 + i_y, 127, 127, 127);
	gfx.PutPixel(4 + i_x, 1 + i_y, 127, 127, 127);
	gfx.PutPixel(5 + i_x, 1 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 2 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 2 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 2 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 2 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 2 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 2 + i_y, 127, 127, 127);
	gfx.PutPixel(6 + i_x, 2 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 3 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 3 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 3 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 3 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 3 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 3 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 3 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 3 + i_y, 127, 127, 127);
	gfx.PutPixel(8 + i_x, 3 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 4 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 4 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 4 + i_y, 127, 127, 127);
	gfx.PutPixel(9 + i_x, 4 + i_y, 127, 127, 127);
	gfx.PutPixel(10 + i_x, 4 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 5 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 5 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 5 + i_y, 127, 127, 127);
	gfx.PutPixel(11 + i_x, 5 + i_y, 127, 127, 127);
	gfx.PutPixel(12 + i_x, 5 + i_y, 127, 127, 127);
	gfx.PutPixel(13 + i_x, 5 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 6 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 6 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 6 + i_y, 127, 127, 127);
	gfx.PutPixel(14 + i_x, 6 + i_y, 127, 127, 127);
	gfx.PutPixel(15 + i_x, 6 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 7 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 7 + i_y, 127, 127, 127);
	gfx.PutPixel(7 + i_x, 7 + i_y, 127, 127, 127);
	gfx.PutPixel(8 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(14 + i_x, 7 + i_y, 195, 195, 195);
	gfx.PutPixel(15 + i_x, 7 + i_y, 127, 127, 127);
	gfx.PutPixel(16 + i_x, 7 + i_y, 127, 127, 127);
	gfx.PutPixel(17 + i_x, 7 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 8 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 8 + i_y, 127, 127, 127);
	gfx.PutPixel(6 + i_x, 8 + i_y, 0, 0, 0);
	gfx.PutPixel(7 + i_x, 8 + i_y, 0, 0, 0);
	gfx.PutPixel(8 + i_x, 8 + i_y, 127, 127, 127);
	gfx.PutPixel(9 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(14 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(15 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(16 + i_x, 8 + i_y, 195, 195, 195);
	gfx.PutPixel(17 + i_x, 8 + i_y, 127, 127, 127);
	gfx.PutPixel(18 + i_x, 8 + i_y, 127, 127, 127);
	gfx.PutPixel(19 + i_x, 8 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 9 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 9 + i_y, 0, 0, 0);
	gfx.PutPixel(6 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 9 + i_y, 0, 0, 0);
	gfx.PutPixel(9 + i_x, 9 + i_y, 127, 127, 127);
	gfx.PutPixel(10 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(14 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(15 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(16 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(17 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(18 + i_x, 9 + i_y, 195, 195, 195);
	gfx.PutPixel(19 + i_x, 9 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 10 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 10 + i_y, 0, 0, 0);
	gfx.PutPixel(6 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 10 + i_y, 0, 0, 0);
	gfx.PutPixel(9 + i_x, 10 + i_y, 127, 127, 127);
	gfx.PutPixel(10 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(14 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(15 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(16 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(17 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(18 + i_x, 10 + i_y, 195, 195, 195);
	gfx.PutPixel(19 + i_x, 10 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 11 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 11 + i_y, 0, 0, 0);
	gfx.PutPixel(6 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 11 + i_y, 0, 0, 0);
	gfx.PutPixel(9 + i_x, 11 + i_y, 127, 127, 127);
	gfx.PutPixel(10 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(14 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(15 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(16 + i_x, 11 + i_y, 195, 195, 195);
	gfx.PutPixel(17 + i_x, 11 + i_y, 127, 127, 127);
	gfx.PutPixel(18 + i_x, 11 + i_y, 127, 127, 127);
	gfx.PutPixel(19 + i_x, 11 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 12 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 12 + i_y, 0, 0, 0);
	gfx.PutPixel(7 + i_x, 12 + i_y, 0, 0, 0);
	gfx.PutPixel(8 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(14 + i_x, 12 + i_y, 195, 195, 195);
	gfx.PutPixel(15 + i_x, 12 + i_y, 127, 127, 127);
	gfx.PutPixel(16 + i_x, 12 + i_y, 127, 127, 127);
	gfx.PutPixel(17 + i_x, 12 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 13 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(12 + i_x, 13 + i_y, 195, 195, 195);
	gfx.PutPixel(13 + i_x, 13 + i_y, 127, 127, 127);
	gfx.PutPixel(14 + i_x, 13 + i_y, 127, 127, 127);
	gfx.PutPixel(15 + i_x, 13 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 14 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 14 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 14 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 14 + i_y, 0, 162, 232);
	gfx.PutPixel(4 + i_x, 14 + i_y, 237, 28, 36);
	gfx.PutPixel(5 + i_x, 14 + i_y, 181, 230, 29);
	gfx.PutPixel(6 + i_x, 14 + i_y, 163, 73, 164);
	gfx.PutPixel(7 + i_x, 14 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 14 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 14 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 14 + i_y, 195, 195, 195);
	gfx.PutPixel(11 + i_x, 14 + i_y, 127, 127, 127);
	gfx.PutPixel(12 + i_x, 14 + i_y, 127, 127, 127);
	gfx.PutPixel(13 + i_x, 14 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 15 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(9 + i_x, 15 + i_y, 195, 195, 195);
	gfx.PutPixel(10 + i_x, 15 + i_y, 127, 127, 127);
	gfx.PutPixel(11 + i_x, 15 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 16 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(7 + i_x, 16 + i_y, 195, 195, 195);
	gfx.PutPixel(8 + i_x, 16 + i_y, 127, 127, 127);
	gfx.PutPixel(9 + i_x, 16 + i_y, 127, 127, 127);
	gfx.PutPixel(10 + i_x, 16 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 17 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 17 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 17 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 17 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 17 + i_y, 195, 195, 195);
	gfx.PutPixel(5 + i_x, 17 + i_y, 195, 195, 195);
	gfx.PutPixel(6 + i_x, 17 + i_y, 127, 127, 127);
	gfx.PutPixel(7 + i_x, 17 + i_y, 127, 127, 127);
	gfx.PutPixel(8 + i_x, 17 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 18 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 18 + i_y, 195, 195, 195);
	gfx.PutPixel(2 + i_x, 18 + i_y, 195, 195, 195);
	gfx.PutPixel(3 + i_x, 18 + i_y, 195, 195, 195);
	gfx.PutPixel(4 + i_x, 18 + i_y, 127, 127, 127);
	gfx.PutPixel(5 + i_x, 18 + i_y, 127, 127, 127);
	gfx.PutPixel(6 + i_x, 18 + i_y, 127, 127, 127);
	gfx.PutPixel(0 + i_x, 19 + i_y, 127, 127, 127);
	gfx.PutPixel(1 + i_x, 19 + i_y, 127, 127, 127);
	gfx.PutPixel(2 + i_x, 19 + i_y, 127, 127, 127);
	gfx.PutPixel(3 + i_x, 19 + i_y, 127, 127, 127);
	gfx.PutPixel(4 + i_x, 19 + i_y, 127, 127, 127);
}

int Arrow::GetBulletNumber() const
{
	return ammoShot;
}

int Arrow::GetWidth() const
{
	return width;
}

int Arrow::GetHeight() const
{
	return height;
}

int Arrow::GetX() const
{
	return x;
}

int Arrow::GetY() const
{
	return y;
}

void Arrow::Ammo::Update(Graphics& gfx, const Arrow& arrow, const float dt)
{
	if (x >= float(Graphics::ScreenWidth) - 5)
	{
		offScreen = true;
	}
	if (offScreen == false)
	{
		Draw(gfx, arrow);
	}
	x += ammoSpeed*dt*60.0f;
}

void Arrow::Ammo::Draw(Graphics& gfx, const Arrow& arrow)
{
	if (shot == false)
	{
		x = arrow.x + 20;
		y = arrow.y + 10;
		shot = true;
	}
	int i_x = int(x);
	int i_y = int(y);
	gfx.PutPixel(0 + i_x, 0 + i_y, 224, 32, 64);
	gfx.PutPixel(1 + i_x, 0 + i_y, 224, 32, 64);
	gfx.PutPixel(2 + i_x, 0 + i_y, 224, 32, 64);
	gfx.PutPixel(3 + i_x, 0 + i_y, 224, 32, 64);
	gfx.PutPixel(4 + i_x, 0 + i_y, 224, 32, 64);
	gfx.PutPixel(0 + i_x, 1 + i_y, 224, 32, 64);
	gfx.PutPixel(1 + i_x, 1 + i_y, 224, 32, 64);
	gfx.PutPixel(2 + i_x, 1 + i_y, 224, 32, 64);
	gfx.PutPixel(3 + i_x, 1 + i_y, 224, 32, 64);
	gfx.PutPixel(4 + i_x, 1 + i_y, 224, 32, 64);
}