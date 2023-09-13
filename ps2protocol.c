

/* Includes ------------------------------------------------------------------*/

/* Private includes ----------------------------------------------------------*/
#include "ps2protocol.h"
#include "extint.h"
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

volatile unsigned int ps2clkcount=0;
/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  PS2 Clock interrupt Handler
  * @retval none
  */
void vPS2ClockIntHandler(void)
{
	ps2clkcount++;
}

/**
  * @brief Initializing the PS2 clock as external interrupt and data as digital input
  * @return None
  **/
void vPS2IntInitialize(void)
{
	vExtIntAttachCallback(EINT0,vPS2ClockIntHandler);
	vExtIntInitialize(EINT0);
}
