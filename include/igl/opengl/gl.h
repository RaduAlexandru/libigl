// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2013, 2017 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#ifndef IGL_OPENGL_GL_H
#define IGL_OPENGL_GL_H

#ifdef IGL_OPENGL2_GL_H
#  error "igl/opengl2/gl.h already included"
#endif

// Always use this:
//     #include "gl.h"
// Instead of:
//     #include <OpenGL/gl3.h>
// or 
//     #include <GL/gl.h>
//

// For now this includes glu, glew and glext (perhaps these should be
// separated)
#ifdef _WIN32
#    define NOMINMAX
#    include <Windows.h>
#    undef DrawText
#    undef NOMINMAX
#endif

#ifndef __APPLE__
#  define GLEW_STATIC
#  include <GL/glad.h>
#endif

#ifdef __APPLE__
#  include <OpenGL/gl3.h>
#  define __gl_h_ /* Prevent inclusion of the old gl.h */
#else
#  include <GL/gl.h>
#endif

#endif
