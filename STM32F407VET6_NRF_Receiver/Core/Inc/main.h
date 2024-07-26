/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "NRF24L01.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define H2_M2_Pin GPIO_PIN_2
#define H2_M2_GPIO_Port GPIOE
#define H1_M2_Pin GPIO_PIN_4
#define H1_M2_GPIO_Port GPIOE
#define FWD_REV_M2_Pin GPIO_PIN_6
#define FWD_REV_M2_GPIO_Port GPIOE
#define DISPARO_NORMAL_Pin GPIO_PIN_13
#define DISPARO_NORMAL_GPIO_Port GPIOC
#define EN_M2_Pin GPIO_PIN_0
#define EN_M2_GPIO_Port GPIOC
#define FWD_REV_M1_Pin GPIO_PIN_2
#define FWD_REV_M1_GPIO_Port GPIOC
#define DRIBLE_Pin GPIO_PIN_0
#define DRIBLE_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_3
#define BUZZER_GPIO_Port GPIOA
#define EN_M1_Pin GPIO_PIN_4
#define EN_M1_GPIO_Port GPIOA
#define CSN_Pin GPIO_PIN_4
#define CSN_GPIO_Port GPIOC
#define CE_Pin GPIO_PIN_5
#define CE_GPIO_Port GPIOC
#define PWM_RODA_1_Pin GPIO_PIN_0
#define PWM_RODA_1_GPIO_Port GPIOB
#define H2_M3_Pin GPIO_PIN_15
#define H2_M3_GPIO_Port GPIOB
#define H1_M3_Pin GPIO_PIN_9
#define H1_M3_GPIO_Port GPIOD
#define PWM_RODA_3_Pin GPIO_PIN_7
#define PWM_RODA_3_GPIO_Port GPIOC
#define PWM_RODA_4_Pin GPIO_PIN_9
#define PWM_RODA_4_GPIO_Port GPIOC
#define FWD_REV_M3_Pin GPIO_PIN_11
#define FWD_REV_M3_GPIO_Port GPIOA
#define CEA15_Pin GPIO_PIN_15
#define CEA15_GPIO_Port GPIOA
#define CSND0_Pin GPIO_PIN_0
#define CSND0_GPIO_Port GPIOD
#define EN_M3_Pin GPIO_PIN_4
#define EN_M3_GPIO_Port GPIOD
#define FWD_REV_M4_Pin GPIO_PIN_6
#define FWD_REV_M4_GPIO_Port GPIOD
#define CE_1_Pin GPIO_PIN_6
#define CE_1_GPIO_Port GPIOB
#define CS_1_Pin GPIO_PIN_7
#define CS_1_GPIO_Port GPIOB
#define H1_M4_Pin GPIO_PIN_8
#define H1_M4_GPIO_Port GPIOB
#define H2_M4_Pin GPIO_PIN_0
#define H2_M4_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
