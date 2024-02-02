add_executable(
	Shaders

	${CMAKE_CURRENT_SOURCE_DIR}/Main.cxx
)

target_include_directories(
	Shaders

	PRIVATE
		${GLFW_SOURCE_DIR}/include/
		${glew_SOURCE_DIR}/include/
)

add_definitions(-DGLEW_STATIC)

target_link_libraries(
	Shaders

	PRIVATE
		glfw
		libglew_static
)
