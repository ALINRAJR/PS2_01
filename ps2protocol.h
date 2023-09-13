

#ifndef PS2PROTOCOL_H_
#define PS2PROTOCOL_H_

/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
extern volatile unsigned int ps2clkcount;
/* Private macro -------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/**
  * @brief Initializing the PS2 clock as external interrupt and data as digital input
  * @return None
  **/
void vPS2IntInitialize(void);


#endif /* PS2PROTOCOL_H_ */
