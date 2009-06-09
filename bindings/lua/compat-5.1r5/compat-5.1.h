/*
** Compat-5.1
** Copyright Kepler Project 2004-2006 (http://www.keplerproject.org/compat/)
** $Id: compat-5.1.h 1621 2008-10-20 06:06:16Z oetiker $
*/

#ifndef COMPAT_H

LUALIB_API void luaL_module(lua_State *L, const char *libname,
                                       const luaL_reg *l, int nup);
#define luaL_openlib luaL_module

#endif
