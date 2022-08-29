project(unitTests)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(${PROJECT_NAME} unitTests.cpp)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE
		GTest::GTest
		IClass
)

# TODO: Add tests and install targets if needed.
set(UNIT_TEST ${PROJECT_NAME})
add_custom_command(
     TARGET ${UNIT_TEST}
     COMMENT "Run Tests"
     POST_BUILD 
     COMMAND ${UNIT_TEST}
)