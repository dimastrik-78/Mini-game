#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DestroyObj
struct DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyMove
struct EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE;
// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89;
// SpawnObj
struct SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Ui
struct Ui_tAABF4EA895638D081D9825591E2D703725B950DD;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0770437F60451C9122BD5EFBDE4A63D81C7D563B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m956A8B974E170A3D6EF587D56513436BBA019B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUi_tAABF4EA895638D081D9825591E2D703725B950DD_mE7695213DFFBB101705BD13EB1454E9BB225C940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;

struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// DestroyObj
struct DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3  : public RuntimeObject
{
};

// EnemyMove
struct EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A  : public RuntimeObject
{
};

// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE  : public RuntimeObject
{
	// System.Single PlayerInput::Speed
	float ___Speed_0;
	// UnityEngine.Rigidbody2D PlayerInput::RB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB_1;
	// PlayerMove PlayerInput::_move
	PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* ____move_2;
	// SpawnObj PlayerInput::_fire
	SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* ____fire_3;
	// System.Single PlayerInput::_timeCanShoot
	float ____timeCanShoot_4;
};

// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// SpawnObj
struct SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DestroyObj Bullet::_destroyObj
	DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* ____destroyObj_4;
	// System.Single Bullet::_bulletSpeed
	float ____bulletSpeed_5;
	// UnityEngine.GameObject Bullet::_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObject_6;
	// System.Single Bullet::_lifeTime
	float ____lifeTime_7;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Ui Enemy::_ui
	Ui_tAABF4EA895638D081D9825591E2D703725B950DD* ____ui_4;
	// EnemyMove Enemy::_enemyMove
	EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* ____enemyMove_5;
	// DestroyObj Enemy::_enemyDestroy
	DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* ____enemyDestroy_6;
	// SpawnEnemy Enemy::_spawnEnemy
	SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* ____spawnEnemy_7;
	// UnityEngine.GameObject Enemy::_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObject_8;
	// System.Int32 Enemy::_givePoint
	int32_t ____givePoint_9;
	// System.Single Enemy::_timeMove
	float ____timeMove_10;
	// System.Int32 Enemy::_heal
	int32_t ____heal_11;
	// System.Int32 Enemy::_walk
	int32_t ____walk_12;
	// System.Single Enemy::_timerMove
	float ____timerMove_13;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Player::_position
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____position_4;
	// UnityEngine.GameObject Player::_prefBullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefBullet_5;
	// System.Single Player::_speed
	float ____speed_6;
	// UnityEngine.Rigidbody2D Player::_rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rb_7;
	// PlayerInput Player::_playerInput
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ____playerInput_8;
};

// SpawnEnemy
struct SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SpawnObj SpawnEnemy::SpawnObj
	SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* ___SpawnObj_4;
	// Ui SpawnEnemy::Ui
	Ui_tAABF4EA895638D081D9825591E2D703725B950DD* ___Ui_5;
	// UnityEngine.GameObject SpawnEnemy::PrefabEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PrefabEnemy_6;
	// UnityEngine.Transform[] SpawnEnemy::_positionSpawnEnemy
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____positionSpawnEnemy_7;
	// System.Single SpawnEnemy::_timeStartWave
	float ____timeStartWave_8;
	// System.Int32 SpawnEnemy::_quantitySpawnEnemy
	int32_t ____quantitySpawnEnemy_9;
	// System.Int32 SpawnEnemy::_quantityEnemy
	int32_t ____quantityEnemy_10;
	// System.Single SpawnEnemy::_timerStartWave
	float ____timerStartWave_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Ui
struct Ui_tAABF4EA895638D081D9825591E2D703725B950DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Ui::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// UnityEngine.GameObject Ui::WinPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WinPanel_5;
	// UnityEngine.GameObject Ui::LosePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LosePanel_6;
	// System.Int32 Ui::_point
	int32_t ____point_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;

// System.Void DestroyObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObj__ctor_m7A45A056208AC7A26A78E38832811F61F1B74982 (DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void DestroyObj::DestroyObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObj_DestroyObject_m3D7C2D91D282C06119CC0D02C13CC9D838F783BB (DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Obj0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Ui>()
inline Ui_tAABF4EA895638D081D9825591E2D703725B950DD* Object_FindObjectOfType_TisUi_tAABF4EA895638D081D9825591E2D703725B950DD_mE7695213DFFBB101705BD13EB1454E9BB225C940 (const RuntimeMethod* method)
{
	return ((  Ui_tAABF4EA895638D081D9825591E2D703725B950DD* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void EnemyMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove__ctor_m90A165C81D823624EDD5C54491B8A800B5E467BB (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) ;
// System.Void EnemyMove::Move(UnityEngine.Rigidbody2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_Move_m52F459EFE08381DD6AD89B83D0BA821A2DF73582 (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___Rb0, int32_t ___walk1, const RuntimeMethod* method) ;
// System.Void Ui::UpdateText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_UpdateText_mB14DDF09C8EE152C3C0A7E1A1FF694F44B698CCF (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, int32_t ___GivePoint0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<SpawnEnemy>()
inline SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* Object_FindObjectOfType_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m956A8B974E170A3D6EF587D56513436BBA019B23 (const RuntimeMethod* method)
{
	return ((  SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void SpawnEnemy::UpdateQuantityEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_UpdateQuantityEnemy_mF9A9E2408695BFC97056D0A951594EBCD87B62FB (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Ui::LoseScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_LoseScreen_m303D6D3754A1327E1C729E2F29772143873EEB12 (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_position_m03C92F26F561D48050FBA840754F584AA7F415EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInput::.ctor(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_mCCC64015BB7A2222F9B1B507BA29F390723BE7A7 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rb0, float ____speed1, const RuntimeMethod* method) ;
// System.Void PlayerInput::Update(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Update_m394469B3CDBB8E2CCBEA9C329C458002EBB6341C (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Bullet0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Position1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// System.Void PlayerMove::Move(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Move_mB19998B93B379E7E6AF68CF17A493CE60BF8D1A5 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB0, float ___Speed1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void SpawnObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObj__ctor_mBE38F270A022A16FFFBA0E30AFC2C03531F41C4D (SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* __this, const RuntimeMethod* method) ;
// System.Void SpawnObj::Spawn(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObj_Spawn_m84FFE3C2EBC50A588DFAEA00EBEF79941667E5AB (SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Rb0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Position1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void SpawnEnemy::SpawnSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_SpawnSelection_m13F31E3AF9172D59D4D381228D9EE67C4E6D5A01 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) ;
// System.Void Ui::WinScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_WinScreen_m6731E80239F95B49FC7AAF7FED3F2DF71FA95BF6 (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Start_m6BD187DD353835D248DA404B169DCE29CEB2B813 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _destroyObj = new DestroyObj();
		DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* L_0 = (DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3*)il2cpp_codegen_object_new(DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3_il2cpp_TypeInfo_var);
		DestroyObj__ctor_m7A45A056208AC7A26A78E38832811F61F1B74982(L_0, NULL);
		__this->____destroyObj_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____destroyObj_4), (void*)L_0);
		// _gameObject.GetComponent<Rigidbody2D>().AddForce(transform.up * _bulletSpeed, ForceMode2D.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____gameObject_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_1, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_3, NULL);
		float L_5 = __this->____bulletSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_2, L_7, 1, NULL);
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_m5AA63D0B1F389C2CFEE77466E1C39ADC813B4DBC (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// _lifeTime -= Time.deltaTime;
		float L_0 = __this->____lifeTime_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____lifeTime_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_lifeTime <= 0)
		float L_2 = __this->____lifeTime_7;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// _destroyObj.DestroyObject(_gameObject);
		DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* L_3 = __this->____destroyObj_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____gameObject_6;
		DestroyObj_DestroyObject_m3D7C2D91D282C06119CC0D02C13CC9D838F783BB(L_3, L_4, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Bullet::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnCollisionEnter2D_m2810AD9CCE17B1A52EFFB28595078A9CED0A1AF9 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision2D0, const RuntimeMethod* method) 
{
	{
		// if (collision2D.gameObject.layer == 3)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision2D0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		// _destroyObj.DestroyObject(_gameObject);
		DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* L_3 = __this->____destroyObj_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____gameObject_6;
		DestroyObj_DestroyObject_m3D7C2D91D282C06119CC0D02C13CC9D838F783BB(L_3, L_4, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
{
	{
		// private float _lifeTime = 2;
		__this->____lifeTime_7 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DestroyObj::DestroyObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObj_DestroyObject_m3D7C2D91D282C06119CC0D02C13CC9D838F783BB (DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Destroy(Obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___Obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void DestroyObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObj__ctor_m7A45A056208AC7A26A78E38832811F61F1B74982 (DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUi_tAABF4EA895638D081D9825591E2D703725B950DD_mE7695213DFFBB101705BD13EB1454E9BB225C940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ui = GameObject.FindObjectOfType<Ui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Ui_tAABF4EA895638D081D9825591E2D703725B950DD* L_0;
		L_0 = Object_FindObjectOfType_TisUi_tAABF4EA895638D081D9825591E2D703725B950DD_mE7695213DFFBB101705BD13EB1454E9BB225C940(Object_FindObjectOfType_TisUi_tAABF4EA895638D081D9825591E2D703725B950DD_mE7695213DFFBB101705BD13EB1454E9BB225C940_RuntimeMethod_var);
		__this->____ui_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ui_4), (void*)L_0);
		// _enemyMove = new EnemyMove();
		EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* L_1 = (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A*)il2cpp_codegen_object_new(EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A_il2cpp_TypeInfo_var);
		EnemyMove__ctor_m90A165C81D823624EDD5C54491B8A800B5E467BB(L_1, NULL);
		__this->____enemyMove_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemyMove_5), (void*)L_1);
		// _enemyDestroy = new DestroyObj();
		DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* L_2 = (DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3*)il2cpp_codegen_object_new(DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3_il2cpp_TypeInfo_var);
		DestroyObj__ctor_m7A45A056208AC7A26A78E38832811F61F1B74982(L_2, NULL);
		__this->____enemyDestroy_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enemyDestroy_6), (void*)L_2);
		// _timerMove = _timeMove;
		float L_3 = __this->____timeMove_10;
		__this->____timerMove_13 = L_3;
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timerMove -= Time.deltaTime;
		float L_0 = __this->____timerMove_13;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timerMove_13 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_timerMove < 0)
		float L_2 = __this->____timerMove_13;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// _enemyMove.Move(_gameObject.GetComponent<Rigidbody2D>(), _walk);
		EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* L_3 = __this->____enemyMove_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____gameObject_8;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_4, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		int32_t L_6 = __this->____walk_12;
		EnemyMove_Move_m52F459EFE08381DD6AD89B83D0BA821A2DF73582(L_3, L_5, L_6, NULL);
		// _timerMove = _timeMove;
		float L_7 = __this->____timeMove_10;
		__this->____timerMove_13 = L_7;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter2D_mCEA8628A3E777C0C06686FB5AE91FB49A94A1FA2 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m956A8B974E170A3D6EF587D56513436BBA019B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.layer == 6)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___col0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_005c;
		}
	}
	{
		// if (_heal == 0)
		int32_t L_3 = __this->____heal_11;
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		// _ui.UpdateText(_givePoint);
		Ui_tAABF4EA895638D081D9825591E2D703725B950DD* L_4 = __this->____ui_4;
		int32_t L_5 = __this->____givePoint_9;
		Ui_UpdateText_mB14DDF09C8EE152C3C0A7E1A1FF694F44B698CCF(L_4, L_5, NULL);
		// _enemyDestroy.DestroyObject(_gameObject);
		DestroyObj_t1198DC1AA2CC04E7788DC4D51BA3FEBE51537FF3* L_6 = __this->____enemyDestroy_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____gameObject_8;
		DestroyObj_DestroyObject_m3D7C2D91D282C06119CC0D02C13CC9D838F783BB(L_6, L_7, NULL);
		// _spawnEnemy = GameObject.FindObjectOfType<SpawnEnemy>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_8;
		L_8 = Object_FindObjectOfType_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m956A8B974E170A3D6EF587D56513436BBA019B23(Object_FindObjectOfType_TisSpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89_m956A8B974E170A3D6EF587D56513436BBA019B23_RuntimeMethod_var);
		__this->____spawnEnemy_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnEnemy_7), (void*)L_8);
		// _spawnEnemy.UpdateQuantityEnemy();
		SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* L_9 = __this->____spawnEnemy_7;
		SpawnEnemy_UpdateQuantityEnemy_mF9A9E2408695BFC97056D0A951594EBCD87B62FB(L_9, NULL);
	}

IL_004e:
	{
		// _heal--;
		int32_t L_10 = __this->____heal_11;
		__this->____heal_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_m78DFD7AB12D1EC3E92F13D8E8C54701479ABF567 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other.gameObject.layer == 7)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_0019;
		}
	}
	{
		// _ui.LoseScreen();
		Ui_tAABF4EA895638D081D9825591E2D703725B950DD* L_3 = __this->____ui_4;
		Ui_LoseScreen_m303D6D3754A1327E1C729E2F29772143873EEB12(L_3, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyMove::Move(UnityEngine.Rigidbody2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove_Move_m52F459EFE08381DD6AD89B83D0BA821A2DF73582 (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___Rb0, int32_t ___walk1, const RuntimeMethod* method) 
{
	{
		// Rb.position = new Vector2(Rb.position.x, Rb.position.y - walk);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___Rb0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = ___Rb0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		float L_3 = L_2.___x_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = ___Rb0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_4, NULL);
		float L_6 = L_5.___y_1;
		int32_t L_7 = ___walk1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_3, ((float)il2cpp_codegen_subtract(L_6, ((float)L_7))), /*hidden argument*/NULL);
		Rigidbody2D_set_position_m03C92F26F561D48050FBA840754F584AA7F415EF(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void EnemyMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMove__ctor_m90A165C81D823624EDD5C54491B8A800B5E467BB (EnemyMove_tCE9FDDA16323BA73D32A1A11BCFE1AB61DFB408A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playerInput = new PlayerInput(_rb, _speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rb_7;
		float L_1 = __this->____speed_6;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_2 = (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE*)il2cpp_codegen_object_new(PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		PlayerInput__ctor_mCCC64015BB7A2222F9B1B507BA29F390723BE7A7(L_2, L_0, L_1, NULL);
		__this->____playerInput_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_8), (void*)L_2);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// _playerInput.Update(_prefBullet, _position);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->____playerInput_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____prefBullet_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____position_4;
		PlayerInput_Update_m394469B3CDBB8E2CCBEA9C329C458002EBB6341C(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerInput::.ctor(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_mCCC64015BB7A2222F9B1B507BA29F390723BE7A7 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rb0, float ____speed1, const RuntimeMethod* method) 
{
	{
		// private float _timeCanShoot = 0.2f; // ????? ??? ????????, ????? ?? ???????
		__this->____timeCanShoot_4 = (0.200000003f);
		// public PlayerInput(Rigidbody2D _rb, float _speed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RB = _rb;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ____rb0;
		__this->___RB_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RB_1), (void*)L_0);
		// Speed = _speed;
		float L_1 = ____speed1;
		__this->___Speed_0 = L_1;
		// }
		return;
	}
}
// System.Void PlayerInput::Update(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Update_m394469B3CDBB8E2CCBEA9C329C458002EBB6341C (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Bullet0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetAxis("Horizontal") != 0)
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		// _move = new PlayerMove();
		PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* L_1 = (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4*)il2cpp_codegen_object_new(PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4_il2cpp_TypeInfo_var);
		PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2(L_1, NULL);
		__this->____move_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____move_2), (void*)L_1);
		// _move.Move(RB, Speed);
		PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* L_2 = __this->____move_2;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___RB_1;
		float L_4 = __this->___Speed_0;
		PlayerMove_Move_mB19998B93B379E7E6AF68CF17A493CE60BF8D1A5(L_2, L_3, L_4, NULL);
	}

IL_0033:
	{
		// _timeCanShoot -= Time.deltaTime;
		float L_5 = __this->____timeCanShoot_4;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timeCanShoot_4 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// if (Input.GetKey(KeyCode.Mouse0) && _timeCanShoot < 0)
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)323), NULL);
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		float L_8 = __this->____timeCanShoot_4;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		// _fire = new SpawnObj();
		SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* L_9 = (SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344*)il2cpp_codegen_object_new(SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344_il2cpp_TypeInfo_var);
		SpawnObj__ctor_mBE38F270A022A16FFFBA0E30AFC2C03531F41C4D(L_9, NULL);
		__this->____fire_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fire_3), (void*)L_9);
		// _fire.Spawn(Bullet, Position);
		SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* L_10 = __this->____fire_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___Bullet0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___Position1;
		SpawnObj_Spawn_m84FFE3C2EBC50A588DFAEA00EBEF79941667E5AB(L_10, L_11, L_12, NULL);
		// _timeCanShoot = 0.2f;
		__this->____timeCanShoot_4 = (0.200000003f);
	}

IL_0081:
	{
		// if (Input.GetKey(KeyCode.R))
		bool L_13;
		L_13 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)114), NULL);
		if (!L_13)
		{
			goto IL_009a;
		}
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMove::Move(UnityEngine.Rigidbody2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Move_mB19998B93B379E7E6AF68CF17A493CE60BF8D1A5 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RB0, float ___Speed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RB.velocity = Input.GetAxis("Horizontal") * RB.transform.transform.right * Speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___RB0;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = ___RB0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_1, L_5, NULL);
		float L_7 = ___Speed1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Start_mC7726203354D875E8F7DBF2A39480C6F312BF75B (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpawnObj = new SpawnObj();
		SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* L_0 = (SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344*)il2cpp_codegen_object_new(SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344_il2cpp_TypeInfo_var);
		SpawnObj__ctor_mBE38F270A022A16FFFBA0E30AFC2C03531F41C4D(L_0, NULL);
		__this->___SpawnObj_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SpawnObj_4), (void*)L_0);
		// _quantityEnemy = _quantitySpawnEnemy;
		int32_t L_1 = __this->____quantitySpawnEnemy_9;
		__this->____quantityEnemy_10 = L_1;
		// _timerStartWave = _timeStartWave;
		float L_2 = __this->____timeStartWave_8;
		__this->____timerStartWave_11 = L_2;
		// }
		return;
	}
}
// System.Void SpawnEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Update_m8C17771352CA43D1CE958B5B5D5A151C0BBBB35F (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		// _timerStartWave -= Time.deltaTime;
		float L_0 = __this->____timerStartWave_11;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timerStartWave_11 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_timerStartWave < 0)
		float L_2 = __this->____timerStartWave_11;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// SpawnSelection();
		SpawnEnemy_SpawnSelection_m13F31E3AF9172D59D4D381228D9EE67C4E6D5A01(__this, NULL);
		// _timerStartWave = _timeStartWave;
		float L_3 = __this->____timeStartWave_8;
		__this->____timerStartWave_11 = L_3;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SpawnEnemy::UpdateQuantityEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_UpdateQuantityEnemy_mF9A9E2408695BFC97056D0A951594EBCD87B62FB (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		// _quantityEnemy--;
		int32_t L_0 = __this->____quantityEnemy_10;
		__this->____quantityEnemy_10 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (_quantityEnemy <= 0)
		int32_t L_1 = __this->____quantityEnemy_10;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Ui.WinScreen();
		Ui_tAABF4EA895638D081D9825591E2D703725B950DD* L_2 = __this->___Ui_5;
		Ui_WinScreen_m6731E80239F95B49FC7AAF7FED3F2DF71FA95BF6(L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void SpawnEnemy::SpawnSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_SpawnSelection_m13F31E3AF9172D59D4D381228D9EE67C4E6D5A01 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _positionSpawnEnemy.Length; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0004:
	{
		// System.Random ran = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		// if (ran.Next(0, 2) == 1 && _quantitySpawnEnemy > 0)
		int32_t L_1;
		L_1 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, 0, 2);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_2 = __this->____quantitySpawnEnemy_9;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		// SpawnObj.Spawn(PrefabEnemy, _positionSpawnEnemy[i]);
		SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* L_3 = __this->___SpawnObj_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___PrefabEnemy_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->____positionSpawnEnemy_7;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		SpawnObj_Spawn_m84FFE3C2EBC50A588DFAEA00EBEF79941667E5AB(L_3, L_4, L_8, NULL);
		// _quantitySpawnEnemy--;
		int32_t L_9 = __this->____quantitySpawnEnemy_9;
		__this->____quantitySpawnEnemy_9 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < _positionSpawnEnemy.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < _positionSpawnEnemy.Length; i++)
		int32_t L_11 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->____positionSpawnEnemy_7;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SpawnEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy__ctor_mF4ACB2F1D347568304B1A0FE83882EB99DCECA57 (SpawnEnemy_tE3F5CB885F18EDBA7C9C6DA663ED3EEADAFEFC89* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnObj::Spawn(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObj_Spawn_m84FFE3C2EBC50A588DFAEA00EBEF79941667E5AB (SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Rb0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject obj = GameObject.Instantiate(Rb, Position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___Rb0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___Position1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// obj.transform.SetParent(null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// obj.transform.position = Position.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___Position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void SpawnObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnObj__ctor_mBE38F270A022A16FFFBA0E30AFC2C03531F41C4D (SpawnObj_tC4437FDF125DBB259E74B7E9673532FD7F2E9344* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ui::WinScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_WinScreen_m6731E80239F95B49FC7AAF7FED3F2DF71FA95BF6 (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, const RuntimeMethod* method) 
{
	{
		// WinPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___WinPanel_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void Ui::LoseScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_LoseScreen_m303D6D3754A1327E1C729E2F29772143873EEB12 (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, const RuntimeMethod* method) 
{
	{
		// LosePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LosePanel_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void Ui::UpdateText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_UpdateText_mB14DDF09C8EE152C3C0A7E1A1FF694F44B698CCF (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, int32_t ___GivePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0770437F60451C9122BD5EFBDE4A63D81C7D563B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _point += GivePoint;
		int32_t L_0 = __this->____point_7;
		int32_t L_1 = ___GivePoint0;
		__this->____point_7 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// _text.text = $"Point: {_point}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____text_4;
		int32_t L_3 = __this->____point_7;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0770437F60451C9122BD5EFBDE4A63D81C7D563B, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void Ui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui__ctor_m250502FB3722A55BACBABE04C5AD703AD7DF7346 (Ui_tAABF4EA895638D081D9825591E2D703725B950DD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
