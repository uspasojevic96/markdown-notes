#include <cppurses/cppurses.hpp>

using namespace cppurses;

int main() {
        System sys;
        Glyph_string greeting{"Hello, world!", Attribute::Underline};

        Textbox tb{greeting};

        tb.brush.set_background(Color::Dark_blue);
        tb.brush.set_foreground(Color::Light_blue);

        
	tb.border.enable();
	          tb.border.segments.north_west = L'╭';
          tb.border.segments.north_east = L'╮';
          tb.border.segments.south_west = L'╰';
          tb.border.segments.south_east = L'╯';
	tb.border.segments.north = L'-';
	tb.border.segments.south = L'-';
	tb.border.segments.east = L'|';
	tb.border.segments.west = L'|';
	tb.border.segments.enable_all();
	return sys.run(tb);
}
