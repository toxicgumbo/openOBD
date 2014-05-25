/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * openobd
 * Copyright (C) Simon Booth 2010 <simesb@users.sourceforge.net>
 *
 * openobd is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * openobd is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __obdFrame__
#define __obdFrame__

/**
@file
Subclass of obdBaseFrame, which is generated by wxFormBuilder.
*/

#include <sqlite3.h>
#include "gui.h"
#include "obdbase.h"
#include "logPanel.h"
#include "milPanel.h"
#include "dlgOptions.h"
#include "pidPanel.h"

/** Implementing obdBaseFrame */
class obdFrame : public obdBaseFrame
{
protected:

	obdbase* obd;
	logPanel* log;
	milPanel* mil;
	pidPanel* pid;
	sqlite3* db;
	struct obdOptions options;

	// Handlers for obdBaseFrame events.
	void onMenuExport( wxCommandEvent& event );
	void onMenuQuit( wxCommandEvent& event );
	void onMenuConnect( wxCommandEvent& event );
	void onMenuPrefs( wxCommandEvent& event );
	void onMenuAbout( wxCommandEvent& event );
	void onMenuViewLog( wxCommandEvent& event );
	void onMenuViewMIL( wxCommandEvent& event );
	void onMenuViewPIDs( wxCommandEvent& event );

	// utility functions
	void updateMenus(bool connected);
	bool connectDevice();

public:
	/** Constructor */
	obdFrame( wxWindow* parent );
	~obdFrame();
};

#endif // __obdFrame__
