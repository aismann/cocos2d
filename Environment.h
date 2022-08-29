#pragma once
#ifndef _ENVIRONMENT_H
#define _ENVIRONMENT_H


#include "stdafx.h"
enum class GameState {
	PLAYING, PAUSED, WIN, LOSE
};

#define BLOCK_HORIZONTAL 7
#define BLOCK_VERTICAL 9
#define BLOCK_OFFSET Vec2(720/2, 1280/2);
#define BLOCK_WIDTH 80
#define BLOCK_HEIGHT 80
#endif