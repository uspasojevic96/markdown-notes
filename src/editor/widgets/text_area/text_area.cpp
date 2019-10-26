#include "text_area.hpp"

mdnotes::editor::widgets::Text_area::Text_area() {
  this->initialize();
}

void mdnotes::editor::widgets::Text_area::initialize() {
  textbox.brush.set_background(cppurses::Color::Dark_gray);
  textbox.border.enable();
  // change segments?
}
