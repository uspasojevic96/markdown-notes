#ifndef TEXT_AREA_HPP
#define TEXT_AREA_HPP

#include <cppurses/cppurses.hpp>

namespace mdnotes {
  namespace editor {
    namespace widgets {
      class Text_area : public cppurses::layout::Horizontal {
        public:
          Text_area();
          cppurses::Textbox &textbox{
            this->make_child<cppurses::Textbox>()
          };

        private:
          void initialize();
      };
    }
  }
}

#endif
