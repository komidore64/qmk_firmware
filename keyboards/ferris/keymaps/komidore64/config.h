#pragma once

// handedness
#undef EE_HANDS
#undef MASTER_LEFT
#undef MASTER_RIGHT
#define MASTER_LEFT

// mouse
#undef MOUSEKEY_INTERVAL
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_INTERVAL 33
#define MOUSEKEY_MAX_SPEED 7

// the rest
#undef COMBO_TERM
#undef PERMISSIVE_HOLD
#undef QUICK_TAP_TERM
#undef TAPPING_TERM
#define COMBO_TERM 50
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0
#define TAPPING_TERM 400
