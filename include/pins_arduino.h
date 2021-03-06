#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(esp32_adc2gpio[(p)]):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t GYRO_SDA     = 19;
static const uint8_t GYRO_SCL     = 18;

static const uint8_t TFT_BL     = 27;
static const uint8_t TFT_CS     = 16;
static const uint8_t TFT_DC     = 17;
static const uint8_t TFT_SDA    = 23;
static const uint8_t TFT_SCK    = 5;
static const uint8_t TFT_RST    = 9;

static const uint8_t SD_SS    = 13;
static const uint8_t SD_MOSI  = 15;
static const uint8_t SD_MISO  = 2;
static const uint8_t SD_SCK   = 14;

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t IO4 = 4;
static const uint8_t IO0 = 0;
static const uint8_t IO2 = 2;
static const uint8_t IO15 = 15;
static const uint8_t IO13 = 13;
static const uint8_t IO12 = 12;
static const uint8_t IO14 = 14;
static const uint8_t IO27 = 27;
static const uint8_t IO33 = 33;
static const uint8_t IO32 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

#endif /* Pins_Arduino_h */