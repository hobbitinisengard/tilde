/* Copyright (C) 2012 G.P. Halkes
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 3, as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ATTRIBUTES_DIALOG_H
#define ATTRIBUTES_DIALOG_H

#include <t3widget/widget.h>
#include "option.h"

using namespace t3_widget;

class attributes_dialog_t : public dialog_t {
	private:
		attribute_test_line_t *dialog_line, *dialog_selected_line, *shadow_line,
			*button_selected_line, *scrollbar_line, *menubar_line, *menubar_selected_line,
			*background_line, *hotkey_highlight_line, *bad_draw_line, *non_print_line,
			*text_line, *text_selected_line, *text_cursor_line, *text_selection_cursor_line,
			*text_selection_cursor2_line, *meta_text_line, *brace_highlight_line,
			*comment_line, *comment_keyword_line, *keyword_line, *number_line,
			*string_line, *string_escape_line, *misc_line, *variable_line, *error_line,
			*addition_line, *deletion_line;
		optional<t3_attr_t> dialog, dialog_selected, shadow, button_selected,
			scrollbar, menubar, menubar_selected, background, hotkey_highlight,
			bad_draw, non_print, text, text_selected, text_cursor, text_selection_cursor,
			text_selection_cursor2, meta_text, brace_highlight, comment, comment_keyword,
			keyword, number, string, string_escape, misc, variable, error, addition,
			deletion;
		checkbox_t *color_box;
		expander_group_t *expander_group;
		cleanup_ptr<attribute_picker_dialog_t>::t picker;
		attribute_key_t change_attribute;

		void change_button_activated(attribute_key_t attribute);
		void expander_size_change(bool);
		void update_attribute_lines(void);
		void attribute_selected(t3_attr_t attribute);
		void default_attribute_selected(void);
		void handle_activate(void);
	public:
		attributes_dialog_t(int width);
		virtual bool set_size(optint height, optint width);
		virtual void show(void);
		void set_values_from_options(void);
		void set_options_from_values(void);

	T3_WIDGET_SIGNAL(activate, void);
};



#endif
