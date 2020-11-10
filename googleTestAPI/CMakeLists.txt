message("-- Linking Library")
add_library(googleTestAPI GoogleTestProject.lib)
set_target_properties(googleTestAPI PROPERTIES LINKER_LANGUAGE CXX)
