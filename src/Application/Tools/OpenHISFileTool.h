/*
 For more information, please see: http://software.sci.utah.edu
 
 The MIT License
 
 Copyright (c) 2013 Scientific Computing and Imaging Institute,
 University of Utah.
 
 
 Permission is hereby granted, free of charge, to any person obtaining a
 copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 DEALINGS IN THE SOFTWARE.
 */

#ifndef APPLICATION_TOOLS_OPENHISFILETOOL_H
#define APPLICATION_TOOLS_OPENHISFILETOOL_H

// Application includes
#include <Application/Tool/Tool.h>

namespace Seg3D
{

class OpenHISFileTool : public Tool
{
  
SEG3D_TOOL
(
  SEG3D_TOOL_NAME( "OpenHISFileTool", "" )
  SEG3D_TOOL_MENULABEL( "Open HIS File" )
  SEG3D_TOOL_MENU( "Tools" )
  SEG3D_TOOL_SHORTCUT_KEY( "" )
  SEG3D_TOOL_URL( "" )
  SEG3D_TOOL_HOTKEYS( "" )
  SEG3D_TOOL_VERSION( "1.0" )
)
  
public:
  OpenHISFileTool( const std::string& toolid );
  virtual ~OpenHISFileTool();

	/// Execute the tool and dispatch the action
	virtual void execute( Core::ActionContextHandle context );
};
  
}

#endif