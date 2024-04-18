#include <stdint.h>
#include "math/matrix.h"

#ifndef NEURAL_NETWORK_PARAMS_GUARD
#define NEURAL_NETWORK_PARAMS_GUARD

#define FIXED_POINT_PRECISION 10
#define NUM_OUTPUTS 1
#define IS_MSP
#define LEA_RAM_LENGTH 1892
#define LEA_RESERVED 2

#define MODEL_ARRAY_LENGTH 80751
//#define MODEL_ARRAY_LENGTH 87456
#define MODEL_ARRAY_END 0x37f7c
#define MODEL_ARRAY_OUTPUT_LENGTH 16384
#define MODEL_ARRAY_TEMP_LENGTH 16384
#define PADDING_BUFFER_LENGTH 2048
#define FILTER_BUFFER_LENGTH 1024
#define INPUT_NUM_ROWS 28
#define INPUT_NUM_COLS 28
#define INPUT_NUM_CHANNELS 1
#define OUTPUT_NUM_LABELS 10

#define INPUT_LENGTH (INPUT_NUM_ROWS*INPUT_NUM_COLS*INPUT_NUM_CHANNELS)
#define OUTPUT_LENGTH (OUTPUT_NUM_LABELS*LEA_RESERVED)

#pragma LOCATION(MODEL_ARRAY, 0x18000)
#pragma PERSISTENT(MODEL_ARRAY)
static int16_t MODEL_ARRAY[MODEL_ARRAY_LENGTH]= {1};

    

/* INPUT HERE */
#pragma PERSISTENT(input_buffer)
static dtype input_buffer[INPUT_LENGTH] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 771, 538, 128, 0, 0, 0, 0, 0, 0, 0, 0, 60, 309, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 943, 1003, 678, 0, 0, 0, 0, 0, 0, 0, 0, 60, 883, 967, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 758, 1015, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 1015, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 1015, 1015, 84, 0, 0, 0, 0, 0, 0, 0, 0, 172, 1019, 694, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 614, 1015, 385, 0, 0, 0, 0, 0, 0, 0, 0, 172, 927, 1019, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 1024, 819, 44, 0, 0, 0, 0, 0, 0, 0, 0, 417, 1019, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 1015, 714, 20, 0, 0, 0, 0, 0, 0, 36, 526, 951, 1015, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 1015, 1015, 766, 702, 281, 281, 281, 281, 534, 791, 1015, 1015, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 915, 1015, 1015, 1019, 1015, 1015, 1015, 1015, 1019, 1015, 1015, 879, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 261, 550, 1019, 931, 550, 550, 550, 176, 1015, 1015, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 1019, 827, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 1015, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 1019, 967, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 1019, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 927, 979, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 1019, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 1015, 630, 0, 52, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 1015, 618, 365, 819, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 1015, 1019, 1015, 618, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 762, 514, 92, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#pragma PERSISTENT(output_buffer)
static dtype output_buffer[OUTPUT_LENGTH] = {0};
static dtype label;
static matrix inputFeatures, outputLabels;

#endif
