#include "editor.hpp"

mdnotes::editor::Editor::Editor() {
  this->focus_policy = cppurses::Focus_policy::Strong;
}

bool mdnotes::editor::Editor::focus_in_event() {
  cppurses::Focus::set_focus_to(textarea.textbox);
  return true;
}
