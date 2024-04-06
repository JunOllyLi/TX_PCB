/*
From Kconfig
  LCD D0 - D7: 21, 14, 13, 12, 11, 10, 9, 46
  LCD CS 45
  LCD DC 48
  LCD WR 47

#define I2C_SCL 7
#define I2C_SDA 6

//  MOSI -1
//  MISO -1
//  RESET -1
//  SCLK -1
//  TOUCH CS -1
//  TOUCH IRQ 38
*/

//#define POT1_ADC_CHANNEL ADC_CHANNEL_5  // GPIO 6
//#define POT2_ADC_CHANNEL ADC_CHANNEL_4  // GPIO 5
//#define BATT_ADC_CHANNEL ADC_CHANNEL_6  // GPIO 7

#define BACKLITE_PIN 3
#define RMT_TX_PIN 8  // PPM_O
#define TRAINER_IN_GPIO 15 // PPM_I
#define FLYSKY_UART_RX_PIN 4  // GIMBLE_TX
//#define FLYSKY_UART_TX_PIN 5  // GIMBLE_RX

#define INTMOD_UART_PORT UART_NUM_2
#define INTMOD_ESP_UART_TX 2 // INTMOD_RX
#define INTMOD_ESP_UART_RX 1 // INTMOD_TX

#define I2C_MASTER_NUM 0

#define SD_DEDICATED_SPI
#ifdef SD_DEDICATED_SPI
#define SD_SPI_HOST SPI2_HOST
#define SDSPI_CLK 40
#define SDSPI_MOSI 41
#define SDSPI_MISO 38
#endif
#define SDCARD_CS_GPIO 42

#define I2S_DOUT 16
#define I2S_BCLK 17
#define I2S_LRCLK 18
