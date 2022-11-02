#ifndef _BUTTON_CONTROL
#define _BUTTON_CONTROL

#include <stdint.h>
#include "nrf_gpio.h"

#define BUTTONS_COUNT 1

#define BUTTON1 NRF_GPIO_PIN_MAP(1, 6)
#define BUTTON1_ID 0

#define BUTTONS_ARRAY {BUTTON1}

void buttons_init();
bool button_pressed(uint32_t button_id);

#endif