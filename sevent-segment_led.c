#include  "stm32f10x.h"


/*Seven Segment LED Program*/
/*Here we are using PORT B*/

void Delay();

void Delay() 						
{
	int i=0;
	for(i=0;i<1000000;i++)
	{
		
  }
}
int main()
{
	/*unsigned char input_array[]={};*/
		
	/* ENABLE PORT B And PORTB rcc*/
	RCC->APB2ENR |= 0x00000008; /* Enable GPIO clock for portB*/
	RCC->APB2ENR |= 0x00000010; /* Enable GPIO clock for portC*/

	/* SELECT MODES*/
	/* PORT B ENABLE MODE */
  GPIOC->CRL &=~0x0FFFFFFF;
	GPIOC->CRL |=0x02222222;

	/* ODR*/
	while(1)
	{	
	
		GPIOB->ODR |=0x0000003F;      /*zero*/
		Delay();
	}

	
	
	
	return 0;
}


/*void UserButton*/