
The "Muffin" device contains two PCBs:
1. Muffin-Core contains the core stuff, including processor, display, power sources, and etc.
2. FS6-Adapter fits into the FlySky FS6x shell and provides the buttons and switches for the TX to use.
3. Those two to be connected with FPC

By default, Muffin is designed to use FlySky hall gimblal, over UART. However, if any other gimbals can be used with two wires (4 including GND and 3.3V), SW can be modified to use that.

Three RF module interfaces were designed. Two populated on the Muffin-Core and the other populated on FS6-Adapter.
Although the name of them are for 4in1 module, ELRS module and PPM module, SW can totally choose to support other modules if needed.

Those three modules have their own individual 5V power supply, controled by SW.
the 4in1 module and ELRS module shares the same UART interface, while the ELRS module has an extra control pin from the I2C-GPIO chip.
The PPM module could be used as wireless trainer connection.

And again, although the default design for them are UART and PPM, SW can totally choose other two wires protocol. ESP32 is very flexible regarding pin muxing.