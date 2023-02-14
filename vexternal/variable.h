#pragma once
uintptr_t base_address;
uintptr_t unity_base;
uintptr_t mono_base;
#include <mutex>
namespace cache {

	uintptr_t LocalPlayer;
	uintptr_t CameraManager;
	uintptr_t OpticalCamera;
	uintptr_t GameObjectManager;
	uintptr_t Game_World;
	uintptr_t Real_World;
	uintptr_t FpsCamera;
	uintptr_t shot_effector;
	uintptr_t walk_effector;
	uintptr_t force_reactor;
	uintptr_t motion_effector;
	uintptr_t breath_effector;
	uintptr_t body_stamina;
	uintptr_t weapon;
	uintptr_t physical;
	std::mutex mtx;
}
bool p_open = true;

typedef NTSTATUS(__stdcall* _NtQueryInformationProcess)(_In_ HANDLE, _In_  unsigned int, _Out_ PVOID, _In_ ULONG, _Out_ PULONG);
typedef NTSTATUS(__stdcall* _NtSetInformationThread)(_In_ HANDLE, _In_ THREAD_INFORMATION_CLASS, _In_ PVOID, _In_ ULONG);

void set_timer_resolution()
{
	static NTSTATUS(NTAPI * nt_set_timer_resolution)
		(IN ULONG desired_resolution, IN BOOLEAN set_resolution, OUT PULONG current_resolution) =
		(NTSTATUS(NTAPI*)(ULONG, BOOLEAN, PULONG))
		::GetProcAddress(GetModuleHandle("ntdll.dll"), "NtSetTimerResolution");

	ULONG desired_resolution{ 1000UL }, current_resolution{ };
	nt_set_timer_resolution(desired_resolution, TRUE, &current_resolution);

}