#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
// this will be the renderer api
//

// assersion
#define assertf(A, M, ...) if(!(A)) {fprintf(stderr, "%s:%d: " M "\n", __FILE__, __LINE__,##__VA_ARGS__); assert(A); }

/// open a window
GLFWwindow* open_window();

// run main loop
int main_loop();


// initialize the renderer
bool initialize(const char *name);