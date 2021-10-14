/*
	This file contains all the graphical data (drawn and exported with GBTD and GBMB)
*/


//================================
//========  TILE DATA ==============
//================================

//Sprite tiles
const unsigned char tiles_sprites[] = {
  0xFF,0xFF,0xFF,0x80,0xFF,0x80,0xFF,0x9F,
  0xF0,0x90,0xF0,0x90,0xF0,0x90,0xF0,0x90,
  0xFF,0xFF,0xFF,0x01,0xFF,0x01,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF0,0x90,0xF0,0x90,0xF0,0x90,0xF0,0x90,
  0xF0,0x90,0xF0,0x90,0xF0,0x90,0xF0,0xF0
};



//Background tiles 
const unsigned char tiles_data[] = {
  0xFF,0xFF,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0xFF,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x9E,0xFD,0xA3,0xE1,0xBF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x79,0xF7,0x8D,0x87,0xFD,0xFF,0xFF,
  0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,
  0x80,0xFF,0x80,0xFF,0x80,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x3F,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,
  0x01,0xFF,0x01,0xFF,0x01,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0x00,0xFF,0x01,0xFF,0x3C,
  0xFF,0x08,0xFF,0x11,0xFF,0x3C,0xFF,0x00,
  0xFF,0xFF,0xFF,0x0F,0xFF,0xE2,0xFF,0x44,
  0xFF,0x8F,0xFF,0xE0,0xFF,0x00,0xFF,0x00,
  0xFF,0x80,0xFF,0x9E,0xE3,0xBD,0xC1,0xFE,
  0xD5,0xEB,0xFF,0xD5,0xFF,0xD5,0xFF,0xFF,
  0xFF,0x01,0xFF,0x79,0xC7,0xBD,0x83,0x7F,
  0xAB,0xD7,0xFF,0xAB,0xFF,0xAB,0xFF,0xFF,
  0xFF,0x7F,0xC0,0x7F,0xDF,0x7F,0xDF,0x78,
  0xDF,0x78,0xDF,0x7E,0xDF,0x78,0xDF,0x78,
  0xFF,0xFE,0x03,0xFE,0xFB,0xFE,0xFB,0x1E,
  0xFB,0x1E,0xFB,0x7E,0xFB,0x1E,0xFB,0x1E,
  0xDF,0x7F,0xC0,0x7F,0xC4,0x7F,0xCE,0x7F,
  0xC4,0x7F,0xC1,0x7F,0xC0,0x7F,0xFF,0xFF,
  0xF3,0xFE,0x03,0xFE,0x13,0xFE,0x43,0xFE,
  0x03,0xFE,0x43,0xFE,0x07,0xFC,0xFF,0xFF,
  0x00,0xFF,0x00,0xF1,0x00,0xEF,0x00,0xE9,
  0x00,0xED,0x00,0xF1,0x00,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0x1F,0x00,0x6F,0x00,0x1F,
  0x00,0x6F,0x00,0x1F,0x00,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x3F,0xE0,0x3F,
  0xEF,0x3F,0xEF,0x38,0xEF,0x38,0xEF,0x3E,
  0xFF,0x00,0xFF,0x00,0xFF,0xFC,0x07,0xFC,
  0xF7,0xFC,0xF7,0x1C,0xF7,0x1C,0xF7,0x7C,
  0xEF,0x38,0xEF,0x3F,0xE0,0x3F,0xE4,0x3F,
  0xEE,0x3F,0xE4,0x3F,0xE1,0x3F,0xFF,0xFF,
  0xF7,0x1C,0xE7,0xFC,0x07,0xFC,0x17,0xFC,
  0x47,0xFC,0x07,0xFC,0x47,0xFC,0xFF,0xFF,
  0x00,0xFF,0x00,0xC4,0x00,0xBD,0x00,0xA4,
  0x00,0xB5,0x00,0xC4,0x00,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0x63,0x00,0xAD,0x00,0x63,
  0x00,0xAF,0x00,0x6F,0x00,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x7F,0xC0,0x7F,0xDF,0x7F,
  0xDF,0x78,0xDF,0x78,0xDF,0x7E,0xDF,0x78,
  0xFF,0x00,0xFF,0xFE,0x03,0xFE,0xFB,0xFE,
  0xFB,0x1E,0xFB,0x1E,0xFB,0x7E,0xFB,0x1E,
  0xDF,0x78,0xDF,0x7F,0xC0,0x7F,0xC4,0x7F,
  0xCE,0x7F,0xC4,0x7F,0xC1,0x7F,0xFF,0xFF,
  0xFB,0x1E,0xFB,0xFE,0x03,0xFE,0x13,0xFE,
  0x43,0xFE,0x03,0xFE,0x43,0xFE,0xFF,0xFF,
  0x00,0xFF,0x00,0xC4,0x00,0xBD,0x00,0xA4,
  0x00,0xB5,0x00,0xC4,0x00,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0x73,0x00,0xAD,0x00,0x6F,
  0x00,0xAD,0x00,0x73,0x00,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xAF,0xFF,0xEF,0xFF,0xA7,0xFF,
  0xE0,0xFF,0xA0,0xFF,0xA0,0xFF,0xA7,0xF8,
  0xFF,0xFF,0xF5,0xFF,0xF7,0xFF,0xE5,0xFF,
  0x07,0xFF,0x05,0xFF,0x05,0xFF,0xE5,0x1F,
  0xAF,0xF0,0xAF,0xF6,0xA0,0xFF,0xA0,0xFF,
  0xA0,0xFF,0xA7,0xFF,0xA7,0xFF,0xFF,0xFF,
  0xF5,0x0F,0xF5,0x6F,0x05,0xFF,0x05,0xFF,
  0x05,0xFF,0xE5,0xFF,0xE5,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xC6,0x00,0xBD,0x00,0x85,
  0x00,0xF5,0x00,0x8E,0x00,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0x23,0x00,0xED,0x00,0x23,
  0x00,0xAD,0x00,0x23,0x00,0xFF,0xFF,0xFF,
  0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x9E,0x9E,0xA3,0xBD,0xC3,0xFE,0xD5,0xEB,
  0xFF,0xD5,0xFF,0xD5,0xBE,0xBE,0x80,0x80,
  0x9E,0x9E,0xBD,0xA3,0xA1,0xBF,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x79,0x79,
  0xC5,0xBD,0x83,0x7F,0xAB,0xD7,0xFF,0xAB,
  0xFF,0xAB,0x7D,0x7D,0xF5,0x8D,0xFF,0xFF,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x9E,0x9E,0xA3,0xBD,0xC3,0xFE,0xD5,0xEB,
  0xFF,0xD5,0xFF,0xD5,0xBE,0xBE,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x79,0x79,0xC5,0xBD,0x83,0x7F,0xAB,0xD7,
  0xFF,0xAB,0xFF,0xAB,0x7D,0x7D,0xFF,0xFF,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,
  0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0xFF,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0x01,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0xFF,
  0x7F,0x7F,0x7F,0x40,0x60,0x5F,0x60,0x58,
  0x62,0x5A,0x62,0x5A,0x62,0x5A,0x60,0x58,
  0xFE,0xFE,0xFE,0x02,0x06,0xFA,0x06,0x1A,
  0x46,0x5A,0x46,0x5A,0x46,0x5A,0x06,0x1A,
  0x60,0x5F,0x7F,0x40,0x7F,0x44,0x7F,0x4E,
  0x7F,0x44,0x7E,0x41,0x7F,0x40,0xFF,0xFF,
  0x0E,0xF2,0xFE,0x02,0xFE,0x12,0xFE,0x42,
  0xFE,0x02,0xBE,0x42,0xFC,0x04,0xFF,0xFF,
  0xFF,0x00,0xFF,0x0E,0xFF,0x10,0xFF,0x16,
  0xFF,0x12,0xFF,0x0E,0xFF,0x00,0xFF,0xFF,
  0xFF,0x00,0xFF,0xE0,0xFF,0x90,0xFF,0xE0,
  0xFF,0x90,0xFF,0xE0,0xFF,0x00,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x20,
  0x3F,0x2F,0x38,0x28,0x3A,0x2A,0x3A,0x2A,
  0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x04,
  0xFC,0xF4,0x1C,0x14,0x5C,0x54,0x5C,0x54,
  0x38,0x28,0x3F,0x2F,0x3F,0x20,0x3F,0x24,
  0x3F,0x2E,0x3F,0x24,0x3E,0x21,0xFF,0xFF,
  0x1C,0x14,0xFC,0xE4,0xFC,0x04,0xFC,0x14,
  0xFC,0x44,0xFC,0x04,0xBC,0x44,0xFF,0xFF,
  0xFF,0x00,0xFF,0x3B,0xFF,0x42,0xFF,0x5B,
  0xFF,0x4A,0xFF,0x3B,0xFF,0x00,0xFF,0xFF,
  0xFF,0x00,0xFF,0x9C,0xFF,0x52,0xFF,0x9C,
  0xFF,0x50,0xFF,0x90,0xFF,0x00,0xFF,0xFF,
  0x00,0x00,0x7F,0x7F,0x7F,0x40,0x7F,0x5F,
  0x78,0x58,0x7A,0x5A,0x7A,0x5A,0x7A,0x5A,
  0x00,0x00,0xFE,0xFE,0xFE,0x02,0xFE,0xFA,
  0x1E,0x1A,0x5E,0x5A,0x5E,0x5A,0x5E,0x5A,
  0x78,0x58,0x7F,0x5F,0x7F,0x40,0x7F,0x44,
  0x7F,0x4E,0x7F,0x44,0x7E,0x41,0xFF,0xFF,
  0x1E,0x1A,0xFE,0xFA,0xFE,0x02,0xFE,0x12,
  0xFE,0x42,0xFE,0x02,0xBE,0x42,0xFF,0xFF,
  0xFF,0x00,0xFF,0x3B,0xFF,0x42,0xFF,0x5B,
  0xFF,0x4A,0xFF,0x3B,0xFF,0x00,0xFF,0xFF,
  0xFF,0x00,0xFF,0x8C,0xFF,0x52,0xFF,0x90,
  0xFF,0x52,0xFF,0x8C,0xFF,0x00,0xFF,0xFF,
  0xFF,0xFF,0xD8,0xAF,0xDF,0xEF,0xDF,0xA7,
  0xDF,0xE0,0xDF,0xA0,0xDF,0xA0,0xD8,0xA0,
  0xFF,0xFF,0x1B,0xF5,0xFB,0xF7,0xFB,0xE5,
  0xFB,0x07,0xFB,0x05,0xFB,0x05,0x1B,0x05,
  0xD2,0xA2,0xD2,0xA2,0xDF,0xA0,0xA0,0xFF,
  0xA0,0xFF,0xA7,0xFF,0xA7,0xFF,0xFF,0xFF,
  0x4B,0x45,0x4B,0x45,0xFB,0x05,0x05,0xFF,
  0x05,0xFF,0xE5,0xFF,0xE5,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x39,0xFF,0x42,0xFF,0x7A,
  0xFF,0x0A,0xFF,0x71,0xFF,0x00,0xFF,0xFF,
  0xFF,0x00,0xFF,0xDC,0xFF,0x12,0xFF,0xDC,
  0xFF,0x52,0xFF,0xDC,0xFF,0x00,0xFF,0xFF,
  0x60,0x60,0x90,0xF0,0x90,0xF0,0x66,0x66,
  0x09,0x09,0x0F,0x0F,0x09,0x09,0x09,0x09,
  0x60,0x60,0x90,0xF0,0x90,0xF0,0x6E,0x6E,
  0x09,0x09,0x0F,0x0F,0x09,0x09,0x0E,0x0E,
  0x00,0x00,0x7E,0x7E,0xFF,0xFF,0x7E,0x7E,
  0x00,0x00,0x57,0x57,0xDA,0xDA,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,
  0x1D,0x00,0x15,0x00,0x1C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,
  0x45,0x00,0x45,0x00,0xC6,0x00,0x40,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
  0x62,0x00,0x42,0x00,0x53,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x56,0x00,
  0x55,0x00,0x55,0x00,0x76,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x76,0x00,
  0x54,0x00,0x52,0x00,0x76,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x00,
  0x8E,0x00,0xAA,0x00,0xEE,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x6E,0x00,0x4A,0x00,0x6E,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xDC,0x00,0x94,0x00,0x9D,0x00,0x10,0x00,

  // GBA ON
  0x00,0x00,0x7F,0x7F,0x7F,0x40,0x7F,0x5F,
  0x70,0x50,0x72,0x52,0x72,0x52,0x70,0x50,
  0x00,0x00,0xFE,0xFE,0xFE,0x02,0xFE,0xFA,
  0x0E,0x0A,0x4E,0x4A,0x4E,0x4A,0x0E,0x0A,
  0x7F,0x5F,0x7F,0x40,0x3F,0x3F,0x7F,0x40,
  0x7F,0x49,0x7F,0x5C,0x7F,0x48,0xFF,0xFF,
  0xFE,0xFA,0xFE,0x02,0xFC,0xFC,0xFE,0x02,
  0xFE,0x02,0xFE,0x0A,0xFE,0x22,0xFF,0xFF,
  0xFF,0x00,0xFF,0x3B,0xFF,0x42,0xFF,0x5B,
  0xFF,0x4A,0xFF,0x3B,0xFF,0x00,0xFF,0xFF,
  0xFF,0x00,0xFF,0x8C,0xFF,0x52,0xFF,0x92,
  0xFF,0x5E,0xFF,0x92,0xFF,0x00,0xFF,0xFF,

  // GBA Off
  0xFF,0x00,0xFF,0x7F,0xC0,0x7F,0xDF,0x7F,
  0xDF,0x70,0xDF,0x70,0xDF,0x70,0xDF,0x76,
  0xFF,0x00,0xFF,0xFE,0x03,0xFE,0xFB,0xFE,
  0xFB,0x0E,0xFB,0x0E,0xFB,0x0E,0xFB,0x6E,
  0xDF,0x7F,0xC0,0x7F,0xFF,0x3F,0xC0,0x7F,
  0xC9,0x7F,0xDC,0x7F,0xC8,0x7F,0xFF,0xFF,
  0xFB,0xFE,0x03,0xFE,0xFF,0xFC,0x03,0xFE,
  0x03,0xFE,0x0B,0xFE,0x23,0xFE,0xFF,0xFF,
  0x00,0xFF,0x00,0xC4,0x00,0xBD,0x00,0xA4,
  0x00,0xB5,0x00,0xC4,0x00,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0x73,0x00,0xAD,0x00,0x6D,
  0x00,0xA1,0x00,0x6D,0x00,0xFF,0xFF,0xFF
};


//Background animation: working (both hands pushing buttons)
const unsigned char tiles_working0[] = {
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x9E,0x9E,0xA3,0xBD,0xC3,0xFE,0xD5,0xEB,
  0xFF,0xD5,0xFF,0xD5,0xBE,0xBE,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x79,0x79,
  0xC5,0xBD,0x83,0x7F,0xAB,0xD7,0xFF,0xAB,
  0xFF,0xAB,0x7D,0x7D,0x01,0x01,0x01,0x01,
  0x79,0x79,0xF5,0x8D,0x85,0xFD,0xFF,0xFF
};
const unsigned char tiles_working1[] = {
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x9E,0x9E,0xA3,0xBD,
  0xC3,0xFE,0xD5,0xEB,0xFF,0xD5,0xFF,0xD5,
  0xBE,0xBE,0x9E,0x9E,0xBD,0xA3,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x79,0x79,0xC5,0xBD,0x83,0x7F,0xAB,0xD7,
  0xFF,0xAB,0xFF,0xAB,0x7D,0x7D,0x01,0x01,
  0x79,0x79,0xF5,0x8D,0x85,0xFD,0xFF,0xFF
};
const unsigned char tiles_working2[] = {
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x9E,0x9E,0xA3,0xBD,0xC3,0xFE,
  0xD5,0xEB,0xFF,0xD5,0xFF,0xD5,0xBE,0xBE,
  0x9E,0x9E,0xBD,0xA3,0xA1,0xBF,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x79,0x79,0xC5,0xBD,0x83,0x7F,
  0xAB,0xD7,0xFF,0xAB,0xFF,0xAB,0x7D,0x7D,
  0x79,0x79,0xF5,0x8D,0x85,0xFD,0xFF,0xFF
};
const unsigned char tiles_working3[] = {
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x9E,0x9E,0xA3,0xBD,0xC3,0xFE,0xD5,0xEB,
  0xFF,0xD5,0xFF,0xD5,0xBE,0xBE,0x80,0x80,
  0x9E,0x9E,0xBD,0xA3,0xA1,0xBF,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x79,0x79,
  0xC5,0xBD,0x83,0x7F,0xAB,0xD7,0xFF,0xAB,
  0xFF,0xAB,0x7D,0x7D,0xF5,0x8D,0xFF,0xFF
};
const unsigned char tiles_working4[] = {
  0x80,0x80,0x80,0x80,0x80,0x80,0x9E,0x9E,
  0xA3,0xBD,0xC3,0xFE,0xD5,0xEB,0xFF,0xD5,
  0xFF,0xD5,0xBE,0xBE,0x80,0x80,0x80,0x80,
  0x9E,0x9E,0xBD,0xA3,0xA1,0xBF,0xFF,0xFF,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x79,0x79,0xC5,0xBD,0x83,0x7F,0xAB,0xD7,
  0xFF,0xAB,0xFF,0xAB,0x7D,0x7D,0xFF,0xFF
};


//================================
//========  MAP DATA ==============
//================================

//Foe: Empty
const unsigned char map_empty[] = {
  0x80,0x81,0x81,0x82,0x83,0x84,0x84,0x85,0x86,0x87,
  0x87,0x88,0x89,0x8A,0x8B,0x8C
};

//Foe: DMG Sleeping
const unsigned char map_dmg_off[] = {
  0x80,0x8D,0x8E,0x82,0x83,0x91,0x92,0x85,0x86,0x93,
  0x94,0x88,0x89,0x95,0x96,0x8C
};

//Foe: DMG Working
const unsigned char map_dmg_on[] = {
  0xA9,0xAA,0xAB,0xAC,0xAD,0xB7,0xB8,0xAF,0xAE,0xB9,
  0xBA,0xB0,0xB5,0xBB,0xBC,0xB6
};

//Foe: MGB Sleeping
const unsigned char map_mgb_off[] = {
  0x80,0x8D,0x8E,0x82,0x83,0x97,0x98,0x85,0x86,0x99,
  0x9A,0x88,0x89,0x9B,0x9C,0x8C
};

//Foe: MGB Working
const unsigned char map_mgb_on[] = {
  0xA9,0xAA,0xAB,0xAC,0xAD,0xBD,0xBE,0xAF,0xAE,0xBF,
  0xC0,0xB0,0xB5,0xC1,0xC2,0xB6
};

//Foe: CGB Sleeping
const unsigned char map_cgb_off[] = {
  0x80,0x8D,0x8E,0x82,0x83,0x9D,0x9E,0x85,0x86,0x9F,
  0xA0,0x88,0x89,0xA1,0xA2,0x8C
};

//Foe: CGB Working
const unsigned char map_cgb_on[] = {
  0xA9,0xAA,0xAB,0xAC,0xAD,0xC3,0xC4,0xAF,0xAE,0xC5,
  0xC6,0xB0,0xB5,0xC7,0xC8,0xB6
};

//Foe: SGB Sleeping
const unsigned char map_sgb_off[] = {
  0x80,0x8D,0x8E,0x82,0x83,0xA3,0xA4,0x85,0x86,0xA5,
  0xA6,0x88,0x89,0xA7,0xA8,0x8C
};

//Foe: SGB Working
const unsigned char map_sgb_on[] = {
  0xA9,0xAA,0xAB,0xAC,0xAD,0xC9,0xCA,0xAF,0xAE,0xCB,
  0xCC,0xB0,0xB5,0xCD,0xCE,0xB6
};

//Foe: GBA Sleeping
const unsigned char map_gba_off[] = {
  0x80,0x8D,0x8E,0x82,
  0x83,0xE0,0xE1,0x85,
  0x86,0xE2,0xE3,0x88,
  0x89,0xE4,0xE5,0x8C
};

//Foe: GBA Working
const unsigned char map_gba_on[] = {
  0xA9,0xAA,0xAB,0xAC,
  0xAD,0xDA,0xDB,0xAF,
  0xAE,0xDC,0xDD,0xB0,
  0xB5,0xDE,0xEF,0xB6
};
