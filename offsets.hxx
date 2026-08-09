#pragma once

#include <cstdint>

// Dumped by: decamp dumper
// Website: https://decamp.dev/offsets
// Roblox version: version-d584fb6c717a43d9
namespace Offsets
{
	namespace Build
	{
		inline constexpr std::uintptr_t ImageSize = 0x8F66000;
	}

	namespace Pointers
	{
		namespace DataModel
		{
			inline constexpr std::uintptr_t Pointer = 0x8A5D748;
			inline constexpr std::uintptr_t RealDataModel = 0x1D0;
		}
		namespace PlayerConfigurer
		{
			inline constexpr std::uintptr_t Pointer = 0x868C4A8;
		}
		namespace TaskScheduler
		{
			inline constexpr std::uintptr_t Pointer = 0x879A6E8;
		}
		namespace VisualEngine
		{
			inline constexpr std::uintptr_t Pointer = 0x811D0A0;
			inline constexpr std::uintptr_t Dimensions = 0xAE0;
			inline constexpr std::uintptr_t FakeDataModel = 0xAC0;
			inline constexpr std::uintptr_t RenderView = 0xBF0;
			inline constexpr std::uintptr_t ViewMatrix = 0x180;
		}
	}

	namespace FastClusterEntity
	{
		inline constexpr std::uintptr_t AlphaByte = 0x14;
		inline constexpr std::uintptr_t BBoxMaxX = 0xA4;
		inline constexpr std::uintptr_t BBoxMaxY = 0xA8;
		inline constexpr std::uintptr_t BBoxMaxZ = 0xAC;
		inline constexpr std::uintptr_t BBoxMinX = 0x98;
		inline constexpr std::uintptr_t BBoxMinY = 0x9C;
		inline constexpr std::uintptr_t BBoxMinZ = 0xA0;
		inline constexpr std::uintptr_t ContextPtr = 0x8;
		inline constexpr std::uintptr_t DecalMaterialPtr = 0x48;
		inline constexpr std::uintptr_t MaterialPtr = 0x20;
		inline constexpr std::uintptr_t PrimitiveIndexArrayPtr = 0x80;
		inline constexpr std::uintptr_t RenderQueueId = 0x10;
		inline constexpr std::uintptr_t TechniqueArrayPtr = 0x70;
		inline constexpr std::uintptr_t VTableRva = 0x68CDA58;
	}

	namespace AirProperties
	{
		inline constexpr std::uintptr_t AirDensity = 0x18;
		inline constexpr std::uintptr_t GlobalWind = 0x3C;
	}

	namespace Animation
	{
		inline constexpr std::uintptr_t AnimationId = 0xB0;
	}

	namespace AnimationClip
	{
		inline constexpr std::uintptr_t Guid = 0xBC;
		inline constexpr std::uintptr_t GuidBinaryString = 0xBC;
		inline constexpr std::uintptr_t Loop = 0xCC;
		inline constexpr std::uintptr_t Priority = 0xB8;
	}

	namespace AnimationStreamTrack
	{
		inline constexpr std::uintptr_t Animation = 0xF0;
		inline constexpr std::uintptr_t FACSDataLod = 0xF0;
		inline constexpr std::uintptr_t WeightTarget = 0xC0;
	}

	namespace AnimationTrack
	{
		inline constexpr std::uintptr_t Animator = 0x108;
		inline constexpr std::uintptr_t IsPlaying = 0xA90;
		inline constexpr std::uintptr_t Length = 0x170;
		inline constexpr std::uintptr_t Looped = 0xE5;
		inline constexpr std::uintptr_t Speed = 0xD4;
		inline constexpr std::uintptr_t TimePosition = 0xD8;
		inline constexpr std::uintptr_t WeightTarget = 0xE0;
	}

	namespace Animator
	{
		inline constexpr std::uintptr_t AnimTrackMetadata0 = 0x3A4;
		inline constexpr std::uintptr_t AnimTrackMetadata1 = 0x3A8;
		inline constexpr std::uintptr_t AnimTrackMetadata10 = 0x3AC;
		inline constexpr std::uintptr_t AnimTrackMetadata11 = 0x3B0;
		inline constexpr std::uintptr_t AnimTrackMetadata12 = 0x3B4;
		inline constexpr std::uintptr_t AnimTrackMetadata13 = 0x3B8;
		inline constexpr std::uintptr_t AnimTrackMetadata14 = 0x3BC;
		inline constexpr std::uintptr_t AnimTrackMetadata15 = 0x3C0;
		inline constexpr std::uintptr_t AnimTrackMetadata2 = 0x3C4;
		inline constexpr std::uintptr_t AnimTrackMetadata3 = 0x3C8;
		inline constexpr std::uintptr_t AnimTrackMetadata4 = 0x3CC;
		inline constexpr std::uintptr_t AnimTrackMetadata5 = 0x3D0;
		inline constexpr std::uintptr_t AnimTrackMetadata6 = 0x3D4;
		inline constexpr std::uintptr_t AnimTrackMetadata7 = 0x3D8;
		inline constexpr std::uintptr_t AnimTrackMetadata8 = 0x3DC;
		inline constexpr std::uintptr_t AnimTrackMetadata9 = 0x3E0;
		inline constexpr std::uintptr_t AnimTrackPlayState0 = 0xF0;
		inline constexpr std::uintptr_t AnimTrackPlayState1 = 0x100;
		inline constexpr std::uintptr_t AnimTrackPlayState10 = 0x110;
		inline constexpr std::uintptr_t AnimTrackPlayState11 = 0x120;
		inline constexpr std::uintptr_t AnimTrackPlayState12 = 0x130;
		inline constexpr std::uintptr_t AnimTrackPlayState13 = 0x140;
		inline constexpr std::uintptr_t AnimTrackPlayState14 = 0x150;
		inline constexpr std::uintptr_t AnimTrackPlayState15 = 0x160;
		inline constexpr std::uintptr_t AnimTrackPlayState2 = 0x170;
		inline constexpr std::uintptr_t AnimTrackPlayState3 = 0x180;
		inline constexpr std::uintptr_t AnimTrackPlayState4 = 0x190;
		inline constexpr std::uintptr_t AnimTrackPlayState5 = 0x1A0;
		inline constexpr std::uintptr_t AnimTrackPlayState6 = 0x1B0;
		inline constexpr std::uintptr_t AnimTrackPlayState7 = 0x1C0;
		inline constexpr std::uintptr_t AnimTrackPlayState8 = 0x1D0;
		inline constexpr std::uintptr_t AnimTrackPlayState9 = 0x1E0;
		inline constexpr std::uintptr_t AnimTrackWeight0 = 0x1F0;
		inline constexpr std::uintptr_t AnimTrackWeight1 = 0x200;
		inline constexpr std::uintptr_t AnimTrackWeight10 = 0x210;
		inline constexpr std::uintptr_t AnimTrackWeight11 = 0x220;
		inline constexpr std::uintptr_t AnimTrackWeight12 = 0x230;
		inline constexpr std::uintptr_t AnimTrackWeight13 = 0x240;
		inline constexpr std::uintptr_t AnimTrackWeight14 = 0x250;
		inline constexpr std::uintptr_t AnimTrackWeight15 = 0x260;
		inline constexpr std::uintptr_t AnimTrackWeight2 = 0x270;
		inline constexpr std::uintptr_t AnimTrackWeight3 = 0x280;
		inline constexpr std::uintptr_t AnimTrackWeight4 = 0x290;
		inline constexpr std::uintptr_t AnimTrackWeight5 = 0x2A0;
		inline constexpr std::uintptr_t AnimTrackWeight6 = 0x2B0;
		inline constexpr std::uintptr_t AnimTrackWeight7 = 0x2C0;
		inline constexpr std::uintptr_t AnimTrackWeight8 = 0x2D0;
		inline constexpr std::uintptr_t AnimTrackWeight9 = 0x2E0;
		inline constexpr std::uintptr_t AnimationId0 = 0x2F0;
		inline constexpr std::uintptr_t AnimationId1 = 0x2F8;
		inline constexpr std::uintptr_t AnimationId10 = 0x300;
		inline constexpr std::uintptr_t AnimationId11 = 0x308;
		inline constexpr std::uintptr_t AnimationId12 = 0x310;
		inline constexpr std::uintptr_t AnimationId13 = 0x318;
		inline constexpr std::uintptr_t AnimationId14 = 0x320;
		inline constexpr std::uintptr_t AnimationId15 = 0x328;
		inline constexpr std::uintptr_t AnimationId2 = 0x330;
		inline constexpr std::uintptr_t AnimationId3 = 0x338;
		inline constexpr std::uintptr_t AnimationId4 = 0x340;
		inline constexpr std::uintptr_t AnimationId5 = 0x348;
		inline constexpr std::uintptr_t AnimationId6 = 0x350;
		inline constexpr std::uintptr_t AnimationId7 = 0x358;
		inline constexpr std::uintptr_t AnimationId8 = 0x360;
		inline constexpr std::uintptr_t AnimationId9 = 0x368;
		inline constexpr std::uintptr_t EvaluationThrottled = 0x428;
		inline constexpr std::uintptr_t FacsReplicationData = 0xB8;
		inline constexpr std::uintptr_t PreferLodEnabled = 0x3E4;
		inline constexpr std::uintptr_t RootMotion = 0x370;
		inline constexpr std::uintptr_t RootMotionWeight = 0x3A0;
	}

	namespace Atmosphere
	{
		inline constexpr std::uintptr_t Color = 0xB8;
		inline constexpr std::uintptr_t Decay = 0xC4;
		inline constexpr std::uintptr_t Density = 0xD0;
		inline constexpr std::uintptr_t Glare = 0xD4;
		inline constexpr std::uintptr_t Haze = 0xD8;
		inline constexpr std::uintptr_t Offset = 0xDC;
	}

	namespace Attachment
	{
		inline constexpr std::uintptr_t Axis = 0xB8;
		inline constexpr std::uintptr_t CFrame = 0xB8;
		inline constexpr std::uintptr_t Orientation = 0xB8;
		inline constexpr std::uintptr_t Position = 0xC4;
		inline constexpr std::uintptr_t Rotation = 0xB8;
		inline constexpr std::uintptr_t SecondaryAxis = 0xD0;
		inline constexpr std::uintptr_t Visible = 0xDC;
		inline constexpr std::uintptr_t WorldAxis = 0xB8;
		inline constexpr std::uintptr_t WorldPosition = 0xC4;
		inline constexpr std::uintptr_t WorldSecondaryAxis = 0xD0;
	}

	namespace AuroraScript
	{
		inline constexpr std::uintptr_t Source = 0x130;
	}

	namespace AvatarAccessoryRules
	{
		inline constexpr std::uintptr_t AccessoryMode = 0xFC;
		inline constexpr std::uintptr_t CustomAccessoryMode = 0x100;
		inline constexpr std::uintptr_t CustomBackAccessoryEnabled = 0x108;
		inline constexpr std::uintptr_t CustomBackAccessoryId = 0xB0;
		inline constexpr std::uintptr_t CustomFaceAccessoryId = 0xB8;
		inline constexpr std::uintptr_t CustomFrontAccessoryEnabled = 0x10A;
		inline constexpr std::uintptr_t CustomFrontAccessoryId = 0xC0;
		inline constexpr std::uintptr_t CustomHairAccessoryEnabled = 0x10B;
		inline constexpr std::uintptr_t CustomHairAccessoryId = 0xC8;
		inline constexpr std::uintptr_t CustomHeadAccessoryEnabled = 0x10C;
		inline constexpr std::uintptr_t CustomHeadAccessoryId = 0xD0;
		inline constexpr std::uintptr_t CustomNeckAccessoryEnabled = 0x10D;
		inline constexpr std::uintptr_t CustomNeckAccessoryId = 0xD8;
		inline constexpr std::uintptr_t CustomShoulderAccessoryEnabled = 0x10E;
		inline constexpr std::uintptr_t CustomShoulderAccessoryId = 0xE0;
		inline constexpr std::uintptr_t CustomWaistAccessoryEnabled = 0x10F;
		inline constexpr std::uintptr_t CustomWaistAccessoryId = 0xE8;
		inline constexpr std::uintptr_t EnableEmissives = 0x110;
		inline constexpr std::uintptr_t EnableVFX = 0x112;
		inline constexpr std::uintptr_t LimitBounds = 0xF0;
		inline constexpr std::uintptr_t LimitMethod = 0x104;
	}

	namespace AvatarClothingRules
	{
		inline constexpr std::uintptr_t ClothingMode = 0x11C;
		inline constexpr std::uintptr_t CustomClassicPantsAccessoryEnabled = 0x124;
		inline constexpr std::uintptr_t CustomClassicPantsAccessoryId = 0xB0;
		inline constexpr std::uintptr_t CustomClassicShirtsAccessoryEnabled = 0x125;
		inline constexpr std::uintptr_t CustomClassicShirtsAccessoryId = 0xB8;
		inline constexpr std::uintptr_t CustomClassicTShirtsAccessoryEnabled = 0x126;
		inline constexpr std::uintptr_t CustomClassicTShirtsAccessoryId = 0xC0;
		inline constexpr std::uintptr_t CustomClothingMode = 0x120;
		inline constexpr std::uintptr_t CustomDressSkirtAccessoryEnabled = 0x127;
		inline constexpr std::uintptr_t CustomDressSkirtAccessoryId = 0xC8;
		inline constexpr std::uintptr_t CustomJacketAccessoryEnabled = 0x128;
		inline constexpr std::uintptr_t CustomJacketAccessoryId = 0xD0;
		inline constexpr std::uintptr_t CustomLeftShoesAccessoryEnabled = 0x129;
		inline constexpr std::uintptr_t CustomLeftShoesAccessoryId = 0xD8;
		inline constexpr std::uintptr_t CustomPantsAccessoryEnabled = 0x12A;
		inline constexpr std::uintptr_t CustomPantsAccessoryId = 0xE0;
		inline constexpr std::uintptr_t CustomRightShoesAccessoryEnabled = 0x12B;
		inline constexpr std::uintptr_t CustomRightShoesAccessoryId = 0xE8;
		inline constexpr std::uintptr_t CustomShirtAccessoryEnabled = 0x12C;
		inline constexpr std::uintptr_t CustomShirtAccessoryId = 0xF0;
		inline constexpr std::uintptr_t CustomShortsAccessoryId = 0xF8;
		inline constexpr std::uintptr_t CustomSweaterAccessoryEnabled = 0x12E;
		inline constexpr std::uintptr_t CustomSweaterAccessoryId = 0x100;
		inline constexpr std::uintptr_t CustomTShirtAccessoryEnabled = 0x12F;
		inline constexpr std::uintptr_t LimitBounds = 0x110;
	}

	namespace BackpackItem
	{
		inline constexpr std::uintptr_t TextureContent = 0x350;
	}

	namespace BasePart
	{
		inline constexpr std::uintptr_t Anchored = 0x128;
		inline constexpr std::uintptr_t AssemblyAngularVelocity = 0x128;
		inline constexpr std::uintptr_t AssemblyCenterOfMass = 0xCC;
		inline constexpr std::uintptr_t AssemblyMass = 0x128;
		inline constexpr std::uintptr_t AssemblyRootPart = 0x128;
		inline constexpr std::uintptr_t AudioCanCollide = 0xD4;
		inline constexpr std::uintptr_t BackParamA = 0x128;
		inline constexpr std::uintptr_t BackParamB = 0x128;
		inline constexpr std::uintptr_t BackSurface = 0x128;
		inline constexpr std::uintptr_t BackSurfaceInput = 0x128;
		inline constexpr std::uintptr_t BottomParamA = 0x128;
		inline constexpr std::uintptr_t BottomParamB = 0x128;
		inline constexpr std::uintptr_t BottomSurface = 0x128;
		inline constexpr std::uintptr_t BottomSurfaceInput = 0x128;
		inline constexpr std::uintptr_t BrickColor = 0x148;
		inline constexpr std::uintptr_t CFrame = 0x128;
		inline constexpr std::uintptr_t CanCollide = 0x128;
		inline constexpr std::uintptr_t CanQuery = 0x128;
		inline constexpr std::uintptr_t CanTouch = 0x128;
		inline constexpr std::uintptr_t CastShadow = 0xD5;
		inline constexpr std::uintptr_t CenterOfMass = 0xCC;
		inline constexpr std::uintptr_t CollisionGroup = 0x128;
		inline constexpr std::uintptr_t CollisionGroupId = 0x128;
		inline constexpr std::uintptr_t CollisionGroupReplicate = 0x128;
		inline constexpr std::uintptr_t Color = 0x148;
		inline constexpr std::uintptr_t Color3uint8 = 0x148;
		inline constexpr std::uintptr_t CurrentPhysicalProperties = 0x128;
		inline constexpr std::uintptr_t CustomPhysicalProperties = 0x128;
		inline constexpr std::uintptr_t DraggingV1 = 0x128;
		inline constexpr std::uintptr_t Elasticity = 0x128;
		inline constexpr std::uintptr_t EnableFluidForces = 0x128;
		inline constexpr std::uintptr_t ExtentsCFrame = 0x128;
		inline constexpr std::uintptr_t ExtentsSize = 0x128;
		inline constexpr std::uintptr_t Friction = 0x128;
		inline constexpr std::uintptr_t FrontParamA = 0x128;
		inline constexpr std::uintptr_t FrontParamB = 0x128;
		inline constexpr std::uintptr_t FrontSurface = 0x128;
		inline constexpr std::uintptr_t FrontSurfaceInput = 0x128;
		inline constexpr std::uintptr_t LeftParamA = 0x128;
		inline constexpr std::uintptr_t LeftParamB = 0x128;
		inline constexpr std::uintptr_t LeftSurface = 0x128;
		inline constexpr std::uintptr_t LeftSurfaceInput = 0x128;
		inline constexpr std::uintptr_t LocalTransparencyModifier = 0xC8;
		inline constexpr std::uintptr_t Locked = 0xD6;
		inline constexpr std::uintptr_t Mass = 0x128;
		inline constexpr std::uintptr_t Massless = 0xD7;
		inline constexpr std::uintptr_t Material = 0x128;
		inline constexpr std::uintptr_t NetworkIsSleeping = 0x128;
		inline constexpr std::uintptr_t NetworkOwnerV3 = 0x128;
		inline constexpr std::uintptr_t NetworkOwnershipRule = 0x128;
		inline constexpr std::uintptr_t ReceiveAge = 0x128;
		inline constexpr std::uintptr_t Reflectance = 0xCC;
		inline constexpr std::uintptr_t RightParamA = 0x128;
		inline constexpr std::uintptr_t RightParamB = 0x128;
		inline constexpr std::uintptr_t RightSurface = 0x128;
		inline constexpr std::uintptr_t RightSurfaceInput = 0x128;
		inline constexpr std::uintptr_t RootPriority = 0x128;
		inline constexpr std::uintptr_t RotVelocity = 0x128;
		inline constexpr std::uintptr_t Size = 0x128;
		inline constexpr std::uintptr_t SpecificGravity = 0x128;
		inline constexpr std::uintptr_t TopParamA = 0x128;
		inline constexpr std::uintptr_t TopParamB = 0x128;
		inline constexpr std::uintptr_t TopSurface = 0x128;
		inline constexpr std::uintptr_t TopSurfaceInput = 0x128;
		inline constexpr std::uintptr_t Transparency = 0xD0;
		inline constexpr std::uintptr_t Velocity = 0x128;
	}

	namespace Beam
	{
		inline constexpr std::uintptr_t Attachment0 = 0x168;
		inline constexpr std::uintptr_t Attachment1 = 0x178;
		inline constexpr std::uintptr_t Brightness = 0x180;
		inline constexpr std::uintptr_t Color = 0xF8;
		inline constexpr std::uintptr_t CurveSize0 = 0x184;
		inline constexpr std::uintptr_t CurveSize1 = 0x188;
		inline constexpr std::uintptr_t Enabled = 0x1B4;
		inline constexpr std::uintptr_t FaceCamera = 0x1B5;
		inline constexpr std::uintptr_t LightEmission = 0x18C;
		inline constexpr std::uintptr_t LightInfluence = 0x190;
		inline constexpr std::uintptr_t LocalTransparencyModifier = 0x194;
		inline constexpr std::uintptr_t Segments = 0x198;
		inline constexpr std::uintptr_t TextureLength = 0x19C;
		inline constexpr std::uintptr_t TextureMode = 0x1A0;
		inline constexpr std::uintptr_t TextureSpeed = 0x1A4;
		inline constexpr std::uintptr_t Transparency = 0xB8;
		inline constexpr std::uintptr_t Width0 = 0x1A8;
		inline constexpr std::uintptr_t Width1 = 0x1AC;
		inline constexpr std::uintptr_t ZOffset = 0x1B0;
	}

	namespace BevelMesh
	{
		inline constexpr std::uintptr_t Bevel = 0xE0;
		inline constexpr std::uintptr_t Bulge = 0xE8;
	}

	namespace BinaryStringValue
	{
		inline constexpr std::uintptr_t Value = 0xB8;
	}

	namespace BloomEffect
	{
		inline constexpr std::uintptr_t Intensity = 0xB8;
		inline constexpr std::uintptr_t Size = 0xBC;
		inline constexpr std::uintptr_t Threshold = 0xC0;
	}

	namespace BlurEffect
	{
		inline constexpr std::uintptr_t Size = 0xB8;
	}

	namespace BodyColors
	{
		inline constexpr std::uintptr_t HeadColor = 0xC0;
		inline constexpr std::uintptr_t HeadColor3 = 0xC4;
		inline constexpr std::uintptr_t LeftArmColor = 0xD0;
		inline constexpr std::uintptr_t LeftArmColor3 = 0xD4;
		inline constexpr std::uintptr_t LeftLegColor = 0xE0;
		inline constexpr std::uintptr_t LeftLegColor3 = 0xE4;
		inline constexpr std::uintptr_t RightArmColor = 0xF0;
		inline constexpr std::uintptr_t RightArmColor3 = 0xF4;
		inline constexpr std::uintptr_t RightLegColor = 0x100;
		inline constexpr std::uintptr_t TorsoColor = 0x110;
		inline constexpr std::uintptr_t TorsoColor3 = 0x114;
	}

	namespace BodyPartDescription
	{
		inline constexpr std::uintptr_t AssetId = 0xE0;
		inline constexpr std::uintptr_t BodyPart = 0xF4;
		inline constexpr std::uintptr_t Color = 0xE8;
		inline constexpr std::uintptr_t HeadShape = 0xC0;
		inline constexpr std::uintptr_t Instance = 0xD0;
	}

	namespace Bone
	{
		inline constexpr std::uintptr_t Transform = 0x180;
	}

	namespace CFrameValue
	{
		inline constexpr std::uintptr_t Value = 0xB8;
	}

	namespace Camera
	{
		inline constexpr std::uintptr_t CFrame = 0xD8;
		inline constexpr std::uintptr_t CameraSubject = 0xC8;
		inline constexpr std::uintptr_t CameraType = 0x138;
		inline constexpr std::uintptr_t CoordinateFrame = 0xD8;
		inline constexpr std::uintptr_t DiagonalFieldOfView = 0x13C;
		inline constexpr std::uintptr_t FieldOfView = 0x140;
		inline constexpr std::uintptr_t FieldOfViewMode = 0x144;
		inline constexpr std::uintptr_t Focus = 0x108;
		inline constexpr std::uintptr_t HeadLocked = 0x154;
		inline constexpr std::uintptr_t HeadScale = 0x148;
		inline constexpr std::uintptr_t MaxAxisFieldOfView = 0x14C;
		inline constexpr std::uintptr_t NearPlaneZ = 0x150;
		inline constexpr std::uintptr_t VRTiltAndRollEnabled = 0x155;
		inline constexpr std::uintptr_t ViewportSize = 0x290;
	}

	namespace CharacterMesh
	{
		inline constexpr std::uintptr_t BaseTextureContent = 0xC0;
		inline constexpr std::uintptr_t BaseTextureId = 0xD0;
		inline constexpr std::uintptr_t BodyPart = 0x148;
		inline constexpr std::uintptr_t MeshContent = 0xE8;
		inline constexpr std::uintptr_t MeshId = 0xF8;
		inline constexpr std::uintptr_t OverlayTextureContent = 0x118;
		inline constexpr std::uintptr_t OverlayTextureId = 0x128;
	}

	namespace Clothing
	{
		inline constexpr std::uintptr_t Color3 = 0x120;
		inline constexpr std::uintptr_t Outfit1 = 0xC0;
		inline constexpr std::uintptr_t Outfit1Content = 0xC0;
		inline constexpr std::uintptr_t Outfit2 = 0xF0;
		inline constexpr std::uintptr_t Outfit2Content = 0xF0;
	}

	namespace Clouds
	{
		inline constexpr std::uintptr_t Cover = 0xBC;
		inline constexpr std::uintptr_t Density = 0xC0;
		inline constexpr std::uintptr_t Enabled = 0xC4;
	}

	namespace ColorCorrectionEffect
	{
		inline constexpr std::uintptr_t Brightness = 0xC4;
		inline constexpr std::uintptr_t Contrast = 0xC8;
		inline constexpr std::uintptr_t Saturation = 0xCC;
		inline constexpr std::uintptr_t TintColor = 0xC0;
	}

	namespace ColorGradingEffect
	{
		inline constexpr std::uintptr_t TonemapperPreset = 0xB8;
	}

	namespace CompositeValueCurve
	{
		inline constexpr std::uintptr_t CurveType = 0xB0;
	}

	namespace DataModel
	{
		inline constexpr std::uintptr_t CreatorId = 0x180;
		inline constexpr std::uintptr_t CreatorType = 0x1A0;
		inline constexpr std::uintptr_t ForceR15 = 0x1B0;
		inline constexpr std::uintptr_t GameId = 0x188;
		inline constexpr std::uintptr_t GearGenreSetting = 0x70C;
		inline constexpr std::uintptr_t Genre = 0x1A4;
		inline constexpr std::uintptr_t MatchmakingType = 0x1A8;
		inline constexpr std::uintptr_t PlaceId = 0x190;
		inline constexpr std::uintptr_t PlaceVersion = 0x1AC;
		inline constexpr std::uintptr_t Workspace = 0x160;
	}

	namespace DataModelMesh
	{
		inline constexpr std::uintptr_t Offset = 0xB8;
		inline constexpr std::uintptr_t Scale = 0xC4;
		inline constexpr std::uintptr_t VertexColor = 0xD0;
	}

	namespace EditableMesh
	{
		inline constexpr std::uintptr_t FixedSize = 0x68;
		inline constexpr std::uintptr_t IsReplicatedCopy = 0x69;
		inline constexpr std::uintptr_t MeshData = 0xA0;
	}

	namespace EditableService
	{
		inline constexpr std::uintptr_t EditableStatus = 0xC8;
	}

	namespace EulerRotationCurve
	{
		inline constexpr std::uintptr_t RotationOrder = 0xB0;
	}

	namespace ExperienceInviteOptions
	{
		inline constexpr std::uintptr_t InviteUser = 0x110;
		inline constexpr std::uintptr_t LaunchData = 0xD0;
		inline constexpr std::uintptr_t PromptMessage = 0xF0;
	}

	namespace ExperienceStateCaptureService
	{
		inline constexpr std::uintptr_t HiddenSelectionEnabled = 0xC4;
		inline constexpr std::uintptr_t IsInCaptureMode = 0xC6;
		inline constexpr std::uintptr_t SelectionMode = 0xC0;
	}

	namespace GuiBase2d
	{
		inline constexpr std::uintptr_t AbsoluteRotation = 0xE8;
		inline constexpr std::uintptr_t AbsoluteSize = 0x114;
		inline constexpr std::uintptr_t ActiveQueryNames = 0x4B0;
		inline constexpr std::uintptr_t AutoLocalize = 0x134;
		inline constexpr std::uintptr_t IsNotOccluded = 0x135;
		inline constexpr std::uintptr_t Localize = 0x134;
		inline constexpr std::uintptr_t RawRect2D = 0x10C;
		inline constexpr std::uintptr_t ReplicatedInsertionOrder = 0x11C;
		inline constexpr std::uintptr_t RootLocalizationTable = 0xE0;
		inline constexpr std::uintptr_t SelectionBehaviorDown = 0x120;
		inline constexpr std::uintptr_t SelectionBehaviorLeft = 0x124;
		inline constexpr std::uintptr_t SelectionBehaviorRight = 0x128;
		inline constexpr std::uintptr_t SelectionBehaviorUp = 0x12C;
		inline constexpr std::uintptr_t SelectionGroup = 0x136;
		inline constexpr std::uintptr_t TotalGroupScale = 0x130;
	}

	namespace GuiBase3d
	{
		inline constexpr std::uintptr_t Color = 0xD8;
		inline constexpr std::uintptr_t Color3 = 0xD8;
		inline constexpr std::uintptr_t Transparency = 0xE4;
		inline constexpr std::uintptr_t Visible = 0xE8;
	}

	namespace GuiObject
	{
		inline constexpr std::uintptr_t Active = 0x5A8;
		inline constexpr std::uintptr_t AnchorPoint = 0x558;
		inline constexpr std::uintptr_t AutomaticSize = 0x560;
		inline constexpr std::uintptr_t BackgroundColor3 = 0x540;
		inline constexpr std::uintptr_t BackgroundTransparency = 0x564;
		inline constexpr std::uintptr_t BorderColor = 0x54C;
		inline constexpr std::uintptr_t BorderColor3 = 0x54C;
		inline constexpr std::uintptr_t BorderMode = 0x568;
		inline constexpr std::uintptr_t BorderSizePixel = 0x56C;
		inline constexpr std::uintptr_t ClipsDescendants = 0x5A9;
		inline constexpr std::uintptr_t DragBeginConnectionCount = 0x570;
		inline constexpr std::uintptr_t DragStoppedConnectionCount = 0x574;
		inline constexpr std::uintptr_t Draggable = 0x5AA;
		inline constexpr std::uintptr_t GuiState = 0x578;
		inline constexpr std::uintptr_t InputSink = 0x57C;
		inline constexpr std::uintptr_t Interactable = 0x5AB;
		inline constexpr std::uintptr_t LayoutOrder = 0x580;
		inline constexpr std::uintptr_t MouseEnterConnectionCount = 0x584;
		inline constexpr std::uintptr_t MouseLeaveConnectionCount = 0x588;
		inline constexpr std::uintptr_t MouseMovedConnectionCount = 0x58C;
		inline constexpr std::uintptr_t MouseWheelBackwardConnectionCount = 0x590;
		inline constexpr std::uintptr_t MouseWheelForwardConnectionCount = 0x594;
		inline constexpr std::uintptr_t NextSelectionDown = 0x4C8;
		inline constexpr std::uintptr_t NextSelectionLeft = 0x4D8;
		inline constexpr std::uintptr_t NextSelectionRight = 0x4E8;
		inline constexpr std::uintptr_t NextSelectionUp = 0x4F8;
		inline constexpr std::uintptr_t Position = 0x510;
		inline constexpr std::uintptr_t Rotation = 0x598;
		inline constexpr std::uintptr_t Selectable = 0x5AC;
		inline constexpr std::uintptr_t SelectionImageObject = 0x500;
		inline constexpr std::uintptr_t SelectionOrder = 0x59C;
		inline constexpr std::uintptr_t SelectionRect2D = 0x520;
		inline constexpr std::uintptr_t Size = 0x530;
		inline constexpr std::uintptr_t SizeConstraint = 0x5A0;
		inline constexpr std::uintptr_t Transparency = 0x564;
		inline constexpr std::uintptr_t Visible = 0x5AD;
		inline constexpr std::uintptr_t ZIndex = 0x5A4;
	}

	namespace Highlight
	{
		inline constexpr std::uintptr_t Adornee = 0xC0;
		inline constexpr std::uintptr_t DepthMode = 0xE0;
		inline constexpr std::uintptr_t Enabled = 0xF4;
		inline constexpr std::uintptr_t FillColor = 0xC8;
		inline constexpr std::uintptr_t FillTransparency = 0xE4;
		inline constexpr std::uintptr_t LineThickness = 0xE8;
		inline constexpr std::uintptr_t OutlineColor = 0xD4;
		inline constexpr std::uintptr_t OutlineTransparency = 0xEC;
		inline constexpr std::uintptr_t ReservedId = 0xF0;
	}

	namespace Humanoid
	{
		inline constexpr std::uintptr_t AutoJumpEnabled = 0x1D4;
		inline constexpr std::uintptr_t AutoRotate = 0x1D5;
		inline constexpr std::uintptr_t AutomaticScalingEnabled = 0x1D6;
		inline constexpr std::uintptr_t BreakJointsOnDeath = 0x1D7;
		inline constexpr std::uintptr_t CameraMaxDistance = 0x170;
		inline constexpr std::uintptr_t CameraMinDistance = 0x174;
		inline constexpr std::uintptr_t CameraMode = 0x178;
		inline constexpr std::uintptr_t CameraOffset = 0x128;
		inline constexpr std::uintptr_t CollisionType = 0x17C;
		inline constexpr std::uintptr_t DisplayDistanceType = 0x180;
		inline constexpr std::uintptr_t DisplayName = 0xB8;
		inline constexpr std::uintptr_t EvaluateStateMachine = 0x1D8;
		inline constexpr std::uintptr_t FinishedState = 0x1D9;
		inline constexpr std::uintptr_t FloorMaterial = 0x890;
		inline constexpr std::uintptr_t Health = 0x190;
		inline constexpr std::uintptr_t HealthDisplayDistance = 0x188;
		inline constexpr std::uintptr_t HealthDisplayType = 0x18C;
		inline constexpr std::uintptr_t Health_XML = 0x190;
		inline constexpr std::uintptr_t HipHeight = 0x194;
		inline constexpr std::uintptr_t InternalBodyScale = 0x134;
		inline constexpr std::uintptr_t InternalDisplayName = 0xD8;
		inline constexpr std::uintptr_t InternalHeadScale = 0x198;
		inline constexpr std::uintptr_t InternalOriginalHipHeight = 0x19C;
		inline constexpr std::uintptr_t Jump = 0x1DA;
		inline constexpr std::uintptr_t JumpHeight = 0x1A0;
		inline constexpr std::uintptr_t JumpPower = 0x1A4;
		inline constexpr std::uintptr_t JumpReplicate = 0x1DA;
		inline constexpr std::uintptr_t LeftLeg = 0x1C0;
		inline constexpr std::uintptr_t MaxHealth = 0x1A8;
		inline constexpr std::uintptr_t MaxSlopeAngle = 0x1AC;
		inline constexpr std::uintptr_t MoveDirection = 0x140;
		inline constexpr std::uintptr_t MoveDirectionInternal = 0x140;
		inline constexpr std::uintptr_t NameDisplayDistance = 0x1B0;
		inline constexpr std::uintptr_t NameOcclusion = 0x1B4;
		inline constexpr std::uintptr_t NetworkHumanoidState = 0x1B8;
		inline constexpr std::uintptr_t NoFloorTimerState = 0x1BC;
		inline constexpr std::uintptr_t OverrideDefaultCollisions = 0x1DB;
		inline constexpr std::uintptr_t PlatformStand = 0x1DC;
		inline constexpr std::uintptr_t RequiresNeck = 0x1DD;
		inline constexpr std::uintptr_t RigType = 0x1C0;
		inline constexpr std::uintptr_t RightLeg = 0x1C0;
		inline constexpr std::uintptr_t RootPart = 0x1C0;
		inline constexpr std::uintptr_t RotationType = 0x1C4;
		inline constexpr std::uintptr_t SeatPart = 0x108;
		inline constexpr std::uintptr_t Sit = 0x1DE;
		inline constexpr std::uintptr_t Strafe = 0x1DF;
		inline constexpr std::uintptr_t TargetPoint = 0x14C;
		inline constexpr std::uintptr_t TimerState = 0x1C8;
		inline constexpr std::uintptr_t Torso = 0x1C0;
		inline constexpr std::uintptr_t UseJumpPower = 0x1E0;
		inline constexpr std::uintptr_t WalkAngleError = 0x1CC;
		inline constexpr std::uintptr_t WalkDirection = 0x158;
		inline constexpr std::uintptr_t WalkSpeed = 0x1D0;
		inline constexpr std::uintptr_t WalkToPart = 0x118;
		inline constexpr std::uintptr_t WalkToPoint = 0x164;
	}

	namespace HumanoidDescription
	{
		inline constexpr std::uintptr_t AccessoryBlob = 0x168;
		inline constexpr std::uintptr_t BodyTypeScale = 0x138;
		inline constexpr std::uintptr_t ClimbAnimation = 0xD8;
		inline constexpr std::uintptr_t DepthScale = 0x13C;
		inline constexpr std::uintptr_t EmotesDataInternal = 0xB8;
		inline constexpr std::uintptr_t EquippedEmotesDataInternal = 0xC8;
		inline constexpr std::uintptr_t Face = 0xE0;
		inline constexpr std::uintptr_t FallAnimation = 0xE8;
		inline constexpr std::uintptr_t GraphicTShirt = 0xF0;
		inline constexpr std::uintptr_t HeadScale = 0x140;
		inline constexpr std::uintptr_t HeightScale = 0x144;
		inline constexpr std::uintptr_t IdleAnimation = 0xF8;
		inline constexpr std::uintptr_t JumpAnimation = 0x100;
		inline constexpr std::uintptr_t NumberEmotesLoaded = 0x148;
		inline constexpr std::uintptr_t Pants = 0x110;
		inline constexpr std::uintptr_t ProportionScale = 0x14C;
		inline constexpr std::uintptr_t ResetIncludesBodyParts = 0x154;
		inline constexpr std::uintptr_t RunAnimation = 0x118;
		inline constexpr std::uintptr_t Shirt = 0x120;
		inline constexpr std::uintptr_t StaticFacialAnimation = 0x155;
		inline constexpr std::uintptr_t SwimAnimation = 0x128;
		inline constexpr std::uintptr_t UseAvatarSettings = 0x156;
		inline constexpr std::uintptr_t WidthScale = 0x150;
	}

	namespace HumanoidRigDescription
	{
		inline constexpr std::uintptr_t Chest = 0xD0;
		inline constexpr std::uintptr_t HeadBase = 0xE0;
		inline constexpr std::uintptr_t LeftAnkle = 0xF0;
		inline constexpr std::uintptr_t LeftClavicle = 0x100;
		inline constexpr std::uintptr_t LeftElbow = 0x110;
		inline constexpr std::uintptr_t LeftHip = 0x120;
		inline constexpr std::uintptr_t LeftKnee = 0x130;
		inline constexpr std::uintptr_t LeftShoulder = 0x140;
		inline constexpr std::uintptr_t LeftWrist = 0x160;
		inline constexpr std::uintptr_t Neck = 0x170;
		inline constexpr std::uintptr_t RightAnkle = 0x180;
		inline constexpr std::uintptr_t RightClavicle = 0x190;
		inline constexpr std::uintptr_t RightElbow = 0x1A0;
		inline constexpr std::uintptr_t RightHip = 0x1B0;
		inline constexpr std::uintptr_t RightWrist = 0x1F0;
	}

	namespace Instance
	{
		inline constexpr std::uintptr_t Archivable = 0xAA;
		inline constexpr std::uintptr_t AttributesReplicate = 0x96;
		inline constexpr std::uintptr_t AttributesSerialize = 0x96;
		inline constexpr std::uintptr_t Capabilities = 0x96;
		inline constexpr std::uintptr_t DefinesCapabilities = 0xAA;
		inline constexpr std::uintptr_t HistoryId = 0x96;
		inline constexpr std::uintptr_t Name = 0x70;
		inline constexpr std::uintptr_t Parent = 0x68;
		inline constexpr std::uintptr_t PredictionMode = 0xAC;
		inline constexpr std::uintptr_t Sandboxed = 0xAA;
		inline constexpr std::uintptr_t SourceAssetId = 0x96;
		inline constexpr std::uintptr_t Tags = 0x96;
		inline constexpr std::uintptr_t UniqueId = 0x96;
		inline constexpr std::uintptr_t numExpectedDirectChildren = 0x88;
	}

	namespace JointInstance
	{
		inline constexpr std::uintptr_t C0 = 0x180;
		inline constexpr std::uintptr_t C1 = 0x180;
		inline constexpr std::uintptr_t Enabled = 0xB8;
		inline constexpr std::uintptr_t Part0 = 0x118;
		inline constexpr std::uintptr_t Part1 = 0x128;
	}

	namespace Light
	{
		inline constexpr std::uintptr_t Brightness = 0xCC;
		inline constexpr std::uintptr_t Color = 0xC0;
		inline constexpr std::uintptr_t Enabled = 0xD0;
		inline constexpr std::uintptr_t Shadows = 0xD1;
	}

	namespace Lighting
	{
		inline constexpr std::uintptr_t Ambient = 0xD0;
		inline constexpr std::uintptr_t Brightness = 0x118;
		inline constexpr std::uintptr_t ColorShift_Bottom = 0xDC;
		inline constexpr std::uintptr_t ColorShift_Top = 0xE8;
		inline constexpr std::uintptr_t EnvironmentDiffuseScale = 0x11C;
		inline constexpr std::uintptr_t EnvironmentSpecularScale = 0x120;
		inline constexpr std::uintptr_t ExposureCompensation = 0x124;
		inline constexpr std::uintptr_t ExtendLightRangeTo120 = 0x128;
		inline constexpr std::uintptr_t FogColor = 0xF4;
		inline constexpr std::uintptr_t FogEnd = 0x12C;
		inline constexpr std::uintptr_t FogStart = 0x130;
		inline constexpr std::uintptr_t GeographicLatitude = 0x134;
		inline constexpr std::uintptr_t GlobalShadows = 0x144;
		inline constexpr std::uintptr_t LightingStyle = 0x138;
		inline constexpr std::uintptr_t OutdoorAmbient = 0x100;
		inline constexpr std::uintptr_t PrioritizeLightingQuality = 0x146;
		inline constexpr std::uintptr_t ShadowSoftness = 0x13C;
	}

	namespace LuaSourceContainer
	{
		inline constexpr std::uintptr_t CachedRemoteSourceLoadState = 0xF0;
		inline constexpr std::uintptr_t HasAssociatedDrafts = 0xF4;
		inline constexpr std::uintptr_t ScriptGuid = 0xD0;
	}

	namespace MaterialColors
	{
		inline constexpr std::uintptr_t Asphalt = 0x30;
		inline constexpr std::uintptr_t Basalt = 0x27;
		inline constexpr std::uintptr_t Brick = 0xF;
		inline constexpr std::uintptr_t Cobblestone = 0x33;
		inline constexpr std::uintptr_t Concrete = 0xC;
		inline constexpr std::uintptr_t CrackedLava = 0x2D;
		inline constexpr std::uintptr_t Glacier = 0x1B;
		inline constexpr std::uintptr_t Grass = 0x6;
		inline constexpr std::uintptr_t Ground = 0x2A;
		inline constexpr std::uintptr_t Ice = 0x36;
		inline constexpr std::uintptr_t LeafyGrass = 0x39;
		inline constexpr std::uintptr_t Limestone = 0x3F;
		inline constexpr std::uintptr_t Mud = 0x24;
		inline constexpr std::uintptr_t Pavement = 0x42;
		inline constexpr std::uintptr_t Rock = 0x18;
		inline constexpr std::uintptr_t Salt = 0x3C;
		inline constexpr std::uintptr_t Sand = 0x12;
		inline constexpr std::uintptr_t Sandstone = 0x21;
		inline constexpr std::uintptr_t Slate = 0x9;
		inline constexpr std::uintptr_t Snow = 0x1E;
		inline constexpr std::uintptr_t WoodPlanks = 0x15;
	}

	namespace MaterialLayer
	{
		inline constexpr std::uintptr_t ColorData = 0x24;
		inline constexpr std::uintptr_t FillModeByte = 0x11;
		inline constexpr std::uintptr_t Flags2 = 0x20;
		inline constexpr std::uintptr_t MatFlags = 0x18;
		inline constexpr std::uintptr_t Param = 0x1C;
		inline constexpr std::uintptr_t Stride = 0x88;
	}

	namespace MaterialService
	{
		inline constexpr std::uintptr_t Use2022Materials = 0x5D0;
		inline constexpr std::uintptr_t Use2022MaterialsXml = 0x5D0;
	}

	namespace MaterialVariant
	{
		inline constexpr std::uintptr_t AlphaMode = 0x200;
		inline constexpr std::uintptr_t AvgMetalness = 0x204;
		inline constexpr std::uintptr_t AvgRoughness = 0x208;
		inline constexpr std::uintptr_t BaseMaterial = 0x20C;
		inline constexpr std::uintptr_t EmissiveStrength = 0x210;
		inline constexpr std::uintptr_t EmissiveTint = 0x1F4;
		inline constexpr std::uintptr_t MaterialPattern = 0x214;
		inline constexpr std::uintptr_t StudsPerTile = 0x218;
		inline constexpr std::uintptr_t TexturePackContent = 0x1A8;
	}

	namespace MeshPart
	{
		inline constexpr std::uintptr_t AlternateMeshHash = 0x340;
		inline constexpr std::uintptr_t DoubleSided = 0x315;
		inline constexpr std::uintptr_t HasJointOffset = 0x314;
		inline constexpr std::uintptr_t HasSkinnedMesh = 0x316;
		inline constexpr std::uintptr_t InitialSize = 0x1C8;
		inline constexpr std::uintptr_t JointOffset = 0x300;
		inline constexpr std::uintptr_t MeshContent = 0x298;
		inline constexpr std::uintptr_t MeshID = 0x2A8;
		inline constexpr std::uintptr_t RenderFidelity = 0x30C;
		inline constexpr std::uintptr_t RenderFidelityReplicate = 0x30C;
		inline constexpr std::uintptr_t TextureContent = 0x2C8;
		inline constexpr std::uintptr_t TextureID = 0x2D8;
		inline constexpr std::uintptr_t VertexCount = 0x310;
	}

	namespace Model
	{
		inline constexpr std::uintptr_t LevelOfDetail = 0x13C;
		inline constexpr std::uintptr_t LodEntity = 0xD0;
		inline constexpr std::uintptr_t ModelMeshCFrame = 0x100;
		inline constexpr std::uintptr_t ModelMeshSize = 0x130;
		inline constexpr std::uintptr_t ModelStreamingMode = 0x140;
		inline constexpr std::uintptr_t PrimaryPart = 0x258;
		inline constexpr std::uintptr_t Scale = 0x144;
		inline constexpr std::uintptr_t ScaleFactor = 0x144;
		inline constexpr std::uintptr_t SlimAnimationTarget = 0xE0;
		inline constexpr std::uintptr_t SlimHash = 0xF0;
		inline constexpr std::uintptr_t WorldPivot = 0xF8;
		inline constexpr std::uintptr_t WorldPivotData = 0xF8;
	}

	namespace ModuleScript
	{
		inline constexpr std::uintptr_t ByteCode = 0x138;
		inline constexpr std::uintptr_t GUID = 0xD0;
		inline constexpr std::uintptr_t Hash = 0x148;
		inline constexpr std::uintptr_t IsCoreScript = 0xB0;
		inline constexpr std::uintptr_t Source = 0x130;
	}

	namespace Motor6D
	{
		inline constexpr std::uintptr_t EnableSkinning = 0x1B0;
	}

	namespace ParticleEmitter
	{
		inline constexpr std::uintptr_t Acceleration = 0x1E0;
		inline constexpr std::uintptr_t Brightness = 0x21C;
		inline constexpr std::uintptr_t Color = 0x178;
		inline constexpr std::uintptr_t Drag = 0x220;
		inline constexpr std::uintptr_t EmissionDirection = 0x224;
		inline constexpr std::uintptr_t Enabled = 0x268;
		inline constexpr std::uintptr_t FlipbookBlendFrames = 0x269;
		inline constexpr std::uintptr_t FlipbookLayout = 0x228;
		inline constexpr std::uintptr_t FlipbookMode = 0x22C;
		inline constexpr std::uintptr_t FlipbookSizeX = 0x230;
		inline constexpr std::uintptr_t FlipbookSizeY = 0x234;
		inline constexpr std::uintptr_t FlipbookStartRandom = 0x26A;
		inline constexpr std::uintptr_t LightEmission = 0x238;
		inline constexpr std::uintptr_t LightInfluence = 0x23C;
		inline constexpr std::uintptr_t LocalTransparencyModifier = 0x240;
		inline constexpr std::uintptr_t Orientation = 0x244;
		inline constexpr std::uintptr_t Rate = 0x248;
		inline constexpr std::uintptr_t Shape = 0x24C;
		inline constexpr std::uintptr_t ShapeInOut = 0x250;
		inline constexpr std::uintptr_t ShapePartial = 0x254;
		inline constexpr std::uintptr_t ShapeStyle = 0x258;
		inline constexpr std::uintptr_t Size = 0xB8;
		inline constexpr std::uintptr_t SpreadAngle = 0x214;
		inline constexpr std::uintptr_t Squash = 0xF8;
		inline constexpr std::uintptr_t TextureContent = 0x1B0;
		inline constexpr std::uintptr_t TimeScale = 0x25C;
		inline constexpr std::uintptr_t Transparency = 0x138;
		inline constexpr std::uintptr_t VelocityInheritance = 0x260;
		inline constexpr std::uintptr_t WindAffectsDrag = 0x26C;
		inline constexpr std::uintptr_t ZOffset = 0x264;
	}

	namespace Player
	{
		inline constexpr std::uintptr_t AccountAge = 0x35C;
		inline constexpr std::uintptr_t AccountAgeReplicate = 0x35C;
		inline constexpr std::uintptr_t AgeChecked = 0x360;
		inline constexpr std::uintptr_t AppearanceDidLoad = 0x3BC;
		inline constexpr std::uintptr_t AutoJumpEnabled = 0x3BD;
		inline constexpr std::uintptr_t CameraFieldOfView = 0x364;
		inline constexpr std::uintptr_t CameraFrustumRequested = 0x3BE;
		inline constexpr std::uintptr_t CameraMaxZoomDistance = 0x368;
		inline constexpr std::uintptr_t CameraMinZoomDistance = 0x36C;
		inline constexpr std::uintptr_t CameraMode = 0x370;
		inline constexpr std::uintptr_t CameraViewportSize = 0x354;
		inline constexpr std::uintptr_t CanLoadCharacterAppearance = 0x3BF;
		inline constexpr std::uintptr_t Character = 0x2A0;
		inline constexpr std::uintptr_t CharacterAppearance = 0xD8;
		inline constexpr std::uintptr_t CharacterAppearanceId = 0x300;
		inline constexpr std::uintptr_t ChararacterRegionId = 0x348;
		inline constexpr std::uintptr_t ChatAvailabilityStatus = 0xF8;
		inline constexpr std::uintptr_t ChatMode = 0xB0;
		inline constexpr std::uintptr_t ChatPrivacyMode = 0x374;
		inline constexpr std::uintptr_t CloudEditCameraCoordinateFrame = 0x318;
		inline constexpr std::uintptr_t CloudEditPlayerActive = 0x3C0;
		inline constexpr std::uintptr_t CountryRegionCodeReplicate = 0x118;
		inline constexpr std::uintptr_t DataComplexity = 0xA30;
		inline constexpr std::uintptr_t DataComplexityLimit = 0x378;
		inline constexpr std::uintptr_t DataReady = 0x3C1;
		inline constexpr std::uintptr_t DevCameraOcclusionMode = 0x37C;
		inline constexpr std::uintptr_t DevComputerCameraMode = 0x380;
		inline constexpr std::uintptr_t DevComputerMovementMode = 0x384;
		inline constexpr std::uintptr_t DevEnableMouseLock = 0x3C2;
		inline constexpr std::uintptr_t DevTouchCameraMode = 0x388;
		inline constexpr std::uintptr_t DevTouchMovementMode = 0x38C;
		inline constexpr std::uintptr_t DisplayName = 0x138;
		inline constexpr std::uintptr_t FollowUserId = 0x308;
		inline constexpr std::uintptr_t FollowUserIdReplicated = 0x308;
		inline constexpr std::uintptr_t GameplayPaused = 0x3C3;
		inline constexpr std::uintptr_t Guest = 0x310;
		inline constexpr std::uintptr_t HasRobloxSubscription = 0x3C4;
		inline constexpr std::uintptr_t HasVerifiedBadge = 0x3C5;
		inline constexpr std::uintptr_t HealthDisplayDistance = 0x390;
		inline constexpr std::uintptr_t InputLatency = 0x394;
		inline constexpr std::uintptr_t InternalCharacterAppearanceLoaded = 0x3C6;
		inline constexpr std::uintptr_t LocaleId = 0x738;
		inline constexpr std::uintptr_t MaximumSimulationRadius = 0x398;
		inline constexpr std::uintptr_t MembershipType = 0x39C;
		inline constexpr std::uintptr_t MembershipTypeReplicate = 0x39C;
		inline constexpr std::uintptr_t NameDisplayDistance = 0x3A0;
		inline constexpr std::uintptr_t NeedRegionalFallback = 0x3C7;
		inline constexpr std::uintptr_t Neutral = 0x3C8;
		inline constexpr std::uintptr_t OsPlatform = 0x158;
		inline constexpr std::uintptr_t PartyId = 0x178;
		inline constexpr std::uintptr_t PendingRequestedTool = 0x2B0;
		inline constexpr std::uintptr_t PlatformName = 0x198;
		inline constexpr std::uintptr_t RawJoinData = 0x1B8;
		inline constexpr std::uintptr_t ReplicationFocus = 0x2C0;
		inline constexpr std::uintptr_t RespawnLocation = 0x2D0;
		inline constexpr std::uintptr_t SimulationRadius = 0x3A4;
		inline constexpr std::uintptr_t StepIdOffset = 0x3A8;
		inline constexpr std::uintptr_t Team = 0x3AC;
		inline constexpr std::uintptr_t TeamColor = 0x3AC;
		inline constexpr std::uintptr_t Teleported = 0x3C9;
		inline constexpr std::uintptr_t TeleportedIn = 0x3CA;
		inline constexpr std::uintptr_t ThirdPartyTextChatRestrictionStatus = 0x3B0;
		inline constexpr std::uintptr_t UnfilteredChat = 0x3CB;
		inline constexpr std::uintptr_t User = 0xB8;
		inline constexpr std::uintptr_t UserId = 0xB8;
		inline constexpr std::uintptr_t UserIdModeReplicate = 0x3B4;
		inline constexpr std::uintptr_t VRDevice = 0x1D8;
		inline constexpr std::uintptr_t VREnabled = 0x3CC;
		inline constexpr std::uintptr_t VoiceChatVolume = 0x3B8;
	}

	namespace Primitive
	{
		inline constexpr std::uintptr_t AssemblyAngularVelocity = 0x104;
		inline constexpr std::uintptr_t AssemblyLinearVelocity = 0xF8;
		inline constexpr std::uintptr_t Flags = 0x1B6;
		inline constexpr std::uintptr_t Material = 0x246;
		inline constexpr std::uintptr_t Owner = 0x210;
		inline constexpr std::uintptr_t Position = 0xEC;
		inline constexpr std::uintptr_t Rotation = 0xC8;
		inline constexpr std::uintptr_t Size = 0x1BC;
		inline constexpr std::uintptr_t Validate = 0x6;
	}

	namespace PrimitiveFlags
	{
		inline constexpr std::uintptr_t Anchored = 0x2;
		inline constexpr std::uintptr_t CanCollide = 0x8;
		inline constexpr std::uintptr_t CanQuery = 0x20;
		inline constexpr std::uintptr_t CanTouch = 0x10;
	}

	namespace RenderView
	{
		inline constexpr std::uintptr_t DeviceD3D11 = 0x8;
		inline constexpr std::uintptr_t LightingValid = 0x150;
		inline constexpr std::uintptr_t SkyValid = 0x28D;
		inline constexpr std::uintptr_t VisualEngine = 0x18;
	}

	namespace RunService
	{
		inline constexpr std::uintptr_t RunState = 0xD8;
	}

	namespace Script
	{
		inline constexpr std::uintptr_t Source = 0x188;
	}

	namespace ScriptContext
	{
		inline constexpr std::uintptr_t ScriptsDisabled = 0xC8;
	}

	namespace Sky
	{
		inline constexpr std::uintptr_t CelestialBodiesShown = 0x250;
		inline constexpr std::uintptr_t MoonAngularSize = 0x244;
		inline constexpr std::uintptr_t MoonTextureContent = 0xB8;
		inline constexpr std::uintptr_t MoonTextureId = 0xC8;
		inline constexpr std::uintptr_t SkyboxBackContent = 0xE8;
		inline constexpr std::uintptr_t SkyboxBk = 0xF8;
		inline constexpr std::uintptr_t SkyboxDn = 0x128;
		inline constexpr std::uintptr_t SkyboxDownContent = 0x118;
		inline constexpr std::uintptr_t SkyboxFrontContent = 0x148;
		inline constexpr std::uintptr_t SkyboxFt = 0x158;
		inline constexpr std::uintptr_t SkyboxLeftContent = 0x178;
		inline constexpr std::uintptr_t SkyboxLf = 0x188;
		inline constexpr std::uintptr_t SkyboxOrientation = 0x238;
		inline constexpr std::uintptr_t SkyboxRightContent = 0x1A8;
		inline constexpr std::uintptr_t SkyboxRt = 0x1B8;
		inline constexpr std::uintptr_t SkyboxUp = 0x1E8;
		inline constexpr std::uintptr_t SkyboxUpContent = 0x1D8;
		inline constexpr std::uintptr_t StarCount = 0x248;
		inline constexpr std::uintptr_t SunAngularSize = 0x24C;
		inline constexpr std::uintptr_t SunTextureContent = 0x208;
		inline constexpr std::uintptr_t SunTextureId = 0x218;
	}

	namespace SpecialMesh
	{
		inline constexpr std::uintptr_t MeshType = 0x148;
	}

	namespace StarterPlayer
	{
		inline constexpr std::uintptr_t AllowCustomAnimations = 0x11C;
		inline constexpr std::uintptr_t AutoJumpEnabled = 0x11D;
		inline constexpr std::uintptr_t AvatarJointUpgrade = 0xC8;
		inline constexpr std::uintptr_t AvatarJointUpgrade_SerializedRollout = 0xC8;
		inline constexpr std::uintptr_t CameraMaxZoomDistance = 0xCC;
		inline constexpr std::uintptr_t CameraMinZoomDistance = 0xD0;
		inline constexpr std::uintptr_t CameraMode = 0xD4;
		inline constexpr std::uintptr_t CharacterBreakJointsOnDeath = 0x11E;
		inline constexpr std::uintptr_t CharacterJumpHeight = 0xD8;
		inline constexpr std::uintptr_t CharacterJumpPower = 0xDC;
		inline constexpr std::uintptr_t CharacterMaxSlopeAngle = 0xE0;
		inline constexpr std::uintptr_t CharacterUseJumpPower = 0x11F;
		inline constexpr std::uintptr_t CharacterWalkSpeed = 0xE4;
		inline constexpr std::uintptr_t ClassicDeath = 0x120;
		inline constexpr std::uintptr_t CreateDefaultPlayerModule = 0x121;
		inline constexpr std::uintptr_t DevCameraOcclusionMode = 0xE8;
		inline constexpr std::uintptr_t DevComputerCameraMovementMode = 0xEC;
		inline constexpr std::uintptr_t DevComputerMovementMode = 0xF0;
		inline constexpr std::uintptr_t DevTouchCameraMovementMode = 0xF4;
		inline constexpr std::uintptr_t DevTouchMovementMode = 0xF8;
		inline constexpr std::uintptr_t EnableDynamicHeads = 0xFC;
		inline constexpr std::uintptr_t EnableMouseLockOption = 0x122;
		inline constexpr std::uintptr_t GameSettingsAvatar = 0x100;
		inline constexpr std::uintptr_t GameSettingsR15Collision = 0x104;
		inline constexpr std::uintptr_t HealthDisplayDistance = 0x108;
		inline constexpr std::uintptr_t LoadCharacterAppearance = 0x123;
		inline constexpr std::uintptr_t LoadCharacterLayeredClothing = 0x10C;
		inline constexpr std::uintptr_t LuaCharacterController = 0x110;
		inline constexpr std::uintptr_t NameDisplayDistance = 0x114;
		inline constexpr std::uintptr_t PlayerModuleStatus = 0x118;
		inline constexpr std::uintptr_t UserEmotesEnabled = 0x124;
	}

	namespace SunRaysEffect
	{
		inline constexpr std::uintptr_t Intensity = 0xB8;
		inline constexpr std::uintptr_t Spread = 0xBC;
	}

	namespace SurfaceAppearance
	{
		inline constexpr std::uintptr_t AlphaMode = 0x290;
		inline constexpr std::uintptr_t Color = 0x278;
		inline constexpr std::uintptr_t ColorMap = 0xB8;
		inline constexpr std::uintptr_t EmissiveStrength = 0x294;
		inline constexpr std::uintptr_t EmissiveTint = 0x284;
		inline constexpr std::uintptr_t MetalnessMap = 0x118;
		inline constexpr std::uintptr_t NormalMap = 0x148;
		inline constexpr std::uintptr_t ResampleMode = 0x298;
		inline constexpr std::uintptr_t RoughnessMap = 0x178;
		inline constexpr std::uintptr_t TexturePackContent = 0x1A8;
	}

	namespace TaskScheduler
	{
		inline constexpr std::uintptr_t JobEnd = 0xD0;
		inline constexpr std::uintptr_t JobName = 0x18;
		inline constexpr std::uintptr_t JobStart = 0xC8;
		inline constexpr std::uintptr_t MaxFPS = 0xB0;
	}

	namespace Team
	{
		inline constexpr std::uintptr_t AutoAssignable = 0xBC;
		inline constexpr std::uintptr_t ChildOrder = 0xB0;
		inline constexpr std::uintptr_t Score = 0xB4;
	}

	namespace Terrain
	{
		inline constexpr std::uintptr_t AcquisitionMethod = 0x184;
		inline constexpr std::uintptr_t Decoration = 0x1A0;
		inline constexpr std::uintptr_t GrassLength = 0x188;
		inline constexpr std::uintptr_t LastUsedModificationMethod = 0x18C;
		inline constexpr std::uintptr_t SmoothVoxelsUpgraded = 0x1A1;
		inline constexpr std::uintptr_t WaterColor = 0x178;
		inline constexpr std::uintptr_t WaterReflectance = 0x190;
		inline constexpr std::uintptr_t WaterTransparency = 0x194;
		inline constexpr std::uintptr_t WaterWaveSize = 0x198;
		inline constexpr std::uintptr_t WaterWaveSpeed = 0x19C;
	}

	namespace TerrainDetail
	{
		inline constexpr std::uintptr_t Face = 0x1E8;
		inline constexpr std::uintptr_t MaterialPattern = 0x1EC;
		inline constexpr std::uintptr_t TexturePackContent = 0x1A8;
	}

	namespace Texture
	{
		inline constexpr std::uintptr_t OffsetStudsU = 0x270;
		inline constexpr std::uintptr_t OffsetStudsV = 0x274;
		inline constexpr std::uintptr_t StudsPerTileU = 0x278;
		inline constexpr std::uintptr_t StudsPerTileV = 0x27C;
	}

	namespace Tool
	{
		inline constexpr std::uintptr_t CanBeDropped = 0x4B8;
		inline constexpr std::uintptr_t Enabled = 0x4B9;
		inline constexpr std::uintptr_t GripForward = 0x490;
		inline constexpr std::uintptr_t GripPos = 0x4AC;
		inline constexpr std::uintptr_t GripRight = 0x488;
		inline constexpr std::uintptr_t GripUp = 0x48C;
		inline constexpr std::uintptr_t ManualActivationOnly = 0x4BA;
		inline constexpr std::uintptr_t RequiresHandle = 0x4BB;
		inline constexpr std::uintptr_t ToolTip = 0x468;
	}

	namespace Trail
	{
		inline constexpr std::uintptr_t Attachment0 = 0x1A8;
		inline constexpr std::uintptr_t Attachment1 = 0x1B8;
		inline constexpr std::uintptr_t Brightness = 0x1C0;
		inline constexpr std::uintptr_t Color = 0x138;
		inline constexpr std::uintptr_t Enabled = 0x1E4;
		inline constexpr std::uintptr_t FaceCamera = 0x1E5;
		inline constexpr std::uintptr_t Lifetime = 0x1C4;
		inline constexpr std::uintptr_t LightEmission = 0x1C8;
		inline constexpr std::uintptr_t LightInfluence = 0x1CC;
		inline constexpr std::uintptr_t LocalTransparencyModifier = 0x1D0;
		inline constexpr std::uintptr_t MaxLength = 0x1D4;
		inline constexpr std::uintptr_t MinLength = 0x1D8;
		inline constexpr std::uintptr_t TextureLength = 0x1DC;
		inline constexpr std::uintptr_t TextureMode = 0x1E0;
		inline constexpr std::uintptr_t Transparency = 0xB8;
		inline constexpr std::uintptr_t WidthScale = 0xF8;
	}

	namespace UserInputService
	{
		inline constexpr std::uintptr_t AccelerometerEnabled = 0xEC;
		inline constexpr std::uintptr_t BottomBarSize = 0xC8;
		inline constexpr std::uintptr_t GamepadEnabled = 0xED;
		inline constexpr std::uintptr_t GyroscopeEnabled = 0xEE;
		inline constexpr std::uintptr_t KeyboardEnabled = 0xEF;
		inline constexpr std::uintptr_t LegacyInputEventsEnabled = 0xF0;
		inline constexpr std::uintptr_t MouseBehavior = 0x1B8;
		inline constexpr std::uintptr_t MouseDeltaSensitivity = 0x1B8;
		inline constexpr std::uintptr_t MouseIconEnabled = 0x1B8;
		inline constexpr std::uintptr_t MouseIconStack = 0x178;
		inline constexpr std::uintptr_t NavBarSize = 0xD0;
		inline constexpr std::uintptr_t OnScreenKeyboardAnimationDuration = 0x1B8;
		inline constexpr std::uintptr_t OnScreenKeyboardPosition = 0x1B8;
		inline constexpr std::uintptr_t OnScreenKeyboardSize = 0x1B8;
		inline constexpr std::uintptr_t OnScreenKeyboardVisible = 0x1B8;
		inline constexpr std::uintptr_t OverrideMouseIconBehavior = 0x1B8;
		inline constexpr std::uintptr_t PreferredInput = 0xE8;
		inline constexpr std::uintptr_t RightBarSize = 0xD8;
		inline constexpr std::uintptr_t TouchEnabled = 0xF2;
		inline constexpr std::uintptr_t TouchScreenEnabled = 0xF3;
		inline constexpr std::uintptr_t UserHeadCFrame = 0x1B8;
		inline constexpr std::uintptr_t VREnabled = 0x1B8;
	}

	namespace ViewportFrame
	{
		inline constexpr std::uintptr_t Ambient = 0x9C0;
		inline constexpr std::uintptr_t CameraCFrame = 0x990;
		inline constexpr std::uintptr_t CameraFieldOfView = 0x9F0;
		inline constexpr std::uintptr_t CurrentCamera = 0x988;
		inline constexpr std::uintptr_t IsMirrored = 0x9F8;
	}

	namespace Weld
	{
		inline constexpr std::uintptr_t EnableSkinning = 0x188;
	}

	namespace Wire
	{
		inline constexpr std::uintptr_t SourceInstance = 0xF8;
		inline constexpr std::uintptr_t SourceName = 0xB8;
		inline constexpr std::uintptr_t TargetInstance = 0x108;
	}

	namespace WireframeHandleAdornment
	{
		inline constexpr std::uintptr_t Scale = 0x1B0;
		inline constexpr std::uintptr_t Thickness = 0x1B4;
	}

	namespace Workspace
	{
		inline constexpr std::uintptr_t AirTurbulenceIntensity = 0x4C0;
		inline constexpr std::uintptr_t AllowThirdPartySales = 0x554;
		inline constexpr std::uintptr_t AuthorityMode = 0x4C4;
		inline constexpr std::uintptr_t AvatarUnificationMode = 0x4C8;
		inline constexpr std::uintptr_t ClientAnimatorThrottling = 0x4CC;
		inline constexpr std::uintptr_t ConvexDecompCompressed = 0x555;
		inline constexpr std::uintptr_t CurrentCamera = 0x498;
		inline constexpr std::uintptr_t DistributedGameTime = 0x4B8;
		inline constexpr std::uintptr_t EnableSLIMAvatars = 0x4D0;
		inline constexpr std::uintptr_t FallHeightEnabled = 0x556;
		inline constexpr std::uintptr_t FluidForces = 0x4D4;
		inline constexpr std::uintptr_t IKControlConstraintSupport = 0x4D8;
		inline constexpr std::uintptr_t ImprovedAnimationConstraint = 0x4DC;
		inline constexpr std::uintptr_t ImprovedPhysicsReplication = 0x4E0;
		inline constexpr std::uintptr_t InterpolationThrottling = 0x4E4;
		inline constexpr std::uintptr_t LayeredClothingCacheOptimizations = 0x4E8;
		inline constexpr std::uintptr_t LuauTypeCheckMode = 0x4EC;
		inline constexpr std::uintptr_t MeshPartHeadsAndAccessories = 0x4F0;
		inline constexpr std::uintptr_t MeshStreamingAndImprovedLods = 0x4F4;
		inline constexpr std::uintptr_t ModelStreamingBehavior = 0x4F8;
		inline constexpr std::uintptr_t NextGenerationReplication = 0x4FC;
		inline constexpr std::uintptr_t NextGenerationReplicationAlias = 0x4FC;
		inline constexpr std::uintptr_t PathfindingUseImprovedSearch = 0x500;
		inline constexpr std::uintptr_t PhysicsSteppingMethod = 0x504;
		inline constexpr std::uintptr_t PlayerCharacterDestroyBehavior = 0x508;
		inline constexpr std::uintptr_t PredictiveStreamingMode = 0x510;
		inline constexpr std::uintptr_t PrimalPhysicsSolver = 0x514;
		inline constexpr std::uintptr_t RejectCharacterDeletions = 0x518;
		inline constexpr std::uintptr_t RenderingCacheOptimizations = 0x51C;
		inline constexpr std::uintptr_t ReplicateInstanceDestroySetting = 0x520;
		inline constexpr std::uintptr_t Retargeting = 0x524;
		inline constexpr std::uintptr_t SandboxedInstanceMode = 0x528;
		inline constexpr std::uintptr_t StreamOutBehavior = 0x530;
		inline constexpr std::uintptr_t StreamingIntegrityMode = 0x534;
		inline constexpr std::uintptr_t StreamingMinRadius = 0x538;
		inline constexpr std::uintptr_t StreamingTargetRadius = 0x53C;
		inline constexpr std::uintptr_t Terrain = 0x4A8;
		inline constexpr std::uintptr_t ThrottleLevel = 0x540;
		inline constexpr std::uintptr_t TouchEventsUseCollisionGroups = 0x544;
		inline constexpr std::uintptr_t UseNewLuauTypeSolver = 0x54C;
		inline constexpr std::uintptr_t ValidateEnabledProximityPrompt = 0x550;
		inline constexpr std::uintptr_t WatermarkHash = 0x468;
		inline constexpr std::uintptr_t World = 0x3F0;
	}

	namespace World
	{
		inline constexpr std::uintptr_t AirProperties = 0x220;
		inline constexpr std::uintptr_t FallenPartsDestroyHeight = 0x208;
		inline constexpr std::uintptr_t Gravity = 0x210;
		inline constexpr std::uintptr_t Primitives = 0x290;
		inline constexpr std::uintptr_t worldStepsPerSec = 0x708;
	}

	namespace WorldModel
	{
		inline constexpr std::uintptr_t UseWorkspaceCollisionGroups = 0x460;
	}

	namespace WorldRoot
	{
		inline constexpr std::uintptr_t CollisionGroupData = 0x3F0;
		inline constexpr std::uintptr_t PhysicsStepTime = 0x3F0;
	}

}
