#include "nrf24l01.h"
#include "stm32f4xx_hal.h"

void test(void)
{
    nrf24l01_dev dev;
    dev.DATA_RATE = NRF_DATA_RATE_1MBPS;
    dev.TX_POWER = NRF_TX_PWR_0dBm;
    dev.CRC_WIDTH = NRF_CRC_WIDTH_1B;
    dev.ADDR_WIDTH = NRF_ADDR_WIDTH_5;
    dev.STATE = NRF_STATE_TX; // this parameter can be deleted, each Rx/Tx will change this reg
    dev.PayloadLength = 32; // maximum is 32 Bytes
    dev.RetransmitCount = 10; // maximum is 15 times
    dev.RetransmitDelay = 0x0F; // 4000us, LSB:250us

    // Note: user should enable RCC for GPIO port!!
    __HAL_RCC_GPIOA_CLK_ENABLE();
    dev.NRF_CSN_GPIOx = GPIOA;
    dev.NRF_CSN_GPIO_PIN = GPIO_PIN_0;
    dev.NRF_CE_GPIOx = GPIOA;
    dev.NRF_CE_GPIO_PIN = GPIO_PIN_1;
    dev.NRF_IRQ_GPIOx = GPIOA;
    dev.NRF_IRQ_GPIO_PIN = GPIO_PIN_2;

    NRF_Init(&dev);

    // block rx/tr
    if (true) {
        static uint8_t data[32] = "";
        static NRF_RESULT res;
        res = NRF_SendPacket(&dev, data);

        if (res == false)
            return;

        res = NRF_ReceivePacket(&dev, data);
        if (res == false)
            return;

        while (1) {
            // There is means Tx/Rx is Okay.
        }
    }
    // unblock Tx/Rx
    else {
        static uint8_t data[32] = "";
        NRF_PullPacket(&dev, data);
        // data will come later
        while (1) {
            // wait for data
            HAL_Delay(1);
        }
    }
}