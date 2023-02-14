#pragma once
#include "GL/glew.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>
#include "arial.h"


HWND game_window;

bool g_overlay_visible = true;
int g_width;
int g_height;
GLFWwindow* g_window;


inline void cleanupWindow() {
	ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();

	glfwDestroyWindow(g_window);
	glfwTerminate();
}

static void glfwErrorCallback(int error, const char* description)
{
	fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}
void setupWindow() {

	glfwSetErrorCallback(NULL);
	Sleep(20);//race condition fix
	if (!glfwInit())return;
	GLFWmonitor* monitor = glfwGetPrimaryMonitor();
	Sleep(20);//race condition fix
	if (!monitor)return;
	g_width = glfwGetVideoMode(monitor)->width,
		g_height = glfwGetVideoMode(monitor)->height;
	glfwWindowHint(GLFW_FLOATING, true);
	glfwWindowHint(GLFW_DOUBLEBUFFER, true);
	glfwWindowHint(GLFW_DECORATED, false);


	glfwWindowHint(GLFW_RESIZABLE, false);
	glfwWindowHint(GLFW_MAXIMIZED, true);
	glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, true);
	g_window = glfwCreateWindow(g_width, g_height, "Word", NULL, NULL);//window name
	Sleep(20);//race condition fix
	if (g_window == NULL)return;
	glfwSetWindowAttrib(g_window, GLFW_DECORATED, false);
	glfwSetWindowAttrib(g_window, GLFW_MOUSE_PASSTHROUGH, true);
	glfwSetWindowMonitor(g_window, NULL, 0, 0, g_width, g_height + 1, 0);//required
	glfwMakeContextCurrent(g_window);
	Sleep(20);//race condition fix
	if (glewInit() != GLEW_OK)return;
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	ImGui_ImplGlfw_InitForOpenGL(g_window, true);
	ImGui_ImplOpenGL3_Init(e("#version 130").decrypt());
	io.Fonts->AddFontFromMemoryTTF(&arial, sizeof arial, 11.f);
	//IM_ASSERT(font != NULL);
}


