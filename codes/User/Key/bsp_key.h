#ifndef __BSP_KEY_H
#define	__BSP_KEY_H
#include "stm32f10x.h"

#define KEY_DOWN 1	//按键按下表示高电平
#define KEY_UP 0		//按键松开表示低电平

#define iCOUNT 10000	//中断的延时
#define iTick 10	//轮询的延时

#define BREAK_EXTI_OPEN 0	//1为打开中断的控制方式，0为打开轮询的控制方式

#if BREAK_EXTI_OPEN

//引脚定义
#define KEY1_INT_GPIO_PORT         GPIOA
#define KEY1_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define KEY1_INT_GPIO_PIN          GPIO_Pin_0
#define KEY1_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA
#define KEY1_INT_EXTI_PINSOURCE    GPIO_PinSource0
#define KEY1_INT_EXTI_LINE         EXTI_Line0
#define KEY1_INT_EXTI_IRQ          EXTI0_IRQn

#define KEY1_IRQHandler            EXTI0_IRQHandler


#define KEY2_INT_GPIO_PORT         GPIOB
#define KEY2_INT_GPIO_CLK          (RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO)
#define KEY2_INT_GPIO_PIN          GPIO_Pin_1
#define KEY2_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOB
#define KEY2_INT_EXTI_PINSOURCE    GPIO_PinSource1
#define KEY2_INT_EXTI_LINE         EXTI_Line1
#define KEY2_INT_EXTI_IRQ          EXTI1_IRQn

#define KEY2_IRQHandler            EXTI1_IRQHandler


#define KEY3_INT_GPIO_PORT         GPIOB
#define KEY3_INT_GPIO_CLK          (RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO)
#define KEY3_INT_GPIO_PIN          GPIO_Pin_2
#define KEY3_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOB
#define KEY3_INT_EXTI_PINSOURCE    GPIO_PinSource2
#define KEY3_INT_EXTI_LINE         EXTI_Line2
#define KEY3_INT_EXTI_IRQ          EXTI2_IRQn


#define KEY3_IRQHandler            EXTI2_IRQHandler


#define KEY4_INT_GPIO_PORT         GPIOD
#define KEY4_INT_GPIO_CLK          (RCC_APB2Periph_GPIOD|RCC_APB2Periph_AFIO)
#define KEY4_INT_GPIO_PIN          GPIO_Pin_3
#define KEY4_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOD
#define KEY4_INT_EXTI_PINSOURCE    GPIO_PinSource3
#define KEY4_INT_EXTI_LINE         EXTI_Line3
#define KEY4_INT_EXTI_IRQ          EXTI3_IRQn

#define KEY4_IRQHandler            EXTI3_IRQHandler

#define KEY5_INT_GPIO_PORT         GPIOD
#define KEY5_INT_GPIO_CLK          (RCC_APB2Periph_GPIOD|RCC_APB2Periph_AFIO)
#define KEY5_INT_GPIO_PIN          GPIO_Pin_4
#define KEY5_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOD
#define KEY5_INT_EXTI_PINSOURCE    GPIO_PinSource4
#define KEY5_INT_EXTI_LINE         EXTI_Line4
#define KEY5_INT_EXTI_IRQ          EXTI4_IRQn

#define KEY5_IRQHandler            EXTI4_IRQHandler


void EXTI_Key_Config(void);
	
#else

#define KEY1_INT_GPIO_PORT         GPIOA
#define KEY1_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define KEY1_INT_GPIO_PIN          GPIO_Pin_0
#define KEY1_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA
#define KEY1_INT_EXTI_PINSOURCE    GPIO_PinSource0
#define KEY1_INT_EXTI_LINE         EXTI_Line0
#define KEY1_INT_EXTI_IRQ          EXTI0_IRQn

#define KEY1_IRQHandler            EXTI0_IRQHandler


//  引脚定义
#define    KEY1_GPIO_CLK     RCC_APB2Periph_GPIOA
#define    KEY1_GPIO_PORT    GPIOA			   
#define    KEY1_GPIO_PIN		 GPIO_Pin_0
 
#define    KEY2_GPIO_CLK     RCC_APB2Periph_GPIOB
#define    KEY2_GPIO_PORT    GPIOB		   
#define    KEY2_GPIO_PIN		  GPIO_Pin_1

#define    KEY3_GPIO_CLK     RCC_APB2Periph_GPIOB
#define    KEY3_GPIO_PORT    GPIOB			   
#define    KEY3_GPIO_PIN		 GPIO_Pin_2

#define    KEY4_GPIO_CLK     RCC_APB2Periph_GPIOB
#define    KEY4_GPIO_PORT    GPIOB
#define    KEY4_GPIO_PIN		 GPIO_Pin_0

#define    KEY5_GPIO_CLK     RCC_APB2Periph_GPIOA
#define    KEY5_GPIO_PORT    GPIOA
#define    KEY5_GPIO_PIN		 GPIO_Pin_1




void EXTI_Key_Config(void);

void Key_GPIO_Config(void);

	

#endif




#endif /* __KEY_H */


//--------------------------------------------------------------------------------

void delay_key(int i);




#define MIN_RANK        1      //最大距离等级

