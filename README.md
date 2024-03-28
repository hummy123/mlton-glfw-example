# mlton-glfw

This is mostly a minimal reminder to myself on how to use GLFW through MLton's FFI.

The main thing to do, on MLton's side, is to pass the standard [linking options](https://www.glfw.org/docs/3.3/build_guide.html) for GLFW through MLton's `-link-opt` option, and specify glad.c in the build command.

(The standard linking options for GLFW may vary depending on OS so build.sh which contains a command that works on macOS may fail on other operating systems.)
