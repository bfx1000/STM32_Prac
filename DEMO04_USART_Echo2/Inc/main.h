/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define LED_BLUE_Pin GPIO_PIN_1
#define LED_BLUE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define LED_BLUE_ON        do{HAL_GPIO_WritePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin,LED_ON );}while(0)
#define LED_BLUE_OFF       do{HAL_GPIO_WritePin(LED_BLUE_GPIO_Port,LED_BLUE_Pin,LED_OFF);}while(0)

//LED ON/OFF
#define LED_ON GPIO_PIN_RESET
#define LED_OFF GPIO_PIN_SET

//red
#define LED_RED_Pin         GPIO_PIN_5
#define LED_RED_GPIO_Port   GPIOB
#define LED_RED_ON          do{HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,LED_ON );}while(0)
#define LED_RED_OFF         do{HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,LED_OFF);}while(0)

//green
#define LED_GREEN_Pin       GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define LED_GREEN_ON        do{HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,LED_ON );}while(0)
#define LED_GREEN_OFF       do{HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,LED_OFF);}while(0)



// RED ON
#define LED_RED     LED_RED_ON; \
                    LED_GREEN_OFF; \
                    LED_BLUE_OFF


// GREEN ON
#define LED_GREEN   LED_RED_OFF; \
                    LED_GREEN_ON; \
                    LED_BLUE_OFF
//BLUE ON
#define LED_BLUE    LED_RED_OFF; \
                    LED_GREEN_OFF; \
                    LED_BLUE_ON

// YELLOW: RED+GREEN
#define LED_YELLOW  LED_RED_ON; \
                    LED_GREEN_ON; \
                    LED_BLUE_OFF

// PURPLE: RED+BLUE
#define LED_PURPLE LED_RED_ON; \
                   LED_GREEN_OFF; \
                   LED_BLUE_ON

// CYAW :GREEN+BLUE
#define LED_CYAN    LED_RED_OFF; \
                    LED_GREEN_ON; \
                    LED_BLUE_ON
// WHITE : RED+GREEN+BLUE
#define LED_WHITE   LED_RED_ON; \
                    LED_GREEN_ON; \
                    LED_BLUE_ON

// ALL OFF
#define LED_RGBOFF  LED_RED_OFF; \
                    LED_GREEN_OFF; \
                    LED_BLUE_OFF



/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
