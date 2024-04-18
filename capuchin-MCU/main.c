/*
 * main.c
 * Include processing inputs, outputs and applying deep learning models
 */

#include "main.h"

void main(void){

    /* stop watchdog timer */
     WDTCTL = WDTPW | WDTHOLD;

    /* initialize GPIO System */
    init_gpio();

    /* initialize the clock and baudrate */
    init_clock_system();
//    printf("HI");

    /* GSC dataset consists of 32*32 spectrograms */
    inputFeatures.numRows = INPUT_NUM_ROWS;
    inputFeatures.numCols = INPUT_NUM_COLS;
    inputFeatures.data = input_buffer;
    uint16_t security=0;
    uint16_t  CharSize = 256;
    uint16_t frequency[INPUT_LENGTH]={0};
    float  Diversity=0;
    uint16_t i=0;
    float sec = 1;


    /* output consists of 35 classes */
    outputLabels.numRows = OUTPUT_NUM_LABELS;
    outputLabels.numCols = LEA_RESERVED;   // one more column is reserved for LEA
    outputLabels.data = output_buffer;

    /* apply model saved in neural_network_parameters.h on input */
    for(;i<(int)INPUT_LENGTH;i++){
        if(!frequency[input_buffer[i]]){
            sec = apply_model(&outputLabels, &inputFeatures)->security;
            Diversity+=sec;
            frequency[input_buffer[i]]=1;
        }
      }
    security = Diversity/(uint16_t)INPUT_LENGTH;
    label = argmax(&outputLabels);


    __no_operation();


}
