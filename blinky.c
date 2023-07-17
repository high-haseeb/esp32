#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "hal/gpio_types.h"

#define BLINK 2

void app_main(void) {
  char *ourTaskName = pcTaskGetName(NULL);
  ESP_LOGI(ourTaskName, "Hello World \n");

    gpio_reset_pin(BLINK);
    gpio_set_direction(BLINK, GPIO_MODE_INPUT_OUTPUT);
    while (true) {
        gpio_set_level(BLINK, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(BLINK, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
