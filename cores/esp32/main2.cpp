
#include "Arduino.h"

#if CONFIG_AUTOSTART_ARDUINO
#ifdef ESP32_DUAL_TASK
void yieldIfNecessary2(void){
    static uint64_t lastYield = 0;
    uint64_t now = millis();
    if((now - lastYield) > 2000) {
        lastYield = now;
        vTaskDelay(5); //delay 1 RTOS tick
    }
}

TaskHandle_t loopTaskHandle2 = NULL;
void loopTask2(void *pvParameters)
{
    setup2();
    for(;;) {
        yieldIfNecessary2();
        loop2();
    }
}

#endif
#endif
