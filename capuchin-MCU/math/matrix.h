#include <stdint.h>

#ifndef MATRIX_GUARD
    #define MATRIX_GUARD

    typedef int16_t dtype;

    struct matrix {
        dtype *data;
        uint16_t numRows;
        uint16_t numCols;
        uint16_t security;
    };
    typedef struct matrix matrix;

    typedef struct {
        float *input_gate;
        float *forget_gate;
        float *output_gate;
        float *cell_state;
        float *hidden_state;
    } LSTMCell;

    typedef struct {
        uint16_t input_size;
        uint16_t hidden_size;
        uint16_t num_cells;
        LSTMCell *cells;
    } LSTMLayer;

#endif
