const std = @import("std");
const sdl = @import("sdl3.zig").sdl3;

pub fn sdlError(code: bool) !void {
    if (!code) {
        return error.SDLError;
    }
}


pub inline fn doSDLSetMain() void {
    std.log.debug("Setting main ready...", .{});
    defer std.log.debug("Setting main ready OK", .{});
    sdl.SDL_SetMainReady();
}

pub fn doSDLInit() !void {
    std.log.debug("Initializing SDL...", .{});
    defer std.log.debug("Initializing SDL OK", .{});
    try sdlError(sdl.SDL_Init(sdl.SDL_INIT_VIDEO | sdl.SDL_INIT_AUDIO | sdl.SDL_INIT_GAMEPAD));
}

pub fn doSDLQuit() void {
    std.log.debug("Quitting SDL...", .{});
    defer std.log.debug("Quitting SDL OK", .{});
    sdl.SDL_Quit();
}

const RenderContext = struct {
    window: ?*sdl.SDL_Window,
    renderer: ?*sdl.SDL_Renderer,

    pub fn init(name: []const u8, w: i32, h: i32) !RenderContext {
        std.log.debug(
            "Creating window '{s}' with dimensions '{}x{}'...",
            .{ name, w, h },
        );
        defer std.log.debug(
            "Creating window '{s}' with dimensions '{}x{}' OK",
            .{ name, w, h },
        );

        var window: ?*sdl.SDL_Window = null;
        var renderer: ?*sdl.SDL_Renderer = null;

        try sdlError(sdl.SDL_SetHint(sdl.SDL_HINT_RENDER_VSYNC, "1"));
        try sdlError(sdl.SDL_CreateWindowAndRenderer(
            @ptrCast(name),
            w,
            h,
            0,
            &window,
            &renderer,
        ));

        return RenderContext{
            .window = window,
            .renderer = renderer,
        };
    }

    pub fn deinit(self: *RenderContext) void {
        sdl.SDL_DestroyRenderer(self.renderer);
        sdl.SDL_DestroyWindow(self.window);
    }
};

pub fn main() !void {
    // Setup SDL
    doSDLSetMain();
    try doSDLInit();
    defer doSDLQuit();

    // Create render context
    var context = try RenderContext.init("game", 640, 480);
    defer context.deinit();

    game_loop: while (true) {
        var event: sdl.SDL_Event = undefined;
        while (sdl.SDL_PollEvent(&event)) {
            switch (event.type) {
                sdl.SDL_EVENT_QUIT => {
                    break :game_loop;
                },
                else => {
                    std.log.debug("Not handling event '{}'", .{event.type});
                },
            }
        }
    }

    std.log.debug("Exiting OK", .{});
}
