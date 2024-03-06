#include <gpiod.h>

int main() {
        char chipname[] = "gpiochip0";
        int line_num = 21;
        int val = 1;
        struct gpiod_chip *chip;
        struct gpiod_line *line;

        chip = gpiod_chip_open_by_name(chipname);
        line = gpiod_chip_get_line(chip, line_num);
        gpiod_line_request_output(line, "Consumer", 0);

        gpiod_line_set_value(line, val);

        gpiod_line_release(line);
        gpiod_chip_close(chip);

        return 0;
}
