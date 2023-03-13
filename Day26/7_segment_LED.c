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
	unsigned char input_array[]={0x1A7, 0x6,0x383,0x287,0x224,0x2A5,0x3A5,0x7,0x3A7,0x2A7};
		
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
	
	
	/* ODR*/
	while(1)
	{	
		if((GPIOC->IDR & 0x00002000))
		{
			GPIOB->ODR &=~0xFFFFFFFF; 
		}
		
	else{
	GPIOB->ODR &=~0xFFFFFFFF; 
	GPIOB->ODR |=~0x000001A7;   /*zero*/
	Delay();
		
	GPIOB->ODR &=~0xFFFFFFFF; 
	GPIOB->ODR |=~0x00000006;   /*one*/
	Delay();
		
	GPIOB->ODR &=~0xFFFFFFFF; 
	GPIOB->ODR |=~0x00000383;   /*two*/
	Delay();
		
	GPIOB->ODR &=~0xFFFFFFFF; 
	GPIOB->ODR |=~0x00000287;   /*three*/
	Delay();
		
	GPIOB->ODR &=~0xFFFFFFFF;
	GPIOB->ODR |=~0x00000224;   /*four*/
	Delay();
		
	GPIOB->ODR &=~0xFFFFFFFF;
	GPIOB->ODR |=~0x000002A5;   /*five*/
	Delay();
		
	GPIOB->ODR &=~0xFFFFFFFF;
	GPIOB->ODR |=~0x000003A5;   /*six*/
	Delay();
	
	GPIOB->ODR &=~0xFFFFFFFF;
	GPIOB->ODR |=~0x00000007;   /*seven*/
	Delay();
	
	GPIOB->ODR &=~0xFFFFFFFF;
	GPIOB->ODR |=~0x000003A7;   /*eight*/
	Delay();
	
	GPIOB->ODR &=~0xFFFFFFFF;
	GPIOB->ODR |=~0x000002A7;   /*nine*/
	Delay();
	}
	}
	return 0;
	
}


/*void UserButton*/