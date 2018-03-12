# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`NRF_REGISTER`](#nrf24l01_8h_1ac28c7bc78ab046b22ed88a9a5a837451)            | 
`enum `[`NRF_COMMAND`](#nrf24l01_8h_1a173ce0ad1340610e0d545e01270a9cdc)            | 
`enum `[`NRF_DATA_RATE`](#nrf24l01_8h_1a046344d135c1aa38b17dfcb676a07a8e)            | 
`enum `[`NRF_TX_PWR`](#nrf24l01_8h_1a8f0141c0bab75e806919b474b2e25156)            | 
`enum `[`NRF_ADDR_WIDTH`](#nrf24l01_8h_1ae917a5c74b63e63841cf7446bada7a8d)            | 
`enum `[`NRF_CRC_WIDTH`](#nrf24l01_8h_1af2761e2e2213d6bfab204b56f7a8afbe)            | 
`enum `[`NRF_TXRX_STATE`](#nrf24l01_8h_1a3b9982cd8c4609f46d0cd694df5c1b9a)            | 
`enum `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_init`](#nrf24l01_8h_1a8042c2736e1729e62f13698d3e64eed1)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`nrf24l01_config`](#structnrf24l01__config)` * config)`            | 
`public void `[`nrf_irq_handler`](#nrf24l01_8h_1a02ce165709222038e238842470ecb100)`(`[`nrf24l01`](#structnrf24l01)` * dev)`            | 
`public void `[`nrf_packet_received_callback`](#nrf24l01_8h_1ab544b50b1059a14b2d569edd4715f7b4)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t * data)`            | 
`public const uint8_t * `[`nrf_receive_packet`](#nrf24l01_8h_1aa47df001af497804914428a77953df43)`(`[`nrf24l01`](#structnrf24l01)` * dev)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_send_packet`](#nrf24l01_8h_1a80a7eb4e03d7c36b0eea3fdb6823d2d0)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_send_packet_noack`](#nrf24l01_8h_1a72f45530b0baf02c48e0cda5accba64f)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_push_packet`](#nrf24l01_8h_1a7697f7815cad306893aa8b6ba553dda1)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_send_command`](#nrf24l01_8h_1a6af22cbf591f17144b0ab0cbefceacfc)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_COMMAND`](#nrf24l01_8h_1a173ce0ad1340610e0d545e01270a9cdc)` cmd,const uint8_t * tx,uint8_t * rx,uint8_t len)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_read_register`](#nrf24l01_8h_1a397a770794332695292dd54c57897e48)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t reg,uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_write_register`](#nrf24l01_8h_1af38563600020c3b7098714f54c6c2455)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t reg,uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_read_rx_payload`](#nrf24l01_8h_1a4f89f2d2b6f42d1ce5a5e737922594a7)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_write_tx_payload`](#nrf24l01_8h_1a2ea71ce7c36689fd4a946a0c13d401ff)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_write_tx_payload_noack`](#nrf24l01_8h_1a54964b0b9841ec9e2295b884bc6a9bd0)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_flush_rx`](#nrf24l01_8h_1a49376a2743b96609bc152279f40c45b7)`(`[`nrf24l01`](#structnrf24l01)` * dev)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_flush_tx`](#nrf24l01_8h_1ab38caeddb11bf2bdf106010ed5abfde3)`(`[`nrf24l01`](#structnrf24l01)` * dev)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_data_rate`](#nrf24l01_8h_1a558ffc72963d5c0dc599def84688c626)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_DATA_RATE`](#nrf24l01_8h_1a046344d135c1aa38b17dfcb676a07a8e)` rate)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_tx_power`](#nrf24l01_8h_1a543609f659141c665486151871b4d0e2)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_TX_PWR`](#nrf24l01_8h_1a8f0141c0bab75e806919b474b2e25156)` pwr)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_ccw`](#nrf24l01_8h_1a8a153b0217a586e68173399281ddd43c)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_clear_interrupts`](#nrf24l01_8h_1ae5bb08d9ca0f08f57a61b6d77bef5c4d)`(`[`nrf24l01`](#structnrf24l01)` * dev)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rf_channel`](#nrf24l01_8h_1ae18d07f6cd979b6a1c7d99129dbf8078)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t ch)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_retransmittion_count`](#nrf24l01_8h_1a2b660e3c5343c5ac60e29e18be9c5486)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t count)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_retransmittion_delay`](#nrf24l01_8h_1a77e4d76deded1f39b1622ac3bb78b670)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t delay)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_address_width`](#nrf24l01_8h_1a14fe92ba76cf4946a462584e65a38105)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_ADDR_WIDTH`](#nrf24l01_8h_1ae917a5c74b63e63841cf7446bada7a8d)` width)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_pipes`](#nrf24l01_8h_1aaf2108fd16d8a5c5d0e43bf7fea20ae8)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t pipes)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_auto_ack`](#nrf24l01_8h_1a1e877308c9eab5825bc2b8237395a057)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t pipe)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_crc`](#nrf24l01_8h_1a0c48c6a5dc0f6597bd8c2a113e00d283)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_crc_width`](#nrf24l01_8h_1a84f82407644720a121fa2f647bb41f1a)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_CRC_WIDTH`](#nrf24l01_8h_1af2761e2e2213d6bfab204b56f7a8afbe)` width)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_power_up`](#nrf24l01_8h_1a06cb0c6feba594cfaf6e361165202483)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool power_up)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_rx_tx_control`](#nrf24l01_8h_1a5546e94988c2def4e19814350cc547a4)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_TXRX_STATE`](#nrf24l01_8h_1a3b9982cd8c4609f46d0cd694df5c1b9a)` rx)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_rx_data_ready_irq`](#nrf24l01_8h_1a2d701b83b1e4f1c5e9eb0b5c8d12e1b0)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_tx_data_sent_irq`](#nrf24l01_8h_1a72e697395a340d3e6c2658f925bc7e0d)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_max_retransmit_irq`](#nrf24l01_8h_1abb6679a731bfb0601877765871df662e)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_address_p0`](#nrf24l01_8h_1a2e919b51fcbcbbe47401b1c69cd4cc02)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * address)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_address_p1`](#nrf24l01_8h_1a64ca1da29b0b3abc92d6520c94ab8548)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * address)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_tx_address`](#nrf24l01_8h_1a136de904dfcb7ce8fd2c5865a61f5c32)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * address)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_payload_width_p0`](#nrf24l01_8h_1a9cccc8de59601bb33b83425cf414b91b)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t width)`            | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_payload_width_p1`](#nrf24l01_8h_1aa0ad32f7cb67f1cc7a5070f54e906306)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t width)`            | 
`struct `[`nrf24l01`](#structnrf24l01) | 
`struct `[`nrf24l01_config`](#structnrf24l01__config) | 

## Members

#### `enum `[`NRF_REGISTER`](#nrf24l01_8h_1ac28c7bc78ab046b22ed88a9a5a837451) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_CONFIG            | 
NRF_EN_AA            | 
NRF_EN_RXADDR            | 
NRF_SETUP_AW            | 
NRF_SETUP_RETR            | 
NRF_RF_CH            | 
NRF_RF_SETUP            | 
NRF_STATUS            | 
NRF_OBSERVE_TX            | 
NRF_CD            | 
NRF_RX_ADDR_P0            | 
NRF_RX_ADDR_P1            | 
NRF_RX_ADDR_P2            | 
NRF_RX_ADDR_P3            | 
NRF_RX_ADDR_P4            | 
NRF_RX_ADDR_P5            | 
NRF_TX_ADDR            | 
NRF_RX_PW_P0            | 
NRF_RX_PW_P1            | 
NRF_RX_PW_P2            | 
NRF_RX_PW_P3            | 
NRF_RX_PW_P4            | 
NRF_RX_PW_P5            | 
NRF_FIFO_STATUS            | 
NRF_DYNPD            | 
NRF_FEATURE            | 

#### `enum `[`NRF_COMMAND`](#nrf24l01_8h_1a173ce0ad1340610e0d545e01270a9cdc) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_CMD_R_REGISTER            | 
NRF_CMD_W_REGISTER            | 
NRF_CMD_R_RX_PAYLOAD            | 
NRF_CMD_W_TX_PAYLOAD            | 
NRF_CMD_FLUSH_TX            | 
NRF_CMD_FLUSH_RX            | 
NRF_CMD_REUSE_TX_PL            | 
NRF_CMD_ACTIVATE            | 
NRF_CMD_R_RX_PL_WID            | 
NRF_CMD_W_ACK_PAYLOAD            | 
NRF_CMD_W_TX_PAYLOAD_NOACK            | 
NRF_CMD_NOP            | 

#### `enum `[`NRF_DATA_RATE`](#nrf24l01_8h_1a046344d135c1aa38b17dfcb676a07a8e) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_DATA_RATE_250KBPS            | 
NRF_DATA_RATE_1MBPS            | 
NRF_DATA_RATE_2MBPS            | 

#### `enum `[`NRF_TX_PWR`](#nrf24l01_8h_1a8f0141c0bab75e806919b474b2e25156) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_TX_PWR_M18dBm            | 
NRF_TX_PWR_M12dBm            | 
NRF_TX_PWR_M6dBm            | 
NRF_TX_PWR_0dBm            | 

#### `enum `[`NRF_ADDR_WIDTH`](#nrf24l01_8h_1ae917a5c74b63e63841cf7446bada7a8d) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_ADDR_WIDTH_3            | 
NRF_ADDR_WIDTH_4            | 
NRF_ADDR_WIDTH_5            | 

#### `enum `[`NRF_CRC_WIDTH`](#nrf24l01_8h_1af2761e2e2213d6bfab204b56f7a8afbe) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_CRC_WIDTH_1B            | 
NRF_CRC_WIDTH_2B            | 

#### `enum `[`NRF_TXRX_STATE`](#nrf24l01_8h_1a3b9982cd8c4609f46d0cd694df5c1b9a) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_STATE_RX            | 
NRF_STATE_TX            | 

#### `enum `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
NRF_OK            | 
NRF_ERROR            | 
NRF_INVALID_ARGUMENT            | 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_init`](#nrf24l01_8h_1a8042c2736e1729e62f13698d3e64eed1)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`nrf24l01_config`](#structnrf24l01__config)` * config)` 

#### `public void `[`nrf_irq_handler`](#nrf24l01_8h_1a02ce165709222038e238842470ecb100)`(`[`nrf24l01`](#structnrf24l01)` * dev)` 

#### `public void `[`nrf_packet_received_callback`](#nrf24l01_8h_1ab544b50b1059a14b2d569edd4715f7b4)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t * data)` 

#### `public const uint8_t * `[`nrf_receive_packet`](#nrf24l01_8h_1aa47df001af497804914428a77953df43)`(`[`nrf24l01`](#structnrf24l01)` * dev)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_send_packet`](#nrf24l01_8h_1a80a7eb4e03d7c36b0eea3fdb6823d2d0)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_send_packet_noack`](#nrf24l01_8h_1a72f45530b0baf02c48e0cda5accba64f)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_push_packet`](#nrf24l01_8h_1a7697f7815cad306893aa8b6ba553dda1)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_send_command`](#nrf24l01_8h_1a6af22cbf591f17144b0ab0cbefceacfc)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_COMMAND`](#nrf24l01_8h_1a173ce0ad1340610e0d545e01270a9cdc)` cmd,const uint8_t * tx,uint8_t * rx,uint8_t len)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_read_register`](#nrf24l01_8h_1a397a770794332695292dd54c57897e48)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t reg,uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_write_register`](#nrf24l01_8h_1af38563600020c3b7098714f54c6c2455)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t reg,uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_read_rx_payload`](#nrf24l01_8h_1a4f89f2d2b6f42d1ce5a5e737922594a7)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_write_tx_payload`](#nrf24l01_8h_1a2ea71ce7c36689fd4a946a0c13d401ff)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_write_tx_payload_noack`](#nrf24l01_8h_1a54964b0b9841ec9e2295b884bc6a9bd0)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * data)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_flush_rx`](#nrf24l01_8h_1a49376a2743b96609bc152279f40c45b7)`(`[`nrf24l01`](#structnrf24l01)` * dev)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_flush_tx`](#nrf24l01_8h_1ab38caeddb11bf2bdf106010ed5abfde3)`(`[`nrf24l01`](#structnrf24l01)` * dev)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_data_rate`](#nrf24l01_8h_1a558ffc72963d5c0dc599def84688c626)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_DATA_RATE`](#nrf24l01_8h_1a046344d135c1aa38b17dfcb676a07a8e)` rate)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_tx_power`](#nrf24l01_8h_1a543609f659141c665486151871b4d0e2)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_TX_PWR`](#nrf24l01_8h_1a8f0141c0bab75e806919b474b2e25156)` pwr)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_ccw`](#nrf24l01_8h_1a8a153b0217a586e68173399281ddd43c)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_clear_interrupts`](#nrf24l01_8h_1ae5bb08d9ca0f08f57a61b6d77bef5c4d)`(`[`nrf24l01`](#structnrf24l01)` * dev)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rf_channel`](#nrf24l01_8h_1ae18d07f6cd979b6a1c7d99129dbf8078)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t ch)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_retransmittion_count`](#nrf24l01_8h_1a2b660e3c5343c5ac60e29e18be9c5486)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t count)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_retransmittion_delay`](#nrf24l01_8h_1a77e4d76deded1f39b1622ac3bb78b670)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t delay)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_address_width`](#nrf24l01_8h_1a14fe92ba76cf4946a462584e65a38105)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_ADDR_WIDTH`](#nrf24l01_8h_1ae917a5c74b63e63841cf7446bada7a8d)` width)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_pipes`](#nrf24l01_8h_1aaf2108fd16d8a5c5d0e43bf7fea20ae8)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t pipes)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_auto_ack`](#nrf24l01_8h_1a1e877308c9eab5825bc2b8237395a057)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t pipe)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_crc`](#nrf24l01_8h_1a0c48c6a5dc0f6597bd8c2a113e00d283)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_crc_width`](#nrf24l01_8h_1a84f82407644720a121fa2f647bb41f1a)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_CRC_WIDTH`](#nrf24l01_8h_1af2761e2e2213d6bfab204b56f7a8afbe)` width)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_power_up`](#nrf24l01_8h_1a06cb0c6feba594cfaf6e361165202483)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool power_up)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_rx_tx_control`](#nrf24l01_8h_1a5546e94988c2def4e19814350cc547a4)`(`[`nrf24l01`](#structnrf24l01)` * dev,`[`NRF_TXRX_STATE`](#nrf24l01_8h_1a3b9982cd8c4609f46d0cd694df5c1b9a)` rx)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_rx_data_ready_irq`](#nrf24l01_8h_1a2d701b83b1e4f1c5e9eb0b5c8d12e1b0)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_tx_data_sent_irq`](#nrf24l01_8h_1a72e697395a340d3e6c2658f925bc7e0d)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_enable_max_retransmit_irq`](#nrf24l01_8h_1abb6679a731bfb0601877765871df662e)`(`[`nrf24l01`](#structnrf24l01)` * dev,bool activate)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_address_p0`](#nrf24l01_8h_1a2e919b51fcbcbbe47401b1c69cd4cc02)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * address)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_address_p1`](#nrf24l01_8h_1a64ca1da29b0b3abc92d6520c94ab8548)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * address)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_tx_address`](#nrf24l01_8h_1a136de904dfcb7ce8fd2c5865a61f5c32)`(`[`nrf24l01`](#structnrf24l01)` * dev,const uint8_t * address)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_payload_width_p0`](#nrf24l01_8h_1a9cccc8de59601bb33b83425cf414b91b)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t width)` 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`nrf_set_rx_payload_width_p1`](#nrf24l01_8h_1aa0ad32f7cb67f1cc7a5070f54e906306)`(`[`nrf24l01`](#structnrf24l01)` * dev,uint8_t width)` 

# struct `nrf24l01` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`nrf24l01_config`](#structnrf24l01__config)` `[`config`](#structnrf24l01_1ad225b725792d9aa173a23683daeb4463) | 
`public uint8_t `[`tx_busy`](#structnrf24l01_1a56f2dec68ade5f3cf7ec7700b3e1fc45) | 
`public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`tx_result`](#structnrf24l01_1a15fe2ad1af8ae0cc38aecceedabcc0a4) | 
`public uint8_t `[`rx_busy`](#structnrf24l01_1a23a57779f90a827b0eb67ae490426602) | 
`public `[`NRF_TXRX_STATE`](#nrf24l01_8h_1a3b9982cd8c4609f46d0cd694df5c1b9a)` `[`state`](#structnrf24l01_1aa7c9d4c7d9f6c526dfabd0c153f0e9c1) | 

## Members

#### `public `[`nrf24l01_config`](#structnrf24l01__config)` `[`config`](#structnrf24l01_1ad225b725792d9aa173a23683daeb4463) 

#### `public uint8_t `[`tx_busy`](#structnrf24l01_1a56f2dec68ade5f3cf7ec7700b3e1fc45) 

#### `public `[`NRF_RESULT`](#nrf24l01_8h_1a4fd1a4beb8084822e5e6d9815ba592f8)` `[`tx_result`](#structnrf24l01_1a15fe2ad1af8ae0cc38aecceedabcc0a4) 

#### `public uint8_t `[`rx_busy`](#structnrf24l01_1a23a57779f90a827b0eb67ae490426602) 

#### `public `[`NRF_TXRX_STATE`](#nrf24l01_8h_1a3b9982cd8c4609f46d0cd694df5c1b9a)` `[`state`](#structnrf24l01_1aa7c9d4c7d9f6c526dfabd0c153f0e9c1) 

# struct `nrf24l01_config` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`NRF_DATA_RATE`](#nrf24l01_8h_1a046344d135c1aa38b17dfcb676a07a8e)` `[`data_rate`](#structnrf24l01__config_1ade4032c1deb39a12a2cdd80f58b347db) | 
`public `[`NRF_TX_PWR`](#nrf24l01_8h_1a8f0141c0bab75e806919b474b2e25156)` `[`tx_power`](#structnrf24l01__config_1ab3153a02afcbf81f850b953bd5faf449) | 
`public `[`NRF_CRC_WIDTH`](#nrf24l01_8h_1af2761e2e2213d6bfab204b56f7a8afbe)` `[`crc_width`](#structnrf24l01__config_1ab9077e364a611d06602eabe524f87fe5) | 
`public `[`NRF_ADDR_WIDTH`](#nrf24l01_8h_1ae917a5c74b63e63841cf7446bada7a8d)` `[`addr_width`](#structnrf24l01__config_1a8b7a04d6dee67f53a31311f77c8b37b7) | 
`public uint8_t `[`payload_length`](#structnrf24l01__config_1a8b7cf7db4a49e6015d011f3b204d276d) | 
`public uint8_t `[`retransmit_count`](#structnrf24l01__config_1a34d388e0011240677eb89a3920e70545) | 
`public uint8_t `[`retransmit_delay`](#structnrf24l01__config_1a4315f58b8fd10b4842da9eca726b6287) | 
`public uint8_t `[`rf_channel`](#structnrf24l01__config_1af3d9a47c23ac9c920c700f512e208602) | 
`public const uint8_t * `[`rx_address`](#structnrf24l01__config_1ac42bc62f669a026c1c099977b6577c39) | 
`public const uint8_t * `[`tx_address`](#structnrf24l01__config_1ac9e1272ca83014a85cade0a76ad65e8d) | 
`public uint8_t * `[`rx_buffer`](#structnrf24l01__config_1a17e1b00923db938e63bac57d0a983a06) | 
`public SPI_HandleTypeDef * `[`spi`](#structnrf24l01__config_1a06909907ded69cbc00db1f401a90f8ee) | 
`public uint32_t `[`spi_timeout`](#structnrf24l01__config_1a4258eb684fe5bbb4d0c8db6e1010b614) | 
`public GPIO_TypeDef * `[`csn_port`](#structnrf24l01__config_1a962817cad16a77e4702b770e8849a91d) | 
`public uint16_t `[`csn_pin`](#structnrf24l01__config_1a23c9bcaa9d48e3b6613e18eadfd33735) | 
`public GPIO_TypeDef * `[`ce_port`](#structnrf24l01__config_1ad09fb0116879a6e9408a4a452968b65b) | 
`public uint16_t `[`ce_pin`](#structnrf24l01__config_1a572a139c413fb57f9c9612b0df4682c8) | 
`public GPIO_TypeDef * `[`irq_port`](#structnrf24l01__config_1a9613e717b2b0795b38e6b0cb8138588c) | 
`public uint16_t `[`irq_pin`](#structnrf24l01__config_1ab4be469740983d5b0ad43f2194e7376b) | 

## Members

#### `public `[`NRF_DATA_RATE`](#nrf24l01_8h_1a046344d135c1aa38b17dfcb676a07a8e)` `[`data_rate`](#structnrf24l01__config_1ade4032c1deb39a12a2cdd80f58b347db) 

#### `public `[`NRF_TX_PWR`](#nrf24l01_8h_1a8f0141c0bab75e806919b474b2e25156)` `[`tx_power`](#structnrf24l01__config_1ab3153a02afcbf81f850b953bd5faf449) 

#### `public `[`NRF_CRC_WIDTH`](#nrf24l01_8h_1af2761e2e2213d6bfab204b56f7a8afbe)` `[`crc_width`](#structnrf24l01__config_1ab9077e364a611d06602eabe524f87fe5) 

#### `public `[`NRF_ADDR_WIDTH`](#nrf24l01_8h_1ae917a5c74b63e63841cf7446bada7a8d)` `[`addr_width`](#structnrf24l01__config_1a8b7a04d6dee67f53a31311f77c8b37b7) 

#### `public uint8_t `[`payload_length`](#structnrf24l01__config_1a8b7cf7db4a49e6015d011f3b204d276d) 

#### `public uint8_t `[`retransmit_count`](#structnrf24l01__config_1a34d388e0011240677eb89a3920e70545) 

#### `public uint8_t `[`retransmit_delay`](#structnrf24l01__config_1a4315f58b8fd10b4842da9eca726b6287) 

#### `public uint8_t `[`rf_channel`](#structnrf24l01__config_1af3d9a47c23ac9c920c700f512e208602) 

#### `public const uint8_t * `[`rx_address`](#structnrf24l01__config_1ac42bc62f669a026c1c099977b6577c39) 

#### `public const uint8_t * `[`tx_address`](#structnrf24l01__config_1ac9e1272ca83014a85cade0a76ad65e8d) 

#### `public uint8_t * `[`rx_buffer`](#structnrf24l01__config_1a17e1b00923db938e63bac57d0a983a06) 

#### `public SPI_HandleTypeDef * `[`spi`](#structnrf24l01__config_1a06909907ded69cbc00db1f401a90f8ee) 

#### `public uint32_t `[`spi_timeout`](#structnrf24l01__config_1a4258eb684fe5bbb4d0c8db6e1010b614) 

#### `public GPIO_TypeDef * `[`csn_port`](#structnrf24l01__config_1a962817cad16a77e4702b770e8849a91d) 

#### `public uint16_t `[`csn_pin`](#structnrf24l01__config_1a23c9bcaa9d48e3b6613e18eadfd33735) 

#### `public GPIO_TypeDef * `[`ce_port`](#structnrf24l01__config_1ad09fb0116879a6e9408a4a452968b65b) 

#### `public uint16_t `[`ce_pin`](#structnrf24l01__config_1a572a139c413fb57f9c9612b0df4682c8) 

#### `public GPIO_TypeDef * `[`irq_port`](#structnrf24l01__config_1a9613e717b2b0795b38e6b0cb8138588c) 

#### `public uint16_t `[`irq_pin`](#structnrf24l01__config_1ab4be469740983d5b0ad43f2194e7376b) 

Generated by [Moxygen](https://sourcey.com/moxygen)