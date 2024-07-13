#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask
#define ALT Mod1Mask
#define SHIFT ShiftMask

// Corners
#define ROUND_CORNERS 10

//bar stuff:

#define GAP_SIZE 16
const char* barname = "bar"; // for lemonbar


const char* menu[]    = {"dmenu_run",      0};
const char* term[]    = {"st",             0};
const char* scrot[]   = {"scr",            0};
const char* briup[]   = {"bri", "up", 0};
const char* bridown[] = {"bri", "down", 0};
const char* voldown[] = {"amixer", "set", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "set", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "set", "Master", "toggle",      0};

static struct key keys[] = {
    {MOD,      XK_w,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_p,      run, {.com = scrot}},
    {MOD, XK_Return, run, {.com = term}},

    {MOD, XK_F10,    run, {.com = voldown}},
    {MOD, XK_F11,    run, {.com = volup}},
    {MOD, XK_F9,     run, {.com = volmute}},
    {MOD|ALT, XK_F11, run, {.com = briup}},
    {MOD|ALT, XK_F10, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},

    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},

    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},

    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},

    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},

    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
