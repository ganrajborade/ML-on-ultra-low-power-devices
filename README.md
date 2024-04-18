# ML-on-ultra-low-power-devices

### Dependencies
Disclaim: the following dependencies are only author's recommended setup. This project was tested under the following dependencies and verified as correct. This project may work under other versions of dependencies but the correctness may not be guaranteed.

+ tensorflow=2.6.0
+ keras=2.6.0
+ fxpmath=0.4.0
+ numpy=1.19.5
+ TI Code Composer Studio (recommended to debug as this project only simulates input and output rather than connecting to actual sensors)

### Executing the Program
#### Using Python Interface
1. Copy `encoder.py` into the same directory of your Python uDNN implementation program.

    `cp Capuchin/encoder.py {UDNN_PYTHON_IMPL_DIR}`
2. Import encoder package into your Python uDNN implementation program.

    `import encoder`
3. Call `encoder.export_model(MODEL_OBJECT)` in your program where the argument`MODEL_OBJECT` should be a trained `tensorflow.keras.Model` object.
4. Now a header file named `neural_network_parameters.h` should be written in the same directory.
#### Using C Implementation
1. Copy the header file `neural_network_parameters.h` into directory `Capuchin/capuchin-MCU`.

    `cp {UDNN_PYTHON_IMPL_DIR}/neural_network_parameters.h {CAPUCHIN_PROJECT_DIR}/Capuchin/capuchin-MCU`
2. Open `{CAPUCHIN_PROJECT_DIR}/Capuchin/capuchin-MCU` as a TI CCS project.
3. Copy desired input into `input_buffer` array in `/neural_network_parameters.h`.
4. Compile and Run the inference on MSP430.
