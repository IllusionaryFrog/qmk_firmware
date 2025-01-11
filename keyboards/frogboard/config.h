#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 150U

#define SERIAL_USART_FULL_DUPLEX
// #define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
// #define SERIAL_USART_PIN_SWAP // Swap TX and RX pins if keyboard is master halve. (Only available on some MCUs)
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
