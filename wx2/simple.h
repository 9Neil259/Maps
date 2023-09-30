#pragma once

#ifndef SIMPLE_H_INCLUDED
#define SIMPLE_H_INCLUDED
#include "unit.hpp"
#include <wx/wx.h>
#include <wx/listctrl.h>
#include <wx/button.h>
#include "simple.h"
#include "unit.hpp"
#include <iostream>
#include <map>
#include <wx/textctrl.h>
class Simple : public wxFrame
{
public:
    Simple(const wxString& title);
    void OnButtonClicked(wxCommandEvent& event);
    wxTextCtrl* inputText ;
    wxListView* listView;
    std::map<int, std::string> myMap;
};
#endif // SIMPLE_H_INCLUDED
