#ifndef ArduinoX2_h
#define ArduinoX2_h
#ifdef ESP32_DUAL_TASK

#ifdef __cplusplus
extern TaskHandle_t loopTaskHandle2;
void setup2(void);
void loop2(void);
void loopTask2(void *pvParameters);
#endif

#endif
#endif // ArduinoX2_h