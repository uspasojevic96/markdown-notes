#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <cppurses/cppurses.hpp>

namespace MDN {
  class Editor : cppurses::Widget {
    public:
      Editor();
      cppurses::Textbox &textbox{this->make_child<cppurses::Textbox>()};

  };
}

#endif
