#include "brinfo.h"

int main(int argc, char* argv[]) {
	FD_main *fd_main;
	FD_printing *fd_printing;

	//fl_set_icm_color(FL_COL1, 192, 192, 192);
	fl_set_border_width(2);
	fl_initialize(&argc, argv, 0, 0, 0);
	fd_main = create_form_main();

	fl_show_form(fd_main->main, FL_PLACE_CENTER, FL_FULLBORDER, "brinfo");

	fl_do_forms();

	if (fl_form_is_visible(fd_main->main)) fl_hide_form(fd_main->main);
	fl_free(fd_main);
	
	fl_finish();

	return 0;
}
