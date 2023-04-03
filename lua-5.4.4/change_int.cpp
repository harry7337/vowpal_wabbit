#include <iostream>
#include <lua.hpp>

int main() {
    std::cout << "Initializing Lua...\n";
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    std::cout << "Loading and executing Lua script...\n";
    lua_pushinteger(L, 42);
    luaL_dofile(L, "script2.lua");

    int new_value = lua_tointeger(L, -1);
    std::cout << "New value: " << new_value << '\n';

    std::cout << "Cleaning up Lua...\n";
    lua_close(L);

    return 0;
}

