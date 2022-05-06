#define I2C_SDA 21
#define I2C_SCL 22

#define BUTTON_NEED_PULLUP
#define BUTTON_PIN 38


#undef RF95_SCK
#undef RF95_MISO
#undef RF95_MOSI
#undef RF95_NSS

#define RF95_SCK 18
#define RF95_MISO 19
#define RF95_MOSI 23
#define RF95_NSS 5

#define USE_RF95
#define LORA_DIO0 36
#define LORA_RESET 26
#define LORA_DIO1 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC

// This board has no GPS or Screen for now
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define NO_GPS
#define NO_SCREEN