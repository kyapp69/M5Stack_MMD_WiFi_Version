#pragma once
#include "Camera.h"

// ワールド空間の絶対座標
class Coord sealed {
private:
	struct ColorPoint {
		D3DXVECTOR3 position;
		unsigned long color;
	};
	const int numAxis, numNet;
	ColorPoint* axis;
	ColorPoint* net;
	LPDIRECT3DDEVICE9 pDevice;
public:
	Coord(LPDIRECT3DDEVICE9 pDevice);
	~Coord();
	void Draw(Camera* camera);
};
