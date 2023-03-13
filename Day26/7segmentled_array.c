#include  "stm32f10x.h"
/*Seven Segment LED Program*/
/*Here we are using PORT B*/

void Delay();
void Delay() 						
{
	unsigned int i=0;
	for(i=0;i<3000000;i++)
	{
		
  }
}
int main()
{
	int i;
	unsigned short int input_array[]={0x1A7, 0x6,0x383,0x287,0x224,0x2A5,0x3A5,0x7,0x3A7,0x2A7};
		
	/* ENABLE PORT B And PORTB rcc*/
	RCC->APB2ENR |= 0x00000008; /* Enable GPIO clock for portB*/
	RCC->APB2ENR |= 0x00000010; /* Enable GPIO clock for portC*/

	/* SELECT MODES*/
	/* PORT B ENABLE MODE */
	
  GPIOB->CRL &=~0x0FFFFFFF;
	GPIOB->CRL |=0x20200222;
	
	GPIOB->CRH &=~0x000000FF;
	GPIOB->CRH |=0x00000022;
	
	/*PORT C ENABLE MODE*/
	GPIOC->CRH &=~0x00F00000; 	 /*clear PINC13*/
	GPIOC->CRH |=0x00800000;		/*put input mode on PINC13*/
	
	while(1)
	{
	for(i=0;i<10;i++)
	{
		if((GPIOC->IDR & 0x00002000))
		{
			GPIOB->ODR &=~0xFFFFFFFF; 
			GPIOB->ODR |=input_array[0];
		}
		else
		{
			GPIOB->ODR &=~0xFFFFFFFF; 
			GPIOB->ODR |=input_array[i];
		}
	}
	}
	return 0;
}


