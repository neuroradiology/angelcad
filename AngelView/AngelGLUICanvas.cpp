// BeginLicense:
// Part of: angelcad - script based 3D solid modeller 
// Copyright (C) 2017 Carsten Arnholm
// All rights reserved
//
// This file may be used under the terms of either the GNU General
// Public License version 2 or 3 (at your option) as published by the
// Free Software Foundation and appearing in the files LICENSE.GPL2
// and LICENSE.GPL3 included in the packaging of this file.
//
// This file is provided "AS IS" with NO WARRANTY OF ANY KIND,
// INCLUDING THE WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE.
// EndLicense:
   
#include "AngelGLUICanvas.h"
#include "AngelViewApp.h"

AngelGLUICanvas::AngelGLUICanvas(wxWindow *parent,
                                 wxWindowID id,
                                 const int* attribList,
                                 const wxPoint& pos,
                                 const wxSize& size,
                                 long style,
                                 const wxString& name)
: wxGLUICanvas(parent,id,attribList,pos,size,style,name)
{}

AngelGLUICanvas::~AngelGLUICanvas()
{}

wxGLUIContext* AngelGLUICanvas::GetCurrentContext()
{
   return wxGetApp().GetContext(this);
}
