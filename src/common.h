#ifndef COMMON_H
#define COMMON_H

// For serial link exchange, max supported model value is 0x07u
#define MODEL_EMPTY 0u
#define MODEL_DMG   1u
#define MODEL_MGB   2u
#define MODEL_CGB   3u
#define MODEL_SGB   4u
#define MODEL_GBA   5u

#define MODEL_MIN   (MODEL_DMG)
#define MODEL_MAX   (MODEL_GBA)
#define MODEL_COUNT (MODEL_MAX + 1)

// Bitpacked version of model types for serial link multi-player
#define MODEL_EMPTY_BITS  0x00u
#define MODEL_DMG_BITS    0x01u
#define MODEL_MGB_BITS    0x02u
#define MODEL_CGB_BITS    0x04u
#define MODEL_SGB_BITS    0x08u
#define MODEL_GBA_BITS    0x10u

extern const uint8_t model_bits_map[];

#endif // COMMON_H
