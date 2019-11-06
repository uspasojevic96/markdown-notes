#include <cppurses/cppurses.hpp>
#include "editor/editor.hpp"

using namespace cppurses;

int main() {
  System sys;
  mdnotes::editor::Editor editor;
  sys.set_initial_focus(&editor);
	return sys.run(editor);
}
