# NRF24L01
Library for interfacing with NRF24L01(+) modules from an STM32 micro.

## TODO
 - stm32f0 example
 - stm32f1 example
 - stm32f4 example
 - CI setup

## Hardware Setup
NRF24L01 modules interface directly over SPI and two additional wires (CE, IRQ).

## Software Setup
Fill out all the parameters in the `nrf24l01_config` structure and call
`nrf_init` to initialize your `nrf24l01` structure. This structure can then be
used to make subsequent library calls.

## Requirements
For building you will need:
 - make
 - gcc

For developing you will also need:
 - clang-format
