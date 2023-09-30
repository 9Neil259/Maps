#include "simple.h"


Simple::Simple(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(1250, 750))
{
    // Declare a map with int keys and string values
    
    

    
    inputText = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxPoint(150,0), wxDefaultSize);

    // Create a button to add elements to the map
    wxButton* addButton = new wxButton(this, wxID_ANY, "Add Element",wxPoint(20,0));
    wxButton* insertButton = new wxButton(this, wxID_ANY, "Insert Element",wxPoint(20,100));
    
    listView = new wxListView(this, wxID_ANY, wxPoint(400, 10), wxDefaultSize, wxLC_REPORT);
    listView->AppendColumn("Key");
    listView->AppendColumn("Value");

    
    addButton->Bind(wxEVT_BUTTON, &Simple::OnButtonClicked, this); 
}  
    void Simple::OnButtonClicked(wxCommandEvent& event) {
        wxString userInput = inputText->GetValue();
        int newKey = myMap.size() + 1; // Generate a new key
        std::string newValue = std::string(userInput.mb_str()); // Convert wxString to std::string

        
        myMap[newKey] = newValue;

        // Insert the new element into the list view
        long index = listView->InsertItem(0, wxString::Format("%d", newKey));
        listView->SetItem(index, 1, userInput);

        // Clear the input text field
        inputText->Clear();
}


    
