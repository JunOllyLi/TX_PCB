
By default, Muffin is designed to use FlySky hall gimblal, over UART. However, if any other gimbals can be used with two wires (4 including GND and 3.3V), SW can be modified to use that.

Two RF module interfaces were designed. Although the name of them are for INTMOD and EXTMOD, SW can totally choose how they were used. The default configuration has the ELRS module connected to INTMOD and 4in1 connected to EXTMOD.

Those two modules have their own individual 5V power supply, controled by SW.
The PPM in/out on the back of FS6 shares the same signal pins of the EXTMOD.

And again, although the default design for them are UART and PPM, SW can totally choose other two wires protocol. ESP32 is very flexible regarding pin muxing.
