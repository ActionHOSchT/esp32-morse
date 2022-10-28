#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define dit 1
#define dah 3
#define stop 3
#define clock 500

#define GPIO_LED 5 // port pin of on - board LED

void space()
{
    gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
    vTaskDelay(clock / portTICK_PERIOD_MS); // wait 100 ms
}

void msignal(int amount)
{
    for (int i = 0; i < amount; i++)
    {
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(clock / portTICK_PERIOD_MS); // wait 100 ms
    }
    space();
    space();
    space();
};

void wordspace()
{
    for (int i = 0; i < 7; i++)
    {
        space();
    }
}

void fin()
{
    wordspace();
    wordspace();
}

void app_main()
{
    gpio_set_direction(GPIO_LED, GPIO_MODE_OUTPUT); // set GPIO as output
    while (1)
    {
        msignal(dit);
        msignal(dit);
        msignal(dit);
        msignal(dit);
        wordspace();
        msignal(dit);
        wordspace();
        msignal(dit);
        msignal(dah);
        msignal(dit);
        msignal(dit);
        wordspace();
        msignal(dit);
        msignal(dah);
        msignal(dit);
        msignal(dit);
        wordspace();
        msignal(dah);
        msignal(dah);
        msignal(dah);
        wordspace();
        msignal(dit);
        msignal(dah);
        msignal(dah);
        wordspace();
        msignal(dah);
        msignal(dah);
        msignal(dah);
        wordspace();
        msignal(dit);
        msignal(dah);
        msignal(dit);
        wordspace();
        msignal(dit);
        msignal(dah);
        msignal(dit);
        msignal(dit);
        wordspace();
        msignal(dah);
        msignal(dit);
        msignal(dit);
        fin();
    }
}
