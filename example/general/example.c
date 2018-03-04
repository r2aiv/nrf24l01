#include "nrf24l01.h"
#include "stm32f4xx_hal.h"

extern SPI_HandleTypeDef hspi1;

void example() {
    nrf24l01 nrf;

    {
        nrf24l01_config config;
        config.data_rate        = NRF_DATA_RATE_1MBPS;
        config.tx_power         = NRF_TX_PWR_0dBm;
        config.crc_width        = NRF_CRC_WIDTH_1B;
        config.addr_width       = NRF_ADDR_WIDTH_5;
        config.payload_length   = 32;   // maximum is 32 bytes
        config.retransmit_count = 10;   // maximum is 15 times
        config.retransmit_delay = 0x0F; // 4000us, LSB:250us

        config.spi      = &hspi1;
        config.ce_port  = GPIOA;
        config.ce_pin   = GPIO_PIN_1;
        config.irq_port = GPIOA;
        config.irq_pin  = GPIO_PIN_2;

        NRF_Init(&nrf, &config);
    }

    bool send_packet = true;

    while (true) {
        if (send_packet) {
            send_packet = false;
        } else {
        }
    }

    // // block rx/tr
    // if (true) {
    //     static uint8_t    data[32] = "";
    //     static NRF_RESULT res;
    //     res = NRF_SendPacket(&nrf, data);
    //
    //     if (res == false) return;
    //
    //     res = NRF_ReceivePacket(&nrf, data);
    //     if (res == false) return;
    //
    //     while (1) {
    //         // There is means Tx/Rx is Okay.
    //     }
    // }
    // // unblock Tx/Rx
    // else {
    //     static uint8_t data[32] = "";
    //     NRF_PullPacket(&nrf, data);
    //     // data will come later
    //     while (1) {
    //         // wait for data
    //         HAL_Delay(1);
    //     }
    // }
}
