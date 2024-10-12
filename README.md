
By default, Muffin is designed to use FlySky hall gimblal, over UART. However, if any other gimbals can be used with two wires (4 including GND and 3.3V), SW can be modified to use that.

Two RF module interfaces were designed. Although the name of them are for INTMOD and EXTMOD, SW can totally choose how they were used. The default configuration has the ELRS module connected to INTMOD and 4in1 connected to EXTMOD.

Those two modules have their own individual 5V power supply, controled by SW.
The PPM in/out on the back of FS6 shares the same signal pins of the EXTMOD.

And again, although the default design for them are UART and PPM, SW can totally choose other two wires protocol. ESP32 is very flexible regarding pin muxing.

# BOM (parts not listed in the schematics)
display module: IL9488 https://www.aliexpress.us/item/3256803764394132.html?spm=a2g0o.order_list.order_list_main.46.48c41802DB5b2D&gatewayAdapt=glo2usa
CPU ESP32S3 N16R8: https://www.aliexpress.us/item/3256805164206118.html?spm=a2g0o.order_list.order_list_main.61.48c41802DB5b2D&gatewayAdapt=glo2usa
Zorro 4in1 module
Zorro ELRS module
