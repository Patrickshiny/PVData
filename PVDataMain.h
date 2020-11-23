#ifndef PVDATAMAIN_H
#define PVDATAMAIN_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class PVDataMain : public Gtk::Window
{
    private:
    PVDataMain();
    virtual ~PVDataMain();
    Gtk::Paned CurrentPaned;

    protected:
    void onTopButtonClick();
    
    public:
}

#endif // PVDATAMAIN_H
