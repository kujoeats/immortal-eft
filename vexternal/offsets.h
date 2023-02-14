#pragma once


/*
	Generated using Deathstroke's TOG (https://github.com/patrickcjk/tog)
	At 2023-01-05 5:06:07 PM
	Game version 0.13.0.1.21531
*/

namespace offsets
{
	// [Class] EFT.GameWorld
	namespace game_world
	{
		constexpr auto size = 0x1A8;
		constexpr auto max_use_size = 0x130; // 0x128 + sizeof(-.GClass0695<Int32, Throwable>) = 0x128 + 0x8

		constexpr auto loot_list = 0x80; // [80] LootList : System.Collections.Generic.List<GInterface1658>
		constexpr auto registered_players = 0xA0; // [A0] RegisteredPlayers : System.Collections.Generic.List<Player>
		constexpr auto exfil_controller = 0x18; // [18] gClass0E59_0x18 : -.GClass0E59
		constexpr auto grenades = 0x128; // [128] Grenades : -.GClass0695<Int32, Throwable>
	}

	// [Class] -.GClass0E59
	namespace exfil_controller
	{
		constexpr auto size = 0x40;
		constexpr auto max_use_size = 0x30; // 0x28 + sizeof(EFT.Interactive.ScavExfiltrationPoint[]) = 0x28 + 0x8

		constexpr auto points = 0x20; // [20] exfiltrationPointArray_0x20 : EFT.Interactive.ExfiltrationPoint[]
		constexpr auto scav_points = 0x28; // [28] scavExfiltrationPointArray_0x28 : EFT.Interactive.ScavExfiltrationPoint[]

		// [Class] EFT.Interactive.ExfiltrationPoint
		namespace _point
		{
			constexpr auto size = 0xC0;
			constexpr auto max_use_size = 0xB9; // 0xB8 + sizeof(Boolean) = 0xB8 + 0x1

			constexpr auto Requirements = 0x60; // [60] Requirements : EFT.Interactive.ExfiltrationRequirement[]
			constexpr auto _status = 0xA8; // [A8] _status : System.Byte
			constexpr auto ExfiltrationStartTime = 0xB4; // [B4] ExfiltrationStartTime : Single
			constexpr auto Reusable = 0xB8; // [B8] Reusable : Boolean

			// [Class] EFT.Interactive.ExfiltrationRequirement
			namespace _requirement
			{
				constexpr auto size = 0x30;
				constexpr auto max_use_size = 0x30; // 0x28 + sizeof(System.Int32) = 0x28 + 0x8

				constexpr auto Id = 0x10; // [10] Id : String
				constexpr auto RequirementTip = 0x18; // [18] RequirementTip : String
				constexpr auto Requirement = 0x20; // [20] Requirement : System.Int32
				constexpr auto Count = 0x24; // [24] Count : Int32
				constexpr auto RequiredSlot = 0x28; // [28] RequiredSlot : System.Int32
			}
		}
	}

	// [Class] EFT.Player
	namespace player
	{
		constexpr auto size = 0x838;
		constexpr auto max_use_size = 0x838; // 0x837 + sizeof(Boolean) = 0x837 + 0x1

		constexpr auto action = 0x18; // [18] action_0x18 : System.Action<Single, Single, Int32>
		constexpr auto movement_context = 0x40; // [40] gClass12A7_0x40 : -.GClass12A7
		constexpr auto profile = 0x520; // [520] profile_0x520 : EFT.Profile
		constexpr auto pwa = 0x1A0; // [1A0] proceduralWeaponAnimation_0x1A0 : EFT.Animations.ProceduralWeaponAnimation
		constexpr auto body = 0xA8; // [A8] _playerBody : EFT.PlayerBody
		constexpr auto health_controller = 0x558; // [558] _healthController : -.GInterface932B
		constexpr auto physical = 0x530; // [530] Physical : -.GClass0627
		constexpr auto is_local_player = 0x837; // [837] boolean_0x837 : Boolean
		constexpr auto hands_controller = 0x570; // [570] _handsController : -.Player.AbstractHandsController
		constexpr auto PlayerBones = 0x5B0; // [5B0] PlayerBones : -.PlayerBones

		// [Class] -.PlayerBones
		namespace _player_bones
		{
			constexpr auto size = 0x208;
			constexpr auto max_use_size = 0x150; // 0x148 + sizeof(EFT.BifacialTransform) = 0x148 + 0x8

			constexpr auto fireport = 0x148; // [148] Fireport : EFT.BifacialTransform
		}

		// [Class] -.GClass0627
		namespace _physical
		{
			constexpr auto size = 0x120;
			constexpr auto max_use_size = 0x40; // 0x38 + sizeof(-.GClass0625) = 0x38 + 0x8

			constexpr auto stamina = 0x38; // [38] Stamina : -.GClass0625

			// [Class] -.GClass0625
			namespace _stamina
			{
				constexpr auto size = 0x60;
				constexpr auto max_use_size = 0x4C; // 0x48 + sizeof(Single) = 0x48 + 0x4

				constexpr auto current = 0x48; // [48] Current : Single
			}
		}

		// [Class] -.GClass1C99
		namespace _health_controller
		{
			constexpr auto size = 0xC8;
			constexpr auto max_use_size = 0x70; // 0x68 + sizeof(System.Collections.Generic.Dictionary<Int32, BodyPartState<Var>>) = 0x68 + 0x8

			constexpr auto bodyPartStateDictionary = 0x68; // [68] dictionary_0x68 : System.Collections.Generic.Dictionary<Int32, BodyPartState<Var>>

			// [Class] -.GClass1C99.BodyPartState
			namespace _bodyPartStateDictionary
			{
				constexpr auto size = 0x20;
				constexpr auto max_use_size = 0x19; // 0x18 + sizeof(Boolean) = 0x18 + 0x1

				constexpr auto Health = 0x10; // [10] Health : EFT.HealthSystem.HealthValue
				constexpr auto IsDestroyed = 0x18; // [18] IsDestroyed : Boolean

				// [Class] EFT.HealthSystem.HealthValue
				namespace _health
				{
					constexpr auto size = 0x28;
					constexpr auto max_use_size = 0x18; // 0x10 + sizeof(EFT.HealthSystem.ValueStruct) = 0x10 + 0x8

					constexpr auto Value = 0x10; // [10] Value : EFT.HealthSystem.ValueStruct
				}
			}
		}

		// [Class] -.GClass12A7
		namespace _movement_context
		{
			constexpr auto size = 0x428;
			constexpr auto max_use_size = 0x2FC; // 0x2F0 + sizeof(UnityEngine.RaycastHit) = 0x2F0 + 0xC

			constexpr auto position = 0x2F0; // [2F0] raycastHit_0x2F0 : UnityEngine.RaycastHit
			constexpr auto view_angle = 0x234; // [234] vector2_0x234 : UnityEngine.Vector2
		}

		// [Class] EFT.PlayerBody
		namespace _player_body
		{
			constexpr auto size = 0x88;
			constexpr auto max_use_size = 0x58; // 0x50 + sizeof(-.GClass0695<Int32, GClass1693>) = 0x50 + 0x8

			constexpr auto SlotViews = 0x50; // [50] SlotViews : -.GClass0695<Int32, GClass1693>
			constexpr auto SkeletonRootJoint = 0x28; // [28] SkeletonRootJoint : Diz.Skinning.Skeleton
			constexpr auto BodySkins = 0x38; // [38] BodySkins : System.Collections.Generic.Dictionary<Int32, LoddedSkin>

			// [Class] Diz.Skinning.Skeleton
			namespace Skeleton
			{
				constexpr auto size = 0x30;
				constexpr auto max_use_size = 0x30; // 0x28 + sizeof(System.Collections.Generic.List<Transform>) = 0x28 + 0x8

				constexpr auto _values = 0x28; // [28] _values : System.Collections.Generic.List<Transform>
			}
		}

		// [Class] -.AIFirearmController
		namespace _hands_controller
		{
			constexpr auto size = 0x198;
			constexpr auto max_use_size = 0xD8; // 0xD0 + sizeof(EFT.BifacialTransform) = 0xD0 + 0x8

			constexpr auto fireport = 0xD0; // [D0] Fireport : EFT.BifacialTransform

			// [Class] EFT.BifacialTransform
			namespace _fireport
			{
				constexpr auto size = 0xC8;
				constexpr auto max_use_size = 0x18; // 0x10 + sizeof(UnityEngine.Transform) = 0x10 + 0x8

				constexpr auto Original = 0x10; // [10] Original : UnityEngine.Transform
			}
		}
	}

	// [Class] EFT.Profile
	namespace profile
	{
		constexpr auto size = 0x108;
		constexpr auto max_use_size = 0x68; // 0x60 + sizeof(-.GClass132A) = 0x60 + 0x8

		constexpr auto info = 0x28; // [28] Info : -.GClass1306
		constexpr auto skills = 0x60; // [60] Skills : -.GClass132A

		// [Class] -.GClass1306
		namespace _info
		{
			constexpr auto size = 0x98;
			constexpr auto max_use_size = 0x78; // 0x74 + sizeof(Int32) = 0x74 + 0x4

			constexpr auto Nickname = 0x10; // [10] Nickname : String
			constexpr auto GroupId = 0x20; // [20] GroupId : String
			constexpr auto Settings = 0x50; // [50] Settings : -.GClass12E5
			constexpr auto Side = 0x70; // [70] Side : System.Int32
			constexpr auto RegistrationDate = 0x74; // [74] RegistrationDate : Int32

			// [Class] -.GClass12E5
			namespace _Settings
			{
				constexpr auto size = 0x30;
				constexpr auto max_use_size = 0x1C; // 0x18 + sizeof(Int32) = 0x18 + 0x4

				constexpr auto Role = 0x10; // [10] Role : System.Int32
				constexpr auto Experience = 0x18; // [18] Experience : Int32
			}
		}

		// [Class] -.GClass132A
		namespace _skills
		{
			constexpr auto size = 0x7C0;
			constexpr auto max_use_size = 0x4C8; // 0x4C0 + sizeof(-.GClass132A.GClass1338) = 0x4C0 + 0x8

			constexpr auto SearchBuffSpeed = 0x4B8; // [4B8] SearchBuffSpeed : -.GClass132A.GClass1330
			constexpr auto SearchDouble = 0x4C0; // [4C0] SearchDouble : -.GClass132A.GClass1338
		}
	}

	// [Class] EFT.Interactive.LootItem
	namespace loot_item
	{
		constexpr auto size = 0xF0;
		constexpr auto max_use_size = 0xB8; // 0xB0 + sizeof(EFT.InventoryLogic.Item) = 0xB0 + 0x8

		constexpr auto Name = 0x50; // [50] Name : String
		constexpr auto InventoryLogicItem = 0xB0; // [B0] item_0xB0 : EFT.InventoryLogic.Item
		constexpr auto _renderers = 0x88; // [88] _renderers : System.Collections.Generic.List<Renderer>

		// [Class] EFT.InventoryLogic.Item
		namespace _InventoryLogicItem
		{
			constexpr auto size = 0x70;
			constexpr auto max_use_size = 0x68; // 0x64 + sizeof(Int32) = 0x64 + 0x4

			constexpr auto StackObjectsCount = 0x64; // [64] StackObjectsCount : Int32
		}
	}

	// [Class] EFT.Animations.ProceduralWeaponAnimation
	namespace pwa
	{
		constexpr auto size = 0x388;
		constexpr auto max_use_size = 0x1D0; // 0x1CC + sizeof(Single) = 0x1CC + 0x4

		constexpr auto mask = 0x118; // [118] Mask : System.Int32
		constexpr auto breath_effector = 0x28; // [28] Breath : EFT.Animations.BreathEffector
		constexpr auto shot_effector = 0x48; // [48] Shootingg : -.ShotEffector
		constexpr auto Walk = 0x30; // [30] Walk : -.WalkEffector
		constexpr auto MotionReact = 0x38; // [38] MotionReact : -.MotionEffector
		constexpr auto ForceReact = 0x40; // [40] ForceReact : -.ForceEffector
		constexpr auto _fovCompensatoryDistance = 0x1CC; // [1CC] _fovCompensatoryDistance : Single
		constexpr auto CameraSmoothTime = 0x164; // [164] CameraSmoothTime : Single

		// [Class] EFT.Animations.BreathEffector
		namespace breath
		{
			constexpr auto size = 0xF0;
			constexpr auto max_use_size = 0xA8; // 0xA4 + sizeof(Single) = 0xA4 + 0x4

			constexpr auto intensity = 0xA4; // [A4] Intensity : Single
		}

		// [Class] -.ShotEffector
		namespace recoil
		{
			constexpr auto size = 0x90;
			constexpr auto max_use_size = 0x7C; // 0x78 + sizeof(Single) = 0x78 + 0x4

			constexpr auto itensity = 0x78; // [78] Intensity : Single
		}

		// [Class] -.WalkEffector
		namespace _walk
		{
			constexpr auto size = 0x70;
			constexpr auto max_use_size = 0x48; // 0x44 + sizeof(Single) = 0x44 + 0x4

			constexpr auto itensity = 0x44; // [44] Intensity : Single
		}

		// [Class] -.MotionEffector
		namespace _motion
		{
			constexpr auto size = 0x110;
			constexpr auto max_use_size = 0xD4; // 0xD0 + sizeof(Single) = 0xD0 + 0x4

			constexpr auto itensity = 0xD0; // [D0] Intensity : Single
		}

		// [Class] -.ForceEffector
		namespace _force
		{
			constexpr auto size = 0x60;
			constexpr auto max_use_size = 0x2C; // 0x28 + sizeof(Single) = 0x28 + 0x4

			constexpr auto itensity = 0x28; // [28] Intensity : Single
		}
	}

	// [Class] -.EFTHardSettings
	namespace hard_settings
	{
		constexpr auto size = 0x448;
		constexpr auto max_use_size = 0x1FC; // 0x1F8 + sizeof(Single) = 0x1F8 + 0x4

		constexpr auto LOOT_RAYCAST_DISTANCE = 0x1F4; // [1F4] LOOT_RAYCAST_DISTANCE : Single
		constexpr auto DOOR_RAYCAST_DISTANCE = 0x1F8; // [1F8] DOOR_RAYCAST_DISTANCE : Single
	}

	// [Class] BSG.CameraEffects.NightVision
	namespace night_vision
	{
		constexpr auto size = 0x118;
		constexpr auto max_use_size = 0xE5; // 0xE4 + sizeof(Boolean) = 0xE4 + 0x1

		constexpr auto on = 0xE4; // [E4] _on : Boolean
	}

	// [Class] -.VisorEffect
	namespace visor_effect
	{
		constexpr auto size = 0x110;
		constexpr auto max_use_size = 0xBC; // 0xB8 + sizeof(Single) = 0xB8 + 0x4

		constexpr auto Intensity = 0xB8; // [B8] Intensity : Single
	}

	// [Class] -.ThermalVision
	namespace thermal_vision
	{
		constexpr auto size = 0x100;
		constexpr auto max_use_size = 0xE1; // 0xE0 + sizeof(Boolean) = 0xE0 + 0x1

		constexpr auto On = 0xE0; // [E0] On : Boolean
	}
}
