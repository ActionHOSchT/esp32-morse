#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include <stdlib.h>

#define dit 1
#define dah 3
#define stop 3
#define clock 500

#define GPIO_LED 5 // port pin of on - board LED

void space()
{
    gpio_set_level(GPIO_LED, 1);            // set GPIO high , LED goes off
    vTaskDelay(clock / portTICK_PERIOD_MS); // wait 100 ms
}

void msignal(int amount)
{
    for (int i = 0; i < amount; i++)
    {
        gpio_set_level(GPIO_LED, 0);            // set GPIO low , LED goes on
        vTaskDelay(clock / portTICK_PERIOD_MS); // wait 100 ms
    }
    space();
}

void nextChar()
{
    for (int i = 0; i < 3; i++)
    {
        space();
    }
}
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

void morseA()
{
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morseB()
{
    msignal(dah);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morseC()
{
    msignal(dah);
    msignal(dit);
    msignal(dah);
    msignal(dit);
    nextChar();
}

void morseD()
{
    msignal(dah);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morseE()
{
    msignal(dit);
    nextChar();
}

void morseF()
{
    msignal(dit);
    msignal(dit);
    msignal(dah);
    msignal(dit);
    nextChar();
}

void morseG()
{
    msignal(dah);
    msignal(dah);
    msignal(dit);
    nextChar();
}

void morseH()
{
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morseI()
{
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morseJ()
{
    msignal(dit);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morseK()
{
    msignal(dah);
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morseL()
{
    msignal(dit);
    msignal(dah);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morseM()
{
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morseN()
{
    msignal(dah);
    msignal(dit);
    nextChar();
}

void morseO()
{
    msignal(dah);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morseP()
{
    msignal(dit);
    msignal(dah);
    msignal(dah);
    msignal(dit);
    nextChar();
}

void morseQ()
{
    msignal(dah);
    msignal(dah);
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morseR()
{
    msignal(dit);
    msignal(dah);
    msignal(dit);
    nextChar();
}

void morseS()
{
    msignal(dit);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morseT()
{
    msignal(dah);
    nextChar();
}

void morseU()
{
    msignal(dit);
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morseV()
{
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morseW()
{
    msignal(dit);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morseX()
{
    msignal(dah);
    msignal(dit);
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morseY()
{
    msignal(dah);
    msignal(dit);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morseZ()
{
    msignal(dah);
    msignal(dah);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morse0()
{
    msignal(dah);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morse1()
{
    msignal(dit);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morse2()
{
    msignal(dit);
    msignal(dit);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morse3()
{
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dah);
    msignal(dah);
    nextChar();
}

void morse4()
{
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dah);
    nextChar();
}

void morse5()
{
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morse6()
{
    msignal(dah);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morse7()
{
    msignal(dah);
    msignal(dah);
    msignal(dit);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morse8()
{
    msignal(dah);
    msignal(dah);
    msignal(dah);
    msignal(dit);
    msignal(dit);
    nextChar();
}

void morse9()
{
    msignal(dah);
    msignal(dah);
    msignal(dah);
    msignal(dah);
    msignal(dit);
    nextChar();
}

void translateMessage() {

}

void app_main()
{
    gpio_set_direction(GPIO_LED, GPIO_MODE_OUTPUT); // set GPIO as output
    while (1)
    {
        morseH();
        morseE();
        morseL();
        morseL();
        morseO();
        wordspace();
        morseW();
        morseO();
        morseR();
        morseL();
        morseD();
        fin();
        /*
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
        */

        // morse(helloworld)....  .  .-..  .-..  ---  .--  ---  .-.  .-..  -..

        /*
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);            // set GPIO high , LED goes off
        vTaskDelay(10000 / portTICK_PERIOD_MS); // wait 1000 ms

        */
        // morse(helloworld)....  .  .-..  .-..  ---  .--  ---  .-.  .-..  -..
        /*
        short
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        long
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        stop
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(2000 / portTICK_PERIOD_MS); // wait 200 ms

        finish
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(10000 / portTICK_PERIOD_MS); // wait 1000 ms
        */

        /*
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(10000 / portTICK_PERIOD_MS); // wait 1000 ms
        */
    }
}
// morse(hello world)....  .  .-..  .-..  ---     .--  ---  .-.  .-..  -..

/*
short
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

long
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 0);           // set GPIO low , LED goes on
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms
        gpio_set_level(GPIO_LED, 1);           // set GPIO high , LED goes off
        vTaskDelay(1000 / portTICK_PERIOD_MS); // wait 100 ms

*/
