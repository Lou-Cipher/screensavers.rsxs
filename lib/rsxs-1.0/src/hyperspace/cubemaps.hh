/*
 * Really Slick XScreenSavers
 * Copyright (C) 2002-2008  Michael Chapman
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *****************************************************************************
 *
 * This is a Linux port of the Really Slick Screensavers,
 * Copyright (C) 2005 Terence M. Welsh, available from www.reallyslick.com
 */
#ifndef _CUBEMAPS_HH
#define _CUBEMAPS_HH

#include <common.hh>

#include <extensions.hh>

#if USE_GL_EXTENSIONS

namespace WavyNormalCubeMaps {
	extern std::vector<GLuint> textures;

	void init();
};

#endif // USE_GL_EXTENSIONS

#endif // _CUBEMAPS_HH
