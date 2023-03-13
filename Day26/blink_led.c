#include  "stm32f10x.h"
void Delay();

void Delay() 						
{
	int i=0;
	for(i=0;i<1000000;i++)
	{
		
  }
}
int main(void)
{
	RCC->APB2ENR |= 0x00000004; /* Enable GPIO clock for portA*/
	
	RCC->APB2ENR |= 0x00000010; /* Enable GPIO clock for portC*/
	
	GPIOA->CRL &=~0x00F00000; 	 /*clear pin5*/
	
	GPIOA->CRL |=0x00200000;		/*put output 2MHz mode on PINA5*/
	
	
	GPIOC->CRH &=~0x00F00000; 	 /*clear PINC13*/
	
	GPIOC->CRH |=0x00800000;		/*put input mode on PINC13*/
	

	/*GPIOC->IDR |=0x00002000;*/
	
	/*while((GPIOC->IDR &=0x00002000)){

		
	GPIOA->ODR |=0x00000020;
	Delay();
											/*GPIOA->ODR 1<<5; */
	/*GPIOA->ODR &=~0x00000020;	
	Delay();
	}*/
	/*Blinking LED Using BSRR*/
	while(1)
	{
	if((GPIOC->IDR & 0x00002000))
	{
		GPIOA->BSRR |=0x00200000;
		/*GPIOA->ODR &=~0x00000020;*/
	}
	else
	{
		GPIOA->BSRR |=0x00000020;
		/*GPIOA->ODR |=0x00000020; */
	}
	}
	/*
	while(1)
	{	
	if((GPIOC->IDR & 0x00002000))  /*if BUTTION is not presssed*/
	/*	{	
	GPIOA->ODR &=~0x00000020;      /*do not activate output port*/
		/*}
	/*else
	{	
		GPIOA->ODR |=0x00000020;    /* else turn on the led*/
/*		Delay();
	}
	}*/
	return 0;
}

