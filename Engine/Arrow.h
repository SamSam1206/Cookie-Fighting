#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Arrow
{
public:
	void Update(Keyboard& kbd);
	void ClampToScreen();
	void Draw(Graphics& gfx);
private:
	float x = 20.0f;
	float y = 300.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	static constexpr float speed = 4.0f;
};