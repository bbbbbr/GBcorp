/*
    This file contains all the graphical data (drawn and exported with GBTD and GBMB)
*/


//================================
//========  TILE DATA ==============
//================================

//Sprite tiles
extern const unsigned char tiles_sprites[];



//Background tiles
extern const unsigned char tiles_data[];

#define BKG_DATA_TILE_COUNT (90 + 12 + 2)

//Background animation: working (both hands pushing buttons)
extern const unsigned char tiles_working0[];
extern const unsigned char tiles_working1[];
extern const unsigned char tiles_working2[];
extern const unsigned char tiles_working3[];
extern const unsigned char tiles_working4[];


//================================
//========  MAP DATA ==============
//================================

//Foe: Empty
extern const unsigned char map_empty[];

//Foe: DMG Sleeping
extern const unsigned char map_dmg_off[];

//Foe: DMG Working
extern const unsigned char map_dmg_on[];

//Foe: MGB Sleeping
extern const unsigned char map_mgb_off[];

//Foe: MGB Working
extern const unsigned char map_mgb_on[];

//Foe: CGB Sleeping
extern const unsigned char map_cgb_off[];

//Foe: CGB Working
extern const unsigned char map_cgb_on[];

//Foe: SGB Sleeping
extern const unsigned char map_sgb_off[];

//Foe: SGB Working
extern const unsigned char map_sgb_on[];

//Foe: GBA Sleeping
extern const unsigned char map_gba_off[];

//Foe: GBA Working
extern const unsigned char map_gba_on[];

// Serial link buddy map
extern const unsigned char map_linked_buddy[7][5];