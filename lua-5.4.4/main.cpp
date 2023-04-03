#include <iostream>
#include <lua.hpp>

int main() {
    std::cout << "Initializing Lua...\n";
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    std::cout << "Loading and executing Lua script...\n";
    luaL_dostring(L, "print('Hello, World! This is Harish Gumnur.')");

    std::cout << "Cleaning up Lua...\n";
    lua_close(L);

    return 0;
}

