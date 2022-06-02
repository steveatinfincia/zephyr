/*
 * Copyright (c) 2022 Stephen Oliver
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/i2c.h>


static int board_m5stack_core_init(const struct device *dev)
{
	ARG_UNUSED(dev);
	const struct device *gpio;

	gpio = device_get_binding(DT_LABEL(DT_NODELABEL(gpio0)));
	if (!gpio) {
		return -ENODEV;
	}

	/* configure pmic */
	

	return 0;
}

SYS_INIT(board_m5stack_core_init, APPLICATION, CONFIG_GPIO_INIT_PRIORITY);
