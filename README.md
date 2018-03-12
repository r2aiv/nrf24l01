[![Build Status](https://travis-ci.org/petoknm/NRF24L01.svg?branch=master)](https://travis-ci.org/petoknm/NRF24L01)

# NRF24L01
Library for interfacing with NRF24L01(+) modules from an STM32 micro.

## TODO
 - stm32f0 example
 - stm32f1 example
 - stm32f4 example
 - CI setup

## Hardware Setup
NRF24L01 modules interface directly over SPI and three additional wires (CE, CSN and IRQ).

## Software Setup
Fill out all the parameters in the `nrf24l01_config` structure and call
`nrf_init` to initialize your `nrf24l01` structure. This structure can then be
used to make subsequent library calls.

## Important Functions

### EXTI Interrupt Handler
* `void nrf_irq_handler(nrf24l01* dev)`

  You must call this function on Falling edge trigger detection interrupt handler, typically, from `HAL_GPIO_EXTI_Callback`

### Asynchronous Data Receiving
* `void nrf_packet_received_callback(nrf24l01* dev, uint8_t* data)`

  Override this function (it is `__weak` by default) to handle received data asynchronously,
default implementation is used in favor of `nrf_receive_packet` for blocking data receiving

### TODO: Revert: Blocking Data Receiving
* `const uint8_t* nrf_receive_packet(nrf24l01* dev)`

  Blocks until the data has arrived, then returns a pointer to received data. Please note, once `nrf_packet_received_callback` routine is overridden, this one will stop working.

### Blocking Data Sending
* `NRF_RESULT nrf_send_packet(nrf24l01* dev, const uint8_t* data)`

  If the Auto Acknowledgement is enabled (default), this method will return `NRF_OK`, if the data has been acknowledged by other party, and `NRF_ERROR` if the data has not been received (maximum retransmissions has occurred).

  If the AA is disabled, returns `NRF_OK` once the data has been transmitted (with no guarantee the data was actually received).

### Blocking Data Sending, with NO_ACK flag
* `NRF_RESULT nrf_send_packet_noack(nrf24l01* dev, const uint8_t* data)`

  Disables the AA for this packet, thus this method always returns `NRF_OK`.

## Requirements
For building you will need:
 - make
 - gcc

For developing you will also need:
 - clang-format
