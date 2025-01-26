const std = @import("std");
const sdl = @import("sdl3.zig").sdl3;

pub fn sdlError(code: bool) !void {
    if (!code) {
        return error.SDLError;
    }
}

pub fn main() !void {
    std.log.debug("Setting main ready...", .{});
    sdl.SDL_SetMainReady();
    std.log.debug("Setting main ready OK", .{});

    std.log.debug("Initializing SDL...", .{});
    try sdlError(sdl.SDL_Init(sdl.SDL_INIT_VIDEO | sdl.SDL_INIT_AUDIO | sdl.SDL_INIT_GAMEPAD));
    defer sdl.SDL_Quit();
    std.log.debug("Initializing SDL OK", .{});

    std.log.debug("Exiting OK", .{});
}

