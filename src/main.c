// main.c

#include "pathfinder.h"

int main(int argc, char **argv) {
    t_app *app = app_init();

    arguments_handler(app, argc, argv);
    file_read(app);
    file_parse(app);
    paths_find(app);
    paths_print(app);

    app_free(app);
    return 0;
}
