#include <iostream>
#include <lua.hpp>

int main() {
    std::cout << "Initializing Lua...\n";
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    std::cout << "Loading and executing Lua script...\n";
    luaL_dofile(L, "script.lua");

    lua_getglobal(L, "num");
    int result = lua_tointeger(L, -1);
    std::cout << "Value received from Lua: " << result << "\n";

    std::cout << "Cleaning up Lua...\n";
    lua_close(L);

    return 0;
}

