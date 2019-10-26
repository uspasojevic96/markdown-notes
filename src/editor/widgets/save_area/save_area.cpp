#include "save_area.hpp"

mdnotes::editor::widgets::Save_area::Save_area() {
  this->initialize();

  this->set_name("Save_area");
  load_btn.set_name("Save_area_load_btn");
  filename.set_name("Save_area_filename");
  save_btn.set_name("Save_area_save_btn");
}

void mdnotes::editor::widgets::Save_area::initialize() {
  this->height_policy.fixed(1);

  load_btn.width_policy.fixed(6);
  load_btn.brush.set_background(cppurses::Color::White);
  load_btn.brush.set_foreground(cppurses::Color::Black);

  filename.disable_scrollwheel();
  filename.brush.set_background(cppurses::Color::Black);
  filename.brush.set_foreground(cppurses::Color::White);

  save_btn.width_policy.fixed(6);
  save_btn.brush.set_background(cppurses::Color::White);
  save_btn.brush.set_foreground(cppurses::Color::Black);
}
