#ifndef _UART_H_

#define _UART_H_

#include <stdint.h>

#define UART_CANT_IDS 5

typedef struct {
	//
	//
	//
} uart_cfg_t;

void uartInit(uint8_t id, uard_cfg_t config);



uint8_t uartIsRxMsg(uint8_t id);

uint8_t uartGetRxMsgLegnth(uint8_t id);

uint8_t uartReadMsg(uint8_t id, char * msg, uint8_t cant);

uint8_t uartWriteMsg(uint8_t id, const char * msg, uint8_t cant);

uint8_t uartIsTxMsgComplete(uint8_t id);

#endif // _UART_H_
