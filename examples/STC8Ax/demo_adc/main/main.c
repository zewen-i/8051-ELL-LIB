/*-----------------------------------------------------------------------
|                            FILE DESCRIPTION                           |
-----------------------------------------------------------------------*/
/*----------------------------------------------------------------------
  - File name     : main.c
  - Author        : zeweni
  - Update date   : 2020.01.11
  -	Copyright(C)  : 2020-2021 zeweni. All rights reserved.
-----------------------------------------------------------------------*/
/*-----------------------------------------------------------------------
|                               INCLUDES                                |
-----------------------------------------------------------------------*/
#include "main.h"
/*-----------------------------------------------------------------------
|                                 DATA                                  |
-----------------------------------------------------------------------*/

/*-----------------------------------------------------------------------
|                               FUNCTION                                |
-----------------------------------------------------------------------*/
/**
  * @name    main
  * @brief   main program
  * @param   None
  * @return  None
***/
int main(void)
{
	STC8x_System_Init();

	for(;;)
	{
		printf("Vin = %.2f V\r\n", (float)(ADC_Get_Sample(ADC_Channel_P06_8Ax,ADC_Acc_12Bits) * 5.0f ) / 4095.0f);
		
		delay_ms(500);
	}

}



/*-----------------------------------------------------------------------
|                   END OF FLIE.  (C) COPYRIGHT zeweni                  |
-----------------------------------------------------------------------*/



