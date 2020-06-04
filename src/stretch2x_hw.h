/* ----------------------------------------------------------------------------
 * ------------------------- Doom TFM (CEI 2017/2018)--------------------------
 * ----------------------------------------------------------------------------
 * 	Stretch2x Hardware Accelerator project
 * 		File: - "stretch2x_hw.h"
 *
 * ----------------------------------------------------------------------------
 * Author:  David Lima (davidlimaastor@gmail.com)
 *
 *
 * TODO:
 *
 * CHANGELOG:
 *
 *---------------------------------------------------------------------------*/
#ifndef STRETCH2_HW_H
#define STRETCH2_HW_H

#include <inttypes.h>

typedef uint8_t byte;


/*------------------------- Constant Definitions ----------------------------*/
/*
 *  Screen resolutions
 */
#define SCREENWIDTH  (640) // Screen width
#define SCREENHEIGHT (400) // Screen height

#define LINES 		(5)

#define INPUT_WIDTH 	(640)
#define INPUT_HEIGHT 	(400)

#define OUTPUT_WIDTH 	(1280)
#define OUTPUT_HEIGHT 	(960)

#define SRC_RANGE 	(INPUT_WIDTH*INPUT_HEIGHT)
#define DEST_RANGE 	(OUTPUT_WIDTH*OUTPUT_HEIGHT)

/*----------------------- Functions prototypes ------------------------------*/
//~ #ifdef __cplusplus
//~ extern "C" {
//~ #endif
void _p0_I_Stretch2x_HW8_async_8(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW7_async_7(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW6_async_6(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW5_async_5(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW4_async_4(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW3_async_3(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW2_async_2(byte src[256000], byte dest[1228800], byte fragments);
void _p0_I_Stretch2x_HW1_async_1(byte src[256000], byte dest[1228800], byte fragments);
//~ #ifdef __cplusplus
//~ }
//~ #endif

#endif // STRETCH2X_HW_H
