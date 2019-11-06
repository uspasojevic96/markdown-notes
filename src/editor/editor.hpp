#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <cppurses/cppurses.hpp>
#include "widgets/save_area/save_area.hpp"

namespace mdnotes {
  namespace editor {
    class Editor : cppurses::layout::Vertical {
      public:
        Editor();
    };
  }
}

#endif
