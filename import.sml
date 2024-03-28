(* main.sml *)

(* Declare ffi to be implemented by calling the C function ffi. *)
val gl_ffi = _import "gl_ffi" public: unit -> unit;

val _ = gl_ffi ()
