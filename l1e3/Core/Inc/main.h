/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define nr_Pin GPIO_PIN_4
#define nr_GPIO_Port GPIOA
#define ny_Pin GPIO_PIN_5
#define ny_GPIO_Port GPIOA
#define ng_Pin GPIO_PIN_6
#define ng_GPIO_Port GPIOA
#define er_Pin GPIO_PIN_7
#define er_GPIO_Port GPIOA
#define ey_Pin GPIO_PIN_8
#define ey_GPIO_Port GPIOA
#define eg_Pin GPIO_PIN_9
#define eg_GPIO_Port GPIOA
#define sr_Pin GPIO_PIN_10
#define sr_GPIO_Port GPIOA
#define sy_Pin GPIO_PIN_11
#define sy_GPIO_Port GPIOA
#define sg_Pin GPIO_PIN_12
#define sg_GPIO_Port GPIOA
#define wr_Pin GPIO_PIN_13
#define wr_GPIO_Port GPIOA
#define wy_Pin GPIO_PIN_14
#define wy_GPIO_Port GPIOA
#define wg_Pin GPIO_PIN_15
#define wg_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
