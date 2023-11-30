#pragma once

#include "lib/screen_handler.hpp"
#include "lib/shared.hpp"
#include <Arduino.h>

extern TaskHandle_t buttonTaskHandle;

void buttonTask(void *pvParameters);
void IRAM_ATTR handleButtonInterrupt();
void setupButtonTask();
