/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SERIALPRINT_H__
#define __SERIALPRINT_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stdio.h"
#include "string.h"
#include "usart.h"
#include "stm32l1xx_hal.h"
#include "main.h"


/*my code
 *
 */
void serialPrint(char *message);




#ifdef __cplusplus
}
#endif

#endif /* __SERIALPRINT_H__ */
