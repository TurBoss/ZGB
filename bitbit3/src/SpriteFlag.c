#pragma bank=2
#include "SpriteFlag.h"
UINT8 bank_SPRITE_FLAG = 2;

#include "SpriteManager.h"

const UINT8 anim_flag_idle[] = {1, 0};
const UINT8 anim_flag_enabled[] = {1, 1};

extern UINT16 reset_x;
extern UINT16 reset_y;

void Start_SPRITE_FLAG(struct Sprite* sprite) {
	SetSpriteAnim(sprite, anim_flag_idle, 5u);
}

void Update_SPRITE_FLAG() {
	if(sprite_manager_current_sprite->anim_data == anim_flag_idle) {
		if(reset_x == sprite_manager_current_sprite->x && reset_y == sprite_manager_current_sprite->y) {
			SetSpriteAnim(sprite_manager_current_sprite, anim_flag_enabled, 5u);
		}
	}
}

void Destroy_SPRITE_FLAG() {
}