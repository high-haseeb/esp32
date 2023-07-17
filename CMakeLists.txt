# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
idf_component_register(SRCS "blinky.c"
                    REQUIRES driver
                    INCLUDE_DIRS "." )
