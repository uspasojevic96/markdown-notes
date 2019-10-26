#ifndef SAVE_AREA_HPP
#define SAVE_AREA_HPP

#include <cppurses/cppurses.hpp>

namespace mdnotes {
  namespace editor {
    namespace widgets {
      class Save_area : public cppurses::layout::Horizontal {
        public:
          Save_area();

          cppurses::Push_button &load_btn{
            this->make_child<cppurses::Push_button>("Load")
          };
          
          cppurses::Textbox &filename{
            this->make_child<cppurses::Textbox>()
          };

          cppurses::Push_button &save_btn{
            this->make_child<cppurses::Push_button>("Save")
          };

        private:
          void initialize();
      };
    }
  }
}

#endif
