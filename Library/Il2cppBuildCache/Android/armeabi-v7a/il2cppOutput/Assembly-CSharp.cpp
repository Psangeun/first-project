#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Aster
struct Aster_tED13643DBE0BBCD976AFBA665C7CCD5278F1CAFD;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// Button
struct Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Explosion
struct Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// MakeAster
struct MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MovementObject
struct MovementObject_t9010E35DCF25535E033BD8C458E8CFD6F9540279;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectManager
struct ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// VirtualJoystick
struct VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ani2
struct ani2_tD6C03C1CB74AB2D56B3A32F9E954329C7A319785;
// aniScene
struct aniScene_tFD0D5481F484CC50A128081333E954E040EC16AA;
// enemybullet
struct enemybullet_t1C088169C99407C3A379F7DDBC24D729DA282F14;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6;
IL2CPP_EXTERN_C String_t* _stringLiteral0534B14CCC6EADB04D7D9F78B6CA888567C485AF;
IL2CPP_EXTERN_C String_t* _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E;
IL2CPP_EXTERN_C String_t* _stringLiteral19E7280D14A9499ECDC283C241E1F945796D609B;
IL2CPP_EXTERN_C String_t* _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral1FEEE30ACD8AF48C0493BC7000C458744C94C1BA;
IL2CPP_EXTERN_C String_t* _stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral216451B0B96E95A72109CC42B6C5D525882C74B8;
IL2CPP_EXTERN_C String_t* _stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087;
IL2CPP_EXTERN_C String_t* _stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A;
IL2CPP_EXTERN_C String_t* _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A;
IL2CPP_EXTERN_C String_t* _stringLiteral39BB912CB0CCECC3E3162A4CA2A0B8CE86A90383;
IL2CPP_EXTERN_C String_t* _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2;
IL2CPP_EXTERN_C String_t* _stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB;
IL2CPP_EXTERN_C String_t* _stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA;
IL2CPP_EXTERN_C String_t* _stringLiteral646D2298CE4D87252ADFA744D08C9E7BD6120935;
IL2CPP_EXTERN_C String_t* _stringLiteral6492EC45BDEC9B046D2C7B9BD0B9D1DDFEA0E762;
IL2CPP_EXTERN_C String_t* _stringLiteral6935CFEC98ADA354082157614A6D1CD1D58D4E20;
IL2CPP_EXTERN_C String_t* _stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140;
IL2CPP_EXTERN_C String_t* _stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882;
IL2CPP_EXTERN_C String_t* _stringLiteral73499AD646DE28369FB68F093FAB181683D5276F;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F;
IL2CPP_EXTERN_C String_t* _stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2;
IL2CPP_EXTERN_C String_t* _stringLiteral79AD865C98AEC9853F1A77729448BA31A9D341D8;
IL2CPP_EXTERN_C String_t* _stringLiteral7A1F213007B34E831E86E25828AE01DDFEA83E6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38;
IL2CPP_EXTERN_C String_t* _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717;
IL2CPP_EXTERN_C String_t* _stringLiteral81E80193180FAD20D162D153AEC3DADED803AAB9;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral82A4843BC9B3F7EFAB8E46AF195530E57FD72EAE;
IL2CPP_EXTERN_C String_t* _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B;
IL2CPP_EXTERN_C String_t* _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649;
IL2CPP_EXTERN_C String_t* _stringLiteral95F10860E31BCC56D61783CD9C38C0C2D11E17A9;
IL2CPP_EXTERN_C String_t* _stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB4A3DFA8FB5EDDF6BD48208481F84B1A7F4074;
IL2CPP_EXTERN_C String_t* _stringLiteralA4D1FBD2EE681FA3F4C89559244C0F26DF01F55F;
IL2CPP_EXTERN_C String_t* _stringLiteralA6440208A0FDC2FFFEA14B297C4F968EEF163374;
IL2CPP_EXTERN_C String_t* _stringLiteralA8427CD8A7133657ACEF6B560449D99B4814220B;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB4557D9CD7121439BC0228CA3553A0938D4107FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralBB43137F5798267E1A82DD467143B245A821F93F;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D7A044CECC3E1454D96AF57D91031B982F2EE4;
IL2CPP_EXTERN_C String_t* _stringLiteralD03D8426F3F1079AAC33F7468513E55068A428D2;
IL2CPP_EXTERN_C String_t* _stringLiteralD4D49D5F4E6C420502EA266556DD18D1E6722565;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F82ADF67050EBD784029527F82CAF44131088F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6;
IL2CPP_EXTERN_C String_t* _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17;
IL2CPP_EXTERN_C String_t* _stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10;
IL2CPP_EXTERN_C String_t* _stringLiteralE66CE5E9544CD46EC0B214105448BCFC354002AA;
IL2CPP_EXTERN_C String_t* _stringLiteralEA92C5392AD90816E79F98A42A62CC2DF6F08D2B;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC741BEBAE4DCEA558B5033756F059F725A4F38;
IL2CPP_EXTERN_C String_t* _stringLiteralF809E50BCBCC6874192B58141A533B97AB04965B;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C String_t* _stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Aster
struct Aster_tED13643DBE0BBCD976AFBA665C7CCD5278F1CAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Aster::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Aster_tED13643DBE0BBCD976AFBA665C7CCD5278F1CAFD, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Bullet::dmg
	int32_t ___dmg_4;

public:
	inline static int32_t get_offset_of_dmg_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___dmg_4)); }
	inline int32_t get_dmg_4() const { return ___dmg_4; }
	inline int32_t* get_address_of_dmg_4() { return &___dmg_4; }
	inline void set_dmg_4(int32_t value)
	{
		___dmg_4 = value;
	}
};


// Button
struct Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Enemy::enemyName
	String_t* ___enemyName_4;
	// System.Single Enemy::speed
	float ___speed_5;
	// System.Int32 Enemy::health
	int32_t ___health_6;
	// System.Int32 Enemy::Maxhealth
	int32_t ___Maxhealth_7;
	// System.Int32 Enemy::enemyscore
	int32_t ___enemyscore_8;
	// System.Int32 Enemy::patternIndex
	int32_t ___patternIndex_9;
	// System.Int32 Enemy::curPatternCount
	int32_t ___curPatternCount_10;
	// System.Int32[] Enemy::maxPatternCount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___maxPatternCount_11;
	// System.Single Enemy::maxShotDelay
	float ___maxShotDelay_12;
	// System.Single Enemy::curShotDelay
	float ___curShotDelay_13;
	// System.Boolean Enemy::hit
	bool ___hit_14;
	// UnityEngine.GameObject Enemy::bulletObjA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletObjA_15;
	// UnityEngine.GameObject Enemy::bulletBossA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletBossA_16;
	// UnityEngine.GameObject Enemy::bulletBossB
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletBossB_17;
	// UnityEngine.GameObject Enemy::itempower
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itempower_18;
	// UnityEngine.GameObject Enemy::itemlife
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemlife_19;
	// UnityEngine.GameObject Enemy::itemshield
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemshield_20;
	// UnityEngine.GameObject Enemy::itemboom
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemboom_21;
	// UnityEngine.GameObject Enemy::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_22;
	// GameManager Enemy::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_23;
	// ObjectManager Enemy::objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ___objectManager_24;
	// UnityEngine.SpriteRenderer Enemy::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_25;
	// UnityEngine.Rigidbody2D Enemy::rigid
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigid_26;

public:
	inline static int32_t get_offset_of_enemyName_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyName_4)); }
	inline String_t* get_enemyName_4() const { return ___enemyName_4; }
	inline String_t** get_address_of_enemyName_4() { return &___enemyName_4; }
	inline void set_enemyName_4(String_t* value)
	{
		___enemyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyName_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_6)); }
	inline int32_t get_health_6() const { return ___health_6; }
	inline int32_t* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(int32_t value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_Maxhealth_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___Maxhealth_7)); }
	inline int32_t get_Maxhealth_7() const { return ___Maxhealth_7; }
	inline int32_t* get_address_of_Maxhealth_7() { return &___Maxhealth_7; }
	inline void set_Maxhealth_7(int32_t value)
	{
		___Maxhealth_7 = value;
	}

	inline static int32_t get_offset_of_enemyscore_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyscore_8)); }
	inline int32_t get_enemyscore_8() const { return ___enemyscore_8; }
	inline int32_t* get_address_of_enemyscore_8() { return &___enemyscore_8; }
	inline void set_enemyscore_8(int32_t value)
	{
		___enemyscore_8 = value;
	}

	inline static int32_t get_offset_of_patternIndex_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___patternIndex_9)); }
	inline int32_t get_patternIndex_9() const { return ___patternIndex_9; }
	inline int32_t* get_address_of_patternIndex_9() { return &___patternIndex_9; }
	inline void set_patternIndex_9(int32_t value)
	{
		___patternIndex_9 = value;
	}

	inline static int32_t get_offset_of_curPatternCount_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___curPatternCount_10)); }
	inline int32_t get_curPatternCount_10() const { return ___curPatternCount_10; }
	inline int32_t* get_address_of_curPatternCount_10() { return &___curPatternCount_10; }
	inline void set_curPatternCount_10(int32_t value)
	{
		___curPatternCount_10 = value;
	}

	inline static int32_t get_offset_of_maxPatternCount_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxPatternCount_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_maxPatternCount_11() const { return ___maxPatternCount_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_maxPatternCount_11() { return &___maxPatternCount_11; }
	inline void set_maxPatternCount_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___maxPatternCount_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxPatternCount_11), (void*)value);
	}

	inline static int32_t get_offset_of_maxShotDelay_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxShotDelay_12)); }
	inline float get_maxShotDelay_12() const { return ___maxShotDelay_12; }
	inline float* get_address_of_maxShotDelay_12() { return &___maxShotDelay_12; }
	inline void set_maxShotDelay_12(float value)
	{
		___maxShotDelay_12 = value;
	}

	inline static int32_t get_offset_of_curShotDelay_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___curShotDelay_13)); }
	inline float get_curShotDelay_13() const { return ___curShotDelay_13; }
	inline float* get_address_of_curShotDelay_13() { return &___curShotDelay_13; }
	inline void set_curShotDelay_13(float value)
	{
		___curShotDelay_13 = value;
	}

	inline static int32_t get_offset_of_hit_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___hit_14)); }
	inline bool get_hit_14() const { return ___hit_14; }
	inline bool* get_address_of_hit_14() { return &___hit_14; }
	inline void set_hit_14(bool value)
	{
		___hit_14 = value;
	}

	inline static int32_t get_offset_of_bulletObjA_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bulletObjA_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletObjA_15() const { return ___bulletObjA_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletObjA_15() { return &___bulletObjA_15; }
	inline void set_bulletObjA_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletObjA_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletObjA_15), (void*)value);
	}

	inline static int32_t get_offset_of_bulletBossA_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bulletBossA_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletBossA_16() const { return ___bulletBossA_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletBossA_16() { return &___bulletBossA_16; }
	inline void set_bulletBossA_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletBossA_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletBossA_16), (void*)value);
	}

	inline static int32_t get_offset_of_bulletBossB_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bulletBossB_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletBossB_17() const { return ___bulletBossB_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletBossB_17() { return &___bulletBossB_17; }
	inline void set_bulletBossB_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletBossB_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletBossB_17), (void*)value);
	}

	inline static int32_t get_offset_of_itempower_18() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___itempower_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itempower_18() const { return ___itempower_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itempower_18() { return &___itempower_18; }
	inline void set_itempower_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itempower_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itempower_18), (void*)value);
	}

	inline static int32_t get_offset_of_itemlife_19() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___itemlife_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemlife_19() const { return ___itemlife_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemlife_19() { return &___itemlife_19; }
	inline void set_itemlife_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemlife_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemlife_19), (void*)value);
	}

	inline static int32_t get_offset_of_itemshield_20() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___itemshield_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemshield_20() const { return ___itemshield_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemshield_20() { return &___itemshield_20; }
	inline void set_itemshield_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemshield_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemshield_20), (void*)value);
	}

	inline static int32_t get_offset_of_itemboom_21() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___itemboom_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemboom_21() const { return ___itemboom_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemboom_21() { return &___itemboom_21; }
	inline void set_itemboom_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemboom_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemboom_21), (void*)value);
	}

	inline static int32_t get_offset_of_player_22() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___player_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_22() const { return ___player_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_22() { return &___player_22; }
	inline void set_player_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_22), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_23() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___gameManager_23)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_23() const { return ___gameManager_23; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_23() { return &___gameManager_23; }
	inline void set_gameManager_23(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_23), (void*)value);
	}

	inline static int32_t get_offset_of_objectManager_24() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___objectManager_24)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get_objectManager_24() const { return ___objectManager_24; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of_objectManager_24() { return &___objectManager_24; }
	inline void set_objectManager_24(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		___objectManager_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectManager_24), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_25() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___spriteRenderer_25)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_25() const { return ___spriteRenderer_25; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_25() { return &___spriteRenderer_25; }
	inline void set_spriteRenderer_25(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_25), (void*)value);
	}

	inline static int32_t get_offset_of_rigid_26() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___rigid_26)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigid_26() const { return ___rigid_26; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigid_26() { return &___rigid_26; }
	inline void set_rigid_26(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigid_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_26), (void*)value);
	}
};


// Explosion
struct Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator Explosion::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ObjectManager GameManager::objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ___objectManager_4;
	// System.String[] GameManager::enemyObjs
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___enemyObjs_5;
	// UnityEngine.Transform[] GameManager::spawnPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___spawnPoints_6;
	// UnityEngine.Transform GameManager::bosspoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bosspoint_7;
	// System.Single GameManager::maxSpawnDelay
	float ___maxSpawnDelay_8;
	// System.Single GameManager::curSpawnDelay
	float ___curSpawnDelay_9;
	// UnityEngine.GameObject GameManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_10;
	// UnityEngine.GameObject GameManager::explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosion_11;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_12;
	// UnityEngine.UI.Image[] GameManager::lifeImage
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___lifeImage_13;
	// UnityEngine.UI.Image[] GameManager::boomImage
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___boomImage_14;
	// System.Int32 GameManager::curenemycount
	int32_t ___curenemycount_15;
	// System.Int32 GameManager::midenemycount
	int32_t ___midenemycount_16;
	// System.Int32 GameManager::maxenemycount
	int32_t ___maxenemycount_17;
	// System.Int32 GameManager::curbossA_count
	int32_t ___curbossA_count_18;
	// System.Int32 GameManager::maxbossA_count
	int32_t ___maxbossA_count_19;
	// System.Int32 GameManager::curbossB_count
	int32_t ___curbossB_count_20;
	// System.Int32 GameManager::maxbossB_count
	int32_t ___maxbossB_count_21;
	// System.Boolean GameManager::BossAdie
	bool ___BossAdie_22;
	// System.Boolean GameManager::BossBdie
	bool ___BossBdie_23;

public:
	inline static int32_t get_offset_of_objectManager_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___objectManager_4)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get_objectManager_4() const { return ___objectManager_4; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of_objectManager_4() { return &___objectManager_4; }
	inline void set_objectManager_4(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		___objectManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemyObjs_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemyObjs_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_enemyObjs_5() const { return ___enemyObjs_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_enemyObjs_5() { return &___enemyObjs_5; }
	inline void set_enemyObjs_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___enemyObjs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyObjs_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoints_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___spawnPoints_6)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_spawnPoints_6() const { return ___spawnPoints_6; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_spawnPoints_6() { return &___spawnPoints_6; }
	inline void set_spawnPoints_6(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___spawnPoints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_6), (void*)value);
	}

	inline static int32_t get_offset_of_bosspoint_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___bosspoint_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bosspoint_7() const { return ___bosspoint_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bosspoint_7() { return &___bosspoint_7; }
	inline void set_bosspoint_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bosspoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bosspoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_maxSpawnDelay_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxSpawnDelay_8)); }
	inline float get_maxSpawnDelay_8() const { return ___maxSpawnDelay_8; }
	inline float* get_address_of_maxSpawnDelay_8() { return &___maxSpawnDelay_8; }
	inline void set_maxSpawnDelay_8(float value)
	{
		___maxSpawnDelay_8 = value;
	}

	inline static int32_t get_offset_of_curSpawnDelay_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___curSpawnDelay_9)); }
	inline float get_curSpawnDelay_9() const { return ___curSpawnDelay_9; }
	inline float* get_address_of_curSpawnDelay_9() { return &___curSpawnDelay_9; }
	inline void set_curSpawnDelay_9(float value)
	{
		___curSpawnDelay_9 = value;
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_10() const { return ___player_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_10), (void*)value);
	}

	inline static int32_t get_offset_of_explosion_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___explosion_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosion_11() const { return ___explosion_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosion_11() { return &___explosion_11; }
	inline void set_explosion_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosion_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_11), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scoreText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_12() const { return ___scoreText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_12() { return &___scoreText_12; }
	inline void set_scoreText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_12), (void*)value);
	}

	inline static int32_t get_offset_of_lifeImage_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___lifeImage_13)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_lifeImage_13() const { return ___lifeImage_13; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_lifeImage_13() { return &___lifeImage_13; }
	inline void set_lifeImage_13(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___lifeImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lifeImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_boomImage_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boomImage_14)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_boomImage_14() const { return ___boomImage_14; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_boomImage_14() { return &___boomImage_14; }
	inline void set_boomImage_14(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___boomImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_curenemycount_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___curenemycount_15)); }
	inline int32_t get_curenemycount_15() const { return ___curenemycount_15; }
	inline int32_t* get_address_of_curenemycount_15() { return &___curenemycount_15; }
	inline void set_curenemycount_15(int32_t value)
	{
		___curenemycount_15 = value;
	}

	inline static int32_t get_offset_of_midenemycount_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___midenemycount_16)); }
	inline int32_t get_midenemycount_16() const { return ___midenemycount_16; }
	inline int32_t* get_address_of_midenemycount_16() { return &___midenemycount_16; }
	inline void set_midenemycount_16(int32_t value)
	{
		___midenemycount_16 = value;
	}

	inline static int32_t get_offset_of_maxenemycount_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxenemycount_17)); }
	inline int32_t get_maxenemycount_17() const { return ___maxenemycount_17; }
	inline int32_t* get_address_of_maxenemycount_17() { return &___maxenemycount_17; }
	inline void set_maxenemycount_17(int32_t value)
	{
		___maxenemycount_17 = value;
	}

	inline static int32_t get_offset_of_curbossA_count_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___curbossA_count_18)); }
	inline int32_t get_curbossA_count_18() const { return ___curbossA_count_18; }
	inline int32_t* get_address_of_curbossA_count_18() { return &___curbossA_count_18; }
	inline void set_curbossA_count_18(int32_t value)
	{
		___curbossA_count_18 = value;
	}

	inline static int32_t get_offset_of_maxbossA_count_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxbossA_count_19)); }
	inline int32_t get_maxbossA_count_19() const { return ___maxbossA_count_19; }
	inline int32_t* get_address_of_maxbossA_count_19() { return &___maxbossA_count_19; }
	inline void set_maxbossA_count_19(int32_t value)
	{
		___maxbossA_count_19 = value;
	}

	inline static int32_t get_offset_of_curbossB_count_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___curbossB_count_20)); }
	inline int32_t get_curbossB_count_20() const { return ___curbossB_count_20; }
	inline int32_t* get_address_of_curbossB_count_20() { return &___curbossB_count_20; }
	inline void set_curbossB_count_20(int32_t value)
	{
		___curbossB_count_20 = value;
	}

	inline static int32_t get_offset_of_maxbossB_count_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxbossB_count_21)); }
	inline int32_t get_maxbossB_count_21() const { return ___maxbossB_count_21; }
	inline int32_t* get_address_of_maxbossB_count_21() { return &___maxbossB_count_21; }
	inline void set_maxbossB_count_21(int32_t value)
	{
		___maxbossB_count_21 = value;
	}

	inline static int32_t get_offset_of_BossAdie_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___BossAdie_22)); }
	inline bool get_BossAdie_22() const { return ___BossAdie_22; }
	inline bool* get_address_of_BossAdie_22() { return &___BossAdie_22; }
	inline void set_BossAdie_22(bool value)
	{
		___BossAdie_22 = value;
	}

	inline static int32_t get_offset_of_BossBdie_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___BossBdie_23)); }
	inline bool get_BossBdie_23() const { return ___BossBdie_23; }
	inline bool* get_address_of_BossBdie_23() { return &___BossBdie_23; }
	inline void set_BossBdie_23(bool value)
	{
		___BossBdie_23 = value;
	}
};


// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Item::type
	String_t* ___type_4;
	// UnityEngine.Rigidbody2D Item::rigid
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigid_5;

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___type_4)); }
	inline String_t* get_type_4() const { return ___type_4; }
	inline String_t** get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(String_t* value)
	{
		___type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_4), (void*)value);
	}

	inline static int32_t get_offset_of_rigid_5() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___rigid_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigid_5() const { return ___rigid_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigid_5() { return &___rigid_5; }
	inline void set_rigid_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_5), (void*)value);
	}
};


// MakeAster
struct MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ObjectManager MakeAster::objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ___objectManager_4;
	// System.String[] MakeAster::asterObjs
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___asterObjs_5;
	// System.Single MakeAster::timeDiff
	float ___timeDiff_6;
	// System.Single MakeAster::timer
	float ___timer_7;

public:
	inline static int32_t get_offset_of_objectManager_4() { return static_cast<int32_t>(offsetof(MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09, ___objectManager_4)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get_objectManager_4() const { return ___objectManager_4; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of_objectManager_4() { return &___objectManager_4; }
	inline void set_objectManager_4(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		___objectManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_asterObjs_5() { return static_cast<int32_t>(offsetof(MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09, ___asterObjs_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_asterObjs_5() const { return ___asterObjs_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_asterObjs_5() { return &___asterObjs_5; }
	inline void set_asterObjs_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___asterObjs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterObjs_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeDiff_6() { return static_cast<int32_t>(offsetof(MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09, ___timeDiff_6)); }
	inline float get_timeDiff_6() const { return ___timeDiff_6; }
	inline float* get_address_of_timeDiff_6() { return &___timeDiff_6; }
	inline void set_timeDiff_6(float value)
	{
		___timeDiff_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}
};


// MovementObject
struct MovementObject_t9010E35DCF25535E033BD8C458E8CFD6F9540279  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VirtualJoystick MovementObject::virtualJoystick
	VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * ___virtualJoystick_4;
	// System.Single MovementObject::moveSpeed
	float ___moveSpeed_5;

public:
	inline static int32_t get_offset_of_virtualJoystick_4() { return static_cast<int32_t>(offsetof(MovementObject_t9010E35DCF25535E033BD8C458E8CFD6F9540279, ___virtualJoystick_4)); }
	inline VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * get_virtualJoystick_4() const { return ___virtualJoystick_4; }
	inline VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 ** get_address_of_virtualJoystick_4() { return &___virtualJoystick_4; }
	inline void set_virtualJoystick_4(VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * value)
	{
		___virtualJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virtualJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(MovementObject_t9010E35DCF25535E033BD8C458E8CFD6F9540279, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}
};


// ObjectManager
struct ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ObjectManager::enemySPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemySPrefab_4;
	// UnityEngine.GameObject ObjectManager::enemyMPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyMPrefab_5;
	// UnityEngine.GameObject ObjectManager::enemyLPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyLPrefab_6;
	// UnityEngine.GameObject ObjectManager::bossAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bossAPrefab_7;
	// UnityEngine.GameObject ObjectManager::bossBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bossBPrefab_8;
	// UnityEngine.GameObject ObjectManager::itempowerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itempowerPrefab_9;
	// UnityEngine.GameObject ObjectManager::itemlifePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemlifePrefab_10;
	// UnityEngine.GameObject ObjectManager::itemshieldPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemshieldPrefab_11;
	// UnityEngine.GameObject ObjectManager::itemboomPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemboomPrefab_12;
	// UnityEngine.GameObject ObjectManager::playerbulletAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerbulletAPrefab_13;
	// UnityEngine.GameObject ObjectManager::playerbulletBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerbulletBPrefab_14;
	// UnityEngine.GameObject ObjectManager::enemybulletAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemybulletAPrefab_15;
	// UnityEngine.GameObject ObjectManager::bossbulletAPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bossbulletAPrefab_16;
	// UnityEngine.GameObject ObjectManager::bossbulletBPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bossbulletBPrefab_17;
	// UnityEngine.GameObject ObjectManager::explosionPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosionPrefab_18;
	// UnityEngine.GameObject ObjectManager::boomeffectPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boomeffectPrefab_19;
	// UnityEngine.GameObject ObjectManager::shieldeffectPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shieldeffectPrefab_20;
	// UnityEngine.GameObject ObjectManager::asterBigPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asterBigPrefab_21;
	// UnityEngine.GameObject ObjectManager::asterHugePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asterHugePrefab_22;
	// UnityEngine.GameObject ObjectManager::asterMedPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asterMedPrefab_23;
	// UnityEngine.GameObject ObjectManager::asterSmallPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___asterSmallPrefab_24;
	// UnityEngine.GameObject[] ObjectManager::enemyS
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyS_25;
	// UnityEngine.GameObject[] ObjectManager::enemyM
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyM_26;
	// UnityEngine.GameObject[] ObjectManager::enemyL
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyL_27;
	// UnityEngine.GameObject[] ObjectManager::bossA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___bossA_28;
	// UnityEngine.GameObject[] ObjectManager::bossB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___bossB_29;
	// UnityEngine.GameObject[] ObjectManager::itempower
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___itempower_30;
	// UnityEngine.GameObject[] ObjectManager::itemlife
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___itemlife_31;
	// UnityEngine.GameObject[] ObjectManager::itemshield
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___itemshield_32;
	// UnityEngine.GameObject[] ObjectManager::itemboom
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___itemboom_33;
	// UnityEngine.GameObject[] ObjectManager::playerbulletA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___playerbulletA_34;
	// UnityEngine.GameObject[] ObjectManager::playerbulletB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___playerbulletB_35;
	// UnityEngine.GameObject[] ObjectManager::enemybulletA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemybulletA_36;
	// UnityEngine.GameObject[] ObjectManager::bossbulletA
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___bossbulletA_37;
	// UnityEngine.GameObject[] ObjectManager::bossbulletB
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___bossbulletB_38;
	// UnityEngine.GameObject[] ObjectManager::explosion
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___explosion_39;
	// UnityEngine.GameObject[] ObjectManager::boomeffect
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___boomeffect_40;
	// UnityEngine.GameObject[] ObjectManager::shieldeffect
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___shieldeffect_41;
	// UnityEngine.GameObject[] ObjectManager::asterBig
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___asterBig_42;
	// UnityEngine.GameObject[] ObjectManager::asterHuge
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___asterHuge_43;
	// UnityEngine.GameObject[] ObjectManager::asterMed
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___asterMed_44;
	// UnityEngine.GameObject[] ObjectManager::asterSmall
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___asterSmall_45;
	// UnityEngine.GameObject[] ObjectManager::targetPool
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___targetPool_46;

public:
	inline static int32_t get_offset_of_enemySPrefab_4() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemySPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemySPrefab_4() const { return ___enemySPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemySPrefab_4() { return &___enemySPrefab_4; }
	inline void set_enemySPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemySPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemySPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemyMPrefab_5() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemyMPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyMPrefab_5() const { return ___enemyMPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyMPrefab_5() { return &___enemyMPrefab_5; }
	inline void set_enemyMPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyMPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyMPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemyLPrefab_6() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemyLPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyLPrefab_6() const { return ___enemyLPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyLPrefab_6() { return &___enemyLPrefab_6; }
	inline void set_enemyLPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyLPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyLPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_bossAPrefab_7() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossAPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bossAPrefab_7() const { return ___bossAPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bossAPrefab_7() { return &___bossAPrefab_7; }
	inline void set_bossAPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bossAPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossAPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_bossBPrefab_8() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossBPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bossBPrefab_8() const { return ___bossBPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bossBPrefab_8() { return &___bossBPrefab_8; }
	inline void set_bossBPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bossBPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossBPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_itempowerPrefab_9() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itempowerPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itempowerPrefab_9() const { return ___itempowerPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itempowerPrefab_9() { return &___itempowerPrefab_9; }
	inline void set_itempowerPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itempowerPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itempowerPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_itemlifePrefab_10() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itemlifePrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemlifePrefab_10() const { return ___itemlifePrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemlifePrefab_10() { return &___itemlifePrefab_10; }
	inline void set_itemlifePrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemlifePrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemlifePrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_itemshieldPrefab_11() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itemshieldPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemshieldPrefab_11() const { return ___itemshieldPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemshieldPrefab_11() { return &___itemshieldPrefab_11; }
	inline void set_itemshieldPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemshieldPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemshieldPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_itemboomPrefab_12() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itemboomPrefab_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemboomPrefab_12() const { return ___itemboomPrefab_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemboomPrefab_12() { return &___itemboomPrefab_12; }
	inline void set_itemboomPrefab_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemboomPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemboomPrefab_12), (void*)value);
	}

	inline static int32_t get_offset_of_playerbulletAPrefab_13() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___playerbulletAPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerbulletAPrefab_13() const { return ___playerbulletAPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerbulletAPrefab_13() { return &___playerbulletAPrefab_13; }
	inline void set_playerbulletAPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerbulletAPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerbulletAPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_playerbulletBPrefab_14() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___playerbulletBPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerbulletBPrefab_14() const { return ___playerbulletBPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerbulletBPrefab_14() { return &___playerbulletBPrefab_14; }
	inline void set_playerbulletBPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerbulletBPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerbulletBPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_enemybulletAPrefab_15() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemybulletAPrefab_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemybulletAPrefab_15() const { return ___enemybulletAPrefab_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemybulletAPrefab_15() { return &___enemybulletAPrefab_15; }
	inline void set_enemybulletAPrefab_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemybulletAPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemybulletAPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_bossbulletAPrefab_16() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossbulletAPrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bossbulletAPrefab_16() const { return ___bossbulletAPrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bossbulletAPrefab_16() { return &___bossbulletAPrefab_16; }
	inline void set_bossbulletAPrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bossbulletAPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossbulletAPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_bossbulletBPrefab_17() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossbulletBPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bossbulletBPrefab_17() const { return ___bossbulletBPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bossbulletBPrefab_17() { return &___bossbulletBPrefab_17; }
	inline void set_bossbulletBPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bossbulletBPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossbulletBPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_explosionPrefab_18() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___explosionPrefab_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosionPrefab_18() const { return ___explosionPrefab_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosionPrefab_18() { return &___explosionPrefab_18; }
	inline void set_explosionPrefab_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosionPrefab_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionPrefab_18), (void*)value);
	}

	inline static int32_t get_offset_of_boomeffectPrefab_19() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___boomeffectPrefab_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boomeffectPrefab_19() const { return ___boomeffectPrefab_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boomeffectPrefab_19() { return &___boomeffectPrefab_19; }
	inline void set_boomeffectPrefab_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boomeffectPrefab_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomeffectPrefab_19), (void*)value);
	}

	inline static int32_t get_offset_of_shieldeffectPrefab_20() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___shieldeffectPrefab_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shieldeffectPrefab_20() const { return ___shieldeffectPrefab_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shieldeffectPrefab_20() { return &___shieldeffectPrefab_20; }
	inline void set_shieldeffectPrefab_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shieldeffectPrefab_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldeffectPrefab_20), (void*)value);
	}

	inline static int32_t get_offset_of_asterBigPrefab_21() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterBigPrefab_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asterBigPrefab_21() const { return ___asterBigPrefab_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asterBigPrefab_21() { return &___asterBigPrefab_21; }
	inline void set_asterBigPrefab_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asterBigPrefab_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterBigPrefab_21), (void*)value);
	}

	inline static int32_t get_offset_of_asterHugePrefab_22() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterHugePrefab_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asterHugePrefab_22() const { return ___asterHugePrefab_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asterHugePrefab_22() { return &___asterHugePrefab_22; }
	inline void set_asterHugePrefab_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asterHugePrefab_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterHugePrefab_22), (void*)value);
	}

	inline static int32_t get_offset_of_asterMedPrefab_23() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterMedPrefab_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asterMedPrefab_23() const { return ___asterMedPrefab_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asterMedPrefab_23() { return &___asterMedPrefab_23; }
	inline void set_asterMedPrefab_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asterMedPrefab_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterMedPrefab_23), (void*)value);
	}

	inline static int32_t get_offset_of_asterSmallPrefab_24() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterSmallPrefab_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_asterSmallPrefab_24() const { return ___asterSmallPrefab_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_asterSmallPrefab_24() { return &___asterSmallPrefab_24; }
	inline void set_asterSmallPrefab_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___asterSmallPrefab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterSmallPrefab_24), (void*)value);
	}

	inline static int32_t get_offset_of_enemyS_25() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemyS_25)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyS_25() const { return ___enemyS_25; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyS_25() { return &___enemyS_25; }
	inline void set_enemyS_25(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyS_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyS_25), (void*)value);
	}

	inline static int32_t get_offset_of_enemyM_26() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemyM_26)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyM_26() const { return ___enemyM_26; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyM_26() { return &___enemyM_26; }
	inline void set_enemyM_26(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyM_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyM_26), (void*)value);
	}

	inline static int32_t get_offset_of_enemyL_27() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemyL_27)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyL_27() const { return ___enemyL_27; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyL_27() { return &___enemyL_27; }
	inline void set_enemyL_27(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyL_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyL_27), (void*)value);
	}

	inline static int32_t get_offset_of_bossA_28() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossA_28)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_bossA_28() const { return ___bossA_28; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_bossA_28() { return &___bossA_28; }
	inline void set_bossA_28(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___bossA_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossA_28), (void*)value);
	}

	inline static int32_t get_offset_of_bossB_29() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossB_29)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_bossB_29() const { return ___bossB_29; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_bossB_29() { return &___bossB_29; }
	inline void set_bossB_29(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___bossB_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossB_29), (void*)value);
	}

	inline static int32_t get_offset_of_itempower_30() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itempower_30)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_itempower_30() const { return ___itempower_30; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_itempower_30() { return &___itempower_30; }
	inline void set_itempower_30(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___itempower_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itempower_30), (void*)value);
	}

	inline static int32_t get_offset_of_itemlife_31() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itemlife_31)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_itemlife_31() const { return ___itemlife_31; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_itemlife_31() { return &___itemlife_31; }
	inline void set_itemlife_31(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___itemlife_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemlife_31), (void*)value);
	}

	inline static int32_t get_offset_of_itemshield_32() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itemshield_32)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_itemshield_32() const { return ___itemshield_32; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_itemshield_32() { return &___itemshield_32; }
	inline void set_itemshield_32(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___itemshield_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemshield_32), (void*)value);
	}

	inline static int32_t get_offset_of_itemboom_33() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___itemboom_33)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_itemboom_33() const { return ___itemboom_33; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_itemboom_33() { return &___itemboom_33; }
	inline void set_itemboom_33(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___itemboom_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemboom_33), (void*)value);
	}

	inline static int32_t get_offset_of_playerbulletA_34() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___playerbulletA_34)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_playerbulletA_34() const { return ___playerbulletA_34; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_playerbulletA_34() { return &___playerbulletA_34; }
	inline void set_playerbulletA_34(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___playerbulletA_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerbulletA_34), (void*)value);
	}

	inline static int32_t get_offset_of_playerbulletB_35() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___playerbulletB_35)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_playerbulletB_35() const { return ___playerbulletB_35; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_playerbulletB_35() { return &___playerbulletB_35; }
	inline void set_playerbulletB_35(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___playerbulletB_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerbulletB_35), (void*)value);
	}

	inline static int32_t get_offset_of_enemybulletA_36() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___enemybulletA_36)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemybulletA_36() const { return ___enemybulletA_36; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemybulletA_36() { return &___enemybulletA_36; }
	inline void set_enemybulletA_36(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemybulletA_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemybulletA_36), (void*)value);
	}

	inline static int32_t get_offset_of_bossbulletA_37() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossbulletA_37)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_bossbulletA_37() const { return ___bossbulletA_37; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_bossbulletA_37() { return &___bossbulletA_37; }
	inline void set_bossbulletA_37(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___bossbulletA_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossbulletA_37), (void*)value);
	}

	inline static int32_t get_offset_of_bossbulletB_38() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___bossbulletB_38)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_bossbulletB_38() const { return ___bossbulletB_38; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_bossbulletB_38() { return &___bossbulletB_38; }
	inline void set_bossbulletB_38(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___bossbulletB_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bossbulletB_38), (void*)value);
	}

	inline static int32_t get_offset_of_explosion_39() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___explosion_39)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_explosion_39() const { return ___explosion_39; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_explosion_39() { return &___explosion_39; }
	inline void set_explosion_39(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___explosion_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_39), (void*)value);
	}

	inline static int32_t get_offset_of_boomeffect_40() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___boomeffect_40)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_boomeffect_40() const { return ___boomeffect_40; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_boomeffect_40() { return &___boomeffect_40; }
	inline void set_boomeffect_40(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___boomeffect_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomeffect_40), (void*)value);
	}

	inline static int32_t get_offset_of_shieldeffect_41() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___shieldeffect_41)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_shieldeffect_41() const { return ___shieldeffect_41; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_shieldeffect_41() { return &___shieldeffect_41; }
	inline void set_shieldeffect_41(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___shieldeffect_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldeffect_41), (void*)value);
	}

	inline static int32_t get_offset_of_asterBig_42() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterBig_42)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_asterBig_42() const { return ___asterBig_42; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_asterBig_42() { return &___asterBig_42; }
	inline void set_asterBig_42(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___asterBig_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterBig_42), (void*)value);
	}

	inline static int32_t get_offset_of_asterHuge_43() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterHuge_43)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_asterHuge_43() const { return ___asterHuge_43; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_asterHuge_43() { return &___asterHuge_43; }
	inline void set_asterHuge_43(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___asterHuge_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterHuge_43), (void*)value);
	}

	inline static int32_t get_offset_of_asterMed_44() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterMed_44)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_asterMed_44() const { return ___asterMed_44; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_asterMed_44() { return &___asterMed_44; }
	inline void set_asterMed_44(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___asterMed_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterMed_44), (void*)value);
	}

	inline static int32_t get_offset_of_asterSmall_45() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___asterSmall_45)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_asterSmall_45() const { return ___asterSmall_45; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_asterSmall_45() { return &___asterSmall_45; }
	inline void set_asterSmall_45(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___asterSmall_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asterSmall_45), (void*)value);
	}

	inline static int32_t get_offset_of_targetPool_46() { return static_cast<int32_t>(offsetof(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0, ___targetPool_46)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_targetPool_46() const { return ___targetPool_46; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_targetPool_46() { return &___targetPool_46; }
	inline void set_targetPool_46(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___targetPool_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetPool_46), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::speed
	float ___speed_4;
	// System.Single Player::maxShotDelay
	float ___maxShotDelay_5;
	// System.Single Player::curShotDelay
	float ___curShotDelay_6;
	// System.Int32 Player::power
	int32_t ___power_7;
	// System.Int32 Player::maxpower
	int32_t ___maxpower_8;
	// System.Int32 Player::life
	int32_t ___life_9;
	// System.Int32 Player::maxlife
	int32_t ___maxlife_10;
	// System.Int32 Player::score
	int32_t ___score_11;
	// System.Int32 Player::boom
	int32_t ___boom_12;
	// System.Int32 Player::maxboom
	int32_t ___maxboom_13;
	// System.Boolean Player::isT
	bool ___isT_14;
	// System.Boolean Player::isB
	bool ___isB_15;
	// System.Boolean Player::isR
	bool ___isR_16;
	// System.Boolean Player::isL
	bool ___isL_17;
	// System.Boolean Player::isHit
	bool ___isHit_18;
	// System.Boolean Player::isBoomTime
	bool ___isBoomTime_19;
	// System.Boolean Player::isRespawnTime
	bool ___isRespawnTime_20;
	// System.Boolean Player::isButton
	bool ___isButton_21;
	// UnityEngine.GameObject Player::bulletObjA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletObjA_22;
	// UnityEngine.GameObject Player::bulletObjB
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletObjB_23;
	// UnityEngine.GameObject Player::shieldeffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shieldeffect_24;
	// UnityEngine.GameObject Player::boomeffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boomeffect_25;
	// UnityEngine.GameObject Player::invincibilityeffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___invincibilityeffect_26;
	// GameManager Player::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_27;
	// ObjectManager Player::objectManager
	ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * ___objectManager_28;
	// UnityEngine.SpriteRenderer Player::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_29;
	// UnityEngine.AudioSource Player::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_30;
	// VirtualJoystick Player::virtualJoystick
	VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * ___virtualJoystick_31;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_maxShotDelay_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___maxShotDelay_5)); }
	inline float get_maxShotDelay_5() const { return ___maxShotDelay_5; }
	inline float* get_address_of_maxShotDelay_5() { return &___maxShotDelay_5; }
	inline void set_maxShotDelay_5(float value)
	{
		___maxShotDelay_5 = value;
	}

	inline static int32_t get_offset_of_curShotDelay_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___curShotDelay_6)); }
	inline float get_curShotDelay_6() const { return ___curShotDelay_6; }
	inline float* get_address_of_curShotDelay_6() { return &___curShotDelay_6; }
	inline void set_curShotDelay_6(float value)
	{
		___curShotDelay_6 = value;
	}

	inline static int32_t get_offset_of_power_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___power_7)); }
	inline int32_t get_power_7() const { return ___power_7; }
	inline int32_t* get_address_of_power_7() { return &___power_7; }
	inline void set_power_7(int32_t value)
	{
		___power_7 = value;
	}

	inline static int32_t get_offset_of_maxpower_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___maxpower_8)); }
	inline int32_t get_maxpower_8() const { return ___maxpower_8; }
	inline int32_t* get_address_of_maxpower_8() { return &___maxpower_8; }
	inline void set_maxpower_8(int32_t value)
	{
		___maxpower_8 = value;
	}

	inline static int32_t get_offset_of_life_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___life_9)); }
	inline int32_t get_life_9() const { return ___life_9; }
	inline int32_t* get_address_of_life_9() { return &___life_9; }
	inline void set_life_9(int32_t value)
	{
		___life_9 = value;
	}

	inline static int32_t get_offset_of_maxlife_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___maxlife_10)); }
	inline int32_t get_maxlife_10() const { return ___maxlife_10; }
	inline int32_t* get_address_of_maxlife_10() { return &___maxlife_10; }
	inline void set_maxlife_10(int32_t value)
	{
		___maxlife_10 = value;
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}

	inline static int32_t get_offset_of_boom_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___boom_12)); }
	inline int32_t get_boom_12() const { return ___boom_12; }
	inline int32_t* get_address_of_boom_12() { return &___boom_12; }
	inline void set_boom_12(int32_t value)
	{
		___boom_12 = value;
	}

	inline static int32_t get_offset_of_maxboom_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___maxboom_13)); }
	inline int32_t get_maxboom_13() const { return ___maxboom_13; }
	inline int32_t* get_address_of_maxboom_13() { return &___maxboom_13; }
	inline void set_maxboom_13(int32_t value)
	{
		___maxboom_13 = value;
	}

	inline static int32_t get_offset_of_isT_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isT_14)); }
	inline bool get_isT_14() const { return ___isT_14; }
	inline bool* get_address_of_isT_14() { return &___isT_14; }
	inline void set_isT_14(bool value)
	{
		___isT_14 = value;
	}

	inline static int32_t get_offset_of_isB_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isB_15)); }
	inline bool get_isB_15() const { return ___isB_15; }
	inline bool* get_address_of_isB_15() { return &___isB_15; }
	inline void set_isB_15(bool value)
	{
		___isB_15 = value;
	}

	inline static int32_t get_offset_of_isR_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isR_16)); }
	inline bool get_isR_16() const { return ___isR_16; }
	inline bool* get_address_of_isR_16() { return &___isR_16; }
	inline void set_isR_16(bool value)
	{
		___isR_16 = value;
	}

	inline static int32_t get_offset_of_isL_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isL_17)); }
	inline bool get_isL_17() const { return ___isL_17; }
	inline bool* get_address_of_isL_17() { return &___isL_17; }
	inline void set_isL_17(bool value)
	{
		___isL_17 = value;
	}

	inline static int32_t get_offset_of_isHit_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isHit_18)); }
	inline bool get_isHit_18() const { return ___isHit_18; }
	inline bool* get_address_of_isHit_18() { return &___isHit_18; }
	inline void set_isHit_18(bool value)
	{
		___isHit_18 = value;
	}

	inline static int32_t get_offset_of_isBoomTime_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isBoomTime_19)); }
	inline bool get_isBoomTime_19() const { return ___isBoomTime_19; }
	inline bool* get_address_of_isBoomTime_19() { return &___isBoomTime_19; }
	inline void set_isBoomTime_19(bool value)
	{
		___isBoomTime_19 = value;
	}

	inline static int32_t get_offset_of_isRespawnTime_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isRespawnTime_20)); }
	inline bool get_isRespawnTime_20() const { return ___isRespawnTime_20; }
	inline bool* get_address_of_isRespawnTime_20() { return &___isRespawnTime_20; }
	inline void set_isRespawnTime_20(bool value)
	{
		___isRespawnTime_20 = value;
	}

	inline static int32_t get_offset_of_isButton_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isButton_21)); }
	inline bool get_isButton_21() const { return ___isButton_21; }
	inline bool* get_address_of_isButton_21() { return &___isButton_21; }
	inline void set_isButton_21(bool value)
	{
		___isButton_21 = value;
	}

	inline static int32_t get_offset_of_bulletObjA_22() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___bulletObjA_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletObjA_22() const { return ___bulletObjA_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletObjA_22() { return &___bulletObjA_22; }
	inline void set_bulletObjA_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletObjA_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletObjA_22), (void*)value);
	}

	inline static int32_t get_offset_of_bulletObjB_23() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___bulletObjB_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletObjB_23() const { return ___bulletObjB_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletObjB_23() { return &___bulletObjB_23; }
	inline void set_bulletObjB_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletObjB_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletObjB_23), (void*)value);
	}

	inline static int32_t get_offset_of_shieldeffect_24() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___shieldeffect_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shieldeffect_24() const { return ___shieldeffect_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shieldeffect_24() { return &___shieldeffect_24; }
	inline void set_shieldeffect_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shieldeffect_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldeffect_24), (void*)value);
	}

	inline static int32_t get_offset_of_boomeffect_25() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___boomeffect_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boomeffect_25() const { return ___boomeffect_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boomeffect_25() { return &___boomeffect_25; }
	inline void set_boomeffect_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boomeffect_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomeffect_25), (void*)value);
	}

	inline static int32_t get_offset_of_invincibilityeffect_26() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___invincibilityeffect_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_invincibilityeffect_26() const { return ___invincibilityeffect_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_invincibilityeffect_26() { return &___invincibilityeffect_26; }
	inline void set_invincibilityeffect_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___invincibilityeffect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invincibilityeffect_26), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_27() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gameManager_27)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_27() const { return ___gameManager_27; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_27() { return &___gameManager_27; }
	inline void set_gameManager_27(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_27), (void*)value);
	}

	inline static int32_t get_offset_of_objectManager_28() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___objectManager_28)); }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * get_objectManager_28() const { return ___objectManager_28; }
	inline ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 ** get_address_of_objectManager_28() { return &___objectManager_28; }
	inline void set_objectManager_28(ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * value)
	{
		___objectManager_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectManager_28), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_29() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___spriteRenderer_29)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_29() const { return ___spriteRenderer_29; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_29() { return &___spriteRenderer_29; }
	inline void set_spriteRenderer_29(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_29), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_30() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___audioSource_30)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_30() const { return ___audioSource_30; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_30() { return &___audioSource_30; }
	inline void set_audioSource_30(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_30), (void*)value);
	}

	inline static int32_t get_offset_of_virtualJoystick_31() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___virtualJoystick_31)); }
	inline VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * get_virtualJoystick_31() const { return ___virtualJoystick_31; }
	inline VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 ** get_address_of_virtualJoystick_31() { return &___virtualJoystick_31; }
	inline void set_virtualJoystick_31(VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * value)
	{
		___virtualJoystick_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virtualJoystick_31), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip SoundManager::backGroundMusic
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___backGroundMusic_4;
	// UnityEngine.AudioClip SoundManager::jumpSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___jumpSound_5;
	// UnityEngine.AudioClip SoundManager::itemSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___itemSound_6;
	// UnityEngine.AudioSource SoundManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_7;

public:
	inline static int32_t get_offset_of_backGroundMusic_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___backGroundMusic_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_backGroundMusic_4() const { return ___backGroundMusic_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_backGroundMusic_4() { return &___backGroundMusic_4; }
	inline void set_backGroundMusic_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___backGroundMusic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backGroundMusic_4), (void*)value);
	}

	inline static int32_t get_offset_of_jumpSound_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___jumpSound_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_jumpSound_5() const { return ___jumpSound_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_jumpSound_5() { return &___jumpSound_5; }
	inline void set_jumpSound_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___jumpSound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpSound_5), (void*)value);
	}

	inline static int32_t get_offset_of_itemSound_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___itemSound_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_itemSound_6() const { return ___itemSound_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_itemSound_6() { return &___itemSound_6; }
	inline void set_itemSound_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___itemSound_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemSound_6), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___audioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_7() const { return ___audioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_7() { return &___audioSource_7; }
	inline void set_audioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_7), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::Instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___Instance_8;

public:
	inline static int32_t get_offset_of_Instance_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___Instance_8)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_Instance_8() const { return ___Instance_8; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_Instance_8() { return &___Instance_8; }
	inline void set_Instance_8(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___Instance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VirtualJoystick
struct VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image VirtualJoystick::imageBackground
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imageBackground_4;
	// UnityEngine.UI.Image VirtualJoystick::imageController
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imageController_5;
	// UnityEngine.Vector2 VirtualJoystick::touchPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchPosition_6;

public:
	inline static int32_t get_offset_of_imageBackground_4() { return static_cast<int32_t>(offsetof(VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9, ___imageBackground_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imageBackground_4() const { return ___imageBackground_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imageBackground_4() { return &___imageBackground_4; }
	inline void set_imageBackground_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imageBackground_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageBackground_4), (void*)value);
	}

	inline static int32_t get_offset_of_imageController_5() { return static_cast<int32_t>(offsetof(VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9, ___imageController_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imageController_5() const { return ___imageController_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imageController_5() { return &___imageController_5; }
	inline void set_imageController_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imageController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageController_5), (void*)value);
	}

	inline static int32_t get_offset_of_touchPosition_6() { return static_cast<int32_t>(offsetof(VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9, ___touchPosition_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchPosition_6() const { return ___touchPosition_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchPosition_6() { return &___touchPosition_6; }
	inline void set_touchPosition_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchPosition_6 = value;
	}
};


// ani2
struct ani2_tD6C03C1CB74AB2D56B3A32F9E954329C7A319785  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// aniScene
struct aniScene_tFD0D5481F484CC50A128081333E954E040EC16AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// enemybullet
struct enemybullet_t1C088169C99407C3A379F7DDBC24D729DA282F14  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Enemy::FireFoward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireFoward_m0B0183BB629316CFD8446B8173BE7CE98D59420D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::FireShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireShot_mF65DC5F7C49CED9A7B95E37026034F3359F3C2D3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::FireArc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireArc_m5CC410DD120B7C6BEF2A4D79389392224A3F631B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::FireAround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireAround_m64B7E348A6506292F6501A63854D87DE45411995 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectManager::MakeObj(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, String_t* ___type0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Enemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Reload_m835FFB5D1B01214B2E8F64603AF975B0EFB65B39 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void GameManager::CallExplosion(UnityEngine.Vector3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CallExplosion_mF9E501E5743477F31DB15C3DC4D88CCA9421C564 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, String_t* ___type1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Enemy::OnHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___dmg0, const RuntimeMethod* method);
// System.Void Enemy::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Hit_m09EB878EFDB3C81A0793B83D75AF84C087F2E594 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::UnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_UnHit_m406355C057623D38EB05E98659DE8EA75950C667 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void GameManager::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnEnemy_m5390C5B47828ABC4CB0CEB8603B5147D4C1EFC8F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Explosion>()
inline Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Explosion::StartExplosion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_StartExplosion_m8BE26A8DBBD941CEADB4C731B8020B2FB7C018C4 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, String_t* ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single VirtualJoystick::Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualJoystick_Horizontal_m54697A52E6ECB1101B68B105B8DDFA0994BD1A74 (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, const RuntimeMethod* method);
// System.Single VirtualJoystick::Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualJoystick_Vertical_m89210BB23EE14E0F48F05E972086A0CBA26BDC27 (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, const RuntimeMethod* method);
// System.Void ObjectManager::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Generate_mCDA13E0DDE7FF8BA545DAEBB96632AFE144D36DB (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E (String_t* ___s0, const RuntimeMethod* method);
// System.Void Player::Unbeatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Unbeatable_m05174B49018499D60F7A66903F0816D9D3A2C653 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Reload_mA71667C63FC5062ABBB1F005867E60A80494267D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Boom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Boom_mD85C7234849EDCEB60C9DE4712821329AFB587C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.Void GameManager::UpdateBoomIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___boom0, const RuntimeMethod* method);
// UnityEngine.GameObject[] ObjectManager::GetPool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, String_t* ___type0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void GameManager::UpdateLifeIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___life0, const RuntimeMethod* method);
// System.Void GameManager::RespawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Item>()
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void Aster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aster_Update_m0D30ED3495345C6636D80E1A901FED659F0A5464 (Aster_tED13643DBE0BBCD976AFBA665C7CCD5278F1CAFD * __this, const RuntimeMethod* method)
{
	{
		// transform.position += Vector3.left * speed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_4 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aster::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aster_OnTriggerEnter2D_m79BA6BE3028CA40CD593E304EB11D6DA6B8A39D8 (Aster_tED13643DBE0BBCD976AFBA665C7CCD5278F1CAFD * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6492EC45BDEC9B046D2C7B9BD0B9D1DDFEA0E762);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "BigBorder")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral6492EC45BDEC9B046D2C7B9BD0B9D1DDFEA0E762, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Aster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aster__ctor_m6350D77AD1B621D0375B4BD28665ED7929ABFBB0 (Aster_tED13643DBE0BBCD976AFBA665C7CCD5278F1CAFD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Bullet::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Awake_m2D77C2A3CF11F66E86FF074B8C4397C0E3DE2004 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<AudioSource>().Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnTriggerEnter2D_m9D34F5DCB36704FBF573BD78A9181790DD6C3B86 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "BorderBullet" || collision.gameObject.tag == "Enemy"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}

IL_002e:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Button::Click1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Click1_m02A696A42693F76004586856C06B0EA9FAEDC7CA (Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Easy");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7479A72B853B4FDBFCA88205F6F2D9437EE4ED7F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Button::Click2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Click2_mD3E5FE8EB3A815E92CD59B17F79E9E0910075990 (Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Normal");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral24158C6C79FE57BE153164B9D7ADCB302F5DF09A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Button::Click3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Click3_m8259DC0795F953566D667796F62C8CE7F3A8B4F0 (Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Hard");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral594DD0BF272B5892AA7F91E62C66BCD2666E72BB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Button::Help()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Help_m7471CD907A3E1196E309366FDCF39991F7AD1B65 (Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FB4A3DFA8FB5EDDF6BD48208481F84B1A7F4074);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Help");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9FB4A3DFA8FB5EDDF6BD48208481F84B1A7F4074, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Button::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Back_m0300F70BDA91F2A2B7B07527632A10FF60D094EA (Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Start");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m37527ACA69CE1C5D20C7EA7FC72BD35B8D4D89C9 (Button_t2EFB53426B2C1CE93E97C5D17D5BB47092BFD851 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_25(L_0);
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigid_26(L_1);
		// hit = false;
		__this->set_hit_14((bool)0);
		// }
		return;
	}
}
// System.Void Enemy::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnEnable_mC3C18F9F17C547216EF7C2716B262497E5CB3ADB (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (enemyName) {
		String_t* L_0 = __this->get_enemyName_4();
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_00c8;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0118;
		}
	}
	{
		return;
	}

IL_0058:
	{
		// rigid.velocity = Vector2.left * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = __this->get_rigid_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_14 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_12, L_15, /*hidden argument*/NULL);
		// health = (int)Maxhealth;
		int32_t L_16 = __this->get_Maxhealth_7();
		__this->set_health_6(L_16);
		// Invoke("Stop", 5);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717, (5.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0090:
	{
		// rigid.velocity = Vector2.left * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_17 = __this->get_rigid_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_19 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_17, L_20, /*hidden argument*/NULL);
		// health = (int)Maxhealth;
		int32_t L_21 = __this->get_Maxhealth_7();
		__this->set_health_6(L_21);
		// Invoke("Stop", 5);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717, (5.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c8:
	{
		// rigid.velocity = Vector2.left * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_22 = __this->get_rigid_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_24 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_22, L_25, /*hidden argument*/NULL);
		// health = (int)Maxhealth;
		int32_t L_26 = __this->get_Maxhealth_7();
		__this->set_health_6(L_26);
		// break;
		return;
	}

IL_00f0:
	{
		// rigid.velocity = Vector2.left * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_27 = __this->get_rigid_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_29 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_27, L_30, /*hidden argument*/NULL);
		// health = (int)Maxhealth;
		int32_t L_31 = __this->get_Maxhealth_7();
		__this->set_health_6(L_31);
		// break;
		return;
	}

IL_0118:
	{
		// rigid.velocity = Vector2.left * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_32 = __this->get_rigid_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_34 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_32, L_35, /*hidden argument*/NULL);
		// health = (int)Maxhealth;
		int32_t L_36 = __this->get_Maxhealth_7();
		__this->set_health_6(L_36);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void Enemy::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Stop_m335DA34C8020A098F8EC5777A014160C05919944 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!gameObject .activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Rigidbody2D rig = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		// rig.velocity = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_2, L_3, /*hidden argument*/NULL);
		// Invoke("Think", 2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Think()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Think_mD4F5C77DABB792ED7E30E835782851422325C48D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B3_0 = NULL;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B4_1 = NULL;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B8_0 = NULL;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * G_B9_1 = NULL;
	{
		// if(enemyName == "BossA")
		String_t* L_0 = __this->get_enemyName_4();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// patternIndex = patternIndex == 1 ? 0 : patternIndex + 1;
		int32_t L_2 = __this->get_patternIndex_9();
		G_B2_0 = __this;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B3_0 = __this;
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->get_patternIndex_9();
		G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		G_B4_1 = G_B2_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0027:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_patternIndex_9(G_B4_0);
		goto IL_005a;
	}

IL_002e:
	{
		// else if(enemyName == "BossB")
		String_t* L_4 = __this->get_enemyName_4();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		// patternIndex = patternIndex == 3 ? 0 : patternIndex + 1;
		int32_t L_6 = __this->get_patternIndex_9();
		G_B7_0 = __this;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			G_B8_0 = __this;
			goto IL_0054;
		}
	}
	{
		int32_t L_7 = __this->get_patternIndex_9();
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		G_B9_1 = G_B7_0;
		goto IL_0055;
	}

IL_0054:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0055:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_patternIndex_9(G_B9_0);
	}

IL_005a:
	{
		// curPatternCount = 0;
		__this->set_curPatternCount_10(0);
		// switch (patternIndex)
		int32_t L_8 = __this->get_patternIndex_9();
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_008d;
			}
			case 3:
			{
				goto IL_0094;
			}
		}
	}
	{
		return;
	}

IL_007f:
	{
		// FireFoward();
		Enemy_FireFoward_m0B0183BB629316CFD8446B8173BE7CE98D59420D(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0086:
	{
		// FireShot();
		Enemy_FireShot_mF65DC5F7C49CED9A7B95E37026034F3359F3C2D3(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_008d:
	{
		// FireArc();
		Enemy_FireArc_m5CC410DD120B7C6BEF2A4D79389392224A3F631B(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0094:
	{
		// FireAround();
		Enemy_FireAround_m64B7E348A6506292F6501A63854D87DE45411995(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireFoward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireFoward_m0B0183BB629316CFD8446B8173BE7CE98D59420D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E7280D14A9499ECDC283C241E1F945796D609B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_3 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_4 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_5 = NULL;
	{
		// if(health <= 0)
		int32_t L_0 = __this->get_health_6();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// GameObject bulletU = objectManager.MakeObj("BossbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_1 = __this->get_objectManager_24();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_1, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		// bulletU.transform.position = transform.position + Vector3.up * 1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_9, /*hidden argument*/NULL);
		// GameObject bulletD = objectManager.MakeObj("BossbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_10 = __this->get_objectManager_24();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_10, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		V_0 = L_11;
		// bulletD.transform.position = transform.position + Vector3.down * 1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_0;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_18, /*hidden argument*/NULL);
		// GameObject bulletUU = objectManager.MakeObj("BossbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_19 = __this->get_objectManager_24();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_19, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		V_1 = L_20;
		// bulletUU.transform.position = transform.position + Vector3.up * 2f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_1;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_27, /*hidden argument*/NULL);
		// GameObject bulletDD = objectManager.MakeObj("BossbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_28 = __this->get_objectManager_24();
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_28, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		V_2 = L_29;
		// bulletDD.transform.position = transform.position + Vector3.down * 2f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_36, /*hidden argument*/NULL);
		// Rigidbody2D rigU = bulletU.GetComponent<Rigidbody2D>();
		NullCheck(L_3);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_37;
		L_37 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_3, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D rigD = bulletD.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_0;
		NullCheck(L_38);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39;
		L_39 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_38, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_3 = L_39;
		// Rigidbody2D rigUU = bulletUU.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_1;
		NullCheck(L_40);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_41;
		L_41 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_40, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_4 = L_41;
		// Rigidbody2D rigDD = bulletDD.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_2;
		NullCheck(L_42);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_43;
		L_43 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_42, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_5 = L_43;
		// rigU.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_44, (7.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_37, L_45, 1, /*hidden argument*/NULL);
		// rigD.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_46 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_47, (7.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_46, L_48, 1, /*hidden argument*/NULL);
		// rigUU.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_49 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_50, (7.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_49, L_51, 1, /*hidden argument*/NULL);
		// rigDD.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_52 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		L_53 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		L_54 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_53, (7.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_52, L_54, 1, /*hidden argument*/NULL);
		// curPatternCount++;
		int32_t L_55 = __this->get_curPatternCount_10();
		__this->set_curPatternCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)));
		// if(curPatternCount < maxPatternCount[patternIndex])
		int32_t L_56 = __this->get_curPatternCount_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = __this->get_maxPatternCount_11();
		int32_t L_58 = __this->get_patternIndex_9();
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((((int32_t)L_56) >= ((int32_t)L_60)))
		{
			goto IL_019e;
		}
	}
	{
		// Invoke("FireFoward", 2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral19E7280D14A9499ECDC283C241E1F945796D609B, (2.0f), /*hidden argument*/NULL);
		return;
	}

IL_019e:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireShot_mF65DC5F7C49CED9A7B95E37026034F3359F3C2D3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4557D9CD7121439BC0228CA3553A0938D4107FB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(health <= 0)
		int32_t L_0 = __this->get_health_6();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// for(int index=0; index < 7; index++)
		V_0 = 0;
		goto IL_006a;
	}

IL_000e:
	{
		// GameObject bulletS = objectManager.MakeObj("BossbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_1 = __this->get_objectManager_24();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_1, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		// bulletS.transform.position = new Vector3(Random.Range(-3f, 2f), Random.Range(-3f,3f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-3.0f), (2.0f), /*hidden argument*/NULL);
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-3.0f), (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_7, /*hidden argument*/NULL);
		// Rigidbody2D rigS = bulletS.GetComponent<Rigidbody2D>();
		NullCheck(L_3);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8;
		L_8 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_3, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rigS.AddForce(Vector2.left * 5, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_8, L_10, 1, /*hidden argument*/NULL);
		// for(int index=0; index < 7; index++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_006a:
	{
		// for(int index=0; index < 7; index++)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)7)))
		{
			goto IL_000e;
		}
	}
	{
		// curPatternCount++;
		int32_t L_13 = __this->get_curPatternCount_10();
		__this->set_curPatternCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// if(curPatternCount < maxPatternCount[patternIndex])
		int32_t L_14 = __this->get_curPatternCount_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = __this->get_maxPatternCount_11();
		int32_t L_16 = __this->get_patternIndex_9();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((((int32_t)L_14) >= ((int32_t)L_18)))
		{
			goto IL_00a2;
		}
	}
	{
		// Invoke("FireShot", 3.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB4557D9CD7121439BC0228CA3553A0938D4107FB, (3.5f), /*hidden argument*/NULL);
		return;
	}

IL_00a2:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireArc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireArc_m5CC410DD120B7C6BEF2A4D79389392224A3F631B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA92C5392AD90816E79F98A42A62CC2DF6F08D2B);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(health <= 0)
		int32_t L_0 = __this->get_health_6();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// GameObject bulletArc = objectManager.MakeObj("BossbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_1 = __this->get_objectManager_24();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_1, _stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6, /*hidden argument*/NULL);
		// bulletArc.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_6, /*hidden argument*/NULL);
		// Rigidbody2D rigidArc = bulletArc.GetComponent<Rigidbody2D>();
		NullCheck(L_3);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_3, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector2 dirVecArc = new Vector2(-1, Mathf.Cos(Mathf.PI * 12 * curPatternCount/maxPatternCount[patternIndex]));
		int32_t L_8 = __this->get_curPatternCount_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_maxPatternCount_11();
		int32_t L_10 = __this->get_patternIndex_9();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(37.6991119f), (float)((float)((float)L_8))))/(float)((float)((float)L_12)))));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (-1.0f), L_13, /*hidden argument*/NULL);
		// rigidArc.AddForce(dirVecArc.normalized * 3, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_7, L_15, 1, /*hidden argument*/NULL);
		// curPatternCount++;
		int32_t L_16 = __this->get_curPatternCount_10();
		__this->set_curPatternCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// if(curPatternCount < maxPatternCount[patternIndex])
		int32_t L_17 = __this->get_curPatternCount_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_maxPatternCount_11();
		int32_t L_19 = __this->get_patternIndex_9();
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((int32_t)L_17) >= ((int32_t)L_21)))
		{
			goto IL_00ad;
		}
	}
	{
		// Invoke("FireArc", 0.15f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralEA92C5392AD90816E79F98A42A62CC2DF6F08D2B, (0.150000006f), /*hidden argument*/NULL);
		return;
	}

IL_00ad:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FireAround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FireAround_m64B7E348A6506292F6501A63854D87DE45411995 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D49D5F4E6C420502EA266556DD18D1E6722565);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		// if(health <= 0)
		int32_t L_0 = __this->get_health_6();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Debug.Log("4");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, /*hidden argument*/NULL);
		// int roundNumA = 15;
		V_0 = ((int32_t)15);
		// int roundNumB = 20;
		V_1 = ((int32_t)20);
		// int roundNum = curPatternCount % 2 == 0 ? roundNumA : roundNumB;
		int32_t L_1 = __this->get_curPatternCount_10();
		if (!((int32_t)((int32_t)L_1%(int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = V_1;
		G_B5_0 = L_2;
		goto IL_0028;
	}

IL_0027:
	{
		int32_t L_3 = V_0;
		G_B5_0 = L_3;
	}

IL_0028:
	{
		V_2 = G_B5_0;
		// for(int index=0; index < roundNum; index++)
		V_3 = 0;
		goto IL_009a;
	}

IL_002d:
	{
		// GameObject bulletAro = objectManager.MakeObj("BossbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_4 = __this->get_objectManager_24();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_4, _stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6, /*hidden argument*/NULL);
		// bulletAro.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
		// Rigidbody2D rigAro = bulletAro.GetComponent<Rigidbody2D>();
		NullCheck(L_6);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector2 dirVecAro = new Vector2(Mathf.Cos(Mathf.PI * 2 * index/roundNum), Mathf.Sin(Mathf.PI * 2 * index/roundNum));
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		float L_13;
		L_13 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_11))))/(float)((float)((float)L_12)))));
		int32_t L_14 = V_3;
		int32_t L_15 = V_2;
		float L_16;
		L_16 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_14))))/(float)((float)((float)L_15)))));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), L_13, L_16, /*hidden argument*/NULL);
		// rigAro.AddForce(dirVecAro.normalized * 2, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_10, L_18, 1, /*hidden argument*/NULL);
		// for(int index=0; index < roundNum; index++)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_009a:
	{
		// for(int index=0; index < roundNum; index++)
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_002d;
		}
	}
	{
		// curPatternCount++;
		int32_t L_22 = __this->get_curPatternCount_10();
		__this->set_curPatternCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		// if(curPatternCount < maxPatternCount[patternIndex])
		int32_t L_23 = __this->get_curPatternCount_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_maxPatternCount_11();
		int32_t L_25 = __this->get_patternIndex_9();
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_23) >= ((int32_t)L_27)))
		{
			goto IL_00d2;
		}
	}
	{
		// Invoke("FireAround", 0.7f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD4D49D5F4E6C420502EA266556DD18D1E6722565, (0.699999988f), /*hidden argument*/NULL);
		return;
	}

IL_00d2:
	{
		// Invoke("Think", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05B73787921D05AB8EED0E4336FCB39A2E48E8F8, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(enemyName == "BossA" || enemyName == "BossB")
		String_t* L_0 = __this->get_enemyName_4();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2 = __this->get_enemyName_4();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// return;
		return;
	}

IL_0025:
	{
		// Fire();
		Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E(__this, /*hidden argument*/NULL);
		// Reload();
		Enemy_Reload_m835FFB5D1B01214B2E8F64603AF975B0EFB65B39(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(curShotDelay < maxShotDelay)
		float L_0 = __this->get_curShotDelay_13();
		float L_1 = __this->get_maxShotDelay_12();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if(enemyName == "M"){
		String_t* L_2 = __this->get_enemyName_4();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008b;
		}
	}
	{
		// GameObject bulletA = objectManager.MakeObj("EnemybulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_4 = __this->get_objectManager_24();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_4, _stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2, /*hidden argument*/NULL);
		// bulletA.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
		// Rigidbody2D rigidA = bulletA.GetComponent<Rigidbody2D>();
		NullCheck(L_6);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector3 dirVecA = player.transform.position - transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_player_22();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// rigidA.AddForce(dirVecA.normalized * 3, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, (3.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_10, L_19, 1, /*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_008b:
	{
		// else if(enemyName == "L"){
		String_t* L_20 = __this->get_enemyName_4();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0105;
		}
	}
	{
		// GameObject bulletB = objectManager.MakeObj("EnemybulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_22 = __this->get_objectManager_24();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_22, _stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2, /*hidden argument*/NULL);
		// bulletB.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_27, /*hidden argument*/NULL);
		// Rigidbody2D rigidB = bulletB.GetComponent<Rigidbody2D>();
		NullCheck(L_24);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28;
		L_28 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_24, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Vector3 dirVecB = player.transform.position - transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_player_22();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_31, L_33, /*hidden argument*/NULL);
		V_1 = L_34;
		// rigidB.AddForce(dirVecB.normalized * 5, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, (5.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_28);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_28, L_37, 1, /*hidden argument*/NULL);
	}

IL_0105:
	{
		// curShotDelay = 0;
		__this->set_curShotDelay_13((0.0f));
		// }
		return;
	}
}
// System.Void Enemy::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Reload_m835FFB5D1B01214B2E8F64603AF975B0EFB65B39 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// curShotDelay += Time.deltaTime;
		float L_0 = __this->get_curShotDelay_13();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_curShotDelay_13(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void Enemy::OnHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___dmg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A4843BC9B3F7EFAB8E46AF195530E57FD72EAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(health <=0)
		int32_t L_0 = __this->get_health_6();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// health -= dmg;
		int32_t L_1 = __this->get_health_6();
		int32_t L_2 = ___dmg0;
		__this->set_health_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// if (health <=0) {
		int32_t L_3 = __this->get_health_6();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		// Player playerLogic = player.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_22();
		NullCheck(L_4);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5;
		L_5 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_4, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		// playerLogic.score += enemyscore;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_score_11();
		int32_t L_8 = __this->get_enemyscore_8();
		NullCheck(L_6);
		L_6->set_score_11(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// if(enemyName == "BossA")
		String_t* L_9 = __this->get_enemyName_4();
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// gameManager.BossAdie = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11 = __this->get_gameManager_23();
		NullCheck(L_11);
		L_11->set_BossAdie_22((bool)1);
		// gameManager.curenemycount++;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = __this->get_gameManager_23();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_curenemycount_15();
		NullCheck(L_13);
		L_13->set_curenemycount_15(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		// }
		goto IL_00aa;
	}

IL_0074:
	{
		// else if(enemyName == "BossB")
		String_t* L_15 = __this->get_enemyName_4();
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009e;
		}
	}
	{
		// gameManager.BossBdie = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = __this->get_gameManager_23();
		NullCheck(L_17);
		L_17->set_BossBdie_23((bool)1);
		// SceneManager.LoadScene("Clear");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, /*hidden argument*/NULL);
		// }
		goto IL_00aa;
	}

IL_009e:
	{
		// gameManager.BossAdie = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = __this->get_gameManager_23();
		NullCheck(L_18);
		L_18->set_BossAdie_22((bool)0);
	}

IL_00aa:
	{
		// gameManager.BossBdie = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_19 = __this->get_gameManager_23();
		NullCheck(L_19);
		L_19->set_BossBdie_23((bool)0);
		// int ran = Random.Range(0, 10);
		int32_t L_20;
		L_20 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)10), /*hidden argument*/NULL);
		V_0 = L_20;
		// if(enemyName == "BossA" || enemyName =="BossB")
		String_t* L_21 = __this->get_enemyName_4();
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00e3;
		}
	}
	{
		String_t* L_23 = __this->get_enemyName_4();
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e5;
		}
	}

IL_00e3:
	{
		// ran = 0;
		V_0 = 0;
	}

IL_00e5:
	{
		// if(ran < 4){
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		// Debug.Log("Not Item");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral82A4843BC9B3F7EFAB8E46AF195530E57FD72EAE, /*hidden argument*/NULL);
		// }
		goto IL_01a7;
	}

IL_00f8:
	{
		// else if (ran < 6){
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)6)))
		{
			goto IL_0126;
		}
	}
	{
		// GameObject itemlife = objectManager.MakeObj("itemlife");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_27 = __this->get_objectManager_24();
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_27, _stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882, /*hidden argument*/NULL);
		// itemlife.transform.position =  transform.position;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_31, /*hidden argument*/NULL);
		// }
		goto IL_01a7;
	}

IL_0126:
	{
		// else if (ran < 8){
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) >= ((int32_t)8)))
		{
			goto IL_0151;
		}
	}
	{
		// GameObject itempower = objectManager.MakeObj("itempower");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_33 = __this->get_objectManager_24();
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_33, _stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6, /*hidden argument*/NULL);
		// itempower.transform.position =  transform.position;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_37, /*hidden argument*/NULL);
		// }
		goto IL_01a7;
	}

IL_0151:
	{
		// else if (ran < 9){
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)9))))
		{
			goto IL_017d;
		}
	}
	{
		// GameObject itemshield = objectManager.MakeObj("itemshield");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_39 = __this->get_objectManager_24();
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_39, _stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9, /*hidden argument*/NULL);
		// itemshield.transform.position =  transform.position;
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_43, /*hidden argument*/NULL);
		// }
		goto IL_01a7;
	}

IL_017d:
	{
		// else if (ran < 10){
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)10))))
		{
			goto IL_01a7;
		}
	}
	{
		// GameObject itemboom = objectManager.MakeObj("itemboom");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_45 = __this->get_objectManager_24();
		NullCheck(L_45);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_45, _stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10, /*hidden argument*/NULL);
		// itemboom.transform.position =  transform.position;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_47, L_49, /*hidden argument*/NULL);
	}

IL_01a7:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_50, (bool)0, /*hidden argument*/NULL);
		// gameManager.CallExplosion(transform.position, enemyName);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_51 = __this->get_gameManager_23();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		String_t* L_54 = __this->get_enemyName_4();
		NullCheck(L_51);
		GameManager_CallExplosion_mF9E501E5743477F31DB15C3DC4D88CCA9421C564(L_51, L_53, L_54, /*hidden argument*/NULL);
	}

IL_01cf:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6935CFEC98ADA354082157614A6D1CD1D58D4E20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		s_Il2CppMethodInitialized = true;
	}
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * V_0 = NULL;
	{
		// if(collision.gameObject.tag == "BorderBullet" && enemyName != "BossA" && enemyName !="BossB")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_4 = __this->get_enemyName_4();
		bool L_5;
		L_5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_4, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_6 = __this->get_enemyName_4();
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_6, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0048:
	{
		// else if(collision.gameObject.tag == "PlayerBullet"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral6935CFEC98ADA354082157614A6D1CD1D58D4E20, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// Bullet bullet = collision.gameObject.GetComponent<Bullet>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_15;
		L_15 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_14, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		V_0 = L_15;
		// OnHit(bullet.dmg);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_dmg_4();
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(__this, L_17, /*hidden argument*/NULL);
		// Hit();
		Enemy_Hit_m09EB878EFDB3C81A0793B83D75AF84C087F2E594(__this, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Enemy::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Hit_m09EB878EFDB3C81A0793B83D75AF84C087F2E594 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03D8426F3F1079AAC33F7468513E55068A428D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnHit();
		Enemy_UnHit_m406355C057623D38EB05E98659DE8EA75950C667(__this, /*hidden argument*/NULL);
		// Invoke("UnHit", 0.05f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD03D8426F3F1079AAC33F7468513E55068A428D2, (0.0500000007f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::UnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_UnHit_m406355C057623D38EB05E98659DE8EA75950C667 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// hit = !hit;
		bool L_0 = __this->get_hit_14();
		__this->set_hit_14((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if(hit)
		bool L_1 = __this->get_hit_14();
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// spriteRenderer.color = new Color(1,0,0,1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_spriteRenderer_25();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003c:
	{
		// spriteRenderer.color = new Color(1,1,1,1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_spriteRenderer_25();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Explosion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Awake_m3FE24B54470DF47B502AA7DB8B9B5826C6038218 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// }
		return;
	}
}
// System.Void Explosion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_OnEnable_mF211CDB6A1495F332FBE551AEFFB1D0B67B4C086 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<AudioSource>().Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// Invoke("Disable", 1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Explosion::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Disable_m5D3F50A1C03EA62A0EE6ECD9C9B7B4FF7F0D2E57 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Explosion::StartExplosion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_StartExplosion_m8BE26A8DBBD941CEADB4C731B8020B2FB7C018C4 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, String_t* ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0534B14CCC6EADB04D7D9F78B6CA888567C485AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("OnExplosion");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral0534B14CCC6EADB04D7D9F78B6CA888567C485AF, /*hidden argument*/NULL);
		String_t* L_1 = ___target0;
		if (!L_1)
		{
			goto IL_0109;
		}
	}
	{
		String_t* L_2 = ___target0;
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_4 = ___target0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_6 = ___target0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_8 = ___target0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_10 = ___target0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00d4;
		}
	}
	{
		String_t* L_12 = ___target0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ef;
		}
	}
	{
		return;
	}

IL_0068:
	{
		// transform.localScale = Vector3.one * 1f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0083:
	{
		// transform.localScale = Vector3.one * 2f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_17, L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_009e:
	{
		// transform.localScale = Vector3.one * 2f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_20, L_22, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b9:
	{
		// transform.localScale = Vector3.one * 3f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_23, L_25, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d4:
	{
		// transform.localScale = Vector3.one * 5f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_28, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ef:
	{
		// transform.localScale = Vector3.one * 7f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, (7.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_29, L_31, /*hidden argument*/NULL);
	}

IL_0109:
	{
		// }
		return;
	}
}
// System.Void Explosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion__ctor_m1400515C43124E852380BB8283E15042AF0A5094 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyObjs = new string[] {"EnemyS", "EnemyM", "EnemyL", "BossA", "BossB"};
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		__this->set_enemyObjs_5(L_5);
		// curbossA_count = 0;
		__this->set_curbossA_count_18(0);
		// curbossB_count = 0;
		__this->set_curbossB_count_20(0);
		// curenemycount = 0;
		__this->set_curenemycount_15(0);
		// BossAdie = false;
		__this->set_BossAdie_22((bool)0);
		// BossBdie = false;
		__this->set_BossBdie_23((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79AD865C98AEC9853F1A77729448BA31A9D341D8);
		s_Il2CppMethodInitialized = true;
	}
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_0 = NULL;
	{
		// curSpawnDelay += Time.deltaTime;
		float L_0 = __this->get_curSpawnDelay_9();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_curSpawnDelay_9(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if(curSpawnDelay > maxSpawnDelay) {
		float L_2 = __this->get_curSpawnDelay_9();
		float L_3 = __this->get_maxSpawnDelay_8();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0046;
		}
	}
	{
		// SpawnEnemy();
		GameManager_SpawnEnemy_m5390C5B47828ABC4CB0CEB8603B5147D4C1EFC8F(__this, /*hidden argument*/NULL);
		// maxSpawnDelay = Random.Range(0.5f,3f);
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (3.0f), /*hidden argument*/NULL);
		__this->set_maxSpawnDelay_8(L_4);
		// curSpawnDelay = 0;
		__this->set_curSpawnDelay_9((0.0f));
	}

IL_0046:
	{
		// Player playerLogic = player.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_10();
		NullCheck(L_5);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		V_0 = L_6;
		// scoreText.text = string.Format("SCORE : {0:n0}", playerLogic.score);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_scoreText_12();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_score_11();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral79AD865C98AEC9853F1A77729448BA31A9D341D8, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_12);
		// }
		return;
	}
}
// System.Void GameManager::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnEnemy_m5390C5B47828ABC4CB0CEB8603B5147D4C1EFC8F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if(curenemycount < midenemycount)
		int32_t L_0 = __this->get_curenemycount_15();
		int32_t L_1 = __this->get_midenemycount_16();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0082;
		}
	}
	{
		// int ranEnemy = Random.Range(0, 2);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		V_0 = L_2;
		// int ranPoint = Random.Range(0, 5);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		// GameObject enemy = objectManager.MakeObj(enemyObjs[ranEnemy]);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_4 = __this->get_objectManager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = __this->get_enemyObjs_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_4, L_8, /*hidden argument*/NULL);
		// enemy.transform.position = spawnPoints[ranPoint].position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_12 = __this->get_spawnPoints_6();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_16, /*hidden argument*/NULL);
		// Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_10;
		NullCheck(L_17);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Enemy enemyLogic = enemy.GetComponent<Enemy>();
		NullCheck(L_17);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_19;
		L_19 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_17, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.player = player;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_player_10();
		NullCheck(L_20);
		L_20->set_player_22(L_21);
		// enemyLogic.gameManager = this;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_22 = L_20;
		NullCheck(L_22);
		L_22->set_gameManager_23(__this);
		// enemyLogic.objectManager = objectManager;
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_23 = __this->get_objectManager_4();
		NullCheck(L_22);
		L_22->set_objectManager_24(L_23);
		// curenemycount++;
		int32_t L_24 = __this->get_curenemycount_15();
		__this->set_curenemycount_15(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		// }
		return;
	}

IL_0082:
	{
		// else if(curenemycount == midenemycount)
		int32_t L_25 = __this->get_curenemycount_15();
		int32_t L_26 = __this->get_midenemycount_16();
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00fe;
		}
	}
	{
		// if(curbossA_count == maxbossA_count)
		int32_t L_27 = __this->get_curbossA_count_18();
		int32_t L_28 = __this->get_maxbossA_count_19();
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_009f;
		}
	}
	{
		// return;
		return;
	}

IL_009f:
	{
		// GameObject A = objectManager.MakeObj("BossA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_29 = __this->get_objectManager_4();
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_29, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		// A.transform.position = bosspoint.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_bosspoint_7();
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_34, /*hidden argument*/NULL);
		// Rigidbody2D rigid = A.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = L_31;
		NullCheck(L_35);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_36;
		L_36 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_35, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Enemy enemyLogic = A.GetComponent<Enemy>();
		NullCheck(L_35);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_37;
		L_37 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_35, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.player = player;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_38 = L_37;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_player_10();
		NullCheck(L_38);
		L_38->set_player_22(L_39);
		// enemyLogic.gameManager = this;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_40 = L_38;
		NullCheck(L_40);
		L_40->set_gameManager_23(__this);
		// enemyLogic.objectManager = objectManager;
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_41 = __this->get_objectManager_4();
		NullCheck(L_40);
		L_40->set_objectManager_24(L_41);
		// curbossA_count++;
		int32_t L_42 = __this->get_curbossA_count_18();
		__this->set_curbossA_count_18(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		// }
		return;
	}

IL_00fe:
	{
		// else if (curenemycount > midenemycount && curenemycount < maxenemycount)
		int32_t L_43 = __this->get_curenemycount_15();
		int32_t L_44 = __this->get_midenemycount_16();
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_45 = __this->get_curenemycount_15();
		int32_t L_46 = __this->get_maxenemycount_17();
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_0198;
		}
	}
	{
		// BossAdie = false;
		__this->set_BossAdie_22((bool)0);
		// int ranEnemy = Random.Range(0, 3);
		int32_t L_47;
		L_47 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		V_2 = L_47;
		// int ranPoint = Random.Range(0, 5);
		int32_t L_48;
		L_48 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_3 = L_48;
		// GameObject enemy = objectManager.MakeObj(enemyObjs[ranEnemy]);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_49 = __this->get_objectManager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = __this->get_enemyObjs_5();
		int32_t L_51 = V_2;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		String_t* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_49);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_49, L_53, /*hidden argument*/NULL);
		// enemy.transform.position = spawnPoints[ranPoint].position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = L_54;
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_57 = __this->get_spawnPoints_6();
		int32_t L_58 = V_3;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_56, L_61, /*hidden argument*/NULL);
		// Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = L_55;
		NullCheck(L_62);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63;
		L_63 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_62, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Enemy enemyLogic = enemy.GetComponent<Enemy>();
		NullCheck(L_62);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_64;
		L_64 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_62, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.player = player;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_65 = L_64;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_player_10();
		NullCheck(L_65);
		L_65->set_player_22(L_66);
		// enemyLogic.gameManager = this;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_67 = L_65;
		NullCheck(L_67);
		L_67->set_gameManager_23(__this);
		// enemyLogic.objectManager = objectManager;
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_68 = __this->get_objectManager_4();
		NullCheck(L_67);
		L_67->set_objectManager_24(L_68);
		// curenemycount++;
		int32_t L_69 = __this->get_curenemycount_15();
		__this->set_curenemycount_15(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
		// }
		return;
	}

IL_0198:
	{
		// else if(curenemycount == maxenemycount)
		int32_t L_70 = __this->get_curenemycount_15();
		int32_t L_71 = __this->get_maxenemycount_17();
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0213;
		}
	}
	{
		// if(curbossB_count == maxbossB_count)
		int32_t L_72 = __this->get_curbossB_count_20();
		int32_t L_73 = __this->get_maxbossB_count_21();
		if ((!(((uint32_t)L_72) == ((uint32_t)L_73))))
		{
			goto IL_01b5;
		}
	}
	{
		// return;
		return;
	}

IL_01b5:
	{
		// GameObject B = objectManager.MakeObj("BossB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_74 = __this->get_objectManager_4();
		NullCheck(L_74);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75;
		L_75 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_74, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		// B.transform.position = bosspoint.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = L_75;
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78 = __this->get_bosspoint_7();
		NullCheck(L_78);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_78, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_77, L_79, /*hidden argument*/NULL);
		// Rigidbody2D rigid = B.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = L_76;
		NullCheck(L_80);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_81;
		L_81 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_80, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Enemy enemyLogic = B.GetComponent<Enemy>();
		NullCheck(L_80);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_82;
		L_82 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_80, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.player = player;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_83 = L_82;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_player_10();
		NullCheck(L_83);
		L_83->set_player_22(L_84);
		// enemyLogic.gameManager = this;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_85 = L_83;
		NullCheck(L_85);
		L_85->set_gameManager_23(__this);
		// enemyLogic.objectManager = objectManager;
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_86 = __this->get_objectManager_4();
		NullCheck(L_85);
		L_85->set_objectManager_24(L_86);
		// curbossB_count++;
		int32_t L_87 = __this->get_curbossB_count_20();
		__this->set_curbossB_count_20(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1)));
	}

IL_0213:
	{
		// }
		return;
	}
}
// System.Void GameManager::CallExplosion(UnityEngine.Vector3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CallExplosion_mF9E501E5743477F31DB15C3DC4D88CCA9421C564 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, String_t* ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61);
		s_Il2CppMethodInitialized = true;
	}
	Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * V_0 = NULL;
	{
		// GameObject explosion = objectManager.MakeObj("explosion");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_0 = __this->get_objectManager_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_0, _stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61, /*hidden argument*/NULL);
		// Explosion explosionLogic = explosion.GetComponent<Explosion>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		NullCheck(L_2);
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_3;
		L_3 = GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78(L_2, /*hidden argument*/GameObject_GetComponent_TisExplosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED_m9137649A5BC5D0B72F5766AC2FA647E1D3ABCB78_RuntimeMethod_var);
		V_0 = L_3;
		// explosion.transform.position = pos;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___pos0;
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_5, /*hidden argument*/NULL);
		// explosionLogic.StartExplosion(type);
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_6 = V_0;
		String_t* L_7 = ___type1;
		NullCheck(L_6);
		Explosion_StartExplosion_m8BE26A8DBBD941CEADB4C731B8020B2FB7C018C4(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::UpdateLifeIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___life0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for(int index=0; index < 5; index++){
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// lifeImage[index].color = new Color(1,1,1,0);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get_lifeImage_13();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// for(int index=0; index < 5; index++){
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002e:
	{
		// for(int index=0; index < 5; index++){
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// for(int index=0; index < life; index++){
		V_1 = 0;
		goto IL_0060;
	}

IL_0036:
	{
		// lifeImage[index].color = new Color(1,1,1,1);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_lifeImage_13();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// for(int index=0; index < life; index++){
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0060:
	{
		// for(int index=0; index < life; index++){
		int32_t L_13 = V_1;
		int32_t L_14 = ___life0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::UpdateBoomIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___boom0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for(int index=0; index < 3; index++){
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// boomImage[index].color = new Color(1,1,1,0);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get_boomImage_14();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// for(int index=0; index < 3; index++){
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002e:
	{
		// for(int index=0; index < 3; index++){
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// for(int index=0; index < boom; index++){
		V_1 = 0;
		goto IL_0060;
	}

IL_0036:
	{
		// boomImage[index].color = new Color(1,1,1,1);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_boomImage_14();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// for(int index=0; index < boom; index++){
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0060:
	{
		// for(int index=0; index < boom; index++){
		int32_t L_13 = V_1;
		int32_t L_14 = ___boom0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::RespawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8427CD8A7133657ACEF6B560449D99B4814220B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("RespawnPlayerExe", 2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralA8427CD8A7133657ACEF6B560449D99B4814220B, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::RespawnPlayerExe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RespawnPlayerExe_m8D768BFE45964DCA1CF633FCB5DA28AE94F50E34 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.transform.position = Vector3.left * 5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_10();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_3, /*hidden argument*/NULL);
		// player.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_10();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// Player playerLogic = player.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_10();
		NullCheck(L_5);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		// playerLogic.isHit = false;
		NullCheck(L_6);
		L_6->set_isHit_18((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Item::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Awake_m5A258A100673BF7CAF84642D8F8CD3711279AE6A (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigid_5(L_0);
		// }
		return;
	}
}
// System.Void Item::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnEnable_m76DD44C5E985797014F44B72923B59A8FC13D87F (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		// rigid.velocity = Vector2.left * 1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigid_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MakeAster::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeAster_Awake_mF5EE499970F60E886835830E5306AE772F22F152 (MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140);
		s_Il2CppMethodInitialized = true;
	}
	{
		// asterObjs = new string[] {"asterBig", "asterHuge", "asterMed", "asterSmall"};
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA);
		__this->set_asterObjs_5(L_4);
		// }
		return;
	}
}
// System.Void MakeAster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeAster_Update_m0A2A1BA0DB27A8F010DCD310A420DC18EBBAD60D (MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// timer += Time.deltaTime;
		float L_0 = __this->get_timer_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timer > timeDiff)
		float L_2 = __this->get_timer_7();
		float L_3 = __this->get_timeDiff_6();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_006e;
		}
	}
	{
		// int ranAster = Random.Range(0, 4);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_0 = L_4;
		// GameObject newaster = objectManager.MakeObj(asterObjs[ranAster]);
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_5 = __this->get_objectManager_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_asterObjs_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_5, L_9, /*hidden argument*/NULL);
		// newaster.transform.position = new Vector3(10, Random.Range(-4.5f, 4.5f), 0);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-4.5f), (4.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (10.0f), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_13, /*hidden argument*/NULL);
		// timer = 0;
		__this->set_timer_7((0.0f));
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void MakeAster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeAster__ctor_mBA114CCD7912229A375F55F3F4C798CD31BB927C (MakeAster_t8CAB9826E5D8436A91FCDE9EC7D05D249706FE09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MovementObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementObject_Update_m7FC4CA6FE1C84690F2E5EDF0197FDAE425E610E6 (MovementObject_t9010E35DCF25535E033BD8C458E8CFD6F9540279 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = virtualJoystick.Horizontal();
		VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * L_0 = __this->get_virtualJoystick_4();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualJoystick_Horizontal_m54697A52E6ECB1101B68B105B8DDFA0994BD1A74(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// float y = virtualJoystick.Vertical();
		VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * L_2 = __this->get_virtualJoystick_4();
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualJoystick_Vertical_m89210BB23EE14E0F48F05E972086A0CBA26BDC27(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if(x !=0 || y !=0)
		float L_4 = V_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_5 = V_1;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_005f;
		}
	}

IL_0028:
	{
		// transform.position += new Vector3(x,y,0) * moveSpeed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		float L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		float L_12 = __this->get_moveSpeed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_15, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_16, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void MovementObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementObject__ctor_mE15C30BC71ECF4E8D4241B6C3E3E43DD7769C33B (MovementObject_t9010E35DCF25535E033BD8C458E8CFD6F9540279 * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 10;
		__this->set_moveSpeed_5((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Awake_m209AD6EB6DFDDC0CD3596887FA613E5D2F5FB649 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyS = new GameObject[20];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->set_enemyS_25(L_0);
		// enemyM = new GameObject[20];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->set_enemyM_26(L_1);
		// enemyL = new GameObject[20];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->set_enemyL_27(L_2);
		// bossA = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_bossA_28(L_3);
		// bossB = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_bossB_29(L_4);
		// itempower = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_itempower_30(L_5);
		// itemlife = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_itemlife_31(L_6);
		// itemshield = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_itemshield_32(L_7);
		// itemboom = new GameObject[10];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_itemboom_33(L_8);
		// playerbulletA = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set_playerbulletA_34(L_9);
		// playerbulletB = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set_playerbulletB_35(L_10);
		// enemybulletA = new GameObject[100];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set_enemybulletA_36(L_11);
		// bossbulletA = new GameObject[300];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)300));
		__this->set_bossbulletA_37(L_12);
		// bossbulletB = new GameObject[300];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)300));
		__this->set_bossbulletB_38(L_13);
		// explosion = new GameObject[30];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set_explosion_39(L_14);
		// boomeffect = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_boomeffect_40(L_15);
		// shieldeffect = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_shieldeffect_41(L_16);
		// asterBig = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_asterBig_42(L_17);
		// asterHuge = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_asterHuge_43(L_18);
		// asterMed = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_asterMed_44(L_19);
		// asterSmall = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_asterSmall_45(L_20);
		// Generate();
		ObjectManager_Generate_mCDA13E0DDE7FF8BA545DAEBB96632AFE144D36DB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectManager::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager_Generate_mCDA13E0DDE7FF8BA545DAEBB96632AFE144D36DB (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	{
		// for(int index=0; index < enemyS.Length; index++){
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// enemyS[index] = Instantiate(enemySPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_enemyS_25();
		int32_t L_1 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_enemySPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_3);
		// enemyS[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_enemyS_25();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < enemyS.Length; index++){
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0029:
	{
		// for(int index=0; index < enemyS.Length; index++){
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_enemyS_25();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for(int index=0; index < enemyM.Length; index++){
		V_1 = 0;
		goto IL_005d;
	}

IL_0038:
	{
		// enemyM[index] = Instantiate(enemyMPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_enemyM_26();
		int32_t L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_enemyMPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_14);
		// enemyM[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_enemyM_26();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < enemyM.Length; index++){
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005d:
	{
		// for(int index=0; index < enemyM.Length; index++){
		int32_t L_20 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get_enemyM_26();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// for(int index=0; index < enemyL.Length; index++){
		V_2 = 0;
		goto IL_0091;
	}

IL_006c:
	{
		// enemyL[index] = Instantiate(enemyLPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get_enemyL_27();
		int32_t L_23 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_enemyLPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_25);
		// enemyL[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = __this->get_enemyL_27();
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < enemyL.Length; index++){
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0091:
	{
		// for(int index=0; index < enemyL.Length; index++){
		int32_t L_31 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = __this->get_enemyL_27();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_006c;
		}
	}
	{
		// for(int index=0; index < bossA.Length; index++){
		V_3 = 0;
		goto IL_00c5;
	}

IL_00a0:
	{
		// bossA[index] = Instantiate(bossAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = __this->get_bossA_28();
		int32_t L_34 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_bossAPrefab_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_35, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_36);
		// bossA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_37 = __this->get_bossA_28();
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < bossA.Length; index++){
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00c5:
	{
		// for(int index=0; index < bossA.Length; index++){
		int32_t L_42 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_43 = __this->get_bossA_28();
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_00a0;
		}
	}
	{
		// for(int index=0; index < bossB.Length; index++){
		V_4 = 0;
		goto IL_00fe;
	}

IL_00d5:
	{
		// bossB[index] = Instantiate(bossBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_44 = __this->get_bossB_29();
		int32_t L_45 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_bossBPrefab_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_46, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_47);
		// bossB[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_48 = __this->get_bossB_29();
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_51, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < bossB.Length; index++){
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00fe:
	{
		// for(int index=0; index < bossB.Length; index++){
		int32_t L_53 = V_4;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_54 = __this->get_bossB_29();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00d5;
		}
	}
	{
		// for(int index=0; index < itempower.Length; index++){
		V_5 = 0;
		goto IL_0138;
	}

IL_010f:
	{
		// itempower[index] = Instantiate(itempowerPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_55 = __this->get_itempower_30();
		int32_t L_56 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_itempowerPrefab_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_57, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_58);
		// itempower[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_59 = __this->get_itempower_30();
		int32_t L_60 = V_5;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_62, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < itempower.Length; index++){
		int32_t L_63 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0138:
	{
		// for(int index=0; index < itempower.Length; index++){
		int32_t L_64 = V_5;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_65 = __this->get_itempower_30();
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))))
		{
			goto IL_010f;
		}
	}
	{
		// for(int index=0; index < itemlife.Length; index++){
		V_6 = 0;
		goto IL_0172;
	}

IL_0149:
	{
		// itemlife[index] = Instantiate(itemlifePrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_66 = __this->get_itemlife_31();
		int32_t L_67 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_itemlifePrefab_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_68, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_69);
		// itemlife[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_70 = __this->get_itemlife_31();
		int32_t L_71 = V_6;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_73, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < itemlife.Length; index++){
		int32_t L_74 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0172:
	{
		// for(int index=0; index < itemlife.Length; index++){
		int32_t L_75 = V_6;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_76 = __this->get_itemlife_31();
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_0149;
		}
	}
	{
		// for(int index=0; index < itemshield.Length; index++){
		V_7 = 0;
		goto IL_01ac;
	}

IL_0183:
	{
		// itemshield[index] = Instantiate(itemshieldPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_77 = __this->get_itemshield_32();
		int32_t L_78 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = __this->get_itemshieldPrefab_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_79, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_80);
		// itemshield[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_81 = __this->get_itemshield_32();
		int32_t L_82 = V_7;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_84, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < itemshield.Length; index++){
		int32_t L_85 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_01ac:
	{
		// for(int index=0; index < itemshield.Length; index++){
		int32_t L_86 = V_7;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87 = __this->get_itemshield_32();
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length))))))
		{
			goto IL_0183;
		}
	}
	{
		// for(int index=0; index < itemboom.Length; index++){
		V_8 = 0;
		goto IL_01e6;
	}

IL_01bd:
	{
		// itemboom[index] = Instantiate(itemboomPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = __this->get_itemboom_33();
		int32_t L_89 = V_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get_itemboomPrefab_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91;
		L_91 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_90, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_91);
		// itemboom[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_92 = __this->get_itemboom_33();
		int32_t L_93 = V_8;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_95, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < itemboom.Length; index++){
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_01e6:
	{
		// for(int index=0; index < itemboom.Length; index++){
		int32_t L_97 = V_8;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_98 = __this->get_itemboom_33();
		NullCheck(L_98);
		if ((((int32_t)L_97) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length))))))
		{
			goto IL_01bd;
		}
	}
	{
		// for(int index=0; index < playerbulletA.Length; index++){
		V_9 = 0;
		goto IL_0220;
	}

IL_01f7:
	{
		// playerbulletA[index] = Instantiate(playerbulletAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_99 = __this->get_playerbulletA_34();
		int32_t L_100 = V_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = __this->get_playerbulletAPrefab_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102;
		L_102 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_101, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_102);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_102);
		// playerbulletA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_103 = __this->get_playerbulletA_34();
		int32_t L_104 = V_9;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_106, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < playerbulletA.Length; index++){
		int32_t L_107 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_0220:
	{
		// for(int index=0; index < playerbulletA.Length; index++){
		int32_t L_108 = V_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_109 = __this->get_playerbulletA_34();
		NullCheck(L_109);
		if ((((int32_t)L_108) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))))
		{
			goto IL_01f7;
		}
	}
	{
		// for(int index=0; index < playerbulletB.Length; index++){
		V_10 = 0;
		goto IL_025a;
	}

IL_0231:
	{
		// playerbulletB[index] = Instantiate(playerbulletBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_110 = __this->get_playerbulletB_35();
		int32_t L_111 = V_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = __this->get_playerbulletBPrefab_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113;
		L_113 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_112, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_113);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_113);
		// playerbulletB[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_114 = __this->get_playerbulletB_35();
		int32_t L_115 = V_10;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_117, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < playerbulletB.Length; index++){
		int32_t L_118 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
	}

IL_025a:
	{
		// for(int index=0; index < playerbulletB.Length; index++){
		int32_t L_119 = V_10;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_120 = __this->get_playerbulletB_35();
		NullCheck(L_120);
		if ((((int32_t)L_119) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_120)->max_length))))))
		{
			goto IL_0231;
		}
	}
	{
		// for(int index=0; index < enemybulletA.Length; index++){
		V_11 = 0;
		goto IL_0294;
	}

IL_026b:
	{
		// enemybulletA[index] = Instantiate(enemybulletAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_121 = __this->get_enemybulletA_36();
		int32_t L_122 = V_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = __this->get_enemybulletAPrefab_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_124;
		L_124 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_123, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, L_124);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_124);
		// enemybulletA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_125 = __this->get_enemybulletA_36();
		int32_t L_126 = V_11;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_128, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < enemybulletA.Length; index++){
		int32_t L_129 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
	}

IL_0294:
	{
		// for(int index=0; index < enemybulletA.Length; index++){
		int32_t L_130 = V_11;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_131 = __this->get_enemybulletA_36();
		NullCheck(L_131);
		if ((((int32_t)L_130) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length))))))
		{
			goto IL_026b;
		}
	}
	{
		// for(int index=0; index < bossbulletA.Length; index++){
		V_12 = 0;
		goto IL_02ce;
	}

IL_02a5:
	{
		// bossbulletA[index] = Instantiate(bossbulletAPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_132 = __this->get_bossbulletA_37();
		int32_t L_133 = V_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_134 = __this->get_bossbulletAPrefab_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135;
		L_135 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_134, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, L_135);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(L_133), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_135);
		// bossbulletA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_136 = __this->get_bossbulletA_37();
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_139, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < bossbulletA.Length; index++){
		int32_t L_140 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
	}

IL_02ce:
	{
		// for(int index=0; index < bossbulletA.Length; index++){
		int32_t L_141 = V_12;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_142 = __this->get_bossbulletA_37();
		NullCheck(L_142);
		if ((((int32_t)L_141) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length))))))
		{
			goto IL_02a5;
		}
	}
	{
		// for(int index=0; index < bossbulletB.Length; index++){
		V_13 = 0;
		goto IL_0308;
	}

IL_02df:
	{
		// bossbulletB[index] = Instantiate(bossbulletBPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_143 = __this->get_bossbulletB_38();
		int32_t L_144 = V_13;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_145 = __this->get_bossbulletBPrefab_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146;
		L_146 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_145, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, L_146);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_146);
		// bossbulletB[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_147 = __this->get_bossbulletB_38();
		int32_t L_148 = V_13;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_150);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_150, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < bossbulletB.Length; index++){
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
	}

IL_0308:
	{
		// for(int index=0; index < bossbulletB.Length; index++){
		int32_t L_152 = V_13;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_153 = __this->get_bossbulletB_38();
		NullCheck(L_153);
		if ((((int32_t)L_152) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_153)->max_length))))))
		{
			goto IL_02df;
		}
	}
	{
		// for(int index=0; index < explosion.Length; index++){
		V_14 = 0;
		goto IL_0342;
	}

IL_0319:
	{
		// explosion[index] = Instantiate(explosionPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_154 = __this->get_explosion_39();
		int32_t L_155 = V_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_156 = __this->get_explosionPrefab_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_157;
		L_157 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_156, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, L_157);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_157);
		// explosion[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_158 = __this->get_explosion_39();
		int32_t L_159 = V_14;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_161, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < explosion.Length; index++){
		int32_t L_162 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
	}

IL_0342:
	{
		// for(int index=0; index < explosion.Length; index++){
		int32_t L_163 = V_14;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_164 = __this->get_explosion_39();
		NullCheck(L_164);
		if ((((int32_t)L_163) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_164)->max_length))))))
		{
			goto IL_0319;
		}
	}
	{
		// for(int index=0; index < boomeffect.Length; index++){
		V_15 = 0;
		goto IL_037c;
	}

IL_0353:
	{
		// boomeffect[index] = Instantiate(boomeffectPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_165 = __this->get_boomeffect_40();
		int32_t L_166 = V_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_167 = __this->get_boomeffectPrefab_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_168;
		L_168 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_167, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, L_168);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_168);
		// boomeffect[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_169 = __this->get_boomeffect_40();
		int32_t L_170 = V_15;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_172);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_172, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < boomeffect.Length; index++){
		int32_t L_173 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)1));
	}

IL_037c:
	{
		// for(int index=0; index < boomeffect.Length; index++){
		int32_t L_174 = V_15;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_175 = __this->get_boomeffect_40();
		NullCheck(L_175);
		if ((((int32_t)L_174) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_175)->max_length))))))
		{
			goto IL_0353;
		}
	}
	{
		// for(int index=0; index < shieldeffect.Length; index++){
		V_16 = 0;
		goto IL_03b6;
	}

IL_038d:
	{
		// shieldeffect[index] = Instantiate(shieldeffectPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_176 = __this->get_shieldeffect_41();
		int32_t L_177 = V_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_178 = __this->get_shieldeffectPrefab_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_179;
		L_179 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_178, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_176);
		ArrayElementTypeCheck (L_176, L_179);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(L_177), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_179);
		// shieldeffect[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_180 = __this->get_shieldeffect_41();
		int32_t L_181 = V_16;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_183);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_183, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < shieldeffect.Length; index++){
		int32_t L_184 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)1));
	}

IL_03b6:
	{
		// for(int index=0; index < shieldeffect.Length; index++){
		int32_t L_185 = V_16;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_186 = __this->get_shieldeffect_41();
		NullCheck(L_186);
		if ((((int32_t)L_185) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_186)->max_length))))))
		{
			goto IL_038d;
		}
	}
	{
		// for(int index=0; index < asterBig.Length; index++){
		V_17 = 0;
		goto IL_03f0;
	}

IL_03c7:
	{
		// asterBig[index] = Instantiate(asterBigPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_187 = __this->get_asterBig_42();
		int32_t L_188 = V_17;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_189 = __this->get_asterBigPrefab_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_190;
		L_190 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_189, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_187);
		ArrayElementTypeCheck (L_187, L_190);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_190);
		// asterBig[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_191 = __this->get_asterBig_42();
		int32_t L_192 = V_17;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		NullCheck(L_194);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_194, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < asterBig.Length; index++){
		int32_t L_195 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)1));
	}

IL_03f0:
	{
		// for(int index=0; index < asterBig.Length; index++){
		int32_t L_196 = V_17;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_197 = __this->get_asterBig_42();
		NullCheck(L_197);
		if ((((int32_t)L_196) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_197)->max_length))))))
		{
			goto IL_03c7;
		}
	}
	{
		// for(int index=0; index < asterHuge.Length; index++){
		V_18 = 0;
		goto IL_042a;
	}

IL_0401:
	{
		// asterHuge[index] = Instantiate(asterHugePrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_198 = __this->get_asterHuge_43();
		int32_t L_199 = V_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_200 = __this->get_asterHugePrefab_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_201;
		L_201 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_200, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, L_201);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_201);
		// asterHuge[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_202 = __this->get_asterHuge_43();
		int32_t L_203 = V_18;
		NullCheck(L_202);
		int32_t L_204 = L_203;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		NullCheck(L_205);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_205, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < asterHuge.Length; index++){
		int32_t L_206 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)1));
	}

IL_042a:
	{
		// for(int index=0; index < asterHuge.Length; index++){
		int32_t L_207 = V_18;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_208 = __this->get_asterHuge_43();
		NullCheck(L_208);
		if ((((int32_t)L_207) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_208)->max_length))))))
		{
			goto IL_0401;
		}
	}
	{
		// for(int index=0; index < asterMed.Length; index++){
		V_19 = 0;
		goto IL_0464;
	}

IL_043b:
	{
		// asterMed[index] = Instantiate(asterMedPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_209 = __this->get_asterMed_44();
		int32_t L_210 = V_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_211 = __this->get_asterMedPrefab_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_212;
		L_212 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_211, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_209);
		ArrayElementTypeCheck (L_209, L_212);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(L_210), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_212);
		// asterMed[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_213 = __this->get_asterMed_44();
		int32_t L_214 = V_19;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		NullCheck(L_216);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_216, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < asterMed.Length; index++){
		int32_t L_217 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)1));
	}

IL_0464:
	{
		// for(int index=0; index < asterMed.Length; index++){
		int32_t L_218 = V_19;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_219 = __this->get_asterMed_44();
		NullCheck(L_219);
		if ((((int32_t)L_218) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_219)->max_length))))))
		{
			goto IL_043b;
		}
	}
	{
		// for(int index=0; index < asterSmall.Length; index++){
		V_20 = 0;
		goto IL_049e;
	}

IL_0475:
	{
		// asterSmall[index] = Instantiate(asterSmallPrefab);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_220 = __this->get_asterSmall_45();
		int32_t L_221 = V_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_222 = __this->get_asterSmallPrefab_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_223;
		L_223 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_222, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_220);
		ArrayElementTypeCheck (L_220, L_223);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(L_221), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_223);
		// asterSmall[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_224 = __this->get_asterSmall_45();
		int32_t L_225 = V_20;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		NullCheck(L_227);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_227, (bool)0, /*hidden argument*/NULL);
		// for(int index=0; index < asterSmall.Length; index++){
		int32_t L_228 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)1));
	}

IL_049e:
	{
		// for(int index=0; index < asterSmall.Length; index++){
		int32_t L_229 = V_20;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_230 = __this->get_asterSmall_45();
		NullCheck(L_230);
		if ((((int32_t)L_229) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_230)->max_length))))))
		{
			goto IL_0475;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectManager::MakeObj(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D1FBD2EE681FA3F4C89559244C0F26DF01F55F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F82ADF67050EBD784029527F82CAF44131088F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0452;
		}
	}
	{
		String_t* L_1 = ___type0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1314696574)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)995885719)))))
		{
			goto IL_0069;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)45817824)))))
		{
			goto IL_0043;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)23238726))))
		{
			goto IL_02b9;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)45817824))))
		{
			goto IL_027a;
		}
	}
	{
		goto IL_0452;
	}

IL_0043:
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)331419726))))
		{
			goto IL_02e3;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)722242301))))
		{
			goto IL_01fc;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)995885719))))
		{
			goto IL_0193;
		}
	}
	{
		goto IL_0452;
	}

IL_0069:
	{
		uint32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1091068323)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1012663338))))
		{
			goto IL_01a8;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1091068323))))
		{
			goto IL_0211;
		}
	}
	{
		goto IL_0452;
	}

IL_008c:
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1107845942))))
		{
			goto IL_0226;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1111488439))))
		{
			goto IL_01bd;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1314696574))))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_0452;
	}

IL_00b2:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1474879253)))))
		{
			goto IL_0100;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1390429189)))))
		{
			goto IL_00dd;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1373651570))))
		{
			goto IL_0169;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1390429189))))
		{
			goto IL_017e;
		}
	}
	{
		goto IL_0452;
	}

IL_00dd:
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1675648712))))
		{
			goto IL_0154;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1648986652))))
		{
			goto IL_01d2;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1474879253))))
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_0452;
	}

IL_0100:
	{
		uint32_t L_24 = V_0;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-575069023)))))
		{
			goto IL_012e;
		}
	}
	{
		uint32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-799992209))))
		{
			goto IL_02f8;
		}
	}
	{
		uint32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-684744969))))
		{
			goto IL_02ce;
		}
	}
	{
		uint32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-575069023))))
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_0452;
	}

IL_012e:
	{
		uint32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-496134281))))
		{
			goto IL_028f;
		}
	}
	{
		uint32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-241339041))))
		{
			goto IL_0250;
		}
	}
	{
		uint32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-224561422))))
		{
			goto IL_0265;
		}
	}
	{
		goto IL_0452;
	}

IL_0154:
	{
		String_t* L_31 = ___type0;
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0452;
	}

IL_0169:
	{
		String_t* L_33 = ___type0;
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0452;
	}

IL_017e:
	{
		String_t* L_35 = ___type0;
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_032f;
		}
	}
	{
		goto IL_0452;
	}

IL_0193:
	{
		String_t* L_37 = ___type0;
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0340;
		}
	}
	{
		goto IL_0452;
	}

IL_01a8:
	{
		String_t* L_39 = ___type0;
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0351;
		}
	}
	{
		goto IL_0452;
	}

IL_01bd:
	{
		String_t* L_41 = ___type0;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0362;
		}
	}
	{
		goto IL_0452;
	}

IL_01d2:
	{
		String_t* L_43 = ___type0;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0373;
		}
	}
	{
		goto IL_0452;
	}

IL_01e7:
	{
		String_t* L_45 = ___type0;
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0384;
		}
	}
	{
		goto IL_0452;
	}

IL_01fc:
	{
		String_t* L_47 = ___type0;
		bool L_48;
		L_48 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_47, _stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0395;
		}
	}
	{
		goto IL_0452;
	}

IL_0211:
	{
		String_t* L_49 = ___type0;
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_49, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_03a6;
		}
	}
	{
		goto IL_0452;
	}

IL_0226:
	{
		String_t* L_51 = ___type0;
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_51, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03b7;
		}
	}
	{
		goto IL_0452;
	}

IL_023b:
	{
		String_t* L_53 = ___type0;
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03c8;
		}
	}
	{
		goto IL_0452;
	}

IL_0250:
	{
		String_t* L_55 = ___type0;
		bool L_56;
		L_56 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_55, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0452;
	}

IL_0265:
	{
		String_t* L_57 = ___type0;
		bool L_58;
		L_58 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_57, _stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0452;
	}

IL_027a:
	{
		String_t* L_59 = ___type0;
		bool L_60;
		L_60 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_59, _stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03f2;
		}
	}
	{
		goto IL_0452;
	}

IL_028f:
	{
		String_t* L_61 = ___type0;
		bool L_62;
		L_62 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_61, _stringLiteralD5F82ADF67050EBD784029527F82CAF44131088F, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_0400;
		}
	}
	{
		goto IL_0452;
	}

IL_02a4:
	{
		String_t* L_63 = ___type0;
		bool L_64;
		L_64 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_63, _stringLiteralA4D1FBD2EE681FA3F4C89559244C0F26DF01F55F, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_040e;
		}
	}
	{
		goto IL_0452;
	}

IL_02b9:
	{
		String_t* L_65 = ___type0;
		bool L_66;
		L_66 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_65, _stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_041c;
		}
	}
	{
		goto IL_0452;
	}

IL_02ce:
	{
		String_t* L_67 = ___type0;
		bool L_68;
		L_68 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_67, _stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_042a;
		}
	}
	{
		goto IL_0452;
	}

IL_02e3:
	{
		String_t* L_69 = ___type0;
		bool L_70;
		L_70 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_69, _stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_0438;
		}
	}
	{
		goto IL_0452;
	}

IL_02f8:
	{
		String_t* L_71 = ___type0;
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0446;
		}
	}
	{
		goto IL_0452;
	}

IL_030d:
	{
		// targetPool = enemyS;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_73 = __this->get_enemyS_25();
		__this->set_targetPool_46(L_73);
		// break;
		goto IL_0452;
	}

IL_031e:
	{
		// targetPool = enemyM;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_74 = __this->get_enemyM_26();
		__this->set_targetPool_46(L_74);
		// break;
		goto IL_0452;
	}

IL_032f:
	{
		// targetPool = enemyL;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_75 = __this->get_enemyL_27();
		__this->set_targetPool_46(L_75);
		// break;
		goto IL_0452;
	}

IL_0340:
	{
		// targetPool = bossA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_76 = __this->get_bossA_28();
		__this->set_targetPool_46(L_76);
		// break;
		goto IL_0452;
	}

IL_0351:
	{
		// targetPool = bossB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_77 = __this->get_bossB_29();
		__this->set_targetPool_46(L_77);
		// break;
		goto IL_0452;
	}

IL_0362:
	{
		// targetPool = itempower;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_78 = __this->get_itempower_30();
		__this->set_targetPool_46(L_78);
		// break;
		goto IL_0452;
	}

IL_0373:
	{
		// targetPool = itemlife;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = __this->get_itemlife_31();
		__this->set_targetPool_46(L_79);
		// break;
		goto IL_0452;
	}

IL_0384:
	{
		// targetPool = itemshield;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_80 = __this->get_itemshield_32();
		__this->set_targetPool_46(L_80);
		// break;
		goto IL_0452;
	}

IL_0395:
	{
		// targetPool = itemboom;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_81 = __this->get_itemboom_33();
		__this->set_targetPool_46(L_81);
		// break;
		goto IL_0452;
	}

IL_03a6:
	{
		// targetPool = playerbulletA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_82 = __this->get_playerbulletA_34();
		__this->set_targetPool_46(L_82);
		// break;
		goto IL_0452;
	}

IL_03b7:
	{
		// targetPool = playerbulletB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_83 = __this->get_playerbulletB_35();
		__this->set_targetPool_46(L_83);
		// break;
		goto IL_0452;
	}

IL_03c8:
	{
		// targetPool = enemybulletA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_84 = __this->get_enemybulletA_36();
		__this->set_targetPool_46(L_84);
		// break;
		goto IL_0452;
	}

IL_03d6:
	{
		// targetPool = bossbulletA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_85 = __this->get_bossbulletA_37();
		__this->set_targetPool_46(L_85);
		// break;
		goto IL_0452;
	}

IL_03e4:
	{
		// targetPool = bossbulletB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_86 = __this->get_bossbulletB_38();
		__this->set_targetPool_46(L_86);
		// break;
		goto IL_0452;
	}

IL_03f2:
	{
		// targetPool = explosion;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87 = __this->get_explosion_39();
		__this->set_targetPool_46(L_87);
		// break;
		goto IL_0452;
	}

IL_0400:
	{
		// targetPool = boomeffect;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = __this->get_boomeffect_40();
		__this->set_targetPool_46(L_88);
		// break;
		goto IL_0452;
	}

IL_040e:
	{
		// targetPool = shieldeffect;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_89 = __this->get_shieldeffect_41();
		__this->set_targetPool_46(L_89);
		// break;
		goto IL_0452;
	}

IL_041c:
	{
		// targetPool = asterBig;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_90 = __this->get_asterBig_42();
		__this->set_targetPool_46(L_90);
		// break;
		goto IL_0452;
	}

IL_042a:
	{
		// targetPool = asterHuge;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_91 = __this->get_asterHuge_43();
		__this->set_targetPool_46(L_91);
		// break;
		goto IL_0452;
	}

IL_0438:
	{
		// targetPool = asterMed;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_92 = __this->get_asterMed_44();
		__this->set_targetPool_46(L_92);
		// break;
		goto IL_0452;
	}

IL_0446:
	{
		// targetPool = asterSmall;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_93 = __this->get_asterSmall_45();
		__this->set_targetPool_46(L_93);
	}

IL_0452:
	{
		// for(int index=0; index< targetPool.Length; index++){
		V_1 = 0;
		goto IL_0480;
	}

IL_0456:
	{
		// if (!targetPool[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_94 = __this->get_targetPool_46();
		int32_t L_95 = V_1;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		bool L_98;
		L_98 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_97, /*hidden argument*/NULL);
		if (L_98)
		{
			goto IL_047c;
		}
	}
	{
		// targetPool[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_99 = __this->get_targetPool_46();
		int32_t L_100 = V_1;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_102, (bool)1, /*hidden argument*/NULL);
		// return targetPool[index];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_103 = __this->get_targetPool_46();
		int32_t L_104 = V_1;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		return L_106;
	}

IL_047c:
	{
		// for(int index=0; index< targetPool.Length; index++){
		int32_t L_107 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_0480:
	{
		// for(int index=0; index< targetPool.Length; index++){
		int32_t L_108 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_109 = __this->get_targetPool_46();
		NullCheck(L_109);
		if ((((int32_t)L_108) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))))
		{
			goto IL_0456;
		}
	}
	{
		// return null;
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// UnityEngine.GameObject[] ObjectManager::GetPool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D1FBD2EE681FA3F4C89559244C0F26DF01F55F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F82ADF67050EBD784029527F82CAF44131088F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0452;
		}
	}
	{
		String_t* L_1 = ___type0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1314696574)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)995885719)))))
		{
			goto IL_0069;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)45817824)))))
		{
			goto IL_0043;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)23238726))))
		{
			goto IL_02b9;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)45817824))))
		{
			goto IL_027a;
		}
	}
	{
		goto IL_0452;
	}

IL_0043:
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)331419726))))
		{
			goto IL_02e3;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)722242301))))
		{
			goto IL_01fc;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)995885719))))
		{
			goto IL_0193;
		}
	}
	{
		goto IL_0452;
	}

IL_0069:
	{
		uint32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1091068323)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1012663338))))
		{
			goto IL_01a8;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1091068323))))
		{
			goto IL_0211;
		}
	}
	{
		goto IL_0452;
	}

IL_008c:
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1107845942))))
		{
			goto IL_0226;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1111488439))))
		{
			goto IL_01bd;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1314696574))))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_0452;
	}

IL_00b2:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1474879253)))))
		{
			goto IL_0100;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1390429189)))))
		{
			goto IL_00dd;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1373651570))))
		{
			goto IL_0169;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1390429189))))
		{
			goto IL_017e;
		}
	}
	{
		goto IL_0452;
	}

IL_00dd:
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1675648712))))
		{
			goto IL_0154;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1648986652))))
		{
			goto IL_01d2;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1474879253))))
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_0452;
	}

IL_0100:
	{
		uint32_t L_24 = V_0;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-575069023)))))
		{
			goto IL_012e;
		}
	}
	{
		uint32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-799992209))))
		{
			goto IL_02f8;
		}
	}
	{
		uint32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-684744969))))
		{
			goto IL_02ce;
		}
	}
	{
		uint32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-575069023))))
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_0452;
	}

IL_012e:
	{
		uint32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-496134281))))
		{
			goto IL_028f;
		}
	}
	{
		uint32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-241339041))))
		{
			goto IL_0250;
		}
	}
	{
		uint32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-224561422))))
		{
			goto IL_0265;
		}
	}
	{
		goto IL_0452;
	}

IL_0154:
	{
		String_t* L_31 = ___type0;
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_030d;
		}
	}
	{
		goto IL_0452;
	}

IL_0169:
	{
		String_t* L_33 = ___type0;
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0452;
	}

IL_017e:
	{
		String_t* L_35 = ___type0;
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_032f;
		}
	}
	{
		goto IL_0452;
	}

IL_0193:
	{
		String_t* L_37 = ___type0;
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0340;
		}
	}
	{
		goto IL_0452;
	}

IL_01a8:
	{
		String_t* L_39 = ___type0;
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0351;
		}
	}
	{
		goto IL_0452;
	}

IL_01bd:
	{
		String_t* L_41 = ___type0;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral033B7FE7324D4E1F52EDE8946628FAE6BB211BB6, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0362;
		}
	}
	{
		goto IL_0452;
	}

IL_01d2:
	{
		String_t* L_43 = ___type0;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral6B7CC1D3CCC1EDD48BB7DFCAF2E1D2A5941CB882, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0373;
		}
	}
	{
		goto IL_0452;
	}

IL_01e7:
	{
		String_t* L_45 = ___type0;
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteralB07B0C3C8B300D519DD12225CE35CEE8DE1D64C9, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0384;
		}
	}
	{
		goto IL_0452;
	}

IL_01fc:
	{
		String_t* L_47 = ___type0;
		bool L_48;
		L_48 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_47, _stringLiteralE16B3BEB4C0D6E81EAE539F522E361F1829B8F10, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0395;
		}
	}
	{
		goto IL_0452;
	}

IL_0211:
	{
		String_t* L_49 = ___type0;
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_49, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_03a6;
		}
	}
	{
		goto IL_0452;
	}

IL_0226:
	{
		String_t* L_51 = ___type0;
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_51, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03b7;
		}
	}
	{
		goto IL_0452;
	}

IL_023b:
	{
		String_t* L_53 = ___type0;
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03c8;
		}
	}
	{
		goto IL_0452;
	}

IL_0250:
	{
		String_t* L_55 = ___type0;
		bool L_56;
		L_56 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_55, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03d6;
		}
	}
	{
		goto IL_0452;
	}

IL_0265:
	{
		String_t* L_57 = ___type0;
		bool L_58;
		L_58 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_57, _stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03e4;
		}
	}
	{
		goto IL_0452;
	}

IL_027a:
	{
		String_t* L_59 = ___type0;
		bool L_60;
		L_60 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_59, _stringLiteralFE097308B2D6943E845DA4F481D96EC623819A61, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03f2;
		}
	}
	{
		goto IL_0452;
	}

IL_028f:
	{
		String_t* L_61 = ___type0;
		bool L_62;
		L_62 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_61, _stringLiteralD5F82ADF67050EBD784029527F82CAF44131088F, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_0400;
		}
	}
	{
		goto IL_0452;
	}

IL_02a4:
	{
		String_t* L_63 = ___type0;
		bool L_64;
		L_64 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_63, _stringLiteralA4D1FBD2EE681FA3F4C89559244C0F26DF01F55F, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_040e;
		}
	}
	{
		goto IL_0452;
	}

IL_02b9:
	{
		String_t* L_65 = ___type0;
		bool L_66;
		L_66 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_65, _stringLiteral331C537C5B1FCBCE166AC96FEC1467FA34B0796A, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_041c;
		}
	}
	{
		goto IL_0452;
	}

IL_02ce:
	{
		String_t* L_67 = ___type0;
		bool L_68;
		L_68 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_67, _stringLiteral0B5E16E50131E16BA461B2449346E7644F6A6D5E, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_042a;
		}
	}
	{
		goto IL_0452;
	}

IL_02e3:
	{
		String_t* L_69 = ___type0;
		bool L_70;
		L_70 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_69, _stringLiteral6B711A1251D7A49ECC51BD6A100C91F7ADF5F140, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_0438;
		}
	}
	{
		goto IL_0452;
	}

IL_02f8:
	{
		String_t* L_71 = ___type0;
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteral5A703AD51AA6904433405DF021543B3870D2A9CA, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0446;
		}
	}
	{
		goto IL_0452;
	}

IL_030d:
	{
		// targetPool = enemyS;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_73 = __this->get_enemyS_25();
		__this->set_targetPool_46(L_73);
		// break;
		goto IL_0452;
	}

IL_031e:
	{
		// targetPool = enemyM;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_74 = __this->get_enemyM_26();
		__this->set_targetPool_46(L_74);
		// break;
		goto IL_0452;
	}

IL_032f:
	{
		// targetPool = enemyL;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_75 = __this->get_enemyL_27();
		__this->set_targetPool_46(L_75);
		// break;
		goto IL_0452;
	}

IL_0340:
	{
		// targetPool = bossA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_76 = __this->get_bossA_28();
		__this->set_targetPool_46(L_76);
		// break;
		goto IL_0452;
	}

IL_0351:
	{
		// targetPool = bossB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_77 = __this->get_bossB_29();
		__this->set_targetPool_46(L_77);
		// break;
		goto IL_0452;
	}

IL_0362:
	{
		// targetPool = itempower;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_78 = __this->get_itempower_30();
		__this->set_targetPool_46(L_78);
		// break;
		goto IL_0452;
	}

IL_0373:
	{
		// targetPool = itemlife;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = __this->get_itemlife_31();
		__this->set_targetPool_46(L_79);
		// break;
		goto IL_0452;
	}

IL_0384:
	{
		// targetPool = itemshield;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_80 = __this->get_itemshield_32();
		__this->set_targetPool_46(L_80);
		// break;
		goto IL_0452;
	}

IL_0395:
	{
		// targetPool = itemboom;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_81 = __this->get_itemboom_33();
		__this->set_targetPool_46(L_81);
		// break;
		goto IL_0452;
	}

IL_03a6:
	{
		// targetPool = playerbulletA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_82 = __this->get_playerbulletA_34();
		__this->set_targetPool_46(L_82);
		// break;
		goto IL_0452;
	}

IL_03b7:
	{
		// targetPool = playerbulletB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_83 = __this->get_playerbulletB_35();
		__this->set_targetPool_46(L_83);
		// break;
		goto IL_0452;
	}

IL_03c8:
	{
		// targetPool = enemybulletA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_84 = __this->get_enemybulletA_36();
		__this->set_targetPool_46(L_84);
		// break;
		goto IL_0452;
	}

IL_03d6:
	{
		// targetPool = bossbulletA;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_85 = __this->get_bossbulletA_37();
		__this->set_targetPool_46(L_85);
		// break;
		goto IL_0452;
	}

IL_03e4:
	{
		// targetPool = bossbulletB;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_86 = __this->get_bossbulletB_38();
		__this->set_targetPool_46(L_86);
		// break;
		goto IL_0452;
	}

IL_03f2:
	{
		// targetPool = explosion;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87 = __this->get_explosion_39();
		__this->set_targetPool_46(L_87);
		// break;
		goto IL_0452;
	}

IL_0400:
	{
		// targetPool = boomeffect;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = __this->get_boomeffect_40();
		__this->set_targetPool_46(L_88);
		// break;
		goto IL_0452;
	}

IL_040e:
	{
		// targetPool = shieldeffect;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_89 = __this->get_shieldeffect_41();
		__this->set_targetPool_46(L_89);
		// break;
		goto IL_0452;
	}

IL_041c:
	{
		// targetPool = asterBig;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_90 = __this->get_asterBig_42();
		__this->set_targetPool_46(L_90);
		// break;
		goto IL_0452;
	}

IL_042a:
	{
		// targetPool = asterHuge;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_91 = __this->get_asterHuge_43();
		__this->set_targetPool_46(L_91);
		// break;
		goto IL_0452;
	}

IL_0438:
	{
		// targetPool = asterMed;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_92 = __this->get_asterMed_44();
		__this->set_targetPool_46(L_92);
		// break;
		goto IL_0452;
	}

IL_0446:
	{
		// targetPool = asterSmall;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_93 = __this->get_asterSmall_45();
		__this->set_targetPool_46(L_93);
	}

IL_0452:
	{
		// return targetPool;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_94 = __this->get_targetPool_46();
		return L_94;
	}
}
// System.Void ObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManager__ctor_m716EB73D024DE113A9D4D206509F5983216041F8 (ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnEnable_m7F11EF0AA6B08B6C205F1E33812E134357366D86 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D7A044CECC3E1454D96AF57D91031B982F2EE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Unbeatable();
		Player_Unbeatable_m05174B49018499D60F7A66903F0816D9D3A2C653(__this, /*hidden argument*/NULL);
		// Invoke("Unbeatable", 3);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralC2D7A044CECC3E1454D96AF57D91031B982F2EE4, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Unbeatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Unbeatable_m05174B49018499D60F7A66903F0816D9D3A2C653 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF809E50BCBCC6874192B58141A533B97AB04965B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isRespawnTime = !isRespawnTime;
		bool L_0 = __this->get_isRespawnTime_20();
		__this->set_isRespawnTime_20((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if(isRespawnTime)
		bool L_1 = __this->get_isRespawnTime_20();
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// invincibilityeffect.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_invincibilityeffect_26();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// Invoke("Offinvincibility", 3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralF809E50BCBCC6874192B58141A533B97AB04965B, (3.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// isRespawnTime = false;
		__this->set_isRespawnTime_20((bool)0);
		// invincibilityeffect.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_invincibilityeffect_26();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Offinvincibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Offinvincibility_mE3281EB10199131DE2E1EE7053DD49F88B3764DA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// invincibilityeffect.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_invincibilityeffect_26();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Move();
		Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8(__this, /*hidden argument*/NULL);
		// Fire();
		Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790(__this, /*hidden argument*/NULL);
		// Reload();
		Player_Reload_mA71667C63FC5062ABBB1F005867E60A80494267D(__this, /*hidden argument*/NULL);
		// Boom();
		Player_Boom_mD85C7234849EDCEB60C9DE4712821329AFB587C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 worldpos = Camera.main.WorldToViewportPoint(this.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (worldpos.x < 0f) worldpos.x = 0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		float L_5 = L_4.get_x_2();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		// if (worldpos.x < 0f) worldpos.x = 0f;
		(&V_0)->set_x_2((0.0f));
	}

IL_002f:
	{
		// if (worldpos.y < 0f) worldpos.y = 0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_y_3();
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// if (worldpos.y < 0f) worldpos.y = 0f;
		(&V_0)->set_y_3((0.0f));
	}

IL_0048:
	{
		// if (worldpos.x > 1f) worldpos.x = 1f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_x_2();
		if ((!(((float)L_9) > ((float)(1.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// if (worldpos.x > 1f) worldpos.x = 1f;
		(&V_0)->set_x_2((1.0f));
	}

IL_0061:
	{
		// if (worldpos.y > 1f) worldpos.y = 1f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		if ((!(((float)L_11) > ((float)(1.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// if (worldpos.y > 1f) worldpos.y = 1f;
		(&V_0)->set_y_3((1.0f));
	}

IL_007a:
	{
		// this.transform.position = Camera.main.ViewportToWorldPoint(worldpos);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_15, /*hidden argument*/NULL);
		// float x = virtualJoystick.Horizontal();
		VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * L_16 = __this->get_virtualJoystick_31();
		NullCheck(L_16);
		float L_17;
		L_17 = VirtualJoystick_Horizontal_m54697A52E6ECB1101B68B105B8DDFA0994BD1A74(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// float y = virtualJoystick.Vertical();
		VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * L_18 = __this->get_virtualJoystick_31();
		NullCheck(L_18);
		float L_19;
		L_19 = VirtualJoystick_Vertical_m89210BB23EE14E0F48F05E972086A0CBA26BDC27(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// if(x !=0 || y !=0)
		float L_20 = V_1;
		if ((!(((float)L_20) == ((float)(0.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		float L_21 = V_2;
		if ((((float)L_21) == ((float)(0.0f))))
		{
			goto IL_00ef;
		}
	}

IL_00b8:
	{
		// transform.position += new Vector3(x,y,0) * speed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22;
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = V_1;
		float L_26 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_25, L_26, (0.0f), /*hidden argument*/NULL);
		float L_28 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_31, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_32, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_4 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_5 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_9 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_10 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_11 = NULL;
	int32_t V_12 = 0;
	{
		// if(curShotDelay < maxShotDelay)
		float L_0 = __this->get_curShotDelay_6();
		float L_1 = __this->get_maxShotDelay_5();
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// switch (power) {
		int32_t L_2 = __this->get_power_7();
		V_12 = L_2;
		int32_t L_3 = V_12;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_0133;
			}
			case 3:
			{
				goto IL_022c;
			}
			case 4:
			{
				goto IL_0271;
			}
			case 5:
			{
				goto IL_0327;
			}
		}
	}
	{
		goto IL_0421;
	}

IL_003d:
	{
		// GameObject bullet = objectManager.MakeObj("playerbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_4 = __this->get_objectManager_28();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_4, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		// bullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
		// Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
		NullCheck(L_6);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rigid.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_10, L_12, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0421;
	}

IL_0082:
	{
		// GameObject bulletU = objectManager.MakeObj("playerbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_13 = __this->get_objectManager_28();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_13, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		// bulletU.transform.position = transform.position + Vector3.up*0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_21, /*hidden argument*/NULL);
		// GameObject bulletD = objectManager.MakeObj("playerbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_22 = __this->get_objectManager_28();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_22, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		V_0 = L_23;
		// bulletD.transform.position = transform.position + Vector3.down*0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_0;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_30, /*hidden argument*/NULL);
		// Rigidbody2D rigidU = bulletU.GetComponent<Rigidbody2D>();
		NullCheck(L_15);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_31;
		L_31 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_15, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D rigidD = bulletD.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_0;
		NullCheck(L_32);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33;
		L_33 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_32, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_1 = L_33;
		// rigidU.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_34, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_31, L_35, 1, /*hidden argument*/NULL);
		// rigidD.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_36 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_37, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_36, L_38, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0421;
	}

IL_0133:
	{
		// GameObject bulletUU = objectManager.MakeObj("playerbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_39 = __this->get_objectManager_28();
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_39, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		// bulletUU.transform.position = transform.position + Vector3.up*0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = L_40;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_45, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_44, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_47, /*hidden argument*/NULL);
		// GameObject bulletCC = objectManager.MakeObj("playerbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_48 = __this->get_objectManager_28();
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_48, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		V_2 = L_49;
		// bulletCC.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_2;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_51, L_53, /*hidden argument*/NULL);
		// GameObject bulletDD = objectManager.MakeObj("playerbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_54 = __this->get_objectManager_28();
		NullCheck(L_54);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55;
		L_55 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_54, _stringLiteralB02A9AE1BA02CF7BA778CB8DDB4D1EB3F558DFEF, /*hidden argument*/NULL);
		V_3 = L_55;
		// bulletDD.transform.position = transform.position + Vector3.down*0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = V_3;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_58, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_60, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_59, L_61, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_57, L_62, /*hidden argument*/NULL);
		// Rigidbody2D rigidUU = bulletUU.GetComponent<Rigidbody2D>();
		NullCheck(L_41);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63;
		L_63 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_41, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D rigidCC = bulletCC.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = V_2;
		NullCheck(L_64);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_65;
		L_65 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_64, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_4 = L_65;
		// Rigidbody2D rigidDD = bulletDD.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = V_3;
		NullCheck(L_66);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_67;
		L_67 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_66, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_5 = L_67;
		// rigidUU.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68;
		L_68 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69;
		L_69 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_68, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_63, L_69, 1, /*hidden argument*/NULL);
		// rigidCC.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_70 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		L_71 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_71, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_70);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_70, L_72, 1, /*hidden argument*/NULL);
		// rigidDD.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_73 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		L_74 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75;
		L_75 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_74, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_73);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_73, L_75, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0421;
	}

IL_022c:
	{
		// GameObject bul = objectManager.MakeObj("playerbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_76 = __this->get_objectManager_28();
		NullCheck(L_76);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_76, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		// bul.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = L_77;
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_78, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_80, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_79, L_81, /*hidden argument*/NULL);
		// Rigidbody2D rig = bul.GetComponent<Rigidbody2D>();
		NullCheck(L_78);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_82;
		L_82 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_78, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rig.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		L_83 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84;
		L_84 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_83, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_82);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_82, L_84, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0421;
	}

IL_0271:
	{
		// GameObject bulletu = objectManager.MakeObj("playerbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_85 = __this->get_objectManager_28();
		NullCheck(L_85);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86;
		L_86 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_85, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		// bulletu.transform.position = transform.position + Vector3.up*0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = L_86;
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_87, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_91, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_90, L_92, /*hidden argument*/NULL);
		NullCheck(L_88);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_88, L_93, /*hidden argument*/NULL);
		// GameObject bulletd = objectManager.MakeObj("playerbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_94 = __this->get_objectManager_28();
		NullCheck(L_94);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95;
		L_95 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_94, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		V_6 = L_95;
		// bulletd.transform.position = transform.position + Vector3.down*0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96 = V_6;
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_96, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98;
		L_98 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_98);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_98, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		L_100 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		L_101 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_100, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_99, L_101, /*hidden argument*/NULL);
		NullCheck(L_97);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_97, L_102, /*hidden argument*/NULL);
		// Rigidbody2D rigidu = bulletu.GetComponent<Rigidbody2D>();
		NullCheck(L_87);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_103;
		L_103 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_87, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D rigidd = bulletd.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104 = V_6;
		NullCheck(L_104);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_105;
		L_105 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_104, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_7 = L_105;
		// rigidu.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_106;
		L_106 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107;
		L_107 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_106, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_103);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_103, L_107, 1, /*hidden argument*/NULL);
		// rigidd.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_108 = V_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_109;
		L_109 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_110;
		L_110 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_109, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_108);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_108, L_110, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0421;
	}

IL_0327:
	{
		// GameObject bulletuu = objectManager.MakeObj("playerbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_111 = __this->get_objectManager_28();
		NullCheck(L_111);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112;
		L_112 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_111, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		// bulletuu.transform.position = transform.position + Vector3.up*0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113 = L_112;
		NullCheck(L_113);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_113, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_115);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_115, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_117, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_116, L_118, /*hidden argument*/NULL);
		NullCheck(L_114);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_114, L_119, /*hidden argument*/NULL);
		// GameObject bulletcc = objectManager.MakeObj("playerbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_120 = __this->get_objectManager_28();
		NullCheck(L_120);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_121;
		L_121 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_120, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		V_8 = L_121;
		// bulletcc.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = V_8;
		NullCheck(L_122);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_123;
		L_123 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_122, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124;
		L_124 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_124, /*hidden argument*/NULL);
		NullCheck(L_123);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_123, L_125, /*hidden argument*/NULL);
		// GameObject bulletdd = objectManager.MakeObj("playerbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_126 = __this->get_objectManager_28();
		NullCheck(L_126);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127;
		L_127 = ObjectManager_MakeObj_m1B7531D96FE3793F20651EEA4FC7B094ED80933C(L_126, _stringLiteral43A5E2092B6AC35C14CD716CA3EF44586BC097D2, /*hidden argument*/NULL);
		V_9 = L_127;
		// bulletdd.transform.position = transform.position + Vector3.down*0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = V_9;
		NullCheck(L_128);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_129;
		L_129 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_128, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_130);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		L_131 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_130, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133;
		L_133 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_132, (0.300000012f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		L_134 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_131, L_133, /*hidden argument*/NULL);
		NullCheck(L_129);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_129, L_134, /*hidden argument*/NULL);
		// Rigidbody2D rigiduu = bulletuu.GetComponent<Rigidbody2D>();
		NullCheck(L_113);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_135;
		L_135 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_113, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// Rigidbody2D rigidcc = bulletcc.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_136 = V_8;
		NullCheck(L_136);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_137;
		L_137 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_136, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_10 = L_137;
		// Rigidbody2D rigiddd = bulletdd.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_138 = V_9;
		NullCheck(L_138);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_139;
		L_139 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_138, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_11 = L_139;
		// rigiduu.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_140;
		L_140 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_141;
		L_141 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_140, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_135);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_135, L_141, 1, /*hidden argument*/NULL);
		// rigidcc.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_142 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_143;
		L_143 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_144;
		L_144 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_143, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_142);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_142, L_144, 1, /*hidden argument*/NULL);
		// rigiddd.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_145 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_146;
		L_146 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_147;
		L_147 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_146, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_145);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_145, L_147, 1, /*hidden argument*/NULL);
	}

IL_0421:
	{
		// curShotDelay = 0;
		__this->set_curShotDelay_6((0.0f));
		// }
		return;
	}
}
// System.Void Player::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Reload_mA71667C63FC5062ABBB1F005867E60A80494267D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// curShotDelay += Time.deltaTime;
		float L_0 = __this->get_curShotDelay_6();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_curShotDelay_6(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void Player::ButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ButtonUp_mE7DE3763018BC58F47DB200513C82F8C6F4FB9ED (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// isButton = false;
		__this->set_isButton_21((bool)0);
		// }
		return;
	}
}
// System.Void Player::ButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ButtonDown_mFDAEC2AEBAA35392C53BC0CAB0D5ECABF6AEBBD8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// isButton = true;
		__this->set_isButton_21((bool)1);
		// }
		return;
	}
}
// System.Void Player::Boom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Boom_mD85C7234849EDCEB60C9DE4712821329AFB587C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F10860E31BCC56D61783CD9C38C0C2D11E17A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_2 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_3 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_4 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_5 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_6 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		// if(!isButton)
		bool L_0 = __this->get_isButton_21();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (isBoomTime)
		bool L_1 = __this->get_isBoomTime_19();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// if (boom == 0)
		int32_t L_2 = __this->get_boom_12();
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// boom--;
		int32_t L_3 = __this->get_boom_12();
		__this->set_boom_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// isBoomTime = true;
		__this->set_isBoomTime_19((bool)1);
		// gameManager.UpdateBoomIcon(boom);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gameManager_27();
		int32_t L_5 = __this->get_boom_12();
		NullCheck(L_4);
		GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E(L_4, L_5, /*hidden argument*/NULL);
		// boomeffect.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_boomeffect_25();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// Invoke("Offboomeffect", 1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral95F10860E31BCC56D61783CD9C38C0C2D11E17A9, (1.0f), /*hidden argument*/NULL);
		// GameObject[] enemiesS = objectManager.GetPool("EnemyS");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_7 = __this->get_objectManager_28();
		NullCheck(L_7);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8;
		L_8 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_7, _stringLiteral2089E1BD923779AE7142CC83F2F512D6095AEAC0, /*hidden argument*/NULL);
		V_0 = L_8;
		// GameObject[] enemiesM = objectManager.GetPool("EnemyM");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_9 = __this->get_objectManager_28();
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10;
		L_10 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_9, _stringLiteral227575C66262922CB6F2EABBDBC4FAE576586087, /*hidden argument*/NULL);
		V_1 = L_10;
		// GameObject[] enemiesL = objectManager.GetPool("EnemyL");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_11 = __this->get_objectManager_28();
		NullCheck(L_11);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12;
		L_12 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_11, _stringLiteral9D540CA737EAA85812F331B43C1DAEB5DAF15D33, /*hidden argument*/NULL);
		V_2 = L_12;
		// GameObject[] BossesA = objectManager.GetPool("BossA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_13 = __this->get_objectManager_28();
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14;
		L_14 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_13, _stringLiteral1D61BF688C1700CE4E2F885E1D46A8D34CADBCA8, /*hidden argument*/NULL);
		V_3 = L_14;
		// GameObject[] BossesB = objectManager.GetPool("BossB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_15 = __this->get_objectManager_28();
		NullCheck(L_15);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16;
		L_16 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_15, _stringLiteral952FA4119CF760E6B5B88B3374D4480F0278E649, /*hidden argument*/NULL);
		V_4 = L_16;
		// for(int index=0; index < enemiesS.Length; index++) {
		V_8 = 0;
		goto IL_00dc;
	}

IL_00b8:
	{
		// if(enemiesS[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = V_0;
		int32_t L_18 = V_8;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		bool L_21;
		L_21 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d6;
		}
	}
	{
		// Enemy enemyLogic = enemiesS[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = V_0;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_26;
		L_26 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_25, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.OnHit(1000);
		NullCheck(L_26);
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(L_26, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// for(int index=0; index < enemiesS.Length; index++) {
		int32_t L_27 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00dc:
	{
		// for(int index=0; index < enemiesS.Length; index++) {
		int32_t L_28 = V_8;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_00b8;
		}
	}
	{
		// for(int index=0; index < enemiesM.Length; index++) {
		V_9 = 0;
		goto IL_010c;
	}

IL_00e8:
	{
		// if(enemiesM[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = V_1;
		int32_t L_31 = V_9;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		bool L_34;
		L_34 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0106;
		}
	}
	{
		// Enemy enemyLogic = enemiesM[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35 = V_1;
		int32_t L_36 = V_9;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_39;
		L_39 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_38, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.OnHit(1000);
		NullCheck(L_39);
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(L_39, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_0106:
	{
		// for(int index=0; index < enemiesM.Length; index++) {
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_010c:
	{
		// for(int index=0; index < enemiesM.Length; index++) {
		int32_t L_41 = V_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_00e8;
		}
	}
	{
		// for(int index=0; index < enemiesL.Length; index++) {
		V_10 = 0;
		goto IL_013c;
	}

IL_0118:
	{
		// if(enemiesL[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_43 = V_2;
		int32_t L_44 = V_10;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		bool L_47;
		L_47 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0136;
		}
	}
	{
		// Enemy enemyLogic = enemiesL[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_48 = V_2;
		int32_t L_49 = V_10;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_52;
		L_52 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_51, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.OnHit(1000);
		NullCheck(L_52);
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(L_52, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_0136:
	{
		// for(int index=0; index < enemiesL.Length; index++) {
		int32_t L_53 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_013c:
	{
		// for(int index=0; index < enemiesL.Length; index++) {
		int32_t L_54 = V_10;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))))
		{
			goto IL_0118;
		}
	}
	{
		// for(int index=0; index < BossesA.Length; index++) {
		V_11 = 0;
		goto IL_016c;
	}

IL_0148:
	{
		// if(BossesA[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_56 = V_3;
		int32_t L_57 = V_11;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		bool L_60;
		L_60 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0166;
		}
	}
	{
		// Enemy enemyLogic = BossesA[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_61 = V_3;
		int32_t L_62 = V_11;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_65;
		L_65 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_64, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.OnHit(1000);
		NullCheck(L_65);
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(L_65, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_0166:
	{
		// for(int index=0; index < BossesA.Length; index++) {
		int32_t L_66 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_016c:
	{
		// for(int index=0; index < BossesA.Length; index++) {
		int32_t L_67 = V_11;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_68 = V_3;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_0148;
		}
	}
	{
		// for(int index=0; index < BossesB.Length; index++) {
		V_12 = 0;
		goto IL_019e;
	}

IL_0178:
	{
		// if(BossesB[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_69 = V_4;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		bool L_73;
		L_73 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0198;
		}
	}
	{
		// Enemy enemyLogic = BossesB[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_74 = V_4;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_78;
		L_78 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_77, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// enemyLogic.OnHit(1000);
		NullCheck(L_78);
		Enemy_OnHit_mD75AB1CCCECDBF186B328E27A9F7FFBD138F85CD(L_78, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_0198:
	{
		// for(int index=0; index < BossesB.Length; index++) {
		int32_t L_79 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_019e:
	{
		// for(int index=0; index < BossesB.Length; index++) {
		int32_t L_80 = V_12;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_81 = V_4;
		NullCheck(L_81);
		if ((((int32_t)L_80) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))))))
		{
			goto IL_0178;
		}
	}
	{
		// GameObject[] bulletsA = objectManager.GetPool("EnemybulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_82 = __this->get_objectManager_28();
		NullCheck(L_82);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_83;
		L_83 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_82, _stringLiteral775C9D23BAFC1724ACBBBBDB611C7562B88139B2, /*hidden argument*/NULL);
		V_5 = L_83;
		// GameObject[] bulletsBA = objectManager.GetPool("BossbulletA");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_84 = __this->get_objectManager_28();
		NullCheck(L_84);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_85;
		L_85 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_84, _stringLiteral82A8D8A3CF01DCA74992C0351F4CCA069305886B, /*hidden argument*/NULL);
		V_6 = L_85;
		// GameObject[] bulletsBB = objectManager.GetPool("BossbulletB");
		ObjectManager_t3D5C8F95A9AB27FEA438898E9C1FEF80D19619D0 * L_86 = __this->get_objectManager_28();
		NullCheck(L_86);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87;
		L_87 = ObjectManager_GetPool_m5446364E22A471568C053F14A0DF5CF205E9FDD7(L_86, _stringLiteralD6C13A0AEE2A0B2EE95367497F039F44C7ADB2C6, /*hidden argument*/NULL);
		V_7 = L_87;
		// for(int index=0; index < bulletsA.Length; index++) {
		V_13 = 0;
		goto IL_0209;
	}

IL_01e1:
	{
		// if(bulletsA[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = V_5;
		int32_t L_89 = V_13;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		bool L_92;
		L_92 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_91, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0203;
		}
	}
	{
		// Enemy enemyLogic = bulletsA[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_93 = V_5;
		int32_t L_94 = V_13;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_97;
		L_97 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_96, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// bulletsA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_98 = V_5;
		int32_t L_99 = V_13;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_101, (bool)0, /*hidden argument*/NULL);
	}

IL_0203:
	{
		// for(int index=0; index < bulletsA.Length; index++) {
		int32_t L_102 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_0209:
	{
		// for(int index=0; index < bulletsA.Length; index++) {
		int32_t L_103 = V_13;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_104 = V_5;
		NullCheck(L_104);
		if ((((int32_t)L_103) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length))))))
		{
			goto IL_01e1;
		}
	}
	{
		// for(int index=0; index < bulletsBA.Length; index++) {
		V_14 = 0;
		goto IL_023e;
	}

IL_0216:
	{
		// if(bulletsBA[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_105 = V_6;
		int32_t L_106 = V_14;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_108);
		bool L_109;
		L_109 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0238;
		}
	}
	{
		// Enemy enemyLogic = bulletsBA[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_110 = V_6;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_113);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_114;
		L_114 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_113, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// bulletsBA[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_115 = V_6;
		int32_t L_116 = V_14;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_118, (bool)0, /*hidden argument*/NULL);
	}

IL_0238:
	{
		// for(int index=0; index < bulletsBA.Length; index++) {
		int32_t L_119 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
	}

IL_023e:
	{
		// for(int index=0; index < bulletsBA.Length; index++) {
		int32_t L_120 = V_14;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_121 = V_6;
		NullCheck(L_121);
		if ((((int32_t)L_120) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_121)->max_length))))))
		{
			goto IL_0216;
		}
	}
	{
		// for(int index=0; index < bulletsBB.Length; index++) {
		V_15 = 0;
		goto IL_0273;
	}

IL_024b:
	{
		// if(bulletsBB[index].activeSelf)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_122 = V_7;
		int32_t L_123 = V_15;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		bool L_126;
		L_126 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_125, /*hidden argument*/NULL);
		if (!L_126)
		{
			goto IL_026d;
		}
	}
	{
		// Enemy enemyLogic = bulletsBB[index].GetComponent<Enemy>();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_127 = V_7;
		int32_t L_128 = V_15;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_130);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_131;
		L_131 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_130, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		// bulletsBB[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_132 = V_7;
		int32_t L_133 = V_15;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_135, (bool)0, /*hidden argument*/NULL);
	}

IL_026d:
	{
		// for(int index=0; index < bulletsBB.Length; index++) {
		int32_t L_136 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
	}

IL_0273:
	{
		// for(int index=0; index < bulletsBB.Length; index++) {
		int32_t L_137 = V_15;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_138 = V_7;
		NullCheck(L_138);
		if ((((int32_t)L_137) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_138)->max_length))))))
		{
			goto IL_024b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___colloision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FEEE30ACD8AF48C0493BC7000C458744C94C1BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral216451B0B96E95A72109CC42B6C5D525882C74B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39BB912CB0CCECC3E3162A4CA2A0B8CE86A90383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73499AD646DE28369FB68F093FAB181683D5276F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6440208A0FDC2FFFEA14B297C4F968EEF163374);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB43137F5798267E1A82DD467143B245A821F93F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC741BEBAE4DCEA558B5033756F059F725A4F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(colloision.gameObject.tag == "border") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___colloision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralBB43137F5798267E1A82DD467143B245A821F93F, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// switch (colloision.gameObject.name) {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___colloision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0315;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0076;
		}
	}
	{
		return;
	}

IL_005e:
	{
		// isT = true;
		__this->set_isT_14((bool)1);
		// break;
		return;
	}

IL_0066:
	{
		// isB = true;
		__this->set_isB_15((bool)1);
		// break;
		return;
	}

IL_006e:
	{
		// isR = true;
		__this->set_isR_16((bool)1);
		// break;
		return;
	}

IL_0076:
	{
		// isL = true;
		__this->set_isL_17((bool)1);
		// break;
		return;
	}

IL_007e:
	{
		// else if(colloision.gameObject.tag == "Enemy"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___colloision0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0114;
		}
	}
	{
		// if (isRespawnTime)
		bool L_20 = __this->get_isRespawnTime_20();
		if (!L_20)
		{
			goto IL_009e;
		}
	}
	{
		// return;
		return;
	}

IL_009e:
	{
		// if (isHit)
		bool L_21 = __this->get_isHit_18();
		if (!L_21)
		{
			goto IL_00a7;
		}
	}
	{
		// return;
		return;
	}

IL_00a7:
	{
		// isHit = true;
		__this->set_isHit_18((bool)1);
		// life--;
		int32_t L_22 = __this->get_life_9();
		__this->set_life_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
		// gameManager.UpdateLifeIcon(life);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_23 = __this->get_gameManager_27();
		int32_t L_24 = __this->get_life_9();
		NullCheck(L_23);
		GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29(L_23, L_24, /*hidden argument*/NULL);
		// gameManager.CallExplosion(transform.position, "P");
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_25 = __this->get_gameManager_27();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameManager_CallExplosion_mF9E501E5743477F31DB15C3DC4D88CCA9421C564(L_25, L_27, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, /*hidden argument*/NULL);
		// if(life == 0){
		int32_t L_28 = __this->get_life_9();
		if (L_28)
		{
			goto IL_00fc;
		}
	}
	{
		// SceneManager.LoadScene("GameOverScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral216451B0B96E95A72109CC42B6C5D525882C74B8, /*hidden argument*/NULL);
		// }
		goto IL_0107;
	}

IL_00fc:
	{
		// gameManager.RespawnPlayer();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_29 = __this->get_gameManager_27();
		NullCheck(L_29);
		GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE(L_29, /*hidden argument*/NULL);
	}

IL_0107:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0114:
	{
		// else if(colloision.gameObject.tag == "EnemyBullet"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_31 = ___colloision0;
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteral257B900404DF53531BBAC601EDD3223D6F02A7A6, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_01b9;
		}
	}
	{
		// if (isRespawnTime)
		bool L_35 = __this->get_isRespawnTime_20();
		if (!L_35)
		{
			goto IL_0137;
		}
	}
	{
		// return;
		return;
	}

IL_0137:
	{
		// if (isHit)
		bool L_36 = __this->get_isHit_18();
		if (!L_36)
		{
			goto IL_0140;
		}
	}
	{
		// return;
		return;
	}

IL_0140:
	{
		// isHit = true;
		__this->set_isHit_18((bool)1);
		// life--;
		int32_t L_37 = __this->get_life_9();
		__this->set_life_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)));
		// gameManager.UpdateLifeIcon(life);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_38 = __this->get_gameManager_27();
		int32_t L_39 = __this->get_life_9();
		NullCheck(L_38);
		GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29(L_38, L_39, /*hidden argument*/NULL);
		// gameManager.CallExplosion(transform.position, "P");
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_40 = __this->get_gameManager_27();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		GameManager_CallExplosion_mF9E501E5743477F31DB15C3DC4D88CCA9421C564(L_40, L_42, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, /*hidden argument*/NULL);
		// if(life == 0){
		int32_t L_43 = __this->get_life_9();
		if (L_43)
		{
			goto IL_0195;
		}
	}
	{
		// SceneManager.LoadScene("GameOverScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral216451B0B96E95A72109CC42B6C5D525882C74B8, /*hidden argument*/NULL);
		// }
		goto IL_01a0;
	}

IL_0195:
	{
		// gameManager.RespawnPlayer();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_44 = __this->get_gameManager_27();
		NullCheck(L_44);
		GameManager_RespawnPlayer_m3BE749FB5EAC7E4747393DC5909C520DD3589FAE(L_44, /*hidden argument*/NULL);
	}

IL_01a0:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_45, (bool)0, /*hidden argument*/NULL);
		// colloision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_46 = ___colloision0;
		NullCheck(L_46);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_47, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01b9:
	{
		// else if(colloision.gameObject.tag == "Item"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_48 = ___colloision0;
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_49, /*hidden argument*/NULL);
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0315;
		}
	}
	{
		// Item item = colloision.GetComponent<Item>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_52 = ___colloision0;
		NullCheck(L_52);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_53;
		L_53 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_52, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		// GetComponent<AudioSource>().Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_54;
		L_54 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_54);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_54, /*hidden argument*/NULL);
		// switch (item.type){
		NullCheck(L_53);
		String_t* L_55 = L_53->get_type_4();
		V_0 = L_55;
		String_t* L_56 = V_0;
		if (!L_56)
		{
			goto IL_0309;
		}
	}
	{
		String_t* L_57 = V_0;
		bool L_58;
		L_58 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_57, _stringLiteral1FEEE30ACD8AF48C0493BC7000C458744C94C1BA, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_022f;
		}
	}
	{
		String_t* L_59 = V_0;
		bool L_60;
		L_60 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_59, _stringLiteralEEC741BEBAE4DCEA558B5033756F059F725A4F38, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_0267;
		}
	}
	{
		String_t* L_61 = V_0;
		bool L_62;
		L_62 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_61, _stringLiteral73499AD646DE28369FB68F093FAB181683D5276F, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_02aa;
		}
	}
	{
		String_t* L_63 = V_0;
		bool L_64;
		L_64 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_63, _stringLiteral39BB912CB0CCECC3E3162A4CA2A0B8CE86A90383, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0309;
	}

IL_022f:
	{
		// if(power == maxpower)
		int32_t L_65 = __this->get_power_7();
		int32_t L_66 = __this->get_maxpower_8();
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0254;
		}
	}
	{
		// score += 1000;
		int32_t L_67 = __this->get_score_11();
		__this->set_score_11(((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)((int32_t)1000))));
		goto IL_0309;
	}

IL_0254:
	{
		// power ++;
		int32_t L_68 = __this->get_power_7();
		__this->set_power_7(((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)));
		// break;
		goto IL_0309;
	}

IL_0267:
	{
		// if(life == maxlife)
		int32_t L_69 = __this->get_life_9();
		int32_t L_70 = __this->get_maxlife_10();
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0289;
		}
	}
	{
		// score += 300;
		int32_t L_71 = __this->get_score_11();
		__this->set_score_11(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)((int32_t)300))));
		goto IL_0297;
	}

IL_0289:
	{
		// life ++;
		int32_t L_72 = __this->get_life_9();
		__this->set_life_9(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)));
	}

IL_0297:
	{
		// gameManager.UpdateLifeIcon(life);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_73 = __this->get_gameManager_27();
		int32_t L_74 = __this->get_life_9();
		NullCheck(L_73);
		GameManager_UpdateLifeIcon_m95400395020B41A1F72478830E0410468E013A29(L_73, L_74, /*hidden argument*/NULL);
		// break;
		goto IL_0309;
	}

IL_02aa:
	{
		// shieldeffect.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = __this->get_shieldeffect_24();
		NullCheck(L_75);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_75, (bool)1, /*hidden argument*/NULL);
		// Invoke("OffShield", 5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralA6440208A0FDC2FFFEA14B297C4F968EEF163374, (5.0f), /*hidden argument*/NULL);
		// break;
		goto IL_0309;
	}

IL_02c8:
	{
		// if(boom == maxboom)
		int32_t L_76 = __this->get_boom_12();
		int32_t L_77 = __this->get_maxboom_13();
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_02ea;
		}
	}
	{
		// score += 2000;
		int32_t L_78 = __this->get_score_11();
		__this->set_score_11(((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)((int32_t)2000))));
		goto IL_0309;
	}

IL_02ea:
	{
		// boom++;
		int32_t L_79 = __this->get_boom_12();
		__this->set_boom_12(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1)));
		// gameManager.UpdateBoomIcon(boom);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_80 = __this->get_gameManager_27();
		int32_t L_81 = __this->get_boom_12();
		NullCheck(L_80);
		GameManager_UpdateBoomIcon_m91D24689F658361502BC855ED8F425632755F20E(L_80, L_81, /*hidden argument*/NULL);
	}

IL_0309:
	{
		// colloision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_82 = ___colloision0;
		NullCheck(L_82);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_82, /*hidden argument*/NULL);
		NullCheck(L_83);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_83, (bool)0, /*hidden argument*/NULL);
	}

IL_0315:
	{
		// }
		return;
	}
}
// System.Void Player::OffShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OffShield_mB801D5BE049C525331B345B832678FEC3FBC8DF0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// shieldeffect.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_shieldeffect_24();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Offboomeffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Offboomeffect_mCEBEF6BA6CD2ACDDA50DF4CF8F92076997B9C430 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// boomeffect.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_boomeffect_25();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// isBoomTime = false;
		__this->set_isBoomTime_19((bool)0);
		// }
		return;
	}
}
// System.Void Player::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerExit2D_mE3486B60FB672B6B4D225FB4B2DF89898C72797D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___colloision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB43137F5798267E1A82DD467143B245A821F93F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(colloision.gameObject.tag == "border") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___colloision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralBB43137F5798267E1A82DD467143B245A821F93F, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		// switch (colloision.gameObject.name) {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___colloision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_005b:
	{
		// isT = false;
		__this->set_isT_14((bool)0);
		// break;
		return;
	}

IL_0063:
	{
		// isB = false;
		__this->set_isB_15((bool)0);
		// break;
		return;
	}

IL_006b:
	{
		// isR = false;
		__this->set_isR_16((bool)0);
		// break;
		return;
	}

IL_0073:
	{
		// isL = false;
		__this->set_isL_17((bool)0);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_Instance_8(__this);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_mE4854722D4248D4CCD33E4202389B3F187C51303 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = Camera.main.GetComponent<AudioSource>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_0, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_7(L_1);
		// audioSource.PlayOneShot(backGroundMusic);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_backGroundMusic_4();
		NullCheck(L_2);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::JumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_JumpSound_m7EB63DAE347C4D9EB2EED9B12AC8AF2EB8C1B694 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// audioSource.PlayOneShot(jumpSound);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_jumpSound_5();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ItemSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ItemSound_mB92F8A32BE1164C9CA56BF33C1FD4F353B1AE957 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// audioSource.PlayOneShot(itemSound);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_itemSound_6();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::AudioStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_AudioStop_m15E04F1D9E27C86BE88C6BF20D0B88A543F8D7D7 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_7();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void VirtualJoystick::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualJoystick_Awake_mB74A3F10A7EEDE1F08545937223C63D48BE5BF34 (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imageBackground = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_imageBackground_4(L_0);
		// imageController = transform.GetChild(0).GetComponent<Image>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3;
		L_3 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_2, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_imageController_5(L_3);
		// }
		return;
	}
}
// System.Void VirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualJoystick_OnPointerDown_m405614EFCBD672DDE5F07289E5ABDFEEC13B86AB (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81E80193180FAD20D162D153AEC3DADED803AAB9);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("Touch Begin : " + eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral81E80193180FAD20D162D153AEC3DADED803AAB9;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral81E80193180FAD20D162D153AEC3DADED803AAB9;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualJoystick_OnDrag_m3DC97C2455C85EA1AAAEE893BF6107590F32223E (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral646D2298CE4D87252ADFA744D08C9E7BD6120935);
		s_Il2CppMethodInitialized = true;
	}
	VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * G_B3_0 = NULL;
	VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * G_B4_1 = NULL;
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// touchPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_touchPosition_6(L_0);
		// if(RectTransformUtility.ScreenPointToLocalPointInRectangle(imageBackground.rectTransform, eventData.position, eventData.pressEventCamera, out touchPosition))
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_imageBackground_4();
		NullCheck(L_1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_3, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = ___eventData0;
		NullCheck(L_5);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_touchPosition_6();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_2, L_4, L_6, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_016d;
		}
	}
	{
		// touchPosition.x = (touchPosition.x / imageBackground.rectTransform.sizeDelta.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_touchPosition_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_touchPosition_6();
		float L_11 = L_10->get_x_0();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_imageBackground_4();
		NullCheck(L_12);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13;
		L_13 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_0();
		L_9->set_x_0(((float)((float)L_11/(float)L_15)));
		// touchPosition.y = (touchPosition.y / imageBackground.rectTransform.sizeDelta.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_touchPosition_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_touchPosition_6();
		float L_18 = L_17->get_y_1();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = __this->get_imageBackground_4();
		NullCheck(L_19);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_20;
		L_20 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_1();
		L_16->set_y_1(((float)((float)L_18/(float)L_22)));
		// touchPosition = new Vector2(touchPosition.x *2 -1, touchPosition.y * 2 -1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_touchPosition_6();
		float L_24 = L_23->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_touchPosition_6();
		float L_26 = L_25->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_24, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_26, (float)(2.0f))), (float)(1.0f))), /*hidden argument*/NULL);
		__this->set_touchPosition_6(L_27);
		// touchPosition = (touchPosition.magnitude > 1) ? touchPosition.normalized : touchPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_touchPosition_6();
		float L_29;
		L_29 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_28, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if ((((float)L_29) > ((float)(1.0f))))
		{
			G_B3_0 = __this;
			goto IL_00de;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = __this->get_touchPosition_6();
		G_B4_0 = L_30;
		G_B4_1 = G_B2_0;
		goto IL_00e9;
	}

IL_00de:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_touchPosition_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_31, /*hidden argument*/NULL);
		G_B4_0 = L_32;
		G_B4_1 = G_B3_0;
	}

IL_00e9:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_touchPosition_6(G_B4_0);
		// imageController.rectTransform.anchoredPosition = new Vector2(touchPosition.x * imageBackground.rectTransform.sizeDelta.x /2, touchPosition.y * imageBackground.rectTransform.sizeDelta.y /2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_imageController_5();
		NullCheck(L_33);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_34;
		L_34 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_touchPosition_6();
		float L_36 = L_35->get_x_0();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_37 = __this->get_imageBackground_4();
		NullCheck(L_37);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_38;
		L_38 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_41 = __this->get_address_of_touchPosition_6();
		float L_42 = L_41->get_y_1();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = __this->get_imageBackground_4();
		NullCheck(L_43);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_44;
		L_44 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_47), ((float)((float)((float)il2cpp_codegen_multiply((float)L_36, (float)L_40))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_multiply((float)L_42, (float)L_46))/(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_34);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_34, L_47, /*hidden argument*/NULL);
		// Debug.Log("Touch & Drag : " + eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_48 = ___eventData0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_49 = L_48;
		G_B5_0 = L_49;
		G_B5_1 = _stringLiteral646D2298CE4D87252ADFA744D08C9E7BD6120935;
		if (L_49)
		{
			G_B6_0 = L_49;
			G_B6_1 = _stringLiteral646D2298CE4D87252ADFA744D08C9E7BD6120935;
			goto IL_015e;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0163;
	}

IL_015e:
	{
		NullCheck(G_B6_0);
		String_t* L_50;
		L_50 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_50;
		G_B7_1 = G_B6_1;
	}

IL_0163:
	{
		String_t* L_51;
		L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_51, /*hidden argument*/NULL);
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void VirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualJoystick_OnPointerUp_mFE9F180134AEC17FFEF8AC503B6880D6B1CCA79E (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// imageController.rectTransform.anchoredPosition = Vector2.zero;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_imageController_5();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_2, /*hidden argument*/NULL);
		// touchPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_touchPosition_6(L_3);
		// }
		return;
	}
}
// System.Single VirtualJoystick::Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualJoystick_Horizontal_m54697A52E6ECB1101B68B105B8DDFA0994BD1A74 (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, const RuntimeMethod* method)
{
	{
		// return touchPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_touchPosition_6();
		float L_1 = L_0->get_x_0();
		return L_1;
	}
}
// System.Single VirtualJoystick::Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualJoystick_Vertical_m89210BB23EE14E0F48F05E972086A0CBA26BDC27 (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, const RuntimeMethod* method)
{
	{
		// return touchPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_touchPosition_6();
		float L_1 = L_0->get_y_1();
		return L_1;
	}
}
// System.Void VirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualJoystick__ctor_m13CD0570C7630D04EAB8081592F05590DCF5F2D5 (VirtualJoystick_t4A18B1D59AF79FE4B3380B40B280F06D06648BC9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ani2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ani2_Update_mF4529208FB4BD89E743F5D40A490F82722E00F55 (ani2_tD6C03C1CB74AB2D56B3A32F9E954329C7A319785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE66CE5E9544CD46EC0B214105448BCFC354002AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("Animend", 2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralE66CE5E9544CD46EC0B214105448BCFC354002AA, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ani2::Animend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ani2_Animend_m44CC3220139A25422EB95E5DA7E56590B4301EA6 (ani2_tD6C03C1CB74AB2D56B3A32F9E954329C7A319785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Start");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ani2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ani2__ctor_m3B501E8B6B8D5AC9F72EBC279E62EE8380B25954 (ani2_tD6C03C1CB74AB2D56B3A32F9E954329C7A319785 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void aniScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aniScene_Update_m62C86A6908DAAFDC90F34F3F091DB5A6C4AD44BF (aniScene_tFD0D5481F484CC50A128081333E954E040EC16AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE66CE5E9544CD46EC0B214105448BCFC354002AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("Animend", 4f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralE66CE5E9544CD46EC0B214105448BCFC354002AA, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void aniScene::Animend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aniScene_Animend_mE961B2D893BAE3AB5121A020B894190CB3A33E2B (aniScene_tFD0D5481F484CC50A128081333E954E040EC16AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A1F213007B34E831E86E25828AE01DDFEA83E6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("anim");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7A1F213007B34E831E86E25828AE01DDFEA83E6A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void aniScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aniScene__ctor_mFC6CE7ECEB767C54A26D29C0AE3611C2EBCCCCC3 (aniScene_tFD0D5481F484CC50A128081333E954E040EC16AA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void enemybullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemybullet_OnTriggerEnter2D_m8C743D33D17718727AFE61EB9B5581A3B522CBC4 (enemybullet_t1C088169C99407C3A379F7DDBC24D729DA282F14 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73499AD646DE28369FB68F093FAB181683D5276F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "BorderBullet" || collision.gameObject.tag == "shield"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A2F10ADDCB2D2347D23F134A4B293DFE1E36E38, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral73499AD646DE28369FB68F093FAB181683D5276F, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}

IL_002e:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void enemybullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemybullet__ctor_m2FC5980CE10B893A9AAB089C54877F031653BA1B (enemybullet_t1C088169C99407C3A379F7DDBC24D729DA282F14 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
