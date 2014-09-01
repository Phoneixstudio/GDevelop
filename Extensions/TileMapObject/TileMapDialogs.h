//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: TileMapDialogs.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef TILEMAPDIALOGS_BASE_CLASSES_H
#define TILEMAPDIALOGS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/aui/framemanager.h>
#include <wx/aui/dockart.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/toolbar.h>
#include <wx/scrolwin.h>
#include "TileSetPanel.h"
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include "TileMapPanel.h"
#include <wx/statbmp.h>
#include <wx/hyperlink.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/spinctrl.h>
#include "TileMapDialogsIds.h"

class TileMapObjectEditorBase : public wxDialog
{
protected:
    wxAuiManager* m_auimgr178;
    wxPanel* m_tileSetPropertiesPanel;
    wxToolBar* m_tileSetToolBar;
    TileSetPanel* m_tileSetPanel;
    wxPanel* m_mainPanel;
    wxToolBar* m_mainPanelToolbar;
    wxStaticText* m_staticText355;
    wxChoice* m_layerChoice;
    TileMapPanel* m_tileMapPanel;
    wxStaticText* m_staticText448;
    wxStaticBitmap* m_staticBitmap456;
    wxHyperlinkCtrl* m_hyperLink454;
    wxStdDialogButtonSizer* m_stdBtnSizer60;
    wxButton* m_button62;
    wxButton* m_button64;

protected:
    virtual void OnTileSetConfigureButtonClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTileEditToolClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnChangeMapSizeButtonClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLayerChoiceChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnHideUpperLayerChecked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnHelpButtonClicked(wxHyperlinkEvent& event) { event.Skip(); }
    virtual void OnOkButtonPressed(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonPressed(wxCommandEvent& event) { event.Skip(); }

public:
    TileMapObjectEditorBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("TileMap Object Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(950,550), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX);
    virtual ~TileMapObjectEditorBase();
};


class TileSetConfigurationEditorBase : public wxDialog
{
protected:
    wxAuiManager* m_auimgr;
    wxPanel* m_mainPanel;
    wxStaticText* m_staticText335;
    wxStaticText* m_staticText337;
    wxStaticText* m_staticText287;
    wxTextCtrl* m_textureNameTextCtrl;
    wxBitmapButton* m_setTextureButton;
    wxStaticText* m_staticText301;
    wxSpinCtrl* m_tileWidthSpin;
    wxStaticText* m_staticText307;
    wxSpinCtrl* m_tileHeightSpin;
    wxStaticText* m_staticText311;
    wxStaticText* m_staticText313;
    wxSpinCtrl* m_spacingWidthSpin;
    wxStaticText* m_staticText325;
    wxSpinCtrl* m_spacingHeightSpin;
    wxStaticText* m_staticText329;
    TileSetPanel* m_tileSetPreviewPanel;
    wxStdDialogButtonSizer* m_stdBtnSizer2713;
    wxButton* m_okButton;
    wxButton* m_cancelButton;

protected:
    virtual void OnTileSetTextureUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSetTextureButtonClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTileSetParameterUpdated(wxSpinEvent& event) { event.Skip(); }
    virtual void OnOkButtonClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelButtonClicked(wxCommandEvent& event) { event.Skip(); }

public:
    TileSetConfigurationEditorBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tileset configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(750,500), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~TileSetConfigurationEditorBase();
};


class TileMapConfigurationEditorBase : public wxDialog
{
protected:
    wxStaticText* m_staticText378;
    wxSpinCtrl* m_mapWidthSpin;
    wxStaticText* m_staticText384;
    wxSpinCtrl* m_mapHeightSpin;
    wxStaticText* m_staticText388;
    wxStdDialogButtonSizer* m_stdBtnSizer371;
    wxButton* m_okButton;
    wxButton* m_cancelButton;

protected:
    virtual void OnOkPressed(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCancelPressed(wxCommandEvent& event) { event.Skip(); }

public:
    TileMapConfigurationEditorBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tilemap size configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~TileMapConfigurationEditorBase();
};


class TileEditorBase : public wxPanel
{
protected:
    wxToolBar* m_mainToolbar;
    wxPanel* m_justToHideToolbar;
    wxToolBar* m_toolbar418;
    wxScrolledWindow* m_tilePreviewPanel;

protected:
    virtual void OnCollidableToolToggled(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPredefinedShapeToolClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPreviewPaint(wxPaintEvent& event) { event.Skip(); }
    virtual void OnPreviewErase(wxEraseEvent& event) { event.Skip(); }

public:
    TileEditorBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~TileEditorBase();
};

#endif
