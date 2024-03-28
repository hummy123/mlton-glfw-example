mlton -default-ann 'allowFFI true' -link-opt '-lglfw3 -framework Cocoa -framework OpenGL -framework IOKit' -export-header export.h import.sml glad.c ffi-import.c
