mlton -default-ann 'allowFFI true' -link-opt '-lglfw3 -framework Cocoa -framework OpenGL -framework IOKit' -export-header export.h import.mlb glad.c ffi-import.c
