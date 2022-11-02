#include <stdio.h>
#include <time.h>
#include <metal/gpio.h>

void delayForSeconds(unsigned seconds) {
    time_t timeout;
    timeout = time(NULL) + seconds;
  while (timeout > time(NULL));
}

int main(void) {
  struct metal_gpio* gpio_device = metal_gpio_get_device(0);
  if (!gpio_device) {
    printf("Unable to obtain GPIO device\n");
    return -1;
  }

  while (1) {
    metal_gpio_enable_output(gpio_device, 19);  // Turn on onboard green LED
    delayForSeconds(1);
    metal_gpio_disable_output(gpio_device, 19); // Turn off
    delayForSeconds(1);
  }

  return 0;
}

//https://dev.iachieved.it/iachievedit/exploring-hifive1-rev-b-gpios-with-platformio/