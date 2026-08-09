#pragma once

#include <cstdint>

// Dumped by: decamp dumper
// Website: https://decamp.dev/rbx-offsets
// Roblox version: version-d584fb6c717a43d9
namespace Offsets
{
	inline constexpr std::uintptr_t CastArgs = 0x2234DD0;
	inline constexpr std::uintptr_t FireTouchInterest = 0x1E73BE0;
	inline constexpr std::uintptr_t GetGlobalState = 0x2259730;
	inline constexpr std::uintptr_t OpcodeLookupTable = 0x6B5F680;
	inline constexpr std::uintptr_t Print = 0x91F9A0;
	inline constexpr std::uintptr_t PushInstance = 0x226A200;
	inline constexpr std::uintptr_t ScriptContextResume = 0x22FA7B0;

	namespace Atom
	{
		inline constexpr std::uintptr_t KTable = 0x7E73AE0;
	}

	namespace Capabilities
	{
		inline constexpr std::uintptr_t GetCapabilities = 0x8EB520;
	}

	namespace DataModel
	{
		inline constexpr std::uintptr_t FakeDataModel = 0x8A5D748;
		inline constexpr std::uintptr_t RealDataModel = 0x1D0;
	}

	namespace Identity
	{
		inline constexpr std::uintptr_t GetIdentityStruct = 0x40E0;
		inline constexpr std::uintptr_t Identity = 0x7ED2808;
	}

	namespace Luau
	{
		inline constexpr std::uintptr_t LuaD_Throw = 0x945D80;
		inline constexpr std::uintptr_t LuaH_DummyNode = 0x610B760;
		inline constexpr std::uintptr_t LuaO_NilObject = 0x610B898;
		inline constexpr std::uintptr_t Luau_Execute = 0x95E8C0;
	}

	namespace Properties
	{
		inline constexpr std::uintptr_t GetPropertyData = 0xD65F90;
	}

	namespace Task
	{
		inline constexpr std::uintptr_t Defer = 0x23F68E0;
	}

}
