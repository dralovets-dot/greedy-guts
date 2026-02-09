// LilyGo T-Embed with ESP32-S3 and PN532 NFC
// TFT configuration for parallel interface

#define USER_SETUP_INFO "LilyGo T-Embed ESP32-S3"

// ESP32-S3 with parallel TFT
#define ESP32_PARALLEL

// Pin definitions for T-Embed
#define TFT_CS   6   // GPIO6 - TFT Chip Select
#define TFT_DC   7   // GPIO7 - TFT Data/Command
#define TFT_RST  5   // GPIO5 - TFT Reset

// Display dimensions
#define TFT_WIDTH  170
#define TFT_HEIGHT 320

// Backlight control
#define TFT_BL   38  // GPIO38 - Backlight control
#define TFT_BACKLIGHT_ON HIGH

// Font support
#define LOAD_GLCD   // Original Adafruit 8 pixel font
#define LOAD_FONT2  // Small 16 pixel high font
#define LOAD_FONT4  // Medium 26 pixel high font
#define LOAD_FONT6  // Large 48 pixel font
#define LOAD_FONT7  // 7 segment 48 pixel font
#define LOAD_FONT8  // Large 75 pixel font
#define LOAD_GFXFF  // FreeFonts

#define SMOOTH_FONT

// SPI frequencies
#define SPI_FREQUENCY  40000000     // 40 MHz
#define SPI_READ_FREQUENCY  20000000  // 20 MHz
#define SPI_TOUCH_FREQUENCY  2500000   // 2.5 MHz

// Optional touch support (if present)
// #define TOUCH_CS  -1  // Not used

// For better performance
#define SPI_DMA_CHANNEL 1

// Color definitions (standard)
#define TFT_BLACK       0x0000
#define TFT_NAVY        0x000F
#define TFT_DARKGREEN   0x03E0
#define TFT_DARKCYAN    0x03EF
#define TFT_MAROON      0x7800
#define TFT_PURPLE      0x780F
#define TFT_OLIVE       0x7BE0
#define TFT_LIGHTGREY   0xC618
#define TFT_DARKGREY    0x7BEF
#define TFT_BLUE        0x001F
#define TFT_GREEN       0x07E0
#define TFT_CYAN        0x07FF
#define TFT_RED         0xF800
#define TFT_MAGENTA     0xF81F
#define TFT_YELLOW      0xFFE0
#define TFT_WHITE       0xFFFF
#define TFT_ORANGE      0xFDA0
#define TFT_GREENYELLOW 0xB7E0
#define TFT_PINK        0xFC9F

// Optional calibration for touch
// #define CALIBRATION_FILE "/touch.cal"
