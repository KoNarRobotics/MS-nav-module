#pragma once

extern ADC_HandleTypeDef hadc1;
extern DAC_HandleTypeDef hdac1;
extern FDCAN_HandleTypeDef hfdcan1;
extern FDCAN_HandleTypeDef hfdcan2;
extern I2C_HandleTypeDef hi2c1;
extern QSPI_HandleTypeDef hqspi;
extern SPI_HandleTypeDef hspi1;
extern TIM_HandleTypeDef htim6;
extern UART_HandleTypeDef huart4;
extern PCD_HandleTypeDef hpcd_USB_OTG_FS;

void main_prog();