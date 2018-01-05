#include "Space.h"
#include "Border.h"

Space::Space(Graphics & gfx, std::mt19937 & rng)
	:
	gfx(gfx),
	rng(rng)
{
}

void Space::Update(Arrow& arrow, const float dt)
{
	std::uniform_real_distribution<float> tDist(0.4f, 0.9f);
	timeCounter += dt;

	std::uniform_int_distribution<int> nDist(1, 10);
	std::uniform_real_distribution<float> yDist(float(Border::YBorder), float(Graphics::ScreenHeight - Border::YBorder));
	if (timeCounter >= 1 * tDist(rng))
	{
		timeCounter = 0;
		MeteoriteSprite m(Graphics::ScreenWidth-Border::XBorder, yDist(rng), nDist(rng), gfx);
		meteorites.push_back(m);
	}

	std::uniform_int_distribution<int> zDist(0, 10);
	if (zDist(rng) == 1)
	{
		MeteoriteSprite m(Graphics::ScreenWidth - Border::XBorder, yDist(rng), nDist(rng), gfx);
		meteorites.push_back(m);
	}

	for (int i = 0; i < meteorites.size(); i++)
	{
		meteorites[i].Update(arrow);
	}

	for (int i = 0; i < meteorites.size() && collision == false; i++)
	{
		collision = meteorites[i].IsColliding(arrow);
	}
}

void Space::Draw()
{
	gfx.PutPixel(292 + x, 43 + y, 87, 87, 87);
	gfx.PutPixel(293 + x, 43 + y, 122, 122, 122);
	gfx.PutPixel(665 + x, 43 + y, 72, 72, 72);
	gfx.PutPixel(666 + x, 43 + y, 191, 191, 191);
	gfx.PutPixel(667 + x, 43 + y, 96, 96, 96);
	gfx.PutPixel(292 + x, 44 + y, 122, 122, 122);
	gfx.PutPixel(293 + x, 44 + y, 255, 255, 255);
	gfx.PutPixel(665 + x, 44 + y, 231, 231, 231);
	gfx.PutPixel(666 + x, 44 + y, 255, 255, 255);
	gfx.PutPixel(667 + x, 44 + y, 247, 247, 247);
	gfx.PutPixel(665 + x, 45 + y, 247, 247, 247);
	gfx.PutPixel(666 + x, 45 + y, 255, 255, 255);
	gfx.PutPixel(667 + x, 45 + y, 255, 255, 255);
	gfx.PutPixel(665 + x, 46 + y, 120, 120, 120);
	gfx.PutPixel(666 + x, 46 + y, 255, 255, 255);
	gfx.PutPixel(667 + x, 46 + y, 151, 151, 151);
	gfx.PutPixel(125 + x, 52 + y, 72, 72, 72);
	gfx.PutPixel(126 + x, 52 + y, 191, 191, 191);
	gfx.PutPixel(127 + x, 52 + y, 96, 96, 96);
	gfx.PutPixel(125 + x, 53 + y, 231, 231, 231);
	gfx.PutPixel(126 + x, 53 + y, 255, 255, 255);
	gfx.PutPixel(127 + x, 53 + y, 247, 247, 247);
	gfx.PutPixel(125 + x, 54 + y, 247, 247, 247);
	gfx.PutPixel(126 + x, 54 + y, 255, 255, 255);
	gfx.PutPixel(127 + x, 54 + y, 255, 255, 255);
	gfx.PutPixel(125 + x, 55 + y, 120, 120, 120);
	gfx.PutPixel(126 + x, 55 + y, 255, 255, 255);
	gfx.PutPixel(127 + x, 55 + y, 151, 151, 151);
	gfx.PutPixel(511 + x, 55 + y, 72, 72, 72);
	gfx.PutPixel(512 + x, 55 + y, 191, 191, 191);
	gfx.PutPixel(513 + x, 55 + y, 96, 96, 96);
	gfx.PutPixel(511 + x, 56 + y, 231, 231, 231);
	gfx.PutPixel(512 + x, 56 + y, 255, 255, 255);
	gfx.PutPixel(513 + x, 56 + y, 247, 247, 247);
	gfx.PutPixel(511 + x, 57 + y, 255, 255, 255);
	gfx.PutPixel(512 + x, 57 + y, 255, 255, 255);
	gfx.PutPixel(513 + x, 57 + y, 255, 255, 255);
	gfx.PutPixel(511 + x, 58 + y, 247, 247, 247);
	gfx.PutPixel(512 + x, 58 + y, 255, 255, 255);
	gfx.PutPixel(513 + x, 58 + y, 255, 255, 255);
	gfx.PutPixel(511 + x, 59 + y, 120, 120, 120);
	gfx.PutPixel(512 + x, 59 + y, 255, 255, 255);
	gfx.PutPixel(513 + x, 59 + y, 151, 151, 151);
	gfx.PutPixel(375 + x, 63 + y, 87, 87, 87);
	gfx.PutPixel(376 + x, 63 + y, 122, 122, 122);
	gfx.PutPixel(375 + x, 64 + y, 122, 122, 122);
	gfx.PutPixel(376 + x, 64 + y, 255, 255, 255);
	gfx.PutPixel(523 + x, 108 + y, 87, 87, 87);
	gfx.PutPixel(524 + x, 108 + y, 122, 122, 122);
	gfx.PutPixel(523 + x, 109 + y, 122, 122, 122);
	gfx.PutPixel(524 + x, 109 + y, 255, 255, 255);
	gfx.PutPixel(706 + x, 126 + y, 87, 87, 87);
	gfx.PutPixel(707 + x, 126 + y, 122, 122, 122);
	gfx.PutPixel(706 + x, 127 + y, 122, 122, 122);
	gfx.PutPixel(707 + x, 127 + y, 255, 255, 255);
	gfx.PutPixel(244 + x, 132 + y, 87, 87, 87);
	gfx.PutPixel(245 + x, 132 + y, 122, 122, 122);
	gfx.PutPixel(244 + x, 133 + y, 122, 122, 122);
	gfx.PutPixel(245 + x, 133 + y, 255, 255, 255);
	gfx.PutPixel(106 + x, 144 + y, 72, 72, 72);
	gfx.PutPixel(107 + x, 144 + y, 191, 191, 191);
	gfx.PutPixel(108 + x, 144 + y, 96, 96, 96);
	gfx.PutPixel(106 + x, 145 + y, 231, 231, 231);
	gfx.PutPixel(107 + x, 145 + y, 255, 255, 255);
	gfx.PutPixel(108 + x, 145 + y, 247, 247, 247);
	gfx.PutPixel(106 + x, 146 + y, 247, 247, 247);
	gfx.PutPixel(107 + x, 146 + y, 255, 255, 255);
	gfx.PutPixel(108 + x, 146 + y, 255, 255, 255);
	gfx.PutPixel(106 + x, 147 + y, 120, 120, 120);
	gfx.PutPixel(107 + x, 147 + y, 255, 255, 255);
	gfx.PutPixel(108 + x, 147 + y, 151, 151, 151);
	gfx.PutPixel(434 + x, 182 + y, 87, 87, 87);
	gfx.PutPixel(435 + x, 182 + y, 122, 122, 122);
	gfx.PutPixel(434 + x, 183 + y, 122, 122, 122);
	gfx.PutPixel(435 + x, 183 + y, 255, 255, 255);
	gfx.PutPixel(436 + x, 184 + y, 87, 87, 87);
	gfx.PutPixel(437 + x, 184 + y, 122, 122, 122);
	gfx.PutPixel(436 + x, 185 + y, 167, 167, 167);
	gfx.PutPixel(437 + x, 185 + y, 255, 255, 255);
	gfx.PutPixel(436 + x, 186 + y, 122, 122, 122);
	gfx.PutPixel(437 + x, 186 + y, 255, 255, 255);
	gfx.PutPixel(579 + x, 190 + y, 87, 87, 87);
	gfx.PutPixel(580 + x, 190 + y, 122, 122, 122);
	gfx.PutPixel(579 + x, 191 + y, 122, 122, 122);
	gfx.PutPixel(580 + x, 191 + y, 255, 255, 255);
	gfx.PutPixel(279 + x, 224 + y, 72, 72, 72);
	gfx.PutPixel(280 + x, 224 + y, 191, 191, 191);
	gfx.PutPixel(281 + x, 224 + y, 96, 96, 96);
	gfx.PutPixel(279 + x, 225 + y, 231, 231, 231);
	gfx.PutPixel(280 + x, 225 + y, 255, 255, 255);
	gfx.PutPixel(281 + x, 225 + y, 247, 247, 247);
	gfx.PutPixel(279 + x, 226 + y, 255, 255, 255);
	gfx.PutPixel(280 + x, 226 + y, 255, 255, 255);
	gfx.PutPixel(281 + x, 226 + y, 255, 255, 255);
	gfx.PutPixel(279 + x, 227 + y, 247, 247, 247);
	gfx.PutPixel(280 + x, 227 + y, 255, 255, 255);
	gfx.PutPixel(281 + x, 227 + y, 255, 255, 255);
	gfx.PutPixel(279 + x, 228 + y, 120, 120, 120);
	gfx.PutPixel(280 + x, 228 + y, 255, 255, 255);
	gfx.PutPixel(281 + x, 228 + y, 151, 151, 151);
	gfx.PutPixel(187 + x, 257 + y, 87, 87, 87);
	gfx.PutPixel(188 + x, 257 + y, 122, 122, 122);
	gfx.PutPixel(187 + x, 258 + y, 122, 122, 122);
	gfx.PutPixel(188 + x, 258 + y, 255, 255, 255);
	gfx.PutPixel(306 + x, 266 + y, 87, 87, 87);
	gfx.PutPixel(307 + x, 266 + y, 122, 122, 122);
	gfx.PutPixel(21 + x, 267 + y, 72, 72, 72);
	gfx.PutPixel(22 + x, 267 + y, 191, 191, 191);
	gfx.PutPixel(23 + x, 267 + y, 96, 96, 96);
	gfx.PutPixel(306 + x, 267 + y, 122, 122, 122);
	gfx.PutPixel(307 + x, 267 + y, 255, 255, 255);
	gfx.PutPixel(21 + x, 268 + y, 231, 231, 231);
	gfx.PutPixel(22 + x, 268 + y, 255, 255, 255);
	gfx.PutPixel(23 + x, 268 + y, 247, 247, 247);
	gfx.PutPixel(21 + x, 269 + y, 247, 247, 247);
	gfx.PutPixel(22 + x, 269 + y, 255, 255, 255);
	gfx.PutPixel(23 + x, 269 + y, 255, 255, 255);
	gfx.PutPixel(21 + x, 270 + y, 120, 120, 120);
	gfx.PutPixel(22 + x, 270 + y, 255, 255, 255);
	gfx.PutPixel(23 + x, 270 + y, 151, 151, 151);
	gfx.PutPixel(757 + x, 285 + y, 87, 87, 87);
	gfx.PutPixel(758 + x, 285 + y, 122, 122, 122);
	gfx.PutPixel(757 + x, 286 + y, 122, 122, 122);
	gfx.PutPixel(758 + x, 286 + y, 255, 255, 255);
	gfx.PutPixel(421 + x, 303 + y, 87, 87, 87);
	gfx.PutPixel(422 + x, 303 + y, 122, 122, 122);
	gfx.PutPixel(421 + x, 304 + y, 122, 122, 122);
	gfx.PutPixel(422 + x, 304 + y, 255, 255, 255);
	gfx.PutPixel(626 + x, 340 + y, 87, 87, 87);
	gfx.PutPixel(627 + x, 340 + y, 122, 122, 122);
	gfx.PutPixel(626 + x, 341 + y, 122, 122, 122);
	gfx.PutPixel(627 + x, 341 + y, 255, 255, 255);
	gfx.PutPixel(518 + x, 343 + y, 87, 87, 87);
	gfx.PutPixel(519 + x, 343 + y, 122, 122, 122);
	gfx.PutPixel(518 + x, 344 + y, 122, 122, 122);
	gfx.PutPixel(519 + x, 344 + y, 255, 255, 255);
	gfx.PutPixel(689 + x, 345 + y, 87, 87, 87);
	gfx.PutPixel(690 + x, 345 + y, 122, 122, 122);
	gfx.PutPixel(689 + x, 346 + y, 122, 122, 122);
	gfx.PutPixel(690 + x, 346 + y, 255, 255, 255);
	gfx.PutPixel(316 + x, 389 + y, 72, 72, 72);
	gfx.PutPixel(317 + x, 389 + y, 191, 191, 191);
	gfx.PutPixel(318 + x, 389 + y, 96, 96, 96);
	gfx.PutPixel(316 + x, 390 + y, 231, 231, 231);
	gfx.PutPixel(317 + x, 390 + y, 255, 255, 255);
	gfx.PutPixel(318 + x, 390 + y, 247, 247, 247);
	gfx.PutPixel(316 + x, 391 + y, 247, 247, 247);
	gfx.PutPixel(317 + x, 391 + y, 255, 255, 255);
	gfx.PutPixel(318 + x, 391 + y, 255, 255, 255);
	gfx.PutPixel(316 + x, 392 + y, 120, 120, 120);
	gfx.PutPixel(317 + x, 392 + y, 255, 255, 255);
	gfx.PutPixel(318 + x, 392 + y, 151, 151, 151);
	gfx.PutPixel(82 + x, 397 + y, 72, 72, 72);
	gfx.PutPixel(83 + x, 397 + y, 191, 191, 191);
	gfx.PutPixel(84 + x, 397 + y, 96, 96, 96);
	gfx.PutPixel(82 + x, 398 + y, 231, 231, 231);
	gfx.PutPixel(83 + x, 398 + y, 255, 255, 255);
	gfx.PutPixel(84 + x, 398 + y, 247, 247, 247);
	gfx.PutPixel(82 + x, 399 + y, 255, 255, 255);
	gfx.PutPixel(83 + x, 399 + y, 255, 255, 255);
	gfx.PutPixel(84 + x, 399 + y, 255, 255, 255);
	gfx.PutPixel(82 + x, 400 + y, 255, 255, 255);
	gfx.PutPixel(83 + x, 400 + y, 255, 255, 255);
	gfx.PutPixel(84 + x, 400 + y, 255, 255, 255);
	gfx.PutPixel(82 + x, 401 + y, 247, 247, 247);
	gfx.PutPixel(83 + x, 401 + y, 255, 255, 255);
	gfx.PutPixel(84 + x, 401 + y, 255, 255, 255);
	gfx.PutPixel(82 + x, 402 + y, 120, 120, 120);
	gfx.PutPixel(83 + x, 402 + y, 255, 255, 255);
	gfx.PutPixel(84 + x, 402 + y, 151, 151, 151);
	gfx.PutPixel(168 + x, 439 + y, 87, 87, 87);
	gfx.PutPixel(169 + x, 439 + y, 122, 122, 122);
	gfx.PutPixel(168 + x, 440 + y, 122, 122, 122);
	gfx.PutPixel(169 + x, 440 + y, 255, 255, 255);
	gfx.PutPixel(329 + x, 444 + y, 87, 87, 87);
	gfx.PutPixel(330 + x, 444 + y, 122, 122, 122);
	gfx.PutPixel(329 + x, 445 + y, 122, 122, 122);
	gfx.PutPixel(330 + x, 445 + y, 255, 255, 255);
	gfx.PutPixel(600 + x, 460 + y, 87, 87, 87);
	gfx.PutPixel(601 + x, 460 + y, 122, 122, 122);
	gfx.PutPixel(600 + x, 461 + y, 122, 122, 122);
	gfx.PutPixel(601 + x, 461 + y, 255, 255, 255);
	gfx.PutPixel(779 + x, 494 + y, 87, 87, 87);
	gfx.PutPixel(780 + x, 494 + y, 122, 122, 122);
	gfx.PutPixel(779 + x, 495 + y, 122, 122, 122);
	gfx.PutPixel(780 + x, 495 + y, 255, 255, 255);
	gfx.PutPixel(67 + x, 500 + y, 87, 87, 87);
	gfx.PutPixel(68 + x, 500 + y, 122, 122, 122);
	gfx.PutPixel(67 + x, 501 + y, 122, 122, 122);
	gfx.PutPixel(68 + x, 501 + y, 255, 255, 255);
	gfx.PutPixel(468 + x, 521 + y, 72, 72, 72);
	gfx.PutPixel(469 + x, 521 + y, 223, 223, 223);
	gfx.PutPixel(470 + x, 521 + y, 223, 223, 223);
	gfx.PutPixel(471 + x, 521 + y, 96, 96, 96);
	gfx.PutPixel(468 + x, 522 + y, 223, 223, 223);
	gfx.PutPixel(469 + x, 522 + y, 255, 255, 255);
	gfx.PutPixel(470 + x, 522 + y, 255, 255, 255);
	gfx.PutPixel(471 + x, 522 + y, 247, 247, 247);
	gfx.PutPixel(468 + x, 523 + y, 120, 120, 120);
	gfx.PutPixel(469 + x, 523 + y, 255, 255, 255);
	gfx.PutPixel(470 + x, 523 + y, 255, 255, 255);
	gfx.PutPixel(471 + x, 523 + y, 151, 151, 151);
	gfx.PutPixel(263 + x, 548 + y, 87, 87, 87);
	gfx.PutPixel(264 + x, 548 + y, 122, 122, 122);
	gfx.PutPixel(263 + x, 549 + y, 122, 122, 122);
	gfx.PutPixel(264 + x, 549 + y, 255, 255, 255);

}

bool Space::GetCollision() const
{
	return collision;
}
