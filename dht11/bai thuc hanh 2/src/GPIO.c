#include "stm32f10x.h"

void GPIO_Config(void) {
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE); 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

	
	GPIO_InitTypeDef GPIO_InitStructure;
	
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD; 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;  
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP; 
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
}