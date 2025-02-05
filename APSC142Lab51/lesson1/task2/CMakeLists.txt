cmake_minimum_required(VERSION 3.29.6)

project(global-lesson1-task2)

set(CMAKE_CXX_STANDARD 14)

# Files from `./src` directory
set(SRC src/main.c)


# Running learner side code
# Use PROJECT_NAME dependent names of targets for the plugin support to work correctly.
add_executable(${PROJECT_NAME}-run ${SRC})