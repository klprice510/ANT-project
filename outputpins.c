void output_setup(uint32_t pin)
{
    nrf_gpio_cfg_output(pin);
}

void output_on(uint32_t pin)
{
    nrf_gpio_pin_set(pin);
}

void output_off(uint32_t pin)
{
    nrf_gpio_pin_clear(pin);
}