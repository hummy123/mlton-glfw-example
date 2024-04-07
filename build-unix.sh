mlton -default-ann 'allowFFI true' -link-opt "$(pkg-config --cflags glfw3) $(pkg-config --static --libs glfw3)" -export-header export.h import.mlb glad.c ffi-import.c
