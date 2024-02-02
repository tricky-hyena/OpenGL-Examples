cmake_minimum_required(
	VERSION
		3.27.2
)

project(
	OpenGL-Examples
	
	LANGUAGES
		CXX
)

add_subdirectory(
	${CMAKE_CURRENT_SOURCE_DIR}/Examples/Shaders/
)
