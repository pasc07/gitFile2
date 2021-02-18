/*Definiton de la fonction d'affichage
 *
 */

#include "serialPrint.h"

/*Affichage
 *  A ameliorer au fur et a mesure avec des affichage type arduino
 *  using sprintf()
 */
void serialPrint(char *message){

	uint8_t buf[32];

	strcpy((char *)buf,message);
	HAL_UART_Transmit(&huart2,buf,strlen((char*)buf),HAL_MAX_DELAY);
}
