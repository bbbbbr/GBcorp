#ifndef COMMON_H
#define COMMON_H

// For serial link exchange, max supported model value is 0x07u
#define MODEL_EMPTY 0u
#define MODEL_DMG   1u
#define MODEL_MGB   2u
#define MODEL_CGB   3u
#define MODEL_SGB   4u
#define MODEL_GBA   5u
#define MODEL_DISCONNECTED 6u
#define MODEL_MIN (MODEL_DMG)
#define MODEL_MAX (MODEL_GBA)


#endif // COMMON_H
