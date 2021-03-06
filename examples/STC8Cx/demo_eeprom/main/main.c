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
extern bit Time500MsFlag;
/*-----------------------------------------------------------------------
|                               FUNCTION                                |
-----------------------------------------------------------------------*/

/**
  * @name    Demo
  * @brief   printf Demo
  * @param   None
  * @return  None
***/
void Demo(void)
{
	if(EEPROM_Read_Byte(0x0010) != 'A')
	{  
		EEPROM_Erase_Page(0x0010);
        EEPROM_Write_Byte(0x0010,'A');
	}
	else
	{
        printf("eeprom data is: %c \r\n",EEPROM_Read_Byte(0x0010));	
	}
	
}

/**
  * @name    main
  * @brief   main program
  * @param   None
  * @return  None
***/
int main(void)
{
	extern void eeprom_entry();
	STC8x_System_Init();

	for(;;)
	{
      if(Time500MsFlag == 1)
      {
        Time500MsFlag = 0;
        eeprom_entry();
      }
	}

}



/*-----------------------------------------------------------------------
|                   END OF FLIE.  (C) COPYRIGHT zeweni                  |
-----------------------------------------------------------------------*/



