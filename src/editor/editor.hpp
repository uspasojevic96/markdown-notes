#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <cppurses/cppurses.hpp>
#include "widgets/save_area/save_area.hpp"
#include "widgets/text_area/text_area.hpp"

namespace mdnotes {
  namespace editor {
    class Editor : public cppurses::layout::Vertical {
      public:
        Editor();

        mdnotes::editor::widgets::Text_area &textarea{
          this->make_child<mdnotes::editor::widgets::Text_area>()
        };

        mdnotes::editor::widgets::Save_area &savearea{
          this->make_child<mdnotes::editor::widgets::Save_area>()
        };
      protected:
        bool focus_in_event() override;
    };
  }
}

#endif
