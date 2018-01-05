#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Meteorite.h"
#include <vector>

class MeteoriteSprite;

class Arrow
{
private:
	class Ammo
	{
	public:
		void Update(Graphics& gfx, const Arrow& arrow, const float dt);
		void Draw(Graphics& gfx, const Arrow& arrow);
		float GetX() const;
		float GetY() const;
		float GetWidth() const;
		float GetHeight() const;
	private:
		bool shot = false;
		bool offScreen = false;
		float x;
		float y;
		float width = 4;
		float height = 2;
		float ammoSpeed = 7.0f;
	};
public:
	void Update(Graphics& gfx, Keyboard& kbd, float dt);
	void ClampToScreen();
	void Shoot(Keyboard& kbd, const float dt);
	void Draw(Graphics& gfx);
	bool AmmoCollidingWithMeteorites(MeteoriteSprite& meteorite);
	int GetBulletNumber() const;
	float GetWidth() const;
	float GetHeight() const;
	float GetX() const;
	float GetY() const;
private:
	std::vector<Ammo> ammo;
	int ammoShot = 0;
	bool shooting = false;
	float x = 70.0f;
	float y = 300.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	static constexpr float speed = 2.0f;
	float shootEverySeconds = 0.0f;
};