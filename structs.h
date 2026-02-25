#include "string_list.h"
#include "enums.h"

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

enum LOCALIZATION_LANGUAGE_TYPE {
    English,
    Japanese,
    French,
    Korean,
    ChineseTraditional,
    ChineseSimplified,
};

enum CONFIG_TYPE {
    TextLanguage,
    VoiceLanguage,
    Resolution,
    WindowedResolution,
    WindowMode,
    Vsync,
    AA,
    ButtonGuide,
    UseMouse,
    Keybinding,
    AdjustButtons,
    CursorMode,
    AllyEffects,
    EnemyEffects,
    SystemEffects,
    CombatSpeed,
    PlayerCursorSpeed,
    TextSpeed,
    MessageAutoScroll,
    SpeedUpSkills,
    SkillSpeed,
    SaveIcon,
    Autosave,
    WindowTransparency,
    Network,
    BgmVolume,
    SeVolume,
    MsgVolume,
    VoiceVolume,
    CONFIG_29,// reads from commondata
    CONFIG_30,
    CONFIG_31,
    CONFIG_32,
};

enum eNpCheckResult {

};

enum Nmpl::Core::CNmplCore::ERunningStatus {

};

struct __cppobj Vec2_s16 {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 z;
}; // size = 0x4

struct __cppobj Vec2_s32 {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 z;
}; // size = 0x8

struct __cppobj Vec2XZ_s16 {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 z;
}; // size = 0x4

struct __cppobj Nmpl::Core::CVector2 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
}; // size = 0x8

struct __cppobj Nmpl::Core::Mtx44Fx {
    /* 0x00 */ f32 mtx[4][4];
}; // size = 0x40

struct __cppobj Vec3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

struct __cppobj Nmpl::Core::SVec2f {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
}; // size = 0x8

// Nmpl::Core::CVecT<float,2,struct Nmpl::Core::SVec2f>
struct Nmpl::Core::CVecT__f32_2_SVec2f {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
}; // size = 0x8

struct __cppobj Nmpl::Core::SVec3f {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

// Nmpl::Core::CVecT<float,3,struct Nmpl::Core::SVec3f>
struct Nmpl::Core::CVecT__f32_3_SVec3f {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

struct __cppobj POINT_WIN {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

struct __cppobj tagSIZE {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
}; // size = 0x8

struct __cppobj NisVector2 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
}; // size = 0x8

struct __cppobj NisVector3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

struct __cppobj NisVector4 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
}; // size = 0x10

struct __cppobj VEC4 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
}; // size = 0x10

struct __cppobj NisMatrix33 {
    /* 0x00 */ NisVector3 x;
    /* 0x0C */ NisVector3 y;
    /* 0x18 */ NisVector3 z;
}; // size = 0x24

struct __cppobj NisMatrix44 {
    /* 0x00 */ NisVector4 x;
    /* 0x10 */ NisVector4 y;
    /* 0x20 */ NisVector4 z;
    /* 0x30 */ NisVector4 w;
}; // size = 0x40

struct __cppobj Nmpl::Core::CMtx44 {
    /* 0x00 */ NisMatrix44 mtx;
}; // size = 0x40

struct __cppobj Nmpl::Core::CMtx44Fx {
    /* 0x00 */ NisMatrix44 mtx;
}; // size = 0x40

class __cppobj NisGraphicsFrameHeapParams {
    /* 0x00 */ void* buffer;
    /* 0x08 */ s32 max_size;
    /* 0x0C */ s32 curr_size;
    /* 0x10 */ char unk10[0x20 - 0x10];
}; // size = 0x20

class __cppobj Nmpl::Core::RefCountForIntrusivePtr {
    /* 0x00 */ struct Nmpl::Core::RefCountForIntrusivePtr_vtbl* __vftable;
    /* 0x08 */ s32 uses;
    /* 0x0C */ s32 weak_uses;
}; // size = 0x10

struct __cppobj Nmpl::Core::RefCountForIntrusivePtr_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::RefCountForIntrusivePtr*, bool dealloc);
};

class __cppobj Nmpl::Core::intrusive_ptr {
    /* 0x00 */ void* ptr;
}; // size = 0x8

class __cppobj std::vector {
    /* 0x00 */ void* first;
    /* 0x08 */ void* last;
    /* 0x10 */ void* end;
}; // size = 0x18

// clsRingBuffer<unsigned int,300>
class __cppobj clsRingBuffer__u32_300 {
    /* 0x000 */ u32 ring[300];
    /* 0x4B0 */ u32* ptr;
}; // size = 0x4B8

struct __cppobj clsRingBuffer__u32_300::reverse_iterator {
    /* 0x00 */ u32* begin;
    /* 0x08 */ u32* end;
}; // size = 0x10

class __cppobj std::shared_pointer_ref_count_base {
    /* 0x00 */ struct std::shared_pointer_ref_count_base_vtbl* __vftable;
    /* 0x08 */ s32 uses;
    /* 0x0C */ s32 weaks;
}; // size = 0x10

struct __cppobj std::shared_pointer_ref_count_base_vtbl {
    /* 0x00 */ void (*_Destroy)(std::shared_pointer_ref_count_base*);
    /* 0x08 */ void (*_Decwref)(std::shared_pointer_ref_count_base*);
};

class __cppobj std::shared_ptr {
    /* 0x00 */ void* ptr;
    /* 0x08 */ std::shared_pointer_ref_count_base* rep;
}; // size = 0x10

class std::_Tree_node {
    /* 0x00 */ std::_Tree_node* _Left;
    /* 0x08 */ std::_Tree_node* _Parent;
    /* 0x10 */ std::_Tree_node* _Right;
    /* 0x18 */ char _Color;
    /* 0x19 */ char _Isnil;
    /* 0x20 */ u64 key_type;   // templated to the map key type
    /* 0x28 */ u64 value_type; // templated to the map value type
}; // size >= 0x30

class std::_Tree_node__s32_s32 {
    /* 0x00 */ std::_Tree_node__s32_s32* _Left;
    /* 0x08 */ std::_Tree_node__s32_s32* _Parent;
    /* 0x10 */ std::_Tree_node__s32_s32* _Right;
    /* 0x18 */ char _Color;
    /* 0x19 */ char _Isnil;
    /* 0x1C */ s32 key_type;
    /* 0x20 */ s32 value_type;
}; // size = 0x24

// std::set<int>
// std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>>
class std::set__Tree_node__s32 {
    /* 0x00 */ std::set__Tree_node__s32* _Left;
    /* 0x08 */ std::set__Tree_node__s32* _Parent;
    /* 0x10 */ std::set__Tree_node__s32* _Right;
    /* 0x18 */ char _Color;
    /* 0x19 */ char _Isnil;
    /* 0x1C */ s32 key_type;
}; // size = 0x20

class __cppobj std::map {
    /* 0x00 */ std::_Tree_node* node;
    /* 0x08 */ size_t size;
}; // size = 0x10

class __cppobj std::map__s32_s32 {
    /* 0x00 */ std::_Tree_node__s32_s32* node;
    /* 0x08 */ size_t size;
}; // size = 0x10

class __cppobj std::multimap {
    /* 0x00 */ std::_Tree_node* node;
    /* 0x08 */ size_t size;
}; // size = 0x10

class __cppobj std::_List_node {
    /* 0x00 */ std::_List_node* _Next;
    /* 0x08 */ std::_List_node* _Prev;
    /* 0x10 */ void* key;
    /* 0x18 */ void* value;
}; // size = 0x10 + size of template

class __cppobj std::list {
    /* 0x00 */ std::_List_node* head;
    /* 0x08 */ size_t size;
}; // size = 0x10

class __cppobj std::_Hash_vec {
    /* 0x00 */ void* first; // templated on the type
    /* 0x08 */ void* last;  // templated on the type
    /* 0x10 */ void* end;   // templated on the type
}; // size = 0x18

class __cppobj std::unordered_map {
    /* 0x00 */ f32 max_load_factor;
    /* 0x08 */ std::list list;
    /* 0x18 */ std::_Hash_vec hash_vec;
    /* 0x30 */ size_t key_mask;
    /* 0x38 */ size_t max_idx;
}; // size = 0x40

class __cppobj std::_Container_base12;
class __cppobj std::_Iterator_base12;

class __cppobj std::_Container_proxy {
    /* 0x00 */ std::_Container_base12* _Mycont;
    /* 0x08 */ std::_Iterator_base12* _Myfirstiter;
}; // size = 0x10

class __cppobj std::_Container_base12 {
    /* 0x00 */ std::_Container_proxy* _Myproxy;
}; // size = 0x08

class __cppobj std::_Iterator_base12 {
    /* 0x00 */ std::_Container_proxy* _Myproxy;
    /* 0x08 */ std::_Iterator_base12* _Mynextiter;
}; // size = 0x10

class __cppobj std::_Deque_const_iterator : std::_Iterator_base12 {
    /* 0x10 */ size_t _Myoff;
}; // size = 0x18

class __cppobj std::_Deque_val : std::_Container_base12 {
    /* 0x00 */ void** _Map;
    /* 0x08 */ size_t _Mapsize;
    /* 0x10 */ size_t _Myoff;
    /* 0x18 */ size_t _Mysize;
}; // size = 0x20

class __cppobj std::deque {
    /* 0x00 */ std::_Deque_val _Mypair;
}; // size = 0x28

struct std::_Func_base_vtbl;

class __cppobj std::_Func_base {
    /* 0x00 */ std::_Func_base_vtbl* __vftable;
}; // size = 0x08

struct __cppobj std::_Func_base_vtbl {
    /* 0x00 */ std::_Func_base* (*_Copy)(std::_Func_base*, void*);
    /* 0x08 */ std::_Func_base* (*_Move)(std::_Func_base*, void*);
    /* 0x10 */ void (*_Do_call)(std::_Func_base*, ...);
    /* 0x18 */ void (*_Target_type)(std::_Func_base*);
    /* 0x20 */ void (*_Delete_this)(std::_Func_base*, bool);
};

class __cppobj std::_Func_class {
    /* 0x00 */ std::_Func_base* _Mystorage[8];
}; // size = 0x40

// Nmpl::Core::CArray<typename T>
struct __cppobj Nmpl::Core::CArray {
    /* 0x00 */ size_t capacity;
    /* 0x08 */ size_t size;
    /* 0x10 */ void* buffer;
    /* 0x18 */ bool buffer_allocated;
}; // size = 0x20

// Nmpl::Core::CArray<unsigned char>
struct __cppobj Nmpl::Core::CArray__u8 {
    /* 0x00 */ size_t capacity;
    /* 0x08 */ size_t size;
    /* 0x10 */ u8* buffer;
    /* 0x18 */ bool unk_18;
}; // size = 0x20

// Nmpl::Core::k_vector<Microsoft::WRL::ComPtr<ID3D11Buffer>,3>
struct __cppobj Nmpl::Core::k_vector__ID3D11Buffer_3 {
    /* 0x00 */ size_t size;
    /* 0x08 */ ID3D11Buffer* buffer[3];
}; // size = 0x20

// Nmpl::Core::k_vector<Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>,3>
struct __cppobj Nmpl::Core::k_vector__ID3D11ShaderResourceView_3 {
    /* 0x00 */ size_t size;
    /* 0x08 */ ID3D11ShaderResourceView* buffer[3];
}; // size = 0x20

// Nmpl::Core::k_vector<Microsoft::WRL::ComPtr<ID3D11UnorderedAccessView>,3>
struct __cppobj Nmpl::Core::k_vector__ID3D11UnorderedAccessView_3 {
    /* 0x00 */ size_t size;
    /* 0x08 */ ID3D11UnorderedAccessView* buffer[3];
}; // size = 0x20

struct __cppobj Nmpl::Core::CSafeBuffer : Nmpl::Core::RefCountForIntrusivePtr {
    /* 0x10 */ char* aligned_buffer;
    /* 0x18 */ char* buffer;
    /* 0x20 */ bool allocated;
    /* 0x28 */ void* lambda_vtbl;
    /* 0x30 */ void* lambda_func;
    /* 0x38 */ char unk38[0x60 - 0x38];
    /* 0x60 */ void* lambda_captures;
}; // size = 0x68

struct __cppobj FADECOL {
    /* 0x00 */ f32 accel_r;
    /* 0x04 */ f32 accel_g;
    /* 0x08 */ f32 accel_b;
    /* 0x0C */ f32 accel_a;
    /* 0x10 */ f32 accel;
    /* 0x14 */ s16 accel_duration_frames;
    /* 0x16 */ u8 accel_direction; // 1 = accelerate, 2 = decelerate
    /* 0x17 */ u8 accel_rate; // controls how steep the velocity changes
    /* 0x18 */ char unk18[0x1C - 0x18];
    /* 0x1C */ s32 frame; // decreases per iteration
    /* 0x20 */ f32 current_r;
    /* 0x24 */ f32 current_g;
    /* 0x28 */ f32 current_b;
    /* 0x2C */ f32 current_a;
    /* 0x30 */ f32 prev_r;
    /* 0x34 */ f32 prev_g;
    /* 0x38 */ f32 prev_b;
    /* 0x3C */ f32 prev_a;
    /* 0x40 */ f32 end_r;
    /* 0x44 */ f32 end_g;
    /* 0x48 */ f32 end_b;
    /* 0x4C */ f32 end_a;
    /* 0x50 */ f32 delta_r;
    /* 0x54 */ f32 delta_g;
    /* 0x58 */ f32 delta_b;
    /* 0x5C */ f32 delta_a;
}; // size = 0x60

class __cppobj clsSteamAchievement {
    /* 0x0000 */ char unk0000[0x51C0 - 0x0000];
}; // size = 0x51C0

class __cppobj clsSteamInventoryService {
    /* 0x00 */ char unk00[0x60 - 0x00];
}; // size = 0x60

class __cppobj clsSteamManager {
    /* 0x00 */ char unk00[0x18 - 0x00];
    /* 0x18 */ clsSteamAchievement* achievements;
    /* 0x20 */ clsSteamInventoryService* inventory_service;
    /* 0x28 */ char unk28[0x30 - 0x28];
}; // size = 0x30

class __cppobj Nmpl::Core::intrusive_ptr {
    /* 0x00 */ void** ptr;
}; // size = 0x8

class __cppobj Nmpl::Core::System::CLMutex {
    /* 0x00 */ void* handle;
    /* 0x08 */ bool is_not_valid;
}; // size = 0x10

class __cppobj Nmpl::Core::System::CEventFlag {
    /* 0x00 */ void* handle;
}; // size = 0x8

class __cppobj Nmpl::Core::CList {
    /* 0x00 */ Nmpl::Core::CList* prev;
    /* 0x08 */ Nmpl::Core::CList* next;
}; // size = 0x10

class __cppobj Nmpl::Core::Memory::CFreeList {
    /* 0x00 */ void* prev;
    /* 0x08 */ void* next;
}; // size = 0x10

class __cppobj Nmpl::Core::Memory::CAsyncMemory::AsyncMemoryTask {
    /* 0x00 */ Nmpl::Core::CList list;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 in_buffer_size;
    /* 0x18 */ void* in_buffer;
    /* 0x20 */ void* out_buffer;
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 unk_29;
}; // size = 0x30

class __cppobj Nmpl::Core::Memory::CAsyncMemory {
    /* 0x00 */ void (*free_func)();
    /* 0x08 */ Nmpl::Core::System::CEventFlag event;
    /* 0x10 */ s32 wait_cv;
    /* 0x14 */ char unk14[0x18 - 0x14];
    /* 0x18 */ Nmpl::Core::Memory::CAsyncMemory::AsyncMemoryTask* unk_18;
    /* 0x20 */ s64 num_tasks;
    /* 0x28 */ Nmpl::Core::System::CThread* thread;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u8 unk_34;
    /* 0x35 */ u8 unk_35;
}; // size = 0x38

class __cppobj Nmpl::Core::CNmplString {
    /* 0x00 */ char* ptr;
    /* 0x08 */ size_t size;
    /* 0x10 */ bool initialised;
}; // size = 0x18

struct Nmpl::File::CNpDrmKey {

}; // size = ???

struct __cppobj Nmpl::File::CNmplFile::CSetting {
    /* 0x00 */ s32 num_files;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 num_threads;
    /* 0x08 */ s32 unk_08;
    /* 0x10 */ Nmpl::File::CNpDrmKey* np_drm_key;
}; // size >= 0x18

struct __cppobj Nmpl::Sound::CNmplSound::CSetting {
    /* 0x00 */ s32 num_sound_players;
    /* 0x04 */ s32 num_sound_res;
    /* 0x08 */ s32 num_sound_res_pointers;
}; // size >= 0x0C

struct __cppobj Nmpl::Fairy::CNmplFairy::CSetting {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 num_players;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
}; // size >= 0x10

class __cppobj Nmpl::Core::CCompress {
    /* 0x00 */ s32 in_size;
    /* 0x08 */ void* in_buffer; // aligned to 0x80
    /* 0x10 */ s32 compressed_size;
    /* 0x18 */ void* compressed_buffer; // aligned to 0x80
}; // size >= 0x20

class __cppobj clsColor {
    /* 0x00 */ u8 r;
    /* 0x01 */ u8 g;
    /* 0x02 */ u8 b;
    /* 0x03 */ u8 a;
}; // size = 0x4

class __cppobj clsFade__clsColor {
    /* 0x00 */ struct clsFade__clsColor_vtbl* __vftable;
    /* 0x08 */ clsColor color1;
    /* 0x0C */ clsColor color2;
    /* 0x10 */ clsColor color3;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ u8 unk_20;
}; // size = 0x28

struct clsFade__clsColor_vtbl {
    /* 0x00 */ void (*D0)(clsFade__clsColor*, bool dealloc);
};

class PC019::clsVector3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

class __cppobj clsFade__clsVector3 {
    /* 0x00 */ struct clsFade__clsVector3_vtbl* __vftable;
    /* 0x08 */ NisVector4 vec1;
    /* 0x18 */ NisVector4 vec2;
    /* 0x28 */ NisVector4 vec3;
    /* 0x38 */ f32 unk_38;
    /* 0x3C */ f32 unk_3C;
    /* 0x40 */ f32 unk_40;
    /* 0x44 */ u8 unk_44;
}; // size = 0x48

struct clsFade__clsVector3_vtbl {
    /* 0x00 */ void (*D0)(clsFade__clsVector3*, bool dealloc);
};

class __cppobj Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase {
    /* 0x00 */ struct Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase_vtbl* __vftable;
}; // size >= 0x08

struct Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase*, bool dealloc);
    /* 0x08 */ void (*__purecall)(Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase*);
};

class __cppobj Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDelete__VertexBuffer_Data : Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase {

}; // size >= 0x8

struct Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDelete__VertexBuffer_Data_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDelete__VertexBuffer_Data*, bool dealloc);
    /* 0x08 */ void (*run)(Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDelete__VertexBuffer_Data*);
};

class __cppobj Nmpl::Core::Memory::CDelayDeleteMgr {
    /* 0x00 */ std::vector unk_00; // Nmpl::Core::Memory::CDelayDeleteMgr::CDelayDeleteBase*
}; // size = 0x18

struct __cppobj Nmpl::Core::System::CVCounter::VblankMemcpyInfo {
    /* 0x00 */ char unk00[0xC0 - 0x00];
}; // size = 0xC0

class __cppobj clsConfigManager {
    /* 0x000 */ bool config_loaded;
    /* 0x001 */ bool has_config_file;
    /* 0x002 */ bool has_keysettings_file;
    /* 0x003 */ bool unk_003;
    /* 0x004 */ LOCALIZATION_LANGUAGE_TYPE text_language;
    /* 0x008 */ LOCALIZATION_LANGUAGE_TYPE voice_language;
    /* 0x00C */ s32 window_width;
    /* 0x010 */ s32 window_height;
    /* 0x014 */ s32 resolution_width;
    /* 0x018 */ s32 resolution_height;
    /* 0x01C */ s32 window_x;
    /* 0x020 */ s32 window_y;
    /* 0x024 */ u8 window_mode;
    /* 0x025 */ bool maximised;
    /* 0x026 */ bool split_size_resolution;
    /* 0x027 */ bool vsync;
    /* 0x028 */ bool aa;
    /* 0x02C */ s32 button_guide;
    /* 0x030 */ bool use_mouse;
    /* 0x034 */ s32 movie_volume;
    /* 0x038 */ bool movie_skip;
    /* 0x039 */ char unk039[0x040 - 0x039];
    /* 0x040 */ u64 keys_assign[28];
    /* 0x120 */ char unk120[0x128 - 0x120];
    /* 0x128 */ u64 keys_assign_sub[28];
    /* 0x208 */ char unk208[0x284 - 0x208];
    /* 0x284 */ s32 button_settings[23];
    /* 0x2E0 */ char unk2E0[0x2E8 - 0x2E0];
    /* 0x2E8 */ std::deque__ResolutionInfo resolution_list1;
    /* 0x310 */ std::deque__ResolutionInfo resolution_list2;
    /* 0x338 */ f32 aspect_ratio_width;
    /* 0x33C */ f32 aspect_ratio_height;
    /* 0x340 */ char unk340[0x368 - 0x340];
    /* 0x368 */ s32 chosen_resolution_width;
    /* 0x36C */ s32 chosen_resolution_height;
    /* 0x370 */ u8 window_mode2; // DrawConfig
    /* 0x371 */ char unk371[0x378 - 0x371];
}; // size = 0x378

class __cppobj clsLocalizationManager {
    /* 0x00 */ char data_path[128];
    /* 0x80 */ LOCALIZATION_LANGUAGE_TYPE voice_language;
    /* 0x84 */ LOCALIZATION_LANGUAGE_TYPE text_language;
}; // size = 0x88

enum Nmpl::File::EFileWaitMode {

};

enum Nmpl::File::ECbLevel {

};

enum Nmpl::File::EDeviceType {

};

enum Nmpl::File::EAccessType {

};

enum Nmpl::File::ECacheMode {

};

enum eNMPL_Arc_NO {

};

struct __cppobj Nmpl::File::GZipExpandCallbackParam {
    /* 0x00 */ void* out_buffer;
    /* 0x08 */ void* in_buffer;
    /* 0x10 */ s32 offset;
    /* 0x14 */ s32 size;
}; // size = 0x18

struct __cppobj TxfPack {
    /* 0x00 */ char unk00[0x04 - 0x00];
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
}; // size = 0x8

class __cppobj C_NisTxfFile {
    /* 0x00 */ NisGraphicsTexture* texture;
    /* 0x08 */ char unk08[0x18 - 0x08];
    /* 0x18 */ void* buffer;
    /* 0x20 */ u8 type;
    /* 0x21 */ char unk21[0x24 - 0x21];
    /* 0x24 */ s32 file_no;
    /* 0x28 */ std::shared_ptr__clsFile_Archive file_sp;
    /* 0x38 */ char unk38[0x3C - 0x38];
    /* 0x3C */ char name[64]; // unk size
    /* 0x7C */ char unk7C[0x80 - 0x7C];
}; // size = 0x80

class __cppobj Nmpl::File::CFile {
    /* 0x000 */ char unk000[0x012 - 0x000];
    /* 0x012 */ bool compressed; // if set, calls readRq with gzExpandCallback, otherwise reads without
    /* 0x013 */ char unk013[0x030 - 0x013];
    /* 0x030 */ s32 image_table_index;
    /* 0x034 */ s32 ref_count;
    /* 0x038 */ s32 file_size;
    /* 0x03C */ char unk03C[0x040 - 0x03C];
    /* 0x040 */ void* buffer;
    /* 0x048 */ char unk048[0x04C - 0x048];
    /* 0x04C */ Nmpl::File::EDeviceType device_type;
    /* 0x050 */ Nmpl::File::EAccessType access_type;
    /* 0x054 */ Nmpl::File::ECacheMode cache_type;
    /* 0x058 */ s32 index;
    /* 0x05C */ char file_name[0x300];
    /* 0x35C */ char unk35C[0x370 - 0x35C];
    /* 0x370 */ s32 read_size;
    /* 0x374 */ char unk374[0x378 - 0x374];
    /* 0x378 */ Nmpl::File::CFile* unk_378;
}; // size = 0x380

class __cppobj Nmpl::File::CFileMgrMt::LockedFd {
    /* 0x00 */ Nmpl::File::CFile* file;
    /* 0x08 */ u64 handle;
    /* 0x10 */ s64 unk_10; // added to file offset
    /* 0x18 */ s32 image_table_index;
    /* 0x1C */ s32 unk_1C;
}; // size >= 0xx20

enum Nmpl::File::CFileMgrMt::CFileCmd::CmdType {
    UNK,
    OPEN = 1,
    CLOSE = 2,
    READ = 3,
    WRITE = 4,
    FLUSH = 5,
};

class __cppobj Nmpl::File::CFileMgrMt::CFileCmd : Nmpl::Core::Memory::CFreeList {
    /* 0x10 */ Nmpl::File::CFile* file;
    /* 0x18 */ char unk18[0x20 - 0x18];
    /* 0x20 */ void* read_buffer;
    /* 0x28 */ s64 file_offset;
    /* 0x30 */ s32 read_size;
    /* 0x34 */ Nmpl::File::CFileMgrMt::CFileCmd::CmdType type;
    /* 0x38 */ Nmpl::Core::System::CEventFlag* event_flag;
    /* 0x40 */ void (*callback)(void*);
    /* 0x48 */ void* calback_args;
    /* 0x50 */ Nmpl::File::ECbLevel ecb_level;
}; // size = 0x58

class __cppobj Nmpl::File::CFileArc {
    /* 0x00 */ Nmpl::File::CFile* file;
    /* 0x08 */ void* buffer;
    /* 0x10 */ char unk10[0x14 - 0x10];
    /* 0x14 */ s32 file_size;
    /* 0x18 */ char unk18[0x38 - 0x18];
}; // size = 0x38

class __cppobj Nmpl::File::CFileDelayFreeMgr {
    /* 0x00 */ char unk00[0x28];
}; // size = 0x28

class __cppobj Nmpl::File::CFileCacheMgr {
    /* 0x00 */ char unk00[0xD0];
}; // size = 0xD0

class __cppobj Nmpl::Core::CZeroFillNew {
    ///* 0x00 */ char unk00[0x4];
}; // size = 0

// Fake, temp
struct __cppobj FileHolder {
    /* 0x000 */ s32 num_files;
    /* 0x008 */ Nmpl::File::CFile files[];
}; // size = 8 + num files * sizeof(CFile)

class __cppobj Nmpl::File::CFileMgr : Nmpl::Core::CZeroFillNew {
    /* 0x000 */ struct Nmpl::File::CFileMgr_vtbl* __vftable;
    /* 0x008 */ FileHolder* file_holder;
    /* 0x010 */ Nmpl::File::CFile file;
    /* 0x390 */ s32 num_files;
    /* 0x394 */ s32 unk_394;
    /* 0x398 */ char unk398[0x3B0 - 0x398];
    /* 0x3B0 */ Nmpl::Core::System::CLMutex mutex;
    /* 0x3C0 */ Nmpl::File::CFileArc* file_arcs[16];
    /* 0x440 */ char unk440[0x470 - 0x440];
}; // size >= 0x470

struct __cppobj Nmpl::File::CFileMgr_vtbl {
    /* 0x00 */ void (*readCacheRq)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, u32, u32, void*, Nmpl::File::EFileWaitMode, s32);
    /* 0x08 */ void (*readRq)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, u32, u32, void*, Nmpl::File::EFileWaitMode, void (*)(void*), void*, Nmpl::File::ECbLevel);
    /* 0x10 */ void (*writeRq)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, u32, u32, void const*, Nmpl::File::EFileWaitMode, void (*)(void*), void*, Nmpl::File::ECbLevel);
    /* 0x18 */ void (*callbackRegistRq)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, Nmpl::File::EFileWaitMode, void (*)(void*), void*, Nmpl::File::ECbLevel);
    /* 0x20 */ u64 (*setSeekPos)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, u32);
    /* 0x28 */ bool (*isBusy)(Nmpl::File::CFileMgr*, Nmpl::File::CFile*);
    /* 0x30 */ void (*D0)(Nmpl::File::CFileMgr*, bool dealloc);
    /* 0x38 */ void (*RawLength)();

    /* 0x40 */ void (*run)(Nmpl::File::CFileMgr*, bool);
    /* 0x48 */ Nmpl::File::CFile** (*open)(Nmpl::File::CFileMgr*, char const*, Nmpl::File::EDeviceType, Nmpl::File::EAccessType, Nmpl::File::EFileWaitMode, Nmpl::File::ECacheMode);
    /* 0x50 */ void (*normalCloseRq)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, Nmpl::File::EFileWaitMode, void (*)(void*), void*, Nmpl::File::ECbLevel);
    /* 0x58 */ void (*closeRq)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, Nmpl::File::EFileWaitMode);
    /* 0x60 */ bool (*deleteFile)(Nmpl::File::CFileMgr*, char const*, Nmpl::File::EDeviceType);
    /* 0x68 */ void (*registArc)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, s32);
    /* 0x70 */ void (*unregistArc)(Nmpl::File::CFileMgr*, s32);
    /* 0x78 */ u32 (*getFileSize)(Nmpl::File::CFileMgr*, char const*, Nmpl::File::EDeviceType);
    /* 0x80 */ void (*cmdForceCancel)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr);
    /* 0x88 */ void (*unRegistCallback)(Nmpl::File::CFileMgr*, Nmpl::Core::intrusive_ptr, void (*)(void*));
    /* 0x90 */ bool (*isFsBusy)(Nmpl::File::CFileMgr*);
};

class __cppobj Nmpl::File::CFileMgrMt : Nmpl::File::CFileMgr {
    /* 0x470 */ Nmpl::File::CFileMgrMt::CFileCmd* unk_470;
    /* 0x478 */ Nmpl::File::CFileMgrMt::CFileCmd* unk_478;
    /* 0x480 */ Nmpl::File::CFileMgrMt::CFileCmd* unk_480;
    /* 0x488 */ Nmpl::File::CFileMgrMt::CFileCmd* unk_488;
    /* 0x490 */ Nmpl::Core::System::CLMutex cmd_mutex;
    /* 0x4A0 */ Nmpl::Core::System::CLMutex cmd_mutex_sync;
    /* 0x4B0 */ Nmpl::Core::System::CLMutex mutex;
    /* 0x4C0 */ std::vector threads; // Nmpl::Core::System::CThread*
    /* 0x4D8 */ std::vector event_flags; // Nmpl::Core::System::CEventFlag*
    /* 0x4F0 */ std::vector unk_vec; // ?
    /* 0x508 */ char unk508[0x510 - 0x508];
}; // size = 0x510

struct clsStringList::DataEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 length;
    /* 0x08 */ u32 offset; // +4, skipping the entry count at offset 0 in the .dat
}; // size = 0xC

class __cppobj clsBaseDataBase {
    /* 0x00 */ struct clsBaseDataBase_vtbl* __vftable;
    /* 0x08 */ s16 entry_count;
    /* 0x10 */ clsStringList::DataEntry* data; // skips the 4-byte entry count
    /* 0x18 */ s32* entry_ids;
}; // size >= 0x20

struct __cppobj clsBaseDataBase_vtbl {
    /* 0x00 */ void (*D0)(clsBaseDataBase*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsBaseDataBase*);
};

class __cppobj clsFileBase {
    /* 0x000 */ struct clsFileBase_vtbl* __vftable;
    /* 0x008 */ Nmpl::File::CFile* file;
    /* 0x010 */ s32 file_offset;
    /* 0x014 */ char name[0x100];
}; // size >= 0x118

struct __cppobj clsFileBase_vtbl {
    /* 0x00 */ bool (*OpenPack)(clsFileBase*, char const*);
    /* 0x08 */ bool (*ReadPack)(clsFileBase*, char const*, void*, u32, s32);
    /* 0x10 */ s32 (*GetPackFileSize)(clsFileBase*, char const*);
    /* 0x18 */ bool (*IsPackFileData)(clsFileBase*, char const*);
};

struct __cppobj NSACHeader {
    /* 0x00 */ char magic[4];
    /* 0x04 */ u16 version; // ?
    /* 0x06 */ u16 file_count;
    /* 0x08 */ u32 file_size;
    /* 0x0C */ u32 data_offset;
    /* 0x10 */ u32 toc_size;
    /* 0x14 */ u32 file_names_size;
    /* 0x18 */ u32 unk_18;
}; // size = 0x1C

class __cppobj clsFile_Archive : clsFileBase {
    ///* 0x000 */ struct clsFile_Archive_vtbl* __vftable;
    /* 0x118 */ NSACHeader header;
    /* 0x138 */ void* buffer;
    /* 0x140 */ char unk140[0x150 - 0x140];
}; // size = 0x150

struct __cppobj clsFile_Archive_vtbl {
    /* 0x00 */ bool (*OpenPack)(clsFile_Archive*, char const*);
    /* 0x08 */ bool (*ReadPack)(clsFile_Archive*, char const*, void*, u32, s32);
    /* 0x10 */ s32 (*GetPackFileSize)(clsFile_Archive*, char const*);
    /* 0x18 */ bool (*IsPackFileData)(clsFile_Archive*, char const*);
};

class __cppobj std::make_shared__clsFile_Archive {
    /* 0x000 */ std::shared_pointer_ref_count_base rep;
    /* 0x010 */ clsFile_Archive archive;
}; // size = 0x160

class __cppobj std::shared_ptr__clsFile_Archive {
    /* 0x00 */ clsFile_Archive* archive;
    /* 0x08 */ std::shared_pointer_ref_count_base* rep;
}; // size = 0x10

class __cppobj clsFile_NIS : clsFileBase {
    ///* 0x000 */ struct clsFile_NIS_vtbl* __vftable;
}; // size = 0x118

struct __cppobj clsFile_NIS_vtbl {
    /* 0x00 */ bool (*OpenPack)(clsFile_NIS*, char const*);
    /* 0x08 */ bool (*ReadPack)(clsFile_NIS*, char const*, void*, u32, s32);
    /* 0x10 */ s32 (*GetPackFileSize)(clsFile_NIS*, char const*);
    /* 0x18 */ bool (*IsPackFileData)(clsFile_NIS*, char const*);
};

class __cppobj clsFileManager {
    /* 0x00 */ std::vector nis; // std::shared_ptr<clsFile_NIS>
    /* 0x18 */ std::vector archives; // std::shared_ptr<clsFile_Archive>
    /* 0x30 */ std::unordered_map file_map; // <int, Nmpl::Core::intrusive_ptr<Nmpl::File::CFileArc>>
}; // size = 0x70

class __cppobj clsLoadQueue {
    /* 0x00 */ struct clsLoadQueue_vtbl* __vftable;
    /* 0x08 */ s32 status;
    /* 0x0C */ char unk00C[0x010 - 0x00C];
}; // size = 0x10

struct __cppobj clsLoadQueue_vtbl {
    /* 0x00 */ void (*D0)(clsLoadQueue*, bool dealloc);
    /* 0x08 */ void (*PreProcess)(clsLoadQueue*);
    /* 0x10 */ bool (*Wait)(clsLoadQueue*);
    /* 0x18 */ void (*PostProcess)(clsLoadQueue*);
    /* 0x20 */ void (*NullSub)(clsLoadQueue*);
};

class __cppobj clsLoadQueue_Database : clsLoadQueue {
    /* 0x010 */ char name[0x100];
    /* 0x110 */ char unk110[0x118 - 0x110];
    /* 0x118 */ Nmpl::File::CFile* file;
    /* 0x120 */ std::shared_ptr__clsFile_Archive database_sp; // database which contains the file, e.g DATABSAE_EN.dat
    /* 0x130 */ void* buffer;
    /* 0x138 */ clsDataBaseTable* class_ptr; // ptr to the templated class
    /* 0x140 */ bool unk_140;
}; // size >= 0x148

class __cppobj clsLoadQueue_Database_DIS : clsLoadQueue {
    /* 0x010 */ char name[0x100];
    /* 0x110 */ char unk110[0x118 - 0x110];
    /* 0x118 */ Nmpl::File::CFile* file;
    /* 0x120 */ std::shared_ptr__clsFile_Archive database_sp; // database which contains the file, e.g DATABSAE_EN.dat
    /* 0x130 */ void* buffer;
    /* 0x138 */ clsDataBase* class_ptr; // ptr to the templated class
    /* 0x140 */ bool unk_140;
}; // size >= 0x148

class __cppobj clsLoadQueue_Database_OLD : clsLoadQueue {
    /* 0x010 */ char unk010[0x160 - 0x010];
    /* 0x160 */ std::shared_ptr__clsFile_Archive database_sp; // database which contains the file, e.g DATABSAE_EN.dat
}; // size >= 0x170

enum E_CREATE_TEXTURE_TYPE {
    Txf_BE = 0,
    Txp = 1,
    Nmt = 2,
    Txf_LE = 3,
    Unk4 = 4,
    Nltx5 = 5,
    Nltx6 = 6, // Callback_Load_Texture_0
};

class __cppobj clsLoadQueue_Texture : clsLoadQueue {
    /* 0x010 */ char name[64]; // unk size
    /* 0x050 */ char unk050[0x118 - 0x050];
    /* 0x118 */ std::shared_ptr__clsFile_Archive database_sp; // database which contains the file, e.g DATABSAE_EN.dat
    /* 0x128 */ char unk128[0x130 - 0x128];
    /* 0x130 */ s32 unk_130;
    /* 0x134 */ E_CREATE_TEXTURE_TYPE create_type;
}; // size >= 0x138

class __cppobj clsLoadQueue_Texture_Old : clsLoadQueue {
    /* 0x010 */ char name[64]; // unk size
    /* 0x050 */ char unk050[0x118 - 0x050];
    /* 0x118 */ std::shared_ptr__clsFile_Archive database_sp; // database which contains the file, e.g DATABSAE_EN.dat
    /* 0x128 */ void* data_buffer;
    /* 0x130 */ E_CREATE_TEXTURE_TYPE create_type;
    /* 0x138 */ NisGraphicsTexture** texture;
}; // size >= 0x140

class __cppobj clsLoadQueue_Script : clsLoadQueue {
    /* 0x010 */ char script_file_name[64];
    /* 0x050 */ char talk_file_name[64];
    /* 0x090 */ std::shared_ptr__clsFile_Archive database_sp; // database which contains the file, e.g DATABSAE_EN.dat
    /* 0x0A0 */ char unk0A0[0x0B8 - 0x0A0];
}; // size >= 0x0B8

class __cppobj clsDataBase {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ void* buffer;
}; // size >= 0x10

struct __cppobj DataBaseTableHeader {
    /* 0x00 */ s32 entry_size;
    /* 0x04 */ s32 num_entries;
    /* 0x08 */ bool has_filenames;
}; // size = 0xC

class __cppobj clsDataBaseTable {
    /* 0x00 */ struct clsDataBaseTable_vtbl* __vftable;
    /* 0x08 */ void* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsDataBaseTable_vtbl {
    /* 0x00 */ void (*D0)(clsDataBaseTable*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsDataBaseTable*, void*);
};

struct __cppobj stcMagicDat {
    /* 0x000 */ char unk000[0x028 - 0x000];
    /* 0x028 */ s16 id;
    /* 0x02A */ char unk02A[0x038 - 0x02A];
    /* 0x038 */ char description[128];
    /* 0x0B8 */ char name1[64];
    /* 0x0F8 */ char name2[64];
    /* 0x138 */ char unk138[0x145 - 0x138];
    /* 0x145 */ u8 magichange_weapon_type;
    /* 0x146 */ char unk146[0x147 - 0x146];
    /* 0x147 */ u8 category; // - 4 > 2 is attack category
    /* 0x148 */ u8 item_type_required; // Battle::clsAutoBattle::mInit_CheckUseMagicCondition
    /* 0x149 */ char unk149[0x150 - 0x149];
    /* 0x150 */ s16 attack_map_id;
    /* 0x152 */ s16 big_attack_map_id;
    /* 0x154 */ char unk154[0x15E - 0x154];
    /* 0x15E */ u8 num_ranks;
    /* 0x15F */ char unk15F[0x164 - 0x15F];
}; // size = 0x164

class __cppobj clsMagicDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMagicDat* buffer;
}; // size = 0x10

struct __cppobj stcMagicPowerDat {
    /* 0x00 */ char unk00[0x34];
}; // size = 0x34

class __cppobj clsMagicPowerDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMagicPowerDat* buffer;
}; // size = 0x10

struct __cppobj stcMagicSpendSPDat {
    /* 0x00 */ char unk00[0x34];
}; // size = 0x34

class __cppobj clsMagicSpendSPDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMagicSpendSPDat* buffer;
}; // size = 0x10

struct __cppobj stcHabitDat {
    /* 0x00 */ s32 cap;
    /* 0x04 */ s16 id;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ char name[64];
    /* 0x48 */ char description[128];
    /* 0xC8 */ u8 unk_C8[19]; // unk size
    /* 0xDB */ char unkDB[0xE0 - 0xDB];
}; // size = 0xE0

class __cppobj clsHabitDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcHabitDat* buffer;
}; // size = 0x10

struct __cppobj stcSpecialCombRate {
    /* 0x00 */ char unk00[0x06 - 0x00];
}; // size = 0x6

// clsHabitComb<unsigned char,128>
class __cppobj clsHabitComb {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ u8* buffer1;
    /* 0x10 */ u8* buffer2;
}; // size = 0x18

// clsHabitCombChild<unsigned char,128>
class __cppobj clsHabitCombChild {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ u8* buffer1;
    /* 0x10 */ u8* buffer2;
    /* 0x18 */ u8* buffer3;
}; // size = 0x20

struct __cppobj stcCharJoinInfo {
    /* 0x00 */ s16 unit_id;
    /* 0x02 */ s16 flag;
}; // size = 0x4

enum eGender {
    Invalid = 0,
    UniqueMale = 1,
    UniqueFemale = 2,
    HumanMale = 11,
    HumanFemale = 12,
    Wf = 13,
    MonsterMale = 21,
    MonsterFemale = 22,
};

struct __cppobj stcCharacterDat {
    /* 0x000 */ char unk000[0x004 - 0x000];
    /* 0x004 */ s16 base_stats[8];
    /* 0x014 */ s16 unique_skills[16];
    /* 0x034 */ s16 unique_skill_level_required[16];
    /* 0x054 */ s16 starting_skills[16];
    /* 0x074 */ char unk074[0x094 - 0x074];
    /* 0x094 */ s16 learnable_skills[64];
    /* 0x114 */ char unk114[0x194 - 0x114];
    /* 0x194 */ s16 unit_id;
    /* 0x196 */ s16 anm_id;
    /* 0x198 */ s16 size_x;
    /* 0x19A */ s16 size_z;
    /* 0x19C */ char unk19C[0x1A0 - 0x19C];
    /* 0x1A0 */ s16 face_index;
    /* 0x1A2 */ s16 exp_multiplier;
    /* 0x1A4 */ u8 move;
    /* 0x1A5 */ char unk1A5[0x1A8 - 0x1A5];
    /* 0x1A8 */ u8 range;
    /* 0x1A9 */ char unk1A9[0x1B0 - 0x1A9];
    /* 0x1B0 */ s16 chara_make_mana_multiplier;
    /* 0x1B2 */ char unk1B2[0x1B4 - 0x1B2];
    /* 0x1B4 */ s16 starting_evility;
    /* 0x1B6 */ s16 game_version_required;
    /* 0x1B8 */ char unk1B8[0x1BA - 0x1B8];
    /* 0x1BA */ s16 voice_id;
    /* 0x1BC */ char unk1BC[0x1FE - 0x1BC];
    /* 0x1FE */ char name[0x40];
    /* 0x23E */ char title[0x40];
    /* 0x27E */ u8 aptitudes[8];
    /* 0x286 */ char unk286[0x28E - 0x286];
    /* 0x28E */ u8 fire_res;
    /* 0x28F */ u8 wind_res;
    /* 0x290 */ u8 ice_res;
    /* 0x291 */ bool has_resistances; // no chars have this as false
    /* 0x292 */ u8 gender;
    /* 0x293 */ u8 num_unique_skills;
    /* 0x294 */ u8 class_index;
    /* 0x295 */ char unk295[0x296 - 0x295];
    /* 0x296 */ u8 jump;
    /* 0x297 */ char unk297[0x298 - 0x297];
    /* 0x298 */ u8 anime_format; // 1 = monster
    /* 0x299 */ u8 throw_range;
    /* 0x29A */ u8 counter;
    /* 0x29B */ char unk29B[0x29C - 0x29B];
    /* 0x29C */ u8 num_starting_skills;
    /* 0x29D */ char unk29D[0x2A8 - 0x29D];
    /* 0x2A8 */ u16 object_type; // 4 = geo block, >500 = objects? clsNoResidentObjManager::Load3DObjSync only works on >= 4
    /* 0x2AA */ char unk2AA[0x2AC - 0x2AA];
}; // size = 0x2AC

class __cppobj clsCharacterDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcCharacterDat* buffer;
}; // size = 0x10

struct __cppobj stcCharacterHelpDat {
    /* 0x000 */ s16 id;
    /* 0x002 */ char desc1[128];
    /* 0x082 */ char desc2[128];
    /* 0x102 */ char desc3[128];
}; // size = 0x182

class __cppobj clsCharacterHelpDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcCharacterHelpDat* buffer;
}; // size = 0x10

struct __cppobj stcItemDat {
    /* 0x00 */ s32 price;
    /* 0x04 */ s16 stats[8]; // ePARAM_TYPE
    /* 0x14 */ s16 item_id;
    /* 0x16 */ char unk16[0x18 - 0x16];
    /* 0x18 */ s16 type;
    /* 0x1A */ char unk1A[0x1E - 0x1A];
    /* 0x1E */ s16 image_id;
    /* 0x20 */ char name[64];
    /* 0x60 */ char description[128];
    /* 0xE0 */ char unkE0[0xE5 - 0xE0];
    /* 0xE5 */ u8 rank;
    /* 0xE6 */ u8 range;
    /* 0xE7 */ u8 jump;
    /* 0xE8 */ u8 palette;
    /* 0xE9 */ u8 crit;
    /* 0xEA */ char unkEA[0xEC - 0xEA];
    /* 0xEC */ s16 required_game_version;
    /* 0xEE */ u8 is_amd_weapon;
    /* 0xEF */ char unkEF[0xF4 - 0xEF];
}; // size = 0xF4

class __cppobj clsItemDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcItemDat* buffer;
}; // size = 0x10

struct __cppobj stcRMDungeonDat {
    /* 0x00 */ char unk00[0x18];
}; // size = 0x18

class __cppobj clsRMDungeonDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcRMDungeonDat* buffer;
}; // size = 0x10

struct __cppobj stcSkillDat {
    /* 0x00 */ char unk00[0x08 - 0x00];
    /* 0x08 */ s16 id;
    /* 0x0A */ char unk0A[0x0D - 0x0A];
    /* 0x0D */ u8 values[2];
    /* 0x0F */ char name[64];
    /* 0x4F */ char description[128];
    /* 0xCF */ u8 use_hp_requirement;
    /* 0xD0 */ char unkD0[0xD4 - 0xD0];
}; // size = 0xD4

class __cppobj clsSkillDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSkillDat* buffer;
}; // size = 0x10

struct __cppobj stcAttackMapTargetInfo {
    /* 0x00 */ s8 unk_00;
    /* 0x01 */ s8 unk_01;
    /* 0x02 */ u8 unk_02;
}; // size = 0x3

struct stcAttackMapDataBaseHeader {
    /* 0x00 */ s16 num_first_entries;
    /* 0x02 */ s16 num_second_entries;
}; // size = 0x4

struct __cppobj stcAttackMapDataBase {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 second_entry_idx;
    /* 0x04 */ u8 num_targets; // number of squares this attack takes up in the second entries
    /* 0x05 */ char unk05[0x1];
}; // size = 0x6

class __cppobj clsAttackMapDataBase {
    /* 0x00 */ stcAttackMapDataBaseHeader* base_buffer;  // offset 0
    /* 0x08 */ stcAttackMapDataBase* first_entry;  // offset 4
    /* 0x10 */ stcAttackMapTargetInfo* second_entry; // 4 + 0xC8 * 6 = 0x4B4 but doesn't seem right
}; // size = 0x18

struct __cppobj stcDungeonDat {
    /* 0x00 */ char unk00[0x10 - 0x00];
    /* 0x10 */ s16 id;
    /* 0x12 */ s16 texture_info; // 0xIHW, bits 0-3 width, 4-7 height, 8-11 id
    /* 0x14 */ s16 unlock_flag;
    /* 0x16 */ s16 bonus_rank;
    /* 0x18 */ char unk18[0x4F - 0x18];
    /* 0x4F */ char name[64];
    /* 0x8F */ char unk8F[0x9C - 0x8F];
}; // size = 0x9C

class __cppobj clsDungeonDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcDungeonDat* buffer;
}; // size = 0x10

struct __cppobj stcSpecialItemData {
    /* 0x00 */ char unk00[0x6];
}; // size = 0x6

class __cppobj clsSpecialItemData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSpecialItemData* buffer;
}; // size = 0x10

struct __cppobj stcPirateDat {
    /* 0x000 */ char name[64];
    /* 0x040 */ char unk040[0x310 - 0x040];
}; // size = 0x310

class __cppobj clsPirateDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcPirateDat* buffer;
}; // size = 0x10

struct __cppobj stcRoomDat {
    /* 0x00 */ char unk00[0x5C];
}; // size = 0x5C

class __cppobj clsRoomDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcRoomDat* buffer;
}; // size = 0x10

struct __cppobj stcGeoEffectDat {
    /* 0x00 */ s16 id;
    /* 0x02 */ char name[64];
    /* 0x42 */ char description[128];
    /* 0xC2 */ s16 power;
}; // size = 0xC4

class __cppobj clsGeoEffectDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcGeoEffectDat* buffer;
}; // size = 0x10

// clsMultiInplicativeUnitedData<char,5>
class __cppobj clsMultiInplicativeUnitedData {
    /* 0x00 */ s16 num_entries1;
    /* 0x02 */ s16 num_entries2;
    /* 0x04 */ s16 num_entries3;
    /* 0x06 */ s16 num_entries4;
    /* 0x08 */ s16 num_entries5;
    /* 0x10 */ u8* buffer1;
    /* 0x18 */ u8* buffer2;
    /* 0x20 */ u8* buffer3;
    /* 0x28 */ u8* buffer4;
    /* 0x30 */ u8* buffer5;
    /* 0x38 */ u8* names;
}; // size = 0x40

// clsMagicCombinationData<unsigned char,200>
class __cppobj clsMagicCombinationData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ u8* buffer1;
    /* 0x10 */ u8* buffer2;
}; // size = 0x18

struct __cppobj stcWishDat {
    /* 0x000 */ char unk000[0x004 - 0x000];
    /* 0x004 */ s16 id;
    /* 0x006 */ char unk006[0x008 - 0x006];
    /* 0x008 */ s16 unlock_flags[4];
    /* 0x010 */ s16 lock_flags[4];
    /* 0x018 */ char unk018[0x028 - 0x18];
    /* 0x028 */ char name[128];
    /* 0x0A8 */ char description[128];
    /* 0x128 */ char unk128[0x12C - 0x128];
    /* 0x12C */ u8 num_unlock_flags; 
    /* 0x12D */ u8 num_lock_flags; 
    /* 0x12E */ char unk12E[0x130 - 0x12E];
}; // size = 0x130

class __cppobj clsWishDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcWishDat* buffer;
}; // size = 0x10

struct __cppobj stcSpecificWishDat {
    /* 0x00 */ char unk00[0x0C - 0x00];
    /* 0x0C */ s16 wish_no;
    /* 0x0E */ char unk0E[0x10 - 0x0E];
}; // size >= 0x10

struct __cppobj stcRecordZukanDat {
    /* 0x000 */ char unk000[0x444];
}; // size = 0x444

class __cppobj clsRecordZukanDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcRecordZukanDat* buffer;
}; // size = 0x10

struct __cppobj stcSeatDat {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0x14 - 0x02];
    /* 0x14 */ char name[64];
    /* 0x54 */ char unk54[0x7A - 0x54];
}; // size = 0x7A

class __cppobj clsSeatDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSeatDat* buffer;
}; // size = 0x10

struct __cppobj stcCommitteeDat {
    /* 0x000 */ s16 power_skill_id;
    /* 0x002 */ s16 id;
    /* 0x004 */ s16 facility_id;
    /* 0x006 */ char name[64];
    /* 0x046 */ char title[64];
    /* 0x086 */ char unk086[0x08A - 0x086];
    /* 0x08A */ s16 attack_map_id;
    /* 0x08C */ char japanese_info[64];
    /* 0x0CC */ char description1[128];
    /* 0x14C */ char description2[128];
    /* 0x1CC */ char description3[128];
    /* 0x24C */ char unk24C[0x25E - 0x24C];
    /* 0x25E */ u8 heights[4]; // unk size
    /* 0x262 */ u8 widths[4]; // unk size
    /* 0x266 */ u8 commu_id;
}; // size = 0x268

class __cppobj clsCommitteeDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcCommitteeDat* buffer;
}; // size = 0x10

struct __cppobj stcTeacherDat {
    /* 0x000 */ char unk000[0x20E - 0x000];
}; // size = 0x20E

class __cppobj clsTeacherDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcTeacherDat* buffer;
}; // size = 0x10

struct __cppobj stcShipDat {
    /* 0x000 */ char unk000[0x1E0];
}; // size = 0x1E0

class __cppobj clsShipDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcShipDat* buffer;
}; // size = 0x10

struct __cppobj stcSenatorDat {
    /* 0x00 */ char unk00[0x06 - 0x00];
    /* 0x06 */ char name[64];
    /* 0x46 */ char unk46[0x66 - 0x46];
}; // size = 0x66

class __cppobj clsSenatorDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSenatorDat* buffer;
}; // size = 0x10

struct __cppobj stcSenatorRelationDat {
    /* 0x00 */ char unk00[0x64];
}; // size = 0x64

class __cppobj clsSenatorRelationDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSenatorRelationDat* buffer;
}; // size = 0x10

// clsCharcterCombinationData<unsigned char,256>
class __cppobj clsCharcterCombinationData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ u8* buffer1; // offset 0x4
    /* 0x10 */ u8* buffer2; // offset 0x204
}; // size = 0x18

struct __cppobj stcHospitalGiftDat {
    /* 0x00 */ char unk00[0x10];
}; // size = 0x10

class __cppobj clsHospitalGiftDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcHospitalGiftDat* buffer;
}; // size = 0x10

struct __cppobj stcThiefSkillDat {
    /* 0x00 */ char unk00[0x46];
}; // size = 0x46

class __cppobj clsThiefSkillDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcThiefSkillDat* buffer;
}; // size = 0x10

struct __cppobj stcEnemyMagicDat {
    /* 0x00 */ char unk00[0x84];
}; // size = 0x84

class __cppobj clsEnemyMagicDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcEnemyMagicDat* buffer;
}; // size = 0x10

struct __cppobj stcEnemySkillDat {
    /* 0x00 */ char unk00[0x44];
}; // size = 0x44

class __cppobj clsEnemySkillDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcEnemySkillDat* buffer;
}; // size = 0x10

struct __cppobj stcNamePlateDat {
    /* 0x00 */ s16 id;
    /* 0x02 */ char name[64];
}; // size = 0x42

class __cppobj clsNamePlateDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcNamePlateDat* buffer;
}; // size = 0x10

struct __cppobj stcMusicDat {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk04[0x08 - 0x04];
    /* 0x08 */ s16 id;
    /* 0x0A */ char unk0A[0x0E - 0x0A];
    /* 0x0E */ char bgm_name[64];
    /* 0x4E */ char name[128];
    /* 0xCE */ s16 collection_idx;
}; // size = 0xD0

class __cppobj clsMusicDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMusicDat* buffer;
}; // size = 0x10

struct __cppobj stcItemExchangeDat {
    /* 0x00 */ char unk00[0x8];
}; // size = 0x8

class __cppobj clsItemExchangeDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcItemExchangeDat* buffer;
}; // size = 0x10

// CHECK ME!
struct __cppobj stcMagicLevelDataBase {
    /* 0x00 */ char unk00[0x22 - 0x00];
}; // size = 0x22

class __cppobj clsMagicLevelDataBase {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMagicLevelDataBase* buffer;
}; // size = 0x10

struct __cppobj stcSaveIconDat {
    /* 0x00 */ char unk00[0x58];
}; // size = 0x58

class __cppobj clsSaveIconDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSaveIconDat* buffer;
}; // size = 0x10

struct __cppobj stcSaveIconList {
    /* 0x00 */ char unk00[0xCC - 0x00];
}; // size = 0xCC

struct __cppobj stcWorldPowerData {
    /* 0x00 */ char unk00[0x96];
}; // size = 0x96

class __cppobj clsWorldPowerData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcWorldPowerData* buffer;
}; // size = 0x10

struct __cppobj stcWorldSuppressData {
    /* 0x00 */ char unk00[0x24];
}; // size = 0x24

class __cppobj clsWorldSuppressData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcWorldSuppressData* buffer;
}; // size = 0x10

struct __cppobj stcWorldMapEvent {
    /* 0x00 */ char unk00[0x30];
}; // size = 0x30

class __cppobj clsWorldMapEvent {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcWorldMapEvent* buffer;
}; // size = 0x10

struct __cppobj stcTortureData {
    /* 0x000 */ char unk000[0x1B4];
}; // size = 0x1B4

class __cppobj clsTortureData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcTortureData* buffer;
}; // size = 0x10

struct __cppobj stcTortureNegotiationData {
    /* 0x00 */ char unk00[0xD0];
}; // size = 0xD0

class __cppobj clsTortureNegotiationData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcTortureNegotiationData* buffer;
}; // size = 0x10

struct __cppobj stcTreasureData {
    /* 0x000 */ char unk000[0x10E];
}; // size = 0x10E

class __cppobj clsTreasureData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcTreasureData* buffer;
}; // size = 0x10

struct __cppobj stcShipPartsData {
    /* 0x000 */ s16 id;
    /* 0x002 */ char name[64];
    /* 0x042 */ char unk042[0x15C - 0x042];
    /* 0x15C */ u8 crew_bonus;
    /* 0x15D */ u8 unk_15D;
    /* 0x15E */ u8 stay_duration;
    /* 0x15F */ u8 appearance_turn;
    /* 0x160 */ u8 ship_type; // galleon, starship etc
    /* 0x161 */ u8 unk_161;
    /* 0x162 */ char description1[128];
    /* 0x1E2 */ char description2[128];
    /* 0x262 */ s16 collection_index;
    /* 0x264 */ s16 collect_flag; // flag set on when collected
    /* 0x266 */ char unk266[0x268 - 0x266];
}; // size = 0x268

class __cppobj clsShipPartsData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcShipPartsData* buffer;
}; // size = 0x10

struct __cppobj stcRandomDungeonEnemyData {
    /* 0x00 */ char unk00[0x2C];
}; // size = 0x2C

class __cppobj clsRandomDungeonEnemyData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcRandomDungeonEnemyData* buffer;
}; // size = 0x10

struct __cppobj stcMinistryMapData {
    /* 0x00 */ char unk00[0xBA];
}; // size = 0xBA

class __cppobj clsMinistryMapData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMinistryMapData* buffer;
}; // size = 0x10

struct __cppobj stcMapEditMapData {
    /* 0x00 */ char unk00[0x46];
}; // size = 0x46

class __cppobj clsMapEditMapData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMapEditMapData* buffer;
}; // size = 0x10

struct __cppobj stcMapEditCategoryData {
    /* 0x00 */ char unk00[0x4A];
}; // size = 0x4A

class __cppobj clsMapEditCategoryData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMapEditCategoryData* buffer;
}; // size = 0x10

struct __cppobj stcMapEditShopData {
    /* 0x00 */ char unk00[0x58];
}; // size = 0x58

class __cppobj clsMapEditShopData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcMapEditShopData* buffer;
}; // size = 0x10

struct __cppobj stcSurvivalAttackFloorBossDat {
    /* 0x00 */ char unk00[0x6];
}; // size = 0x6

class __cppobj clsSurvivalAttackFloorBossDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcSurvivalAttackFloorBossDat* buffer;
}; // size = 0x10

struct __cppobj stcNetworkHistory {
    /* 0x00 */ char unk00[0x82];
}; // size = 0x82

class __cppobj clsNetworkHistory {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcNetworkHistory* buffer;
}; // size = 0x10

struct __cppobj stcRelatedChartData {
    /* 0x000 */ char unk000[0x1D4];
}; // size = 0x1D4

class __cppobj clsRelatedChartData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcRelatedChartData* buffer;
}; // size = 0x10

struct __cppobj stcCharPersonalData {
    /* 0x00 */ char unk00[0x46];
}; // size = 0x46

class __cppobj clsCharPersonalData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcCharPersonalData* buffer;
}; // size = 0x10

struct __cppobj stcTownEditMessageData {
    /* 0x000 */ char unk000[0x186];
}; // size = 0x186

class __cppobj clsTownEditMessageData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcTownEditMessageData* buffer;
}; // size = 0x10

struct __cppobj stcToroKuroWeaponData {
    /* 0x00 */ char unk00[0x22];
}; // size = 0x22

class __cppobj clsToroKuroWeaponData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcToroKuroWeaponData* buffer;
}; // size = 0x10

struct __cppobj stcInitialPositionDat {
    /* 0x00 */ char unk00[0x20];
}; // size = 0x20

class __cppobj clsInitialPositionDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcInitialPositionDat* buffer;
}; // size = 0x10

struct __cppobj stcShipPartsSkillData {
    /* 0x00 */ u8 id;
    /* 0x01 */ char unk01[0x02 - 0x01];
    /* 0x02 */ s16 skill_id;
    /* 0x04 */ u8 ship_type;
    /* 0x05 */ char unk05[0x06 - 0x05];
}; // size = 0x6

class __cppobj clsShipPartsSkillData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcShipPartsSkillData* buffer;
}; // size = 0x10

struct __cppobj stcCharWorldSkillSphere {
    /* 0x00 */ char unk00[0xCE];
}; // size = 0xCE

class __cppobj clsCharWorldSkillSphere {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcCharWorldSkillSphere* buffer;
}; // size = 0x10

struct __cppobj stcItemWorldInfo {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 unk_02[40];
}; // size = 0x52

// ItemWorldInfo.dat, PirateAppearance.dat, RoomAppearance.dat
class __cppobj clsItemWorldInfo {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcItemWorldInfo* buffer;
}; // size = 0x10

struct __cppobj stcUserLocationData {
    /* 0x00 */ char unk00[0x42];
}; // size = 0x42

// UserLocation.dat, UserFavoriteFood.dat, UserHobby.dat
class __cppobj clsUserLocationData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcUserLocationData* buffer;
}; // size = 0x10

struct __cppobj stcEventViewerData {
    /* 0x00 */ char unk00[0x88];
}; // size = 0x88

class __cppobj clsEventViewerData {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcEventViewerData* buffer;
}; // size = 0x10

struct __cppobj stcCheatShopInformationDat {
    /* 0x000 */ char unk000[0x2D6];
}; // size = 0x2D6

class __cppobj clsCheatShopInformationDat {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcCheatShopInformationDat* buffer;
}; // size = 0x10

struct __cppobj stcConversionName {
    /* 0x000 */ char unk000[0x142];
}; // size = 0x142

class __cppobj clsConversionName {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcConversionName* buffer;
}; // size = 0x10

// CHECK ME!
struct __cppobj stcRMDUNGEON2 {
    /* 0x00 */ char unk00[0x12];
}; // size = 0x12

class __cppobj clsRMDUNGEON2 {
    /* 0x00 */ s16 num_entries;
    /* 0x08 */ stcRMDUNGEON2* buffer;
}; // size = 0x10

struct __cppobj RMDUNGEON2 {
    /* 0x00 */ char unk00[0x12 - 0x00];
}; // size = 0x12

struct __cppobj stcTextureInfo {
    /* 0x00 */ s32 info_id;
    /* 0x04 */ char unk04[0x1C - 0x04];
}; // size = 0x1C

class __cppobj clsTextureInfo {
    /* 0x00 */ struct clsTextureInfo_vtbl* __vftable;
    /* 0x08 */ stcTextureInfo* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsTextureInfo_vtbl {
    /* 0x00 */ void (*D0)(clsTextureInfo*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsTextureInfo*, void*);
};

struct __cppobj stcAnimeInfo {
    /* 0x00 */ s32 id;
    /* 0x04 */ char unk04[0x08 - 0x04];
    /* 0x08 */ char name[8];
    /* 0x10 */ char unk10[0x48 - 0x10];
}; // size = 0x48

class __cppobj clsAnimeInfo {
    /* 0x00 */ struct clsAnimeInfo_vtbl* __vftable;
    /* 0x08 */ stcAnimeInfo* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsAnimeInfo_vtbl {
    /* 0x00 */ void (*D0)(clsAnimeInfo*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsAnimeInfo*, void*);
};

struct __cppobj stcRankingItem {
    /* 0x00 */ char unk00[0x10];
}; // size = 0x10

class __cppobj clsRankingItem {
    /* 0x00 */ struct clsRankingItem_vtbl* __vftable;
    /* 0x08 */ stcRankingItem* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsRankingItem_vtbl {
    /* 0x00 */ void (*D0)(clsRankingItem*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsRankingItem*, void*);
};

struct __cppobj stcBGMData {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 filename_offset;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ char unk0C[0x14 - 0x0C];
}; // size = 0x14

class __cppobj clsBGMData {
    /* 0x00 */ struct clsBGMData_vtbl* __vftable;
    /* 0x08 */ stcBGMData* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsBGMData_vtbl {
    /* 0x00 */ void (*D0)(clsBGMData*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsBGMData*, void*);
};

struct __cppobj stcDLCBGMData {
    /* 0x00 */ char unk00[0x30 - 0x00];
}; // size = 0x30

struct __cppobj stcDLCAddMagicData {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18

struct __cppobj stcMsgData {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 filename_offset;
    /* 0x08 */ f32 unk_08;
}; // size = 0xC

class __cppobj clsMsgData {
    /* 0x00 */ struct clsMsgData_vtbl* __vftable;
    /* 0x08 */ stcMsgData* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsMsgData_vtbl {
    /* 0x00 */ void (*D0)(clsMsgData*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsMsgData*, void*);
};

struct __cppobj stcSEData {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 filename_offset;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ char unk0C[0x18 - 0x0C];
}; // size = 0x18

class __cppobj clsSEData {
    /* 0x00 */ struct clsSEData_vtbl* __vftable;
    /* 0x08 */ stcSEData* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsSEData_vtbl {
    /* 0x00 */ void (*D0)(clsSEData*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsSEData*, void*);
};

struct __cppobj stcVoiceData {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ char unk0C[0x40 - 0x0C];
}; // size = 0x40

class __cppobj clsVoiceData {
    /* 0x00 */ struct clsVoiceData_vtbl* __vftable;
    /* 0x08 */ stcVoiceData* data; // after header
    /* 0x10 */ s32 num_entries;
    /* 0x18 */ DataBaseTableHeader* header;
    /* 0x20 */ void* filename_data;
}; // size = 0x28

struct clsVoiceData_vtbl {
    /* 0x00 */ void (*D0)(clsVoiceData*, bool dealloc);
    /* 0x08 */ void (*SetDataFile)(clsVoiceData*, void*);
};

class __cppobj clsVoiceArtistPirate {
    /* 0x000 */ char unk000[0x390 - 0x000];
}; // size = 0x390

class clsDataBaseTableManager {
    /* 0x000 */ clsBGMData bgm;
    /* 0x028 */ clsMsgData msg_jp;
    /* 0x050 */ clsMsgData msg_en;
    /* 0x078 */ clsSEData se;
    /* 0x0A0 */ clsVoiceData voice_jp;
    /* 0x0C8 */ clsVoiceData voice_en;
    /* 0x0F0 */ clsTextureInfo texture_info;
    /* 0x118 */ clsAnimeInfo anime_info;
    /* 0x140 */ clsRankingItem ranking_item_list_item;
    /* 0x168 */ clsRankingItem ranking_item_list_weapon;
    /* 0x190 */ clsRankingItem ranking_item_list_innocent;
}; // size = 0x1B8

enum eLOAD_PRIORITY {
    High = 0,
    Medium = 1,
    Low = 2,
};

enum eLOAD_SYNC_MODE {
    Synchronous = 0,
    Asynchronous = 1,
};

class __cppobj clsLoadQueue_Callback : clsLoadQueue {
    /* 0x10 */ char unk10[0x50 - 0x10];
}; // size >= 0x50

class __cppobj clsLoadQueue_SetSyncMode : clsLoadQueue {
    /* 0x10 */ eLOAD_SYNC_MODE sync_mode;
    /* 0x14 */ char unk14[0x18 - 0x14];
}; // size >= 0x18

struct __cppobj clsLoadManager::stcQueueListItem {
    /* 0x00 */ clsLoadQueue* queue;
    /* 0x08 */ s32 index; // from clsLoadManager::num_queues
    /* 0x0C */ char unk0C[0x10 - 0x0C];
}; // size = 0x10

// FixRingBuffer<clsLoadManager::stcQueueListItem,512>
class __cppobj FixRingBuffer__stcQueueListItem_512 {
    /* 0x0000 */ clsLoadManager::stcQueueListItem buffer[512];
    /* 0x2000 */ s32 tail;
    /* 0x2004 */ s32 head;
}; // size = 0x2008

class __cppobj clsLoadManager {
    /* 0x0000 */ void* buffer; // 512 queues * 32 slots per queue * sizeof(clsLoadQueue) = 0x40000 bytes
    /* 0x0008 */ clsLoadQueue* queues[512]; // pointers into the above buffer, each can hold 32 slots
    /* 0x1008 */ s32 num_free_queues;
    /* 0x100C */ char unk100C[0x1010 - 0x100C];
    /* 0x1010 */ FixRingBuffer__stcQueueListItem_512 rings[3]; // array of priorities
    /* 0x7028 */ s16 queue_index; // global index over all lists, 512 queues, 32 slots, each takes a unique index
    /* 0x702A */ u8 unk_702A;
    /* 0x702C */ eLOAD_SYNC_MODE sync_mode;
    /* 0x7030 */ s32 num_queues_to_process;
    /* 0x7034 */ char unk7034[0x7038 - 0x7034];
}; // size = 0x7038

class __cppobj clsStringList : clsBaseDataBase {
    /* 0x20 */ clsStringList::DataEntry* data2;
}; // size >= 0x28

class __cppobj Nmpl::Core::System::CPerformCnt {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size = 0x8

class __cppobj Nmpl::Core::System::CRtc {
    /* 0x00 */ s32 year;
    /* 0x04 */ s32 month;
    /* 0x08 */ s32 mday;
    /* 0x0C */ s32 hour;
    /* 0x10 */ s32 minute;
    /* 0x14 */ s32 second;
    /* 0x18 */ s32 wday;
}; // size = 0x1C

class __cppobj Nmpl::Core::CTask : Nmpl::Core::CZeroFillNew {
    /* 0x00 */ struct Nmpl::Core::CTask_vtbl* __vftable;
    /* 0x08 */ char unk08[0x18 - 0x08];
}; // size = 0x18

struct Nmpl::Core::CTask_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::CTask*, bool dealloc);
    /* 0x08 */ void (*exec)(Nmpl::Core::CTask*);
};

class __cppobj Nmpl::Core::CTaskMgr {
    /* 0x00000 */ Nmpl::Core::CTask* tasks[8192]; // unk size
    /* 0x10000 */ s32 free_idx;
    /* 0x10008 */ Nmpl::Core::System::CLMutex* mutex;
}; // size = 0x10010

enum NisTasksIds {
    Invalid = 0,
    GameStartup = 1,
    Exit = 2,
    Unk3 = 3,
    Title = 4,
    TitleReloadUpdate = 5,
    Battle = 6,
    School = 7,
    Assembly = 8,
    AssemblyMO = 9,
    StoryDungeonSelect = 10,
    Ship = 11,
    Htl = 12,
    SkillMain = 13,
    Town = 14,
    ItemDungeonSelect = 15,
    CharDungeonSelect = 16,
    SaveTaskSave = 23,
    SaveTaskLoad = 24,
    SaveTaskDelete = 25,
    Load = 26,
    Opening = 27,
    MusicShop = 37,
    Training = 38,
    Color = 39,
    Personality = 40,
    Committee = 41,
    Change = 42,
    ChallengeDungeonSelect = 43,
    Saveicon = 44,
    Musical = 45,
    Record = 46,
    PirateEdit = 47,
    MapEdit = 48,
    TownEdit = 49,
    EventViewInit = 50,
    EventView = 51,
    TownVote = 52,
    Demo = 53,
    ShopCheat = 54,
    GameTrophy = 55,
    ScoutUserCharacter = 57,
    DLCShop = 59,
};

struct __cppobj NIS_TASK_REG {
    /* 0x00 */ s32 id;
    /* 0x08 */ void (*func)();
}; // ize = 0x10

struct __cppobj NIS_TASK_INFO {
    /* 0x00 */ s32 current_task_has_run;
    /* 0x08 */ void (*exit_task_func)(s32);
    /* 0x10 */ s32 current_task_id;
    /* 0x18 */ void (*current_task_func)(s32);
    /* 0x20 */ s32 next_task_id;
    /* 0x28 */ void (*next_task_func)(s32);
    /* 0x30 */ void (*pre_task_func)(s32);
    /* 0x38 */ void (*post_task_func)(s32);
    /* 0x40 */ s32 pre_task_has_run;
    /* 0x44 */ s32 post_task_has_run;
    /* 0x48 */ char unk48[0x50 - 0x48];
}; // size = 0x50

enum eSAVE_RESULT {

};

struct SAVE_DATA_TEST_INFO {
    /* 0x00 */ char unk00[0x38 - 0x00];
}; // size = 0x38

struct __cppobj stcSystemSaveDataHeader {
    /* 0x00 */ char magic[16]; // SystemSave
    /* 0x10 */ s32 size;
}; // size = 0x14

struct __cppobj stcSystemSave {
    /* 0x000 */ u8 text_language;
    /* 0x001 */ char unk001[0x024 - 0x001];
    /* 0x024 */ u8 chapter;
    /* 0x025 */ char unk025[0x028 - 0x025];
    /* 0x028 */ s32 cycle;
    /* 0x02C */ bool is_auto_save;
    /* 0x02D */ bool story_complete;
    /* 0x02E */ char unk02E[0x040 - 0x02E];
    /* 0x040 */ s8 disgaea_game_string[100];
    /* 0x0A4 */ char unk0A4[0x200 - 0x0A4];
}; // size = 0x200

enum clsSystemSave::eMODE {
    
};

class __cppobj clsSystemSave {
    /* 0x000 */ stcSystemSave save;
    /* 0x200 */ void* compressed_save;
    /* 0x208 */ char unk208[0x4F8 - 0x208];
    /* 0x4F8 */ clsSystemSave::eMODE mode;
    /* 0x4FC */ s32 unk_4FC;
}; // size >= 0x500

struct __cppobj stcSaveDataHeader {
    /* 0x000 */ char nis_complete_savedata_string[32];
    /* 0x020 */ char unk020[0x038 - 0x020];
    /* 0x038 */ s64 compressed_save_size;
    /* 0x040 */ char save_name[128];
    /* 0x0C0 */ char chapter_end_cycle_string[128];
    /* 0x140 */ s32 played_hours;
    /* 0x144 */ s32 played_minutes;
    /* 0x148 */ s32 played_seconds;
    /* 0x14C */ s32 level;
    /* 0x150 */ char unk150[0x1C0 - 0x150]; // padding?
}; // size = 0x1C0

struct __cppobj stcSaveData {
    /* 0x000 */ char unk000[0x004 - 0x000];
    /* 0x004 */ s32 save_slot;
    /* 0x008 */ s32 unk_008;
    /* 0x00C */ char unk00C[0x010 - 0x00C];
    /* 0x010 */ stcSaveDataHeader header;
}; // size = 0x1D0

struct __cppobj stcSaveListData {
    /* 0x0000 */ stcSaveDataHeader auto_save;
    /* 0x01C0 */ stcSaveData user_saves[101];
}; // size >= 0xB0C0

enum Nmpl::SysUtil::CSaveUtilBase::EResult {

};

class __cppobj Nmpl::SysUtil::CSaveUtilBase::SaveLoadParam_t {
    /* 0x000 */ char unk000[0x018 - 0x000];
    /* 0x018 */ s32 compressed_save_size;
    /* 0x020 */ void* compressed_save_buffer;
    /* 0x028 */ char unk028[0x02C - 0x028];
    /* 0x02C */ char system_save_header_string1[12]; // unk size
    /* 0x038 */ char unk038[0x2EC - 0x038];
    /* 0x2EC */ char system_save_header_string2[12]; // unk size
    /* 0x2F8 */ char unk2F8[0x3AC - 0x2F8];
    /* 0x3AC */ char new_save_data_string[16]; // unk size
    /* 0x3BC */ char unk3BC[0x888 - 0x3BC];
}; // size = 0x888

class __cppobj Nmpl::SysUtil::CSaveUtilBase {
    /* 0x000 */ struct Nmpl::SysUtil::CSaveUtilBase_vtbl* __vftable;
    /* 0x008 */ char unk008[0x00C - 0x008];
    /* 0x00C */ s32 status; // 2 = end
    /* 0x010 */ Nmpl::SysUtil::CSaveUtilBase::EResult save_result;
    /* 0x014 */ char unk014[0x018 - 0x014];
    /* 0x018 */ Nmpl::SysUtil::CSaveUtilBase::SaveLoadParam_t save_load_param;
    /* 0x8A0 */ s32 data_size;
    /* 0x8A8 */ void* data;
    /* 0x8B0 */ char unk8B0[0x8C8 - 0x8B0];
    /* 0x8C8 */ Nmpl::Core::System::CLMutex* mutex1;
    /* 0x8D0 */ Nmpl::Core::System::CLMutex* mutex2;
    /* 0x8D8 */ char unk8D8[0x8F0 - 0x8D8];
}; // size >= 0x8F0

struct Nmpl::SysUtil::CSaveUtilBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::SysUtil::CSaveUtilBase*, bool dealloc);
};

class __cppobj Nmpl::SysUtil::CSaveUtilGeneric : Nmpl::SysUtil::CSaveUtilBase {
    /* 0x8F0 */ bool unk_8F0;
    /* 0x8F1 */ char unk8F1[0x9B8 - 0x8F1];
    /* 0x9B8 */ Nmpl::Gra::Renderer::CGraRenderer* renderer;
    /* 0x9C0 */ char unk9C0[0x9D0 - 0x9C0];
}; // size = 0x9D0

struct Nmpl::SysUtil::CSaveUtilGeneric_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::SysUtil::CSaveUtilGeneric*, bool dealloc);
    /* 0x08 */ void (*NullSub1)(Nmpl::SysUtil::CSaveUtilGeneric*);
    /* 0x10 */ void (*NullSub2)(Nmpl::SysUtil::CSaveUtilGeneric*);
    /* 0x18 */ bool (*deleteCore)(Nmpl::SysUtil::CSaveUtilGeneric*, char const*);
    /* 0x20 */ bool (*saveCoreWriteFile)(Nmpl::SysUtil::CSaveUtilGeneric*, char const*, Nmpl::Core::CArray__u8*);
    /* 0x28 */ bool (*loadCoreReadFile)(Nmpl::SysUtil::CSaveUtilGeneric*, char const*, Nmpl::Core::CArray__u8*);
};

class __cppobj Nmpl::SysUtil::CSaveUtil : Nmpl::SysUtil::CSaveUtilGeneric {
}; // size = 0x9D0

enum eWINDOW_ACTION_TYPE {

};

// clsListData<stcSaveListData *>
class __cppobj clsListData__stcSaveListData {
    /* 0x00 */ stcSaveListData* list_data;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
}; // size = 0x10

class __cppobj clsWindowListBase {
    /* 0x00 */ struct clsWindowListBase_vtbl* __vftable;
    /* 0x08 */ char unk08[0x10 - 0x08];
    /* 0x10 */ clsWindowForm* window;
    /* 0x18 */ char unk18[0x80 - 0x18];
    /* 0x80 */ clsColor unk_80;
    /* 0x84 */ clsColor unk_84;
    /* 0x88 */ clsColor unk_88;
    /* 0x8C */ clsColor unk_8C;
    /* 0x90 */ char unk90[0xE0 - 0x90];
}; // size = 0xE0

struct __cppobj clsWindowListBase_vtbl {
    /* 0x00 */ void (*UpdateCursor)(clsWindowListBase*);
    /* 0x08 */ void (*Null08)(clsWindowListBase*);
    /* 0x10 */ void (*RenderWindow)(clsWindowListBase*);
    /* 0x18 */ void (*RenderWindowList)(clsWindowListBase*);
    /* 0x20 */ void (*Null20)(clsWindowListBase*);
    /* 0x28 */ void (*RenderHeadLine)(clsWindowListBase*);
    /* 0x30 */ void (*Null30)(clsWindowListBase*);
    /* 0x38 */ void (*RenderListItem)(clsWindowListBase*);
    /* 0x40 */ void (*Null40)(clsWindowListBase*);
    /* 0x48 */ void (*RenderScrollBar)(clsWindowListBase*);
    /* 0x50 */ void (*RenderFraction)(clsWindowListBase*);
    /* 0x58 */ void (*GetListTop)(clsWindowListBase*);
    /* 0x60 */ void (*D0)(clsWindowListBase*, bool dealloc);
    /* 0x68 */ void (*Initialize)(clsWindowListBase*);
    /* 0x70 */ void (*Finalize)(clsWindowListBase*);
    /* 0x78 */ void (*SetUp)(clsWindowListBase*, s32, s32, s32, s32, s32, eWINDOW_ACTION_TYPE, s32, s32, s32);
    /* 0x80 */ void (*Open)(clsWindowListBase*, eWINDOW_ACTION_TYPE, s32, s32);
    /* 0x88 */ void (*Open_SetActFrame)(clsWindowListBase*, s32);
    /* 0x90 */ void (*Close)(clsWindowListBase*, eWINDOW_ACTION_TYPE, s32, s32);
    /* 0x98 */ void (*Close_SetActFrame)(clsWindowListBase*, s32);
    /* 0xA0 */ void (*NullSubA0)(clsWindowListBase*);
    /* 0xA8 */ void (*SetCursor1)(clsWindowListBase*, s32, s32);
    /* 0xB0 */ void (*SetCursor2)(clsWindowListBase*, s32);
    /* 0xB8 */ void (*InitCursor)(clsWindowListBase*);
    /* 0xC0 */ void (*SetScrollTop)(clsWindowListBase*);
    /* 0xC8 */ void (*GetViewListCount)(clsWindowListBase*);
    /* 0xD0 */ void (*GetWinTop)(clsWindowListBase*);
    /* 0xD8 */ void (*GetHeight_)(clsWindowListBase*);
    /* 0xE0 */ void (*GetHeightList)(clsWindowListBase*);
};

// clsWindowList<struct stcSaveListData *,101>
class __cppobj clsWindowList__stcSaveListData_101 : clsWindowListBase {
    /* 0x0E0 */ clsListData__stcSaveListData save_list[101];
}; // size >= 0x730

struct __cppobj clsWindowList__stcSaveListData_101_vtbl {
    /* 0x000 */ void (*UpdateCursor)(clsWindowListBase*);
    /* 0x008 */ void (*Null08)(clsWindowListBase*);
    /* 0x010 */ void (*RenderWindow)(clsWindowListBase*);
    /* 0x018 */ void (*RenderWindowList)(clsWindowListBase*);
    /* 0x020 */ void (*Null20)(clsWindowListBase*);
    /* 0x028 */ void (*RenderHeadLine)(clsWindowListBase*);
    /* 0x030 */ void (*Null30)(clsWindowListBase*);
    /* 0x038 */ void (*RenderListItem)(clsWindowListBase*);
    /* 0x040 */ void (*Null40)(clsWindowListBase*);
    /* 0x048 */ void (*RenderScrollBar)(clsWindowListBase*);
    /* 0x050 */ void (*RenderFraction)(clsWindowListBase*);
    /* 0x058 */ void (*GetListTop)(clsWindowListBase*);
    /* 0x060 */ void (*D0)(clsWindowList__stcSaveListData_101*, bool dealloc);
    /* 0x068 */ void (*Initialize)(clsWindowList__stcSaveListData_101*);
    /* 0x070 */ void (*Finalize)(clsWindowListBase*);
    /* 0x078 */ void (*SetUp)(clsWindowListBase*, s32, s32, s32, s32, s32, eWINDOW_ACTION_TYPE, s32, s32, s32);
    /* 0x080 */ void (*Open)(clsWindowListBase*, eWINDOW_ACTION_TYPE, s32, s32);
    /* 0x088 */ void (*Open_SetActFrame)(clsWindowListBase*, s32);
    /* 0x090 */ void (*Close)(clsWindowListBase*, eWINDOW_ACTION_TYPE, s32, s32);
    /* 0x098 */ void (*Close_SetActFrame)(clsWindowListBase*, s32);
    /* 0x0A0 */ void (*NullSubA0)(clsWindowListBase*);
    /* 0x0A8 */ void (*SetCursor1)(clsWindowListBase*, s32, s32);
    /* 0x0B0 */ void (*SetCursor2)(clsWindowListBase*, s32);
    /* 0x0B8 */ void (*InitCursor)(clsWindowListBase*);
    /* 0x0C0 */ void (*SetScrollTop)(clsWindowListBase*);
    /* 0x0C8 */ void (*GetViewListCount)(clsWindowListBase*);
    /* 0x0D0 */ void (*GetWinTop)(clsWindowListBase*);
    /* 0x0D8 */ void (*GetHeight_)(clsWindowListBase*);
    /* 0x0E0 */ void (*GetHeightList)(clsWindowListBase*);
    /* 0x0E8 */ void (*GetIndex)(clsWindowList__stcSaveListData_101*);
    /* 0x0F0 */ void (*IsGetListError)(clsWindowList__stcSaveListData_101*);
    /* 0x0F8 */ void (*Update)(clsWindowList__stcSaveListData_101*);
    /* 0x100 */ void (*Render)(clsWindowList__stcSaveListData_101*);
    /* 0x108 */ void (*NullSub100)(clsWindowListBase*);
};

class __cppobj clsSaveWindowList : clsWindowList__stcSaveListData_101 {
    /* 0x730 */ s32 num_elements;
    /* 0x734 */ char unk734[0x778 - 0x734];
}; // size = 0x778

enum clsTaskBase::eFUNC_TYPE {

};

enum eSTATE_STACK_TYPE {

};

enum eTASK_RESULT {

};

class __cppobj clsTaskBase {
    /* 0x00 */ struct clsTaskBase_vtbl* __vftable;
    /* 0x08 */ s32 next_state;
    /* 0x0C */ eSTATE_STACK_TYPE stack_type;
    /* 0x10 */ char unk10[0x2C - 0x10];
    /* 0x2C */ s32 prev_stack_states[2];
    /* 0x34 */ s32 next_stack_states[2];
    /* 0x3C */ char unk3C[0x70 - 0x3C];
    /* 0x70 */ s32 curr_stack_index;
    /* 0x74 */ char unk74[0x88 - 0x74];
}; // size = 0x88

struct __cppobj clsTaskBase_vtbl {
    /* 0x00 */ void (*D0)(clsTaskBase*, bool dealloc);
    /* 0x08 */ void (*initialize)(clsTaskBase*);
    /* 0x10 */ bool (*initialize_Wait)(clsTaskBase*);
    /* 0x18 */ void (*finalize)(clsTaskBase*);
    /* 0x20 */ bool (*finalize_Wait)(clsTaskBase*);
    /* 0x28 */ void (*update_Before)(clsTaskBase*);
    /* 0x30 */ void (*NullSub1)(clsTaskBase*);
    /* 0x38 */ void (*render_Before)(clsTaskBase*);
    /* 0x40 */ void (*NullSub2)(clsTaskBase*);
    /* 0x48 */ void (*NullSub3)(clsTaskBase*);
    /* 0x50 */ void (*NullSub4)(clsTaskBase*);
};

class __cppobj clsTask_SaveLoad_AutoSave : clsTaskBase {
    /* 0x000088 */ COMMONDATA common_data;
    /* 0x4FFE30 */ stcSystemSave system_saves[4];
    /* 0x500030 */ COMMONDATA* current_common_data;
    /* 0x500038 */ void* unk_500038;
    /* 0x500040 */ Nmpl::Core::System::CLMutex* save_file_mutex;
    /* 0x500048 */ Nmpl::Core::System::CThread* save_thread;
    /* 0x500050 */ eSAVE_RESULT save_result;
}; // size = 0x500058

class __cppobj clsTask_SaveLoad_Load : clsTaskBase {
    /* 0x000088 */ clsSaveWindowList save_window_list;
    /* 0x000800 */ char unk000800[0x00BF30 - 0x000800];
    /* 0x00BF30 */ COMMONDATA common_data;
    /* 0x50BCD8 */ char unk50BCD8[0x50BCF8 - 0x50BCD8];
}; // size = 0x50BCF8

class __cppobj clsTask_SaveLoad_Save : clsTaskBase {
    /* 0x000088 */ clsSaveWindowList save_window_list;
    /* 0x000800 */ char unk000800[0x00BF30 - 0x000800];
    /* 0x00BF30 */ COMMONDATA common_data;
    /* 0x50BCD8 */ char unk50BCD8[0x50BEF8 - 0x50BCD8];
}; // size = 0x50BEF8

class __cppobj clsTask_SaveLoad_Delete : clsTaskBase {
    /* 0x0088 */ char unk0088[0xBF38 - 0x0088];
}; // size = 0xBF38

class __cppobj clsTask_SaveLoad_SystemLoad : clsTaskBase {
    /* 0x088 */ char unk088[0x2A8 - 0x088];
}; // size = 0x2A8

class __cppobj clsTask_SaveLoad_SystemSave : clsTaskBase {
    /* 0x088 */ char unk088[0x2A0 - 0x088];
}; // size = 0x2A0

struct __cppobj clsTask_SaveLoad_SystemSave_vtbl {
    /* 0x00 */ void (*D0)(clsTask_SaveLoad_SystemSave*, bool dealloc);
    /* 0x08 */ void (*initialize)(clsTaskBase*);
    /* 0x10 */ bool (*initialize_Wait)(clsTaskBase*);
    /* 0x18 */ void (*finalize)(clsTaskBase*);
    /* 0x20 */ bool (*finalize_Wait)(clsTaskBase*);
    /* 0x28 */ void (*update_Before)(clsTaskBase*);
    /* 0x30 */ void (*NullSub1)(clsTaskBase*);
    /* 0x38 */ void (*render_Before)(clsTaskBase*);
    /* 0x40 */ void (*NullSub2)(clsTaskBase*);
    /* 0x48 */ void (*NullSub3)(clsTaskBase*);
    /* 0x50 */ void (*NullSub4)(clsTaskBase*);
    /* 0x58 */ void (*stateFunction)(clsTask_SaveLoad_SystemSave*, clsTaskBase::eFUNC_TYPE);
    /* 0x60 */ void (*Initialize)(clsTask_SaveLoad_SystemSave*);
    /* 0x68 */ void (*Finalize)(clsTask_SaveLoad_SystemSave*);
};

class __cppobj clsStuffedRollTask : clsTaskBase {
    /* 0x088 */ char unk088[0x130 - 0x088];
    /* 0x130 */ clsFade__clsColor fade_color;
    /* 0x158 */ char unk158[0x170 - 0x158];
}; // size = 0x170

class __cppobj clsConvertSaveTask : clsTaskBase {
    /* 0x88 */ char unk88[0x98 - 0x88];
}; // size = 0x98

class __cppobj clsDLCShopTask : clsTaskBase {
    /* 0x088 */ char unk088[0x188 - 0x088];
}; // size = 0x188

class __cppobj clsSavedataMenuElement {
    /* 0x000 */ char unk000[0x330 - 0x000];
}; // size = 0x330

// std::vector<clsSavedataMenuElement*>
class __cppobj std::vector__clsSavedataMenuElement_p {
    /* 0x00 */ clsSavedataMenuElement** first;
    /* 0x08 */ clsSavedataMenuElement** last;
    /* 0x10 */ clsSavedataMenuElement** end;
}; // size = 0x18

class __cppobj clsSavedataMenu {
    /* 0x00 */ char unk00[0x40 - 0x00];
    /* 0x40 */ std::vector__clsSavedataMenuElement_p menu_elements;
    /* 0x58 */ char unk58[0x68 - 0x58];
}; // size >= 0x68

class __cppobj clsSaveTask : clsTaskBase {
    /* 0x088 */ clsSavedataMenu menu;
    /* 0x0F0 */ char unk0F0[0x400 - 0x0F0];
}; // size = 0x400

class __cppobj Nmpl::Core::System::CThread {
    /* 0x00 */ u64 handle;
    /* 0x08 */ void* args;
    /* 0x10 */ char unk10[0x48 - 0x10];
}; // size = 0x48

class __cppobj Nmpl::Core::CJob {
    /* 0x00 */ struct Nmpl::Core::CJob_vtbl* __vftable;
    /* 0x08 */ Nmpl::Core::CList list;
    /* 0x18 */ char unk18[0x20 - 0x18];
    /* 0x20 */ Nmpl::Core::System::CEventFlag finish_flag;
}; // size = 0x28

struct __cppobj Nmpl::Core::CJob_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::CJob*, bool dealloc);
    /* 0x08 */ void (*work)(Nmpl::Core::CJob*);
};

class __cppobj Nmpl::Core::CFunctionJobWithDelete : Nmpl::Core::CJob {
    /* 0x28 */ char unk28[0x70 - 0x28];
}; // size = 0x70

class __cppobj Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256_Holder {
    /* 0x0000 */ Nmpl::Core::CFunctionJobWithDelete elements[256];
    /* 0x7000 */ s32 num_elements;
    /* 0x7008 */ Nmpl::Core::CFunctionJobWithDelete* head;
    /* 0x7010 */ Nmpl::Core::CFunctionJobWithDelete* tail;
    /* 0x7018 */ char unk7018[0x7020 - 0x7018];
}; // size = 0x7020

// Nmpl::Core::Memory::CFreeList<class Nmpl::Core::CFunctionJobWithDelete,256>
class __cppobj Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256 {
    /* 0x0000 */ struct Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256_vtbl* __vftable;
    /* 0x0008 */ Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256_Holder holder;
    /* 0x7028 */ char unk7028[0x7040 - 0x7028];
    /* 0x7040 */ s32 lock;
    /* 0x7044 */ char unk7044[0x7050 - 0x7044];
}; // size <= 0x7050

struct __cppobj Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256*, bool dealloc);
};

// Nmpl::Core::Memory::CFreeListThreadSafe<Nmpl::Core::CFunctionJobWithDelete,256>
class __cppobj Nmpl::Core::Memory::CFreeListThreadSafe__CFunctionJobWithDelete_256 : Nmpl::Core::Memory::CFreeList__CFunctionJobWithDelete_256 {
}; // size <= 0x7050

// Nmpl::Core::Memory::CFreeListThreadSafeWithTLS<Nmpl::Core::CFunctionJobWithDelete,256,32>
class __cppobj Nmpl::Core::Memory::CFreeListThreadSafeWithTLS__CFunctionJobWithDelete_256_32 : Nmpl::Core::Memory::CFreeListThreadSafe__CFunctionJobWithDelete_256 {

}; // size = 0x7050

class __cppobj Nmpl::Core::CJobWorker::CJobManageDummy : Nmpl::Core::CJob {
}; // size = 0x28

struct __cppobj Nmpl::Core::CJobWorker::CJobManageDummy_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::CJobWorker::CJobManageDummy*, bool dealloc);
    /* 0x08 */ void (*work)(Nmpl::Core::CJob*);
};

class __cppobj Nmpl::Core::CJobWorker {
    /* 0x00 */ std::vector threads;
    /* 0x18 */ Nmpl::Core::CJobWorker::CJobManageDummy jobs[4];
    /* 0xB8 */ s32 wait_time;
    /* 0xBC */ s32 threshold;
    /* 0xC0 */ s64 unk_C0;
    /* 0xC8 */ s64 unk_C8;
    /* 0xD0 */ void* job_worker_idle_signal;
    /* 0xD8 */ void* job_worker_start_signal;
    /* 0xE0 */ s32 unk_E0;
    /* 0xE4 */ s32 unk_E4;
}; // size = 0xE8

class __cppobj _NIS_WORK {
    /* 0x00 */ void* func;
    /* 0x08 */ void* args;
    /* 0x10 */ _NIS_WORK* next;
    /* 0x18 */ u8 index; // into g_work_ot
    /* 0x19 */ u8 unk_19;
}; // size = 0x20

class __cppobj clsGameStartupItemBase {
    /* 0x00 */ struct clsGameStartupItemBase_vtbl* __vftable;
    /* 0x08 */ s32 type;
    /* 0x0C */ s32 unk_0C;
}; // size >= 0x10

struct __cppobj clsGameStartupItemBase_vtbl {
    /* 0x00 */ void (*PreProcess)(clsGameStartupItemBase*);
    /* 0x08 */ bool (*Wait)(clsGameStartupItemBase*);
    /* 0x10 */ void (*PostProcess)(clsGameStartupItemBase*);
};

class __cppobj clsGameStartupItemLoadAnime : clsGameStartupItemBase {
    /* 0x10 */ char anime_names[4][0x18];
    /* 0x70 */ char unk70[0x74 - 0x70];
    /* 0x74 */ s32 num_anime;
    /* 0x78 */ char unk78[0x80 - 0x78];
}; // size = 0x80

class __cppobj clsLoadEffectTable::stcDataBank {
    /* 0x00 */ bool loaded;
    /* 0x08 */ u8* compressed_buffer;
    /* 0x10 */ u8* decompressed_buffer;
    /* 0x18 */ s32 obf_index;
    /* 0x1C */ s32 unk_1C;
}; // size 0x20

struct __cppobj clsLoadEffectTable::stcEffectSetData {
    /* 0x00 */ s32 is_set;
    /* 0x04 */ s16 obf_index;
    /* 0x06 */ s16 index; // into the unk_2800 array
}; // size >= 0x8

class __cppobj clsLoadEffectTable_2800 {
    /* 0x00 */ bool active;
    /* 0x02 */ s16 effect_id;
}; // size = 0x4

class __cppobj clsLoadEffectTable {
    /* 0x0000 */ clsLoadEffectTable::stcDataBank data_banks[320];
    /* 0x2800 */ clsLoadEffectTable_2800 unk_2800[320];
}; // size = 0x2D00

enum clsLoadAnimeTable::eCATEGORY : u8 {

};

struct __cppobj clsLoadAnimeTable::stcLoadData {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0x10 - 0x02];
    /* 0x10 */ s32 file_size;
    /* 0x14 */ u8 state;
    /* 0x15 */ char unk15[0x24 - 0x15];
    /* 0x24 */ s32 is_decompressed;
    /* 0x28 */ char unk28[0x38 - 0x28];
    /* 0x38 */ std::shared_ptr__clsFile_Archive file_archive;
}; // size = 0x48

class __cppobj clsLoadAnimeTable {
    /* 0x00 */ clsLoadAnimeTable::stcLoadData* load_data;
    /* 0x08 */ s32 is_active;
    /* 0x0C */ clsLoadAnimeTable::eCATEGORY category;
    /* 0x0D */ char unk0D[0x20 - 0x0D];
    /* 0x20 */ s32 num_load_datas;
    /* 0x24 */ char unk24[0x30 - 0x24];
}; // size = 0x30

class __cppobj EffectWork {
    /* 0x000 */ C_NisModel model;
    /* 0x250 */ s32 active;
    /* 0x254 */ char unk254[0x258 - 0x254];
    /* 0x258 */ f32* pos_p; // points to pos_x in Script::clsEffectObj
    /* 0x260 */ char unk260[0x262 - 0x260];
    /* 0x262 */ s16 maybe_num_frames_until_stop; // set with Script::clsScriptDecoder::EffectPlayStop
    /* 0x264 */ char unk264[0x280 - 0x264];
    /* 0x280 */ s32 obf_index;
    /* 0x284 */ char unk284[0x298 - 0x284];
}; // size = 0x298

// Fake
struct __cppobj StartupDataHolder {
    /* 0x00 */ void* buffer;
    /* 0x08 */ char unk08[0x4];
    /* 0x0C */ eREADER_ID type;
}; // size = 0x10

class __cppobj clsGameStartupItemLoadEffect : clsGameStartupItemBase {
    /* 0x010 */ clsLoadEffectTable* load_effect_table;
    /* 0x018 */ char unk018[0x020 - 0x018];
    /* 0x020 */ s32 unk_020[320];
    /* 0x520 */ s32 unk_520;
}; // size = 0x528

class __cppobj clsGameStartupItemLoad3DObject : clsGameStartupItemBase {
    /* 0x010 */ std::shared_ptr__clsFile_Archive start_fs;
    /* 0x020 */ char names[8][0x18];
    /* 0x0E0 */ s32 unk_0E0[8];
    /* 0x100 */ s32 unk_100;
    /* 0x104 */ s32 unk_104;
    /* 0x108 */ u8 unk_108;
}; // size = 0x110

class __cppobj clsGameStartupItemLoadMapData : clsGameStartupItemBase {
    /* 0x010 */ std::shared_ptr__clsFile_Archive map_data_fs;
    /* 0x020 */ char names[7][0x18];
    /* 0x0C8 */ void* unk_0C8; // set to other classes on init. ship, hexmap, itemsymbol
    /* 0x0D0 */ s32 unk_0D0; // 1 for ship, 0 otherwise
    /* 0x0D4 */ s32 unk_0D4;
    /* 0x0D8 */ bool unk_0D8;
    /* 0x0DC */ s32 unk_0DC;
    /* 0x0E0 */ s32 unk_0E0;
    /* 0x0E4 */ char unk0E4[0x0F0 - 0x0E4];
    /* 0x0F0 */ void* buffer; // 0x1000-byte buffer
    /* 0x0F8 */ char unk0F8[0x100 - 0x0F8];
}; // size = 0x100

class __cppobj clsGameStartupItemLoadMapTexture : clsGameStartupItemBase {
    /* 0x10 */ char unk10[0xB8 - 0x10];
}; // size = 0xB8

class __cppobj clsGameStartupItemLoadWF : clsGameStartupItemBase {
    /* 0x10 */ char unk10[0x50 - 0x10];
}; // size = 0x50

class __cppobj clsGameStartupItemLoadScript : clsGameStartupItemBase {
    /* 0x10 */ char unk10[0x70 - 0x10];
}; // size = 0x70

class __cppobj clsGameStartupItemLoadFont : clsGameStartupItemBase {
    /* 0x10 */ char unk10[0x30 - 0x10];
}; // size = 0x30

enum eREADER_ID {
    MagicData,
    MagicPowerData,
    MagicSpendSPData,
    HabitJobData,
    HabitCombData,
    HabitCombChildData,
    CharacterData,
    CharacterHelpData,
    ItemData,
    RMDungeonData,
    RMDungeon2Data,
    SkillData,
    AttackMapData,
    DungeonData,
    SpecialItemData,
    PirateData,
    RoomData,
    GeoEffectData,
    MultiInplicativeUnitedData,
    WishData,
    UNK_20,
    RecordZukanData,
    JudgementData,
    SeatData,
    CommitteeData,
    TeacherData,
    ShipData,
    SenatorData,
    SenatorRelationData,
    CharacterCombinationData,
    HospitalGiftData,
    ThiefSkillData,
    EnemyMagicData,
    EnemySkillData,
    MagicCombData,
    NamePlateData,
    MusicData,
    ItemExchangeData,
    MagicLevelData,
    SaveIconData,
    MusicalData,
    WorldPowerData,
    WorldSuppressData,
    WorldMapEventData,
    TortureData,
    TortureNegotiationData,
    TreasureData,
    ShipPartsData,
    RandomDungeonEnemyData,
    MinistryMapData,
    MapEditMapData,
    MapEditCategoryData,
    MapEditShopData,
    SurvivalBossData,
    NetworkHistoryData,
    RelatedChartData,
    CharPersonalData,
    TownEditMessageData,
    ToroKuroWeaponData,
    InitialPositionData,
    ShipPartsSkillData,
    CharWorldSkillSphereData,
    ItemWorldInfoData,
    PirateAppearanceData,
    RoomAppearanceData,
    UserLocationData,
    UserFavouriteFoodData,
    UserHobby,
    EventViewerData,
    CheapShopInformationData,
    ConversionNameData,
};

class __cppobj clsGameStartupItemLoadDataBase : clsGameStartupItemBase {
    /* 0x010 */ std::shared_ptr__clsFile_Archive data_fs;
    /* 0x020 */ StartupDataHolder data_holder[1];
    /* 0x030 */ char unk030[0x0C0 - 0x030];
    /* 0x0C0 */ eREADER_ID reader_id;
    /* 0x0C4 */ char unk0C4[0x0E8 - 0x0C4];
    /* 0x0E8 */ char name[1][32]; // unk outer size
    /* 0x108 */ char unk108[0x238 - 0x108];
}; // size = 0x238

class __cppobj clsGameStartupItemLoadFullLoadPack : clsGameStartupItemBase {
    /* 0x10 */ s32 unk_10;
    /* 0x18 */ char* name;
    /* 0x20 */ u64 unk_20;
    /* 0x28 */ Nmpl::File::CFile* cfile;
    /* 0x30 */ std::shared_ptr__clsFile_Archive file_archive;
    /* 0x40 */ char unk40[0x48 - 0x40];
}; // size = 0x48

class __cppobj clsGameStartupItemLoadTexture {
    /* 0x00 */ char unk00[0xA0];
}; // size = 0xA0

struct __cppobj LZSHeader {
    /* 0x00 */ char ext[4]; // extension of decompressed file
    /* 0x04 */ u32 decompressed_size;
    /* 0x08 */ u32 compressed_size;
    /* 0x0C */ u32 control;
}; // size = 0x10

struct __cppobj LZSHeader_Sub {
    /* 0x00 */ u32 decompressed_size;
    /* 0x04 */ u32 compressed_size;
    /* 0x08 */ u32 control;
    /* 0x0C */ u8 data[];
}; // size = 0xC

class __cppobj clsAnmFsControl {
    /* 0x00 */ char unk00[0x10];
    /* 0x10 */ std::shared_ptr__clsFile_Archive anm_hi_archive;
    /* 0x20 */ std::shared_ptr__clsFile_Archive unk_20;
    /* 0x30 */ std::shared_ptr__clsFile_Archive anm_hi_lang_archive;
}; // size = 0x40

enum eMOUSE_RESULT {
    LeftTrigger     = 0x1,
    LeftPress       = 0x2,
    LeftRelease     = 0x4,

    DownMove        = 0x10,
    LeftMove        = 0x20,
    UpMove          = 0x40,
    RightMove       = 0x80,

    RightTrigger    = 0x400,
    RightPress      = 0x800,
    RightRelease    = 0x1000,

    MiddleTrigger   = 0x100000,
    WheelUp         = 0x200000,
    WheelDown       = 0x400000,
    MiddlePress     = 0x800000,

    Invalid         = 0x80000000,
};

class __cppobj clsMouseManager {
    /* 0x00 */ HWND handle;
    /* 0x08 */ bool active;
    /* 0x09 */ bool is_moving;
    /* 0x0C */ eMOUSE_RESULT result;
    /* 0x10 */ eMOUSE_RESULT old_result;
    /* 0x14 */ s32 x;
    /* 0x18 */ s32 y;
    /* 0x1C */ s32 old_x;
    /* 0x20 */ s32 old_y;
    /* 0x24 */ s32 left_press_start_x;
    /* 0x28 */ s32 left_press_start_y;
    /* 0x2C */ s32 right_press_start_x;
    /* 0x30 */ s32 right_press_start_y;
    /* 0x34 */ bool left_triggered;
    /* 0x35 */ bool right_triggered;
    /* 0x36 */ char unk36[0x38 - 0x36];
    /* 0x38 */ s32 left_frames;
    /* 0x3C */ s32 right_frames;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u32 mouse_area_x1;
    /* 0x4C */ u32 mouse_area_y1;
    /* 0x50 */ u32 mouse_area_x2;
    /* 0x54 */ u32 mouse_area_y2;
    /* 0x58 */ char unk58[0x68 - 0x58];
}; // size = 0x68

class __cppobj Nmpl::Framework::GraUtil::CGraOrthoCameraMgr {

}; // size = ???

enum Nmpl::Framework::GraUtil::CGraShaderLibrary::EShaderType {
    ShaderType0 = 0,
    ShaderType1 = 1,
    ShaderType2 = 2,
    ShaderType3 = 3,
    ShaderType4 = 4,
    ShaderType5 = 5,
    ShaderType6 = 6,
    ShaderType7 = 7,
    ShaderType8 = 8,
    ShaderType9 = 9,
    ShaderType10 = 10,
    ShaderType11 = 11,
};

enum CGraShaderLibrary_Game::EAddShaderType {
    AddShaderType0 = 0,
    AddShaderType1 = 1,
    AddShaderType2 = 2,
    AddShaderType3 = 3,
    AddShaderType4 = 4,
    AddShaderType5 = 5,
    AddShaderType6 = 6,
    AddShaderType7 = 7,
};

class __cppobj Nmpl::Framework::GraUtil::CGraShaderLibrary {
    /* 0x000 */ void* vertex_shaders[12];
    /* 0x060 */ void* pixel_shaders[12];
    /* 0x0C0 */ Nmpl::Core::intrusive_ptr__CGraShader shaders[12][6];
    /* 0x300 */ Nmpl::Gra::CGraVertexFormat* vertex_formats[12]; // 0/3/6/9 = GraUtil_VC, 1/4/7/8/10/11 = GraUtil_VCT, 2/5 = GraUtil_VT
}; // size = 0x360

class __cppobj Nmpl::Framework::GraUtil::CMpbDraw_Param {
    /* 0x00 */ char unk00[0x28 - 0x00];
}; // size = 0x28

class __cppobj CGraShaderLibrary_Game {
    /* 0x000 */ void* vertex_shaders[8];
    /* 0x040 */ void* pixel_shaders[8];
    /* 0x080 */ Nmpl::Core::intrusive_ptr__CGraShader shaders1[8][6];
    /* 0x200 */ Nmpl::Core::intrusive_ptr__CGraShader shaders2[8];
    /* 0x240 */ Nmpl::Gra::CGraVertexFormat* vertex_formats[8]; // 0/1/2/3/5/7 = USER_VCT, 4 = USER_VNCT, 6 = USER_VCTB
    /* 0x260 */ Nmpl::Gra::CGraVertexFormat* vertex_format;
    /* 0x268 */ char unk268[0x280 - 0x268];
}; // size = 0x280

class __cppobj clsTextureDataManager {
    /* 0x000 */ char unk000[0x040 - 0x000];
    /* 0x040 */ std::unordered_map map; // std::unordered_map<int,NisGraphicsTexture*>
    /* 0x080 */ char unk080[0x100 - 0x080];
}; // size = 0x100

class __cppobj clsFont_ffm {
    /* 0x000 */ char unk000[0x080 - 0x000];
    /* 0x080 */ std::unordered_map latin_texture_map; // std::unordered_map<int,NisGraphicsTexture *>
    /* 0x0C0 */ std::unordered_map korean_texture_map; // std::unordered_map<int,NisGraphicsTexture *>
    /* 0x100 */ std::unordered_map chinese_traditional_texture_map; // std::unordered_map<int,NisGraphicsTexture *>
    /* 0x140 */ std::unordered_map chinese_simplified_texture_map; // std::unordered_map<int,NisGraphicsTexture *>
    /* 0x180 */ char unk180[0x188 - 0x180];
}; // size >= 0x188

class __cppobj clsFontDataManager {
    /* 0x00 */ clsFont_ffm* font_ffm;
    /* 0x08 */ char unk08[0x18 - 0x08];
}; // size = 0x18

class __cppobj clsAnime {
    /* 0x00 */ Nmpl::Fairy::CFairyPlayer* fairy_player;
    /* 0x08 */ char unk08[0x0C - 0x08];
    /* 0x0C */ f32 unk_0C;
}; // size >= 0x10

class __cppobj std::shared_ptr__clsAnime {
    /* 0x00 */ clsAnime* ptr;
    /* 0x08 */ std::shared_pointer_ref_count_base* rep;
}; // size = 0x10

class __cppobj clsDLCManager {

}; // size = ???

class __cppobj clsAnimeManager {
    /* 0x000 */ char unk000[0x320 - 0x000];
    /* 0x320 */ std::list animes; // std::list<std::shared_ptr<clsAnime>>
    /* 0x330 */ std::list unk_330;
    /* 0x340 */ char unk340[0x350 - 0x340];
    /* 0x350 */ Nmpl::Gra::Renderer::CGraRenderer* renderer;
    /* 0x358 */ char unk358[0x360 - 0x358];
}; // size = 0x360

class __cppobj clsAutoSave {
    /* 0x000 */ char unk000[0x308];
}; // size = 0x308

enum ANM_FILTER_TYPE {

};

class __cppobj MoveCalculator::clsMoveCalculator {
}; // size = ???

class __cppobj MoveCalculator::clsConstAcceleMoveCalculator {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 acceleration;
}; // size >= 0x8

class __cppobj MoveCalculator::clsRateAcceleMoveCalculator {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 acceleration;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
}; // size = 0x10

class __cppobj MoveCalculator::clsJumpCalculator {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
}; // size = 0x8

class __cppobj MoveCalculator::clsAcceleJumpCalculator {
    /* 0x00 */ MoveCalculator::clsJumpCalculator jump_calculator;
    /* 0x08 */ f32 acceleration;
}; // size = 0xC

class __cppobj MoveCalculator::clsXZAcceleJumpCalculator {
    /* 0x00 */ MoveCalculator::clsRateAcceleMoveCalculator rate_accel_calculator;
    /* 0x10 */ MoveCalculator::clsJumpCalculator jump_calculator;
}; // size >= 0x18

class __cppobj MoveCalculator::clsYAcceleJumpCalculator {
    /* 0x00 */ MoveCalculator::clsJumpCalculator jump_calculator;
    /* 0x08 */ f32 acceleration;
}; // size >= 0xC

class __cppobj MoveCalculator::clsWAcceleJumpCalculator {
    /* 0x00 */ MoveCalculator::clsRateAcceleMoveCalculator rate_accel_calculator;
    /* 0x10 */ MoveCalculator::clsJumpCalculator jump_calculator;
    /* 0x18 */ f32 jump_acceleration;
}; // size = 0x1C

// clsTransferPoint<float,1>
class __cppobj clsTransferPoint__f32_1 {
    /* 0x00 */ f32 num_frames;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 move_type; // 1 = regular move, 2 = accelerating move
    /* 0x0C */ MoveCalculator::clsRateAcceleMoveCalculator move_calculator;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
}; // size = 0x24

// clsTransferPoint<float,2>
class __cppobj clsTransferPoint__f32_2 {
    /* 0x00 */ f32 num_frames_f;
    /* 0x04 */ s32 num_frames_s;
    /* 0x08 */ s32 move_type;
    /* 0x0C */ MoveCalculator::clsAcceleJumpCalculator move_calculator;
    /* 0x18 */ f32 end_float1;
    /* 0x1C */ f32 start_float1;
    /* 0x20 */ f32 current_float1;
    /* 0x24 */ f32 end_float2;
    /* 0x28 */ f32 start_float2;
    /* 0x2C */ f32 current_float2;
}; // size = 0x30

// clsTransferPoint<float,3>
class __cppobj clsTransferPoint__f32_3 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ MoveCalculator::clsAcceleJumpCalculator move_calculator;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 x;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 y;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 z;
    /* 0x38 */ f32 unk_38;
}; // size = 0x3C

// clsTransferPointXYZ<float>
class __cppobj clsTransferPointXYZ__f32 : clsTransferPoint__f32_3 {
}; // size >= 0x3C

enum eMoveType {
    MoveRatioAccele = 0,
    GroundAbsJumpAccele = 1,
    AirAbsJumpAccele = 2,
    GroundAbsJumpXZAccele = 11,
    AirAbsJumpXZAccele = 12,
    GroundAbsJumpYAccele = 21,
    AirAbsJumpYAccele = 22,
    AbsMoveRatioAccele = 100,
};

enum eMoveCalculatorType {
    None = 0,
    clsMoveCalculator = 1,
    clsRateAcceleMoveCalculator = 2,
    clsConstAcceleMoveCalculator = 3,
    clsJumpCalculator = 4,
    clsAcceleJumpCalculator = 5,
    clsXZAcceleJumpCalculator = 6,
    clsYAcceleJumpCalculator = 7,
    clsWAcceleJumpCalculator = 8,
};

class __cppobj clsMoveObj {
    /* 0x000 */ struct clsMoveObj_vtbl* __vftable;
    /* 0x008 */ NisVector3 pos;
    /* 0x014 */ f32 home_pos_x;
    /* 0x018 */ f32 home_pos_hy;
    /* 0x01C */ f32 home_pos_y;
    /* 0x020 */ f32 home_pos_z;
    /* 0x024 */ f32 velocity_pos_x;
    /* 0x028 */ f32 velocity_pos_y;
    /* 0x02C */ f32 velocity_pos_z;
    /* 0x030 */ f32 gravity;
    /* 0x034 */ f32 unk_034;
    /* 0x038 */ NisVector3 pos_end;
    /* 0x044 */ f32 pos_x_delta;
    /* 0x048 */ f32 pos_y_delta;
    /* 0x04C */ f32 pos_z_delta;
    /* 0x050 */ f32 move_ratio_acceleration;
    /* 0x054 */ f32 pos_x_accel;
    /* 0x058 */ f32 pos_y_accel;
    /* 0x05C */ f32 pos_z_accel;
    /* 0x060 */ s16 move_acceleration_num_frames;
    /* 0x062 */ u8 move_ratio_acceleration_direction;
    /* 0x063 */ u8 move_ratio_acceleration_rate;
    /* 0x064 */ bool has_collision;
    /* 0x065 */ char unk_065[0x68 - 0x65];
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ f32 unk_06C;
    /* 0x070 */ u8 acceleration_direction;
    /* 0x071 */ u8 acceleration_rate;
    /* 0x072 */ s16 curr_move_duration; // set to num_frames in clsMoveObj::mSetAbsJumpMove
    /* 0x074 */ s16 unk_074;
    /* 0x076 */ s16 unk_076;
    /* 0x078 */ f32 unk_078;
    /* 0x07C */ char unk_07C[0x07D - 0x07C];
    /* 0x07D */ u8 movement_type;
    /* 0x07E */ char unk_07E[0x080 - 0x07E];
    /* 0x080 */ NisVector3 old_pos;
    /* 0x08C */ char unk_08C[0x090 - 0x08C];
    /* 0x090 */ clsMoveObj* move_target_obj;
    /* 0x098 */ f32 move_rotation_target_x;
    /* 0x09C */ f32 move_rotation_target_y;
    /* 0x0A0 */ f32 move_rotation_target_z;
    /* 0x0A4 */ f32 unk_0A4;
    /* 0x0A8 */ f32 unk_0A8;
    /* 0x0AC */ f32 unk_0AC;
    /* 0x0B0 */ f32 unk_0B0;
    /* 0x0B4 */ s32 move_rotation_type; // 1 = normal? 2 = bspline
    /* 0x0B8 */ s32 move_rotation_frames_remaining;
    /* 0x0BC */ s32 move_rotation_max_frames;
    /* 0x0C0 */ s8 bspline_index;
    /* 0x0C4 */ eMoveCalculatorType calculator_type;
    /* 0x0C8 */ s32 max_move_duration; // set to num_frames in clsMoveObj::mSetAbsJumpMove
    /* 0x0CC */ NisVector3 move_pos_start;
    /* 0x0D8 */ char unk_0D8[0x0DC - 0x0D8];
    /* 0x0DC */ MoveCalculator::clsWAcceleJumpCalculator move_calculator;
}; // size = 0xF8

struct __cppobj clsMoveObj_vtbl {
    /* 0x00 */ void (*D0)(clsMoveObj*, bool dealloc);
    /* 0x08 */ s32 (*mGetObjType)(clsMoveObj*);
    /* 0x10 */ void (*mUpdate)(clsMoveObj*, s32, s32);
    /* 0x18 */ void (*mGetPosBase)(clsMoveObj*, NisVector4*);
    /* 0x20 */ void (*mSetMove)(clsMoveObj*, f32, f32, f32, f32);
    /* 0x28 */ void (*mSetPos0FEvent)(clsMoveObj*);
};

class __cppobj Anm::clsList {
    /* 0x00 */ void* prev;
    /* 0x08 */ void* next;
}; // size = 0x10

class __cppobj Anm::clsTree : Anm::clsList {
    /* 0x10 */ void* parent;
    /* 0x18 */ void* child;
}; // size = 0x20

struct __cppobj stcDrawInfo {
    /* 0x00 */ Anm::clsPlayTask* play_task;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ char unk14[0x40 - 0x14];
}; // size >= 0x40

class __cppobj Anm::clsInheritData {
    /* 0x00 */ NisMatrix33 matrix;
    /* 0x24 */ u8 colours[5][4];
    /* 0x38 */ bool is_default_colour; // ? true if colour != 0xFF808080
    /* 0x39 */ bool unk_39;
    /* 0x3A */ char unk3A[0x40 - 0x3A];
}; // size >= 0x40

enum clsTraceObj::eROTATE_ORDER {

};

class __cppobj clsTraceObj : clsMoveObj, Anm::clsTree {
    /* 0x118 */ f32 trace_start_x;
    /* 0x11C */ f32 trace_start_y;
    /* 0x120 */ f32 trace_start_z;
    /* 0x124 */ char unk124[0x128 - 0x124];
    /* 0x128 */ clsTransferPoint__f32_3 transfer_point1;
    /* 0x164 */ clsTransferPoint__f32_3 transfer_point2;
    /* 0x1A0 */ clsTraceObj::eROTATE_ORDER rotate_order;
    /* 0x1A4 */ s16 unk_1A4;
}; // size >= 0x1A8

struct __cppobj clsTraceObj_vtbl {
    void (*D0)(clsTraceObj*, bool dealloc);
    s32 (*mGetObjType)(clsTraceObj*);
    void (*mUpdate)(clsTraceObj*, s32, s32);
    void (*mGetPosBase)(clsTraceObj*, NisVector4*);
    void (*mSetMove)(clsTraceObj*, f32, f32, f32, f32);
    void (*mSetPos0FEvent)(clsTraceObj*);
    void (*mClearTrace)(clsTraceObj*);
    void (*NullSub1)(clsTraceObj*);
    void (*NullSub2)(clsTraceObj*);
    NisVector4* (*mGetExTraceScale)(clsTraceObj*, NisVector4*);
    NisVector4* (*mGetExTraceDirection)(clsTraceObj*, NisVector4*);
    void (*mExTraceScaleChanged)(clsTraceObj*);
    void (*mExTraceDirectionChanged)(clsTraceObj*);
};

struct __cppobj AnimeFileHeader {
    /* 0x00 */ s32 tables_size;
    /* 0x04 */ s32 textures_size;
    /* 0x08 */ s32 num_sheets;
    /* 0x0C */ s32 num_palettes;
}; // size = 0x10

struct __cppobj AnimeFileSubHeader {
    /* 0x00 */ s32 num_na1;
    /* 0x04 */ char unk04[0x10 - 0x04];
}; // size = 0x10

struct __cppobj AnimeFilePaletteHeader {
    /* 0x00 */ u8 type; // only type 0 and 9 support, 9 = palette
    /* 0x01 */ char unk01[0x04 - 0x01];
    /* 0x04 */ s16 width;
    /* 0x06 */ s16 height;
    /* 0x08 */ char unk08[0x0C - 0x08];
    /* 0x0C */ s32 offset;
}; // size = 0x10

struct __cppobj AnimeFileSheetHeader {
    /* 0x00 */ u8 type; // only type 0 and 9 support, 9 = palette
    /* 0x01 */ char unk01[0x04 - 0x01];
    /* 0x04 */ s16 width;
    /* 0x06 */ s16 height;
    /* 0x08 */ char unk08[0x0C - 0x08];
    /* 0x0C */ s32 offset;
}; // size = 0x10

struct __cppobj stcNa1Format {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 table0_count;
    /* 0x04 */ s16 layer_count;
    /* 0x06 */ s16 key_info_count;
    /* 0x08 */ s16 palette_count;
    /* 0x0A */ s16 sheet_count;
    /* 0x0C */ s16 sprite_count;
    /* 0x0E */ s16 table6_count;
    /* 0x10 */ s16 table7_count;
    /* 0x12 */ s16 table8_count;
    /* 0x14 */ s16 event_count;
    /* 0x16 */ char pad[0x2];
    /* 0x18 */ s32 table0_offset;
    /* 0x1C */ s32 layer_offset;
    /* 0x20 */ s32 key_info_offset;
    /* 0x24 */ s32 palette_offset;
    /* 0x28 */ s32 sheet_offset;
    /* 0x2C */ s32 sprite_offset;
    /* 0x30 */ s32 table6_offset;
    /* 0x34 */ s32 table7_offset;
    /* 0x38 */ s32 table8_offset;
    /* 0x3C */ s32 event_offset;
}; // size = 0x40

struct __cppobj Na1FileFormat {
    /* 0x00 */ s32 size;
    /* 0x04 */ stcNa1Format na1;
}; // size = 0x44

struct __cppobj Na1Table0 {
    /* 0x00 */ s16 seq_id;
    /* 0x02 */ s16 layer_index;
}; // size = 0x4

// table 1
struct __cppobj clsNa1Format::LYR_INFO {
    /* 0x00 */ s32 file_id;
    /* 0x04 */ char unk04[0x08 - 0x04];
    /* 0x08 */ s16 key_index;
    /* 0x0A */ s16 num_keys;
    /* 0x0C */ s16 start_layer;
    /* 0x0E */ s16 next_layer;
}; // size = 0x10

// table 2
struct __cppobj clsNa1Format::KEY_INFO {
    /* 0x00 */ s16 frame;
    /* 0x02 */ u8 unk_02; // Anm::clsPlayManager::Skip, values 0 - 5, if set to >= 2 wait the animation
    /* 0x03 */ u8 unk_03; // Anm::clsPlayThread::EventCheck
    /* 0x04 */ char unk04[0x0A - 0x04];
    /* 0x0A */ s16 event_index;
}; // size = 0x0C

// table 5
struct __cppobj clsNa1Format::_SPR_DATA {
    /* 0x00 */ char unk00[0x12 - 0x00];
}; // size = 0x12

// table 9
struct __cppobj clsNa1Format::EVT_DATA {
    /* 0x00 */ char unk00[0x04 - 0x00];
}; // size = 0x04

struct __cppobj clsNa1Format::_ANM_DATA_FLOAT {
    /* 0x00 */ char unk00[0x20 - 0x00];
}; // size >= 0x20

struct __cppobj clsNa1Format::_POS_DATA {
    /* 0x00 */ char unk00[0x14 - 0x00];
}; // size >= 0x14

struct __cppobj clsNa1Format::_COL_DATA {
    /* 0x00 */ char unk00[0x14 - 0x00];
}; // size = 0x14

class __cppobj clsNa1Format {
    /* 0x00 */ stcNa1Format* raw_fmt_p;
    /* 0x08 */ stcNa1Format raw_fmt;
    /* 0x48 */ Na1Table0* table0;
    /* 0x50 */ clsNa1Format::LYR_INFO* layers;
    /* 0x58 */ clsNa1Format::KEY_INFO* key_infos;
    /* 0x60 */ AnimeFilePaletteHeader* palettes;
    /* 0x68 */ AnimeFileSheetHeader* sheets;
    /* 0x70 */ clsNa1Format::_SPR_DATA* sprites;
    /* 0x78 */ void* table6;
    /* 0x80 */ void* table7;
    /* 0x88 */ void* table8;
    /* 0x90 */ clsNa1Format::EVT_DATA* events;
    /* 0x98 */ NisGraphicsTexture** sheet_textures; // count pointers
    /* 0xA0 */ NisGraphicsTexture** palette_textures; // count pointers
    /* 0xA8 */ AnimeFileSheetHeader* sheet_headers;
    /* 0xB0 */ AnimeFilePaletteHeader* palette_headers;
    /* 0xB8 */ void* table3_buffer2; // 0x400 * count
}; // size = 0xC0

struct __cppobj Anm::stcDrawBufferData {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18

struct __cppobj Anm::stcDrawBuffer_ {
    /* 0x00 */ char unk00[0xC0 - 0x00];
}; // size = 0xC0

class __cppobj Anm::clsAnimeFileTable {
    /* 0x00 */ void* tables_buffer;
    /* 0x08 */ clsNa1Format* na1_formats;
    /* 0x10 */ s32 num_na1_formats;
    /* 0x14 */ char unk14[0x20 - 0x14];
    /* 0x20 */ void* texture_data_buffer;
    /* 0x28 */ AnimeFileSheetHeader* sheet_headers;
    /* 0x30 */ AnimeFilePaletteHeader* palette_headers;
    /* 0x38 */ s16 status;
    /* 0x40 */ clsFileBase* file;
    /* 0x48 */ char unk48[0x50 - 0x48];
    /* 0x50 */ void* decompressed_buffer;
    /* 0x58 */ char name[64];
    /* 0x98 */ AnimeFileHeader anime_header;
}; // size = 0xA8

class __cppobj Anm::clsGroupData {
    /* 0x00 */ u16 flags; // 0x8000 is group view, 0x7FFF the id/index?
    /* 0x02 */ s16 file_id;
    /* 0x04 */ s32 depth_offset;
    /* 0x08 */ s16 palette_index;
    /* 0x0A */ s16 palette_offset;
}; // size = 0x0C

class __cppobj Anm::clsIdTable {
    /* 0x000 */ Anm::clsGroupData groups[31];
    /* 0x174 */ char unk174[0x180 - 0x174];
}; // size >= 0x180

class __cppobj Anm::clsTree__clsRectArea {
    /* 0x00 */ Anm::clsRectArea* prev;
    /* 0x08 */ Anm::clsRectArea* next;
    /* 0x10 */ Anm::clsRectArea* parent;
    /* 0x18 */ Anm::clsRectArea* child;
}; // size = 0x20

class __cppobj Anm::clsRectArea : Anm::clsTree__clsRectArea {
    /* 0x20 */ char unk20[0x40 - 0x20];
}; // size >= 0x40

class __cppobj Anm::clsListTableControl__Anm_clsRectArea {
        /* 0x00 */ s32 num_elements;
        /* 0x04 */ s32 max_elements;
        /* 0x08 */ Anm::clsRectArea* buffer; // max_elements * sizeof(Anm::clsPlayThread)
        /* 0x10 */ Anm::clsRectArea** buffer_ptrs; // (max_elements + 1) * sizeof(ptr)
        /* 0x18 */ Anm::clsRectArea* prev;
        /* 0x20 */ Anm::clsRectArea* next;
    }; // size = 0x28

class __cppobj Anm::clsTree__clsPlayThread {
    /* 0x00 */ Anm::clsPlayThread* prev;
    /* 0x08 */ Anm::clsPlayThread* next;
    /* 0x10 */ Anm::clsPlayThread* parent;
    /* 0x18 */ Anm::clsPlayThread* child;
}; // size = 0x20

class __cppobj Anm::clsPlayThread : Anm::clsTree__clsPlayThread {
    /* 0x20 */ clsNa1Format::LYR_INFO* layer_info;
    /* 0x28 */ clsNa1Format::KEY_INFO* key_info;
    /* 0x30 */ Anm::clsPlayTask* event_task;
    /* 0x38 */ Anm::clsGroupData* group_data;
    /* 0x40 */ clsNa1Format* na1;
    /* 0x48 */ char unk48[0x50 - 0x48];
    /* 0x50 */ s32 file_table_index;
    /* 0x54 */ char unk54[0x58 - 0x54];
}; // size = 0x58

class __cppobj Anm::clsListTableControl__clsPlayThread {
    /* 0x00 */ s32 num_elements;
    /* 0x04 */ s32 max_elements;
    /* 0x08 */ Anm::clsPlayThread* buffer; // max_elements * sizeof(Anm::clsPlayThread)
    /* 0x10 */ Anm::clsPlayThread** buffer_ptrs; // (max_elements + 1) * sizeof(ptr)
    /* 0x18 */ Anm::clsPlayThread* prev;
    /* 0x20 */ Anm::clsPlayThread* next;
}; // size = 0x28

class __cppobj Anm::clsTree__clsPlayTask {
    /* 0x00 */ Anm::clsPlayTask* prev;
    /* 0x08 */ Anm::clsPlayTask* next;
    /* 0x10 */ Anm::clsPlayTask* parent;
    /* 0x18 */ Anm::clsPlayTask* child;
}; // size = 0x20

class __cppobj Anm::clsPlayTask : Anm::clsTree__clsPlayTask {
    /* 0x20 */ clsNa1Format::_SPR_DATA* sprite_data;
    /* 0x28 */ s32 frame;
    /* 0x2C */ char unk2C[0x30 - 0x2C];
    /* 0x30 */ s32 speed;
    /* 0x34 */ s16 draw_level;
    /* 0x36 */ char unk36[0x38 - 0x36];
    /* 0x38 */ bool is_group_view; // set in Anm::clsPlayManager::SetView
    /* 0x39 */ bool unk_39; // set in Anm::clsPlayManager::Skip if key_info->unk_02 == 3 or 4
    /* 0x3A */ u8 palette_index;
    /* 0x3B */ u8 palette_offset;
    /* 0x3C */ char unk3C[0x3E - 0x3C];
    /* 0x3E */ s16 anime_table_index;
    /* 0x40 */ s32 speed_mask;
    /* 0x44 */ char unk44[0x48 - 0x44];
    /* 0x48 */ Anm::clsPlayThread* thread1;
    /* 0x50 */ Anm::clsPlayThread* playing_threads; // currently playing? set in Anm::clsPlayTask::Play
    /* 0x58 */ clsNa1Format::KEY_INFO* key_info1;
    /* 0x60 */ clsNa1Format* na1;
    /* 0x68 */ Na1Table0* table0;
    /* 0x70 */ clsNa1Format::KEY_INFO* key_info2;
    /* 0x78 */ Anm::clsIdTable* id_table;
    /* 0x80 */ Anm::clsPlayThread* thread3;
}; // size = 0x88

class __cppobj Anm::clsListTableControl__clsPlayTask {
    /* 0x00 */ s32 num_elements;
    /* 0x04 */ s32 max_elements;
    /* 0x08 */ Anm::clsPlayTask* buffer; // max_elements * sizeof(Anm::clsPlayThread)
    /* 0x10 */ Anm::clsPlayTask** buffer_ptrs; // (max_elements + 1) * sizeof(ptr)
    /* 0x18 */ Anm::clsPlayTask* head;
    /* 0x20 */ Anm::clsPlayTask* tail;
}; // size = 0x28

class __cppobj Anm::clsListTableControl__Anm_clsPlayManager3D {
    /* 0x00 */ s32 num_elements;
    /* 0x04 */ s32 max_elements;
    /* 0x08 */ Anm::clsPlayManager3D* buffer; // max_elements * sizeof(Anm::clsPlayThread)
    /* 0x10 */ Anm::clsPlayManager3D** buffer_ptrs; // (max_elements + 1) * sizeof(ptr)
    /* 0x18 */ Anm::clsPlayManager3D* head;
    /* 0x20 */ Anm::clsPlayManager3D* tail;
}; // size = 0x28

class __cppobj Anm::clsTree__Anm_clsPlayManager {
    /* 0x00 */ Anm::clsPlayManager* prev;
    /* 0x08 */ Anm::clsPlayManager* next;
    /* 0x10 */ Anm::clsPlayManager* parent;
    /* 0x18 */ Anm::clsPlayManager* child;
}; // size = 0x20

class __cppobj Anm::clsPlayManager : Anm::clsTree__Anm_clsPlayManager {
    /* 0x020 */ s16 anime_type;
    /* 0x022 */ s16 sequence_id;
    /* 0x024 */ u8 palette_index;
    /* 0x025 */ s8 palette_offset;
    /* 0x026 */ u8 draw_level;
    /* 0x028 */ s32 speed;
    /* 0x02C */ u32 colour; // RGBA
    /* 0x030 */ s32 screen_shift_x;
    /* 0x034 */ s32 screen_shift_z;
    /* 0x038 */ s32 screen_scale_x;
    /* 0x03C */ s32 screen_scale_z;
    /* 0x040 */ s32 screen_scale2_x;
    /* 0x044 */ s32 screen_scale2_z;
    /* 0x048 */ s32 screen_rot_x;
    /* 0x04C */ s32 screen_rot_z;
    /* 0x050 */ s16 screen_rot;
    /* 0x054 */ s32 depth_offset;
    /* 0x058 */ char unk058[0x05C - 0x058];
    /* 0x05C */ f32 draw_x;
    /* 0x060 */ f32 draw_y;
    /* 0x064 */ f32 draw_z;
    /* 0x068 */ char unk068[0x070 - 0x068];
    /* 0x070 */ Anm::clsPlayTask* play_task;
    /* 0x078 */ Nmpl::Core::CList* time_event_list;
    /* 0x080 */ Anm::clsIdTable id_table;
    /* 0x200 */ char unk200[0x208 - 0x200];
    /* 0x208 */ s32 unk_208;
    /* 0x20C */ char unk20C[0x210 - 0x20C];
    /* 0x210 */ s32 blend;
    /* 0x214 */ char unk214[0x218 - 0x214];
}; // size >= 0x218

class __cppobj Anm::clsPlayManager3D : Anm::clsPlayManager {
    /* 0x218 */ NisMatrix44 draw_mtx;
    /* 0x258 */ NisVector4 pos;
    /* 0x268 */ NisVector4 unk_268;
    /* 0x278 */ NisVector4 unk_278;
    /* 0x288 */ s16 rotX;
    /* 0x28A */ s16 rotY;
    /* 0x28C */ s16 rotZ;
    /* 0x28E */ s16 scaleX;
    /* 0x290 */ s16 scaleY;
    /* 0x292 */ s16 scaleZ;
    /* 0x294 */ f32 shadow_width;
    /* 0x298 */ f32 shadow_height;
    /* 0x29C */ char unk29C[0x2A0 - 0x29C];
    /* 0x2A0 */ f32 height;
    /* 0x2A4 */ s32 parent_effect;
    /* 0x2A8 */ s16 parent_rot_order;
    /* 0x2AA */ bool is_2d;
    /* 0x2AB */ char unk2AB[0x2B0 - 0x2AB];
}; // size = 0x2B0

class __cppobj Anm::clsPlayEvent {
    /* 0x00 */ Nmpl::Core::CList list;
    /* 0x10 */ s32 event_id;
    /* 0x14 */ s16 max_frames; // make the event happen over this many frames
    /* 0x16 */ s16 frames; // current frame
    /* 0x18 */ s32 start_value;
    /* 0x1C */ s32 end_value;
    /* 0x20 */ Anm::clsPlayManager3D* play_manager;
}; // size = 0x28

class __cppobj Anm::clsTableControl__Anm_clsPlayEvent {
    /* 0x00 */ s32 num_elements;
    /* 0x04 */ s32 num_max_elements;
    /* 0x08 */ Anm::clsPlayEvent* buffer; // max_elements * sizeof(Anm::clsPlayEvent)
    /* 0x10 */ Anm::clsPlayEvent** pointers; // (max_elements + 1) * sizeof(ptr)
}; // size = 0x18

class __cppobj Anm::clsPlayControl {
    /* 0x00 */ Anm::clsListTableControl__Anm_clsPlayManager3D control_managers;
    /* 0x28 */ Anm::clsListTableControl__clsPlayTask control_tasks;
    /* 0x50 */ Anm::clsListTableControl__clsPlayThread contol_threads;
    /* 0x78 */ Anm::clsListTableControl__Anm_clsRectArea control_rect_areas;
    /* 0xA0 */ char unkA0[0xB0 - 0xA0];
}; // size = 0xB0

class __cppobj CHAR_3D_OBJECT {
    /* 0x000 */ EffectWork* prev;
    /* 0x008 */ EffectWork* next;
    /* 0x010 */ s32 in_use;
    /* 0x014 */ f32 trace_pos_x;
    /* 0x018 */ f32 trace_pos_y;
    /* 0x01C */ f32 trace_pos_z;
    /* 0x020 */ char unk020[0x024 - 0x020];
    /* 0x024 */ FADECOL colour_fade;
    /* 0x084 */ FADECOL rotation_fade;
    /* 0x0E4 */ FADECOL scale_fade;
    /* 0x144 */ char unk144[0x148 - 0x144];
}; // size = 0x148

struct __cppobj NmtHeaderSub {
    /* 0x00 */ s32 file_offset;
    /* 0x04 */ u32 tex_info;
}; // size = 0x8

struct __cppobj NmtHeader {
    /* 0x00 */ s32 file_size;
    /* 0x04 */ s32 texture_count;
}; // size = 0x8 followed by texture_count * NmtHeaderSub

struct __cppobj obfFileHeader {
    /* 0x00 */ s32 file_size; // including header
    /* 0x04 */ u8 version;
    /* 0x08 */ s32 section_1_offset; // 
    /* 0x0C */ s32 section_2_offset; // assets
    /* 0x10 */ s32 section_3_offset; // models
    /* 0x14 */ s32 section_4_offset; // motion blocks
    /* 0x18 */ s32 section_5_offset; // transform indexes
    /* 0x1C */ s32 section_6_offset; // transform data
    /* 0x20 */ s32 section_7_offset; // groups
    /* 0x24 */ s32 section_8_offset; // primitives
    /* 0x28 */ s32 section_9_offset; // vertexes
    /* 0x2C */ s32 section_10_offset; // texture list
}; // size = 0x30

struct __cppobj obfSection1 {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 offsets[];
};

struct __cppobj obfSection1Entry {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 sec7_index;
}; // size = 0x4

// section 2 starts with a dword count, then followed by count * these entries
struct __cppobj obfSection2Entry {
    /* 0x00 */ s16 unk_00; // some kind of identifying id? given to C_NisModel::Setup
    /* 0x02 */ s16 section3_index;
}; // size = 0x4

// section 3 starts with a dword count, then followed by count * sizeof(s32) offsets
/* 
struct __cppobj obfSection3 {
    s32 count;
    s32 offsets[count];
};
*/

// section3 + offset is where the entry begins
struct __cppobj obfSection3Entry {
    /* 0x00 */ s32 num_motion_blocks;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ char unk10[0x11 - 0x10];
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ char unk12[0x1C - 0x12];
    // followed by num_motion_blocks * sizeof(s32) which index into section 4
}; // size = 0x1C

// section 4 starts with a dword count, then followed by count * sizeof(s32) offsets
/* 
struct __cppobj obfSection4 {
    s32 count;
    s32 offsets[count];
};
*/

// section4 + offset is where the entry begins
struct __cppobj obfSection4Entry {
    /* 0x00 */ s32 section7_index;
    /* 0x04 */ s16 unk_04;
    /* 0x08 */ s32 num_sub_entries;
    // followed by num_sub_entries * sizeof(s32)
}; // size = 0x0C

// section 7 starts with a dword count, then followed by count * sizeof(s32) offsets
/* 
struct __cppobj obfSection7 {
    s32 count;
    s32 offsets[count];
};
*/

// section7 + offset is where the entry begins
struct __cppobj obfSection7Entry {
    /* 0x00 */ s32 num_section8_indexes;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ char unk0C[0x0D - 0x0C];
    /* 0x0D */ u8 unk_0D;
    /* 0x0E */ char unk0E[0x1C - 0x0E];
    /* 0x1C */ s32 section8_indexes[];
}; // size = 0x1C + section8_indexes * sizeof(s32)

struct __cppobj obfSection8 {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 offsets[];
}; // size = 0x4 + num_entries * sizeof(s32)

// section8 + offset is where the entry begins
struct __cppobj obfSection8Entry {
    /* 0x00 */ s32 num_vertices;
    /* 0x04 */ s32 texture_index;
    /* 0x08 */ u8 colour_r;
    /* 0x09 */ u8 colour_g;
    /* 0x0A */ u8 colour_b;
    /* 0x0B */ u8 colour_a;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 colour_modulate; // scalar on colours
    /* 0x20 */ u8 blend;
    /* 0x21 */ u8 unk_21;
    /* 0x22 */ char unk22[0x26 - 0x22];
    /* 0x26 */ u8 cull;
    /* 0x27 */ char unk27[0x2A - 0x27];
    /* 0x2A */ u8 unk_2A;
    /* 0x2B */ char unk2B[0x30 - 0x2B];
    /* 0x30 */ s32 vertex_indexes[];
}; // size = 0x30 + num_vertices * sizeof(s32)

struct __cppobj obfSection9 {
    /* 0x00 */ s32 num_entries;
    /* 0x04 */ s32 offsets[];
}; // size = 0x4 + num_entries * sizeof(s32)

// made-up name, used when obf version <= 1
struct __cppobj obfSection9EntryV1 {
    /* 0x00 */ NisVector3 position; // this one doesn't invert y, the others do
    /* 0x0C */ NisVector4 colour;
    /* 0x1C */ NisVector2 uv;
}; // size = 0x24

// made-up name, used when obf version >= 2 and tag_obfFileTbl::unk_100 != 0
struct __cppobj obfSection9EntryV2 {
    /* 0x00 */ NisVector3 position;
    /* 0x0C */ NisVector3 normal;
    /* 0x18 */ NisVector3 unk_18;
    /* 0x24 */ NisVector4 colour;
    /* 0x34 */ NisVector2 uv;
}; // size = 0x3C

// made-up name, used when obf version >= 2 and tag_obfFileTbl::unk_100 == 0
struct __cppobj obfSection9EntryV3 {
    /* 0x00 */ NisVector3 position;
    /* 0x0C */ NisVector3 normal;
    /* 0x18 */ NisVector3 unk_18;
    /* 0x24 */ NisVector4 colour;
    /* 0x34 */ NisVector2 uv;
}; // size = 0x3C

struct __cppobj obfSection10 {
    /* 0x00 */ s32 num_entries;
    /* 0x04 */ s32 offsets[];
}; // size = 0x4 + num_entries * sizeof(s32)

struct __cppobj obfSection10Entry {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 file_type; // 0 = Txf0, texture header is 0x04 bytes from pointer
                             // 1 = Txp,  texture header is 0x04 bytes from pointer
                             // 2 = Nmt,  texture header is 0x14 bytes from pointer
}; // size = 0x4

struct __cppobj obfTextureHeaderTxf {
    /* 0x00 */ u8 format;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 width;
    /* 0x06 */ s16 height;
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unk_0A;
    /* 0x0C */ u32 data_size;
}; // size = 0x10

struct __cppobj obfTextureHeaderTxp {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
    /* 0x04 */ s16 num_palette_colours; // ?
    /* 0x06 */ char unk06[0x08 - 0x06];
    /* 0x08 */ s16 palette_width;
    /* 0x0A */ s16 palette_height;
    /* 0x0C */ u8 unk_0C; // is compressed? if 0, just memmove the data, otherwise copy it into a buffer
    /* 0x0D */ char unk0D[0x10 - 0x0D];
}; // size = 0x10

struct __cppobj tag_obfFileTbl_0D8 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03; // 1 if Txp, 0 otherwise
}; // size = 0x4

struct __cppobj AABB_Data {
    /* 0x00 */ NisVector4 corners[8];
}; // size = 0x80

struct __cppobj tag_obfFileTbl {
    /* 0x000 */ bool created; // set after C_Nis3DManager::Make
    /* 0x001 */ u8 unk_001;
    /* 0x002 */ u8 file_version; // from obfFileHeader::version
    /* 0x003 */ u8 unk_003;
    /* 0x004 */ obfFileHeader header;
    /* 0x034 */ char unk034[0x038 - 0x034];
    /* 0x038 */ void* buffer; // minus section 10
    /* 0x040 */ s32 section_1_count;
    /* 0x048 */ void* section_1;
    /* 0x050 */ s32 section_2_count;
    /* 0x058 */ obfSection2Entry* section_2;
    /* 0x060 */ s32 section_3_count;
    /* 0x068 */ void* section_3; // see obfSection3
    /* 0x070 */ s32 section_4_count;
    /* 0x078 */ void* section_4;
    /* 0x080 */ s32 section_5_count;
    /* 0x088 */ void* section_5;
    /* 0x090 */ s32 section_6_count;
    /* 0x098 */ void* section_6;
    /* 0x0A0 */ s32 section_7_count;
    /* 0x0A8 */ void* section_7;
    /* 0x0B0 */ s32 section_8_count;
    /* 0x0B8 */ void* section_8;
    /* 0x0C0 */ s32 num_vertices;
    /* 0x0C8 */ obfSection9* section_9;
    /* 0x0D0 */ s32 section_10_count;
    /* 0x0D4 */ s32 texture_load_count;
    /* 0x0D8 */ tag_obfFileTbl_0D8* section_10_entries;
    /* 0x0E0 */ NisGraphicsTexture** section_10_textures;
    /* 0x0E8 */ NisGraphicsVertexBuffer* graphics_vertex_buffer; // C_Nis3DManager::FixVertexData
    /* 0x0F0 */ void* tmp_vertex_buffer; // C_Nis3DManager::FixVertexData
    /* 0x0F8 */ s32 graphics_vertex_buffer_allocated;
    /* 0x0FC */ char unk0FC[0x100 - 0x0FC];
    /* 0x100 */ s32 use_smaller_vertex; // forced to 0, V2 if != 0, V2 if == 0
    /* 0x104 */ s32 delay_unload;
    /* 0x108 */ VertexBuffer_Data* vertex_buffer_data;
    /* 0x110 */ AABB_Data* aabb_data;
}; // size = 0x118

struct __cppobj ITEMSYMBOL_STATUS {
    /* 0x00 */ s16 type;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
}; // size = 0x6

// made-up name, used when obf version <= 1
struct VertexV1 {
    /* 0x00 */ NisVector3 position;
    /* 0x0C */ f32 unk_18;
    /* 0x10 */ u32 colour;
    /* 0x14 */ NisVector2 uv;
}; // size = 0x1C

// made-up name, used when obf version >= 2 and tag_obfFileTbl::unk_100 != 0
struct VertexV2 {
    /* 0x00 */ NisVector3 position;
    /* 0x0C */ u32 colour;
    /* 0x10 */ NisVector2 uv;
}; // size = 0x18

// made-up name, used when obf version >= 2 and tag_obfFileTbl::unk_100 == 0
struct VertexV3 {
    /* 0x00 */ NisVector3 position;
    /* 0x0C */ NisVector3 normal;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ u32 colour;
    /* 0x20 */ NisVector2 uv;
}; // size = 0x28

class __cppobj NisGraphicsVertexBuffer {
    /* 0x00 */ void* buffer;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 size;
    /* 0x10 */ s32 allocated;
    /* 0x14 */ char unk14[0x18 - 0x14];
}; // size = 0x18

class __cppobj GraphRenderState {
    /* 0x00 */ u8 unk_00; // used to set Nmpl::Gra::Renderer::CGraRenderStateBase_depth::depth_unk_4_5
    /* 0x01 */ u8 depth_write_mask;
    /* 0x02 */ u8 depth_func;
    /* 0x03 */ u8 unk_03; // used to set Nmpl::Gra::Renderer::CGraRenderStateBase_04::unk_2_3
    /* 0x04 */ char unk04[0x06 - 0x04];
    /* 0x06 */ u8 front_face;
    /* 0x07 */ u8 cull;
}; // size >= 0x08

class __cppobj GraphPrimitiveData {
    /* 0x00 */ GraphRenderState render_state;
    /* 0x08 */ char unk08[0x10 - 0x08];
    /* 0x10 */ NisGraphicsTexture* texture;
    /* 0x18 */ char unk18[0x20 - 0x18];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ char unk24[0x28 - 0x24];
    /* 0x28 */ VertexV3* vertex;
    /* 0x30 */ s32 num_vertices;
    /* 0x34 */ Nmpl::Gra::EPrimitiveType primitive_type;
    /* 0x35 */ u8 shader_index;
    /* 0x36 */ char unk36[0x38 - 0x36];
    /* 0x38 */ NisMatrix44* transposed_view_projection_matrix;
    /* 0x40 */ NisMatrix44* unk_40;
    /* 0x48 */ NisMatrix44* unk_48;
    /* 0x50 */ s16* index_buffer;
    /* 0x58 */ VertexBuffer_Data* vertex_buffer_data;
    /* 0x60 */ s32 graphics_vertex_buffer_index;
    /* 0x64 */ f32 draw_offset_z;
    /* 0x68 */ f32 colour_r;
    /* 0x6C */ f32 colour_b;
    /* 0x70 */ f32 colour_g;
    /* 0x74 */ f32 colour_a;
    /* 0x78 */ f32 unk_78;
    /* 0x7C */ f32 unk_7C;
    /* 0x80 */ NisMatrix44* camera_eye_matrix;
    /* 0x88 */ f32 unk_88;
    /* 0x8C */ f32 unk_8C;
    /* 0x90 */ f32 unk_90;
    /* 0x94 */ f32 unk_94;
    /* 0x98 */ u64 sort_key;
    /* 0xA0 */ f32 depth;
    /* 0xA4 */ f32 unk_A4;
    /* 0xA8 */ char unkA8[0xB0 - 0xA8];
    /* 0xB0 */ AABB_Data* aabb;
    /* 0xB8 */ clsAnime* anime;
    /* 0xC0 */ char unkC0[0xD8 - 0xC0];
}; // size = 0xD8

struct __cppobj stcNisMotionRenderParam {
    /* 0x00 */ s32 frame;
    /* 0x04 */ s32 palette_index;
    /* 0x08 */ s32 draw_offset_z;
    /* 0x0C */ f32 colour_r;
    /* 0x10 */ f32 colour_g;
    /* 0x14 */ f32 colour_b;
    /* 0x18 */ f32 colour_a;
    /* 0x1C */ f32 unk_1C; // C_NisModel::unk1D8[0]
    /* 0x20 */ s32 unk_20; // C_NisModel::unk1D8[4]
    /* 0x24 */ s32 blend;
    /* 0x28 */ s32 draw_level;
    /* 0x2C */ s32 unk_2C; // C_NisModel::unk206
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ bool light_enable;
    /* 0x35 */ u8 frame2; // same as 0x00 frame
}; // size >= 0x38

class __cppobj C_NisMotion {
    /* 0x000 */ Nmpl::Core::CList list;
    /* 0x010 */ obfSection3Entry* section3_entry;
    /* 0x018 */ s32 obf_index;
    /* 0x020 */ tag_obfFileTbl* obf_file;
    /* 0x028 */ obfSection7Entry* section7_entry;
    /* 0x030 */ obfSection4Entry* section4_entry;
    /* 0x038 */ char unk038[0x040 - 0x038];
    /* 0x040 */ NisMatrix44 unk_040;
    /* 0x080 */ NisMatrix44 unk_080;
    /* 0x0C0 */ char unk0C0[0x100 - 0x0C0];
    /* 0x100 */ NisMatrix44 unk_100;
    /* 0x140 */ NisMatrix44 unk_140;
    /* 0x180 */ bool in_use;
    /* 0x181 */ char unk181[0x183 - 0x181];
    /* 0x183 */ u8 unk_183;
    /* 0x184 */ char unk184[0x194 - 0x184];
    /* 0x194 */ s32 unk_194; // obfSection7Entry.unk_04
    /* 0x198 */ s32 unk_198; // obfSection7Entry.unk_08
    /* 0x19C */ s16 unk_19C; // obfSection7Entry.unk_0D
    /* 0x19E */ s16 unk_19E;
    /* 0x1A0 */ s32 num_section7_sub_entries; // number of section 8 indexes in the section 7 entry
    /* 0x1A4 */ s32 total_num_section8_entries; // for every sec8 index in sec7, add the number of its entries, possibly indexes into the vertex array, so total number of vertices
    /* 0x1A8 */ char unk1A8[0x1B0 - 0x1A8];
}; // size = 0x1B0

class __cppobj C_Nis3DManager {
    /* 0x00000 */ C_NisMotion* motion_block_buffer; // size 0x10C800, 0x10C800 / sizeof(C_NisMotion) = 2545 elements
    /* 0x00008 */ s32 num_motion_blocks;
    /* 0x0000C */ s32 max_motion_blocks;
    /* 0x00010 */ s32 motion_block_size;
    /* 0x00014 */ s32 unk_00014;
    /* 0x00018 */ s32 unk_00018;
    /* 0x0001C */ char unk0001C[0x00028 - 0x0001C];
    /* 0x00028 */ NisGraphicsVertexBuffer* vertex_buffers[1024]; // unk size, maybe smaller
    /* 0x02028 */ NisGraphicsVertexBuffer* index_buffer1;
    /* 0x02030 */ s16* index_buffer1_write_buffer;
    /* 0x02038 */ s32 frame_index; // incremented every frame mod 3, 3 frames in flight?
    /* 0x0203C */ char unk0203C[0x02040 - 0x0203C];
    /* 0x02040 */ NisGraphicsVertexBuffer* index_buffers[3];
    /* 0x02058 */ s16* index_buffers_write_buffers[3];
    /* 0x02070 */ obfFileHeader obf_headers[1024];
    /* 0x0E070 */ obfSection10* section_10_buffers[1024];
    /* 0x10070 */ s32 unk_10070[1024];
    /* 0x11070 */ s32 file_load_steps[1024]; // unk size, >= 273
    /* 0x12070 */ tag_obfFileTbl obfs[1024];
    /* 0x58070 */ s32 num_obfs_waiting_unload;
    /* 0x58074 */ s32 obf_indexes_unload_frames[1024]; // number of frames until this obf is unloaded (init'd to 3, frames in flight)
    /* 0x59074 */ s32 obf_indexes_waiting_unload[1024];
    /* 0x5A078 */ tag_obfFileTbl obfs_waiting_unload[1024];
    /* 0xA0078 */ s32 init_once;
    /* 0xA007C */ char unkA007C[0xA0080 - 0xA007C];
}; // size = 0xA0080

class __cppobj Anm::clsTableControl__Anm_clsPlayManager3D {
    /* 0x00 */ s32 num_elements;
    /* 0x04 */ s32 max_elements;
    /* 0x08 */ Anm::clsPlayManager3D* buffer;
    /* 0x10 */ Anm::clsPlayManager3D** buffer_ptrs;
}; // size = 0x18

struct stcHitArea_32 {
    /* 0x000 */ s16 unk_00;
    /* 0x004 */ s32 unk_04[32][2];
    /* 0x104 */ s16 unk_104;
}; // size >= 0x108

enum NPC_TYPE {
    Player = 0,
    Enemy = 1,
    NeutralYellow2 = 2, // yellow hp, Enemy don't attack
    NeutralYellow3 = 3, // yellow hp, Enemy do attack
    NeutralBlue4 = 4, // blue hp, Enemy do attack
    NeutralBlueGreen5 = 5, // blue to green gradient hp, Enemy don't attack
    NeutralBlueGreen6 = 6, // blue to green gradient hp, Enemy don't attack
};

enum ChrAnmObj::eANIME_FILE_TYPE {

};

enum ChrAnmObj::eSHADOW_MODE {

};

class __cppobj ChrAnmObj : clsTraceObj {
    /* 0x1A8 */ char unk1A8[0x1C0 - 0x1A8];
    /* 0x1C0 */ Anm::clsPlayManager3D* play_manager;
    /* 0x1C8 */ CHAR_3D_OBJECT* char_3d_obj;
    /* 0x1D0 */ s32 load_wait_index;
    /* 0x1D4 */ s32 weapon_load_wait_indexes[2];
    /* 0x1DC */ ChrAnmObj::eANIME_FILE_TYPE anm_file_type1;
    /* 0x1E0 */ s16 load_wait_anm_sequence_id; // set to anm id / 10 in ChrAnmObj::mSetSeq if load_wait_index is != -1
    /* 0x1E2 */ char unk1E2[0x1F0 - 0x1E2];
    /* 0x1F0 */ stcStatus* status;
    /* 0x1F8 */ char unk1F8[0x1FC - 0x1F8];
    /* 0x1FC */ s32 equipped_weapon_index;
    /* 0x200 */ f32 draw_offset_z_imm; // these added together in ChrAnmObj::zplusImmediate
    /* 0x204 */ f32 draw_offset_z;
    /* 0x208 */ ChrAnmObj::eSHADOW_MODE shadow_mode;
    /* 0x20C */ clsTransferPoint__f32_2 shadow_size;
    /* 0x23C */ char unk23C[0x254 - 0x23C];
    /* 0x254 */ u16 anm_format_num;
    /* 0x256 */ u16 anm_id;
    /* 0x258 */ u16 unit_id;
    /* 0x25A */ u16 palette;
    /* 0x25C */ char unk25C[0x25E - 0x25C];
    /* 0x25E */ s16 sequence_id1; // updated in ChrAnmObj::mUpdateMukiAnm
    /* 0x260 */ s16 sequence_id2;
    /* 0x262 */ s16 sequence_type;
    /* 0x264 */ char unk264[0x26C - 0x264];
    /* 0x26C */ s16 facing_degrees_26C; // ChrAnmObj::mSetMuki called from Script::clsScriptDecoder::CharChange
    /* 0x26E */ s16 facing_degrees_26E; // set in ChrAnmObj::mUpdateBaseMuki
    /* 0x270 */ s16 facing_degrees_270; // ChrAnmObj::mSetMuki, current or max turn frames
    /* 0x272 */ s16 facing_degrees_272; // ChrAnmObj::mSetMuki, current or max turn frames
    /* 0x274 */ s16 facing_degrees_274; // set in ChrAnmObj::mUpdateMukiAnm
    /* 0x276 */ s16 old_facing_degrees_26C; // ChrAnmObj::mSetMuki
    /* 0x278 */ s16 facing_degrees_278; // set in ChrAnmObj::mUpdateMukiAnm
    /* 0x27A */ char unk27A[0x28C - 0x27A];
    /* 0x28C */ s16 data_index;
    /* 0x28E */ s16 anm_format;
    /* 0x290 */ s16 unk_290; // clsCharacter::mLiftUp, facing_degrees_274 - facing_degrees_274
    /* 0x292 */ u8 unk_292; // ChrAnmObj::setview
    /* 0x293 */ u8 facing_mode;
    /* 0x294 */ bool is_active;
    /* 0x295 */ char unk295[0x298 - 0x295];
    /* 0x298 */ u8 equipped_weapon_type;
    /* 0x299 */ char unk299[0x29E - 0x299];
    /* 0x29E */ s16 character_holding_us; // index of the character holding us
    /* 0x2A0 */ s16 character_we_hold; // index of the character we're holding
    /* 0x2A2 */ s16 unk_2A2; // clsCharacter::mLiftUp
    /* 0x2A4 */ char unk2A4[0x2BC - 0x2A4];
    /* 0x2BC */ f32 unk_pos_x; // copied from pos in Script::Extend case 3
    /* 0x2C0 */ f32 unk_pos_y;
    /* 0x2C4 */ f32 unk_pos_z;
    /* 0x2C8 */ u16 panel_pos_x;
    /* 0x2CA */ u16 panel_pos_z;
    /* 0x2CC */ u16 index;
    /* 0x2CE */ char unk2CE[0x2D0 - 0x2CE];
    /* 0x2D0 */ FADECOL scale_fade;
    /* 0x330 */ f32 hit_area_x;
    /* 0x334 */ f32 hit_area_y;
    /* 0x338 */ f32 hit_area_z;
    /* 0x33C */ char unk33C[0x340 - 0x33C];
    /* 0x340 */ ChrAnmObj* trace_facing_anm_obj;
    /* 0x348 */ s32 trace_scale_enabled;
    /* 0x34C */ char unk34C[0x350 - 0x34C];
    /* 0x350 */ s16 facing_trace_val1;
    /* 0x352 */ char unk352[0x354 - 0x352];
    /* 0x354 */ s32 facing_trace_val2;
    /* 0x358 */ char unk358[0x364 - 0x358];
    /* 0x364 */ f32 size_x;
    /* 0x368 */ f32 size_z;
    /* 0x36C */ char unk36C[0x370 - 0x36C];
    /* 0x370 */ s32 depth_offset;
    /* 0x374 */ bool unk_374[16];
    /* 0x384 */ char unk384[0x388 - 0x384];
}; // size = 0x388

struct __cppobj ChrAnmObj_vtbl {
    void (*D0)(ChrAnmObj*, bool dealloc);
    s32 (*mGetObjType)(ChrAnmObj*);
    void (*mUpdate)(ChrAnmObj*, s32, s32);
    void (*mGetPosBase)(ChrAnmObj*, NisVector4*);
    void (*mSetMove)(clsMoveObj*, f32, f32, f32, f32);
    void (*mSetPos0FEvent)(ChrAnmObj*);
    void (*mClearTrace)(clsTraceObj*);
    void (*mSetPos0FTraceEvent)(ChrAnmObj*);
    void (*NullSub2)(void*);
    void (*mGetExTraceScale)(ChrAnmObj*);
    void (*mGetExTraceDirection)(clsTraceObj*);
    void (*mExTraceScaleChanged)(clsTraceObj*);
    void (*mExTraceDirectionChanged)(clsTraceObj*);
};

class __cppobj clsCharacter : ChrAnmObj {
    /* 0x388 */ Anm::clsPlayManager3D* status_icon_play_manager;
    /* 0x390 */ Anm::clsPlayManager3D* shop_icon_play_manager;
    /* 0x398 */ char unk398[0x3A8 - 0x398];
    /* 0x3A8 */ Anm::clsPlayManager3D* ai_icon_play_manager;
    /* 0x3B0 */ Anm::clsPlayManager3D* senator_icon_play_manager;
    /* 0x3B8 */ OBSTATUS* npc_senator; // is an npc senator if != 0
    /* 0x3C0 */ char unk3C0[0x3D0 - 0x3C0];
    /* 0x3D0 */ bool display_icon;
    /* 0x3D1 */ char unk3D1[0x3D8 - 0x3D1];
    /* 0x3D8 */ s32 event_id; // Script::clsScriptDecoder::TalkSet
    /* 0x3DC */ s16 unk_3DC; // Script::clsScriptDecoder::TalkSet
    /* 0x3DE */ char unk3DE[0x3E4 - 0x3DE];
    /* 0x3E4 */ s16 tactics_move_cost;
    /* 0x3E6 */ char unk3E6[0x3E8 - 0x3E6];
    /* 0x3E8 */ s16 move_route_x[64];
    /* 0x468 */ s16 move_route_z[64];
    /* 0x4E8 */ s16 distance_moved;
    /* 0x4EA */ s16 throw_range;
    /* 0x4EC */ char unk4EC[0x504 - 0x4EC];
    /* 0x504 */ s16 enemy_tk_status_index; // index into tk_status array
    /* 0x506 */ char unk506[0x514 - 0x506];
    /* 0x514 */ s16 geo_symobl_count;
    /* 0x516 */ char unk516[0x564 - 0x516];
    /* 0x564 */ s16 is_geo_symbol;
    /* 0x566 */ char unk566[0x568 - 0x566];
    /* 0x568 */ s16 geo_effects[32];
    /* 0x5A8 */ s16 num_geo_effects;
    /* 0x5AA */ s16 geo_type;
    /* 0x5AC */ s16 geo_effect; // -1 to get id
    /* 0x5AE */ char unk5AE[0x5BE - 0x5AE];
    /* 0x5BE */ s16 status_boost;
    /* 0x5C0 */ s16 talk_flag;
    /* 0x5C2 */ char unk5C2[0x5C5 - 0x5C2];
    /* 0x5C5 */ u8 operate_npc_type;
    /* 0x5C6 */ u8 num_times_moved_this_turn;
    /* 0x5C7 */ u8 unk_5C7; // needs to be >= 2 for Hit and Away to add move boost
    /* 0x5C8 */ char unk5C8[0x5F0 - 0x5C8];
    /* 0x5F0 */ u8 position_in_tower; // the position we're at in a tower
    /* 0x5F1 */ char unk5F1[0x5F4 - 0x5F1];
    /* 0x5F4 */ u8 stat_coefficient;
    /* 0x5F5 */ char unk5F5[0x5FB - 0x5F5];
    /* 0x5FB */ u8 attack_count;
    /* 0x5FC */ char unk5FC[0x601 - 0x5FC];
    /* 0x601 */ u8 shop_icon_sequence;
    /* 0x602 */ char unk602[0x603 - 0x602];
    /* 0x603 */ u8 ai_icon_sequence;
    /* 0x604 */ u8 senator_icon_sequence;
    /* 0x605 */ char unk605[0x610 - 0x605];
    /* 0x610 */ u8 percentage_max_hp_healed;
    /* 0x611 */ u8 numgcb; // set in Script::clsScriptDecoder::CharObjCollision
    /* 0x612 */ u8 unk_612; // set in Script::clsScriptDecoder::CharObjCollision, collision happened? object collision enabled?
    /* 0x613 */ char unk613[0x61C - 0x613];
    /* 0x61C */ bool is_magichange_weapon;
    /* 0x61D */ char unk61D[0x623 - 0x61D];
    /* 0x623 */ u8 num_times_magichange_ended;
    /* 0x624 */ s16 score;
    /* 0x626 */ char unk626[0x740 - 0x626];
    /* 0x740 */ s32 protect_count;
    /* 0x744 */ char unk744[0x750 - 0x744];
    /* 0x750 */ stcTreasurePoint* treasure_point;
    /* 0x758 */ char unk758[0x770 - 0x758];
    /* 0x770 */ s64 move_damage;
    /* 0x778 */ s64 move_damage_sp;
    /* 0x780 */ char unk780[0x782 - 0x780];
    /* 0x782 */ u8 move_bind_muki_code;
    /* 0x783 */ char unk783[0x7D0 - 0x783];
}; // size = 0x7D0

struct __cppobj clsCharacter_vtbl {
    void (*D0)(clsCharacter*, bool dealloc);
    s32 (*mGetObjType)(clsCharacter*);
    void (*mUpdate)(ChrAnmObj*, s32, s32);
    void (*mGetPosBase)(ChrAnmObj*, NisVector4*);
    void (*mSetMove)(clsMoveObj*, f32, f32, f32, f32);
    void (*mSetPos0FEvent)(ChrAnmObj*);
    void (*mClearTrace)(clsTraceObj*);
    void (*mSetPos0FTraceEvent)(ChrAnmObj*);
    void (*NullSub2)(void*);
    void (*mGetExTraceScale)(ChrAnmObj*);
    void (*mGetExTraceDirection)(clsTraceObj*);
    void (*mExTraceScaleChanged)(clsTraceObj*);
    void (*mExTraceDirectionChanged)(clsTraceObj*);
};

class __cppobj Priny {
    /* 0x00 */ clsCharacter* character1;
    /* 0x08 */ clsCharacter* character2;
    /* 0x10 */ char unk10[0x2C - 0x10];
    /* 0x2C */ f32 x;
    /* 0x30 */ f32 y;
    /* 0x34 */ f32 z;
    /* 0x38 */ char unk38[0x50 - 0x38];
}; // size >= 0x50

class __cppobj Bomb {
    /* 0x00 */ clsCharacter* character1;
    /* 0x08 */ clsCharacter* character2;
    /* 0x10 */ char unk10[0x1C - 0x10];
    /* 0x1C */ f32 x;
    /* 0x20 */ f32 y;
    /* 0x24 */ f32 z;
    /* 0x28 */ char unk28[0x38 - 0x28];
}; // size >= 0x38

class __cppobj C_Nis3DObject {
    /* 0x000 */ struct C_Nis3DObject_vtbl* __vftable;
    /* 0x008 */ f32 pos_x;
    /* 0x00C */ f32 pos_y;
    /* 0x010 */ f32 pos_z;
    /* 0x014 */ char unk014[0x018 - 0x014];
    /* 0x018 */ f32 rot_x;
    /* 0x01C */ f32 rot_y;
    /* 0x020 */ f32 rot_z;
    /* 0x024 */ char unk024[0x028 - 0x024];
    /* 0x028 */ f32 scale_x;
    /* 0x02C */ f32 scale_y;
    /* 0x030 */ f32 scale_z;
    /* 0x034 */ char unk034[0x038 - 0x034];
    /* 0x038 */ NisMatrix44 final_matrix; // rotated, scaled and translated
    /* 0x078 */ NisMatrix44 unk_078; // prev final_matrix
    /* 0x0B8 */ char unk0B8[0x0F8 - 0x0B8];
    /* 0x0F8 */ NisMatrix44 prev_final_matrix;
    /* 0x138 */ NisMatrix44 rotation_matrix;
    /* 0x178 */ NisMatrix44* unk_178;
    /* 0x180 */ s32 obf_table_index; // into obf_file_tbl1
    /* 0x184 */ s32 draw_offset_z; // set in EffectOffsetDrawZ as offset / -20
    /* 0x188 */ u8 palette_index;
    /* 0x189 */ bool unk_189;
    /* 0x18A */ bool textures_allocated;
    /* 0x18B */ bool light_enable;
    /* 0x18C */ f32 colour_r;
    /* 0x190 */ f32 colour_g;
    /* 0x194 */ f32 colour_b;
    /* 0x198 */ f32 colour_a;
    /* 0x19C */ s32 blend;
    /* 0x1A0 */ u8 draw_level; // must be less than 12
    /* 0x1A1 */ char unk1A1[0x1A8 - 0x1A1];
}; // size >= 0x1A8

struct __cppobj C_Nis3DObject_vtbl {
   /* 0x00 */ void (*D0)(C_Nis3DObject*, bool dealloc);
   /* 0x08 */ void (*Initialize)(C_Nis3DObject*);
   /* 0x10 */ s32 (*Setup)(C_Nis3DObject*, s32, s32);
   /* 0x18 */ s32 (*Setup_No)(C_Nis3DObject*, s32, s32);
   /* 0x20 */ void (*NullSub1)(C_Nis3DObject*);
   /* 0x28 */ void (*NullSub2)(C_Nis3DObject*);
};

class __cppobj C_NisModel : C_Nis3DObject {
    /* 0x1A8 */ tag_obfFileTbl* obf_file;
    /* 0x1B0 */ obfSection3Entry* section3_entry;
    /* 0x1B8 */ C_NisMotion* motion_blocks;
    /* 0x1C0 */ f32 frame;
    /* 0x1C4 */ f32 effect_play_speed;
    /* 0x1C8 */ s32 unk_1C8; // obfSection3Entry.unk_04
    /* 0x1CC */ char unk1CC[0x1CE - 0x1CC];
    /* 0x1CE */ bool is_active; // effect active
    /* 0x1CF */ char unk1CF[0x1D0 - 0x1CF];
    /* 0x1D0 */ s32 unk_1D0; // obfSection3Entry.unk_08
    /* 0x1D4 */ s32 unk_1D4; // obfSection3Entry.unk_0C
    /* 0x1D8 */ char unk1D8[0x1E0 - 0x1D8];
    /* 0x1E0 */ s16 unk_1E0; // obfSection3Entry.unk_11
    /* 0x1E4 */ f32 scale_local_x;
    /* 0x1E8 */ f32 scale_local_y;
    /* 0x1EC */ f32 scale_local_z;
    /* 0x1F0 */ char unk1F0[0x1F4 - 0x1F0];
    /* 0x1F4 */ f32 rotation_local_x; // local? as opposed to rot which is global?
    /* 0x1F8 */ f32 rotation_local_y;
    /* 0x1FC */ f32 rotation_local_z;
    /* 0x200 */ char unk200[0x204 - 0x200];
    /* 0x204 */ u8 rot_order1; // Script::clsScriptDecoder::EffectRotOrder: set when rot_order <= 5
    /* 0x205 */ u8 rot_order2; // Script::clsScriptDecoder::EffectRotOrder: set when rot_order > 5
    /* 0x206 */ char unk206[0x210 - 0x206];
    /* 0x210 */ s8 billboard_type;
    /* 0x211 */ char unk211[0x250 - 0x211];
}; // size = 0x250

struct __cppobj C_NisModel_vtbl {
   /* 0x00 */ void (*D0)(C_NisModel*, bool dealloc);
   /* 0x08 */ void (*Initialize)(C_NisModel*);
   /* 0x10 */ s32 (*Setup)(C_NisModel*, s32, s32);
   /* 0x18 */ s32 (*Setup_No)(C_NisModel*, s32, s32);
   /* 0x20 */ void (*Update)(C_NisModel*);
   /* 0x28 */ void (*Render)(C_NisModel*);
   /* 0x30 */ void (*UpdateFrame)(C_NisModel*);
   /* 0x38 */ void (*UpdateUvScroll)(C_NisModel*);
   /* 0x40 */ void (*UpdateMatrix)(C_NisModel*);
};

class __cppobj C_NisMesh : C_Nis3DObject {
    /* 0x1A8 */ tag_obfFileTbl* obf;
    /* 0x1B0 */ obfSection7Entry* section7;
    /* 0x1B8 */ NisGraphicsTexture** textures;
    /* 0x1C0 */ f32 unk_1C0;
    /* 0x1C4 */ f32 unk_1C4;
    /* 0x1C8 */ f32 unk_1C8; // from obfSection7Entry::unk_04
    /* 0x1CC */ f32 unk_1CC; // from obfSection7Entry::unk_08
    /* 0x1D0 */ s16 unk_1D0; // from obfSection7Entry::unk_0D
    /* 0x1D2 */ s16 unk_1D2;
    /* 0x1D4 */ char unk1D4[0x1D8 - 0x1D4];
}; // size = 0x1D8

struct __cppobj C_NisMesh_vtbl {
   /* 0x00 */ void (*D0)(C_NisMesh*, bool dealloc);
   /* 0x08 */ void (*Initialize)(C_NisMesh*);
   /* 0x10 */ s32 (*Setup)(C_NisMesh*, s32, s32);
   /* 0x18 */ s32 (*Setup_No)(C_NisMesh*, s32, s32);
   /* 0x20 */ void (*Update)(C_NisMesh*);
   /* 0x28 */ void (*Render)(C_NisMesh*);
   /* 0x30 */ void (*BackGroundUpdate)(C_NisMesh*);
};

enum Nmpl::Gra::Renderer::CGraRenderTargetBase::EColorSurfaceFormat {

};

enum Nmpl::Gra::Renderer::CGraRenderTargetBase::EDepthSurfaceFormat {

};

enum Nmpl::Gra::ETextureFormat {
    UNKNOWN_4_0       = (4 << 20) | 0,
    R8_UNORM_4_1      = (4 << 20) | 1,
    BC1_UNORM         = (4 << 20) | 2,
    UNKNOWN_4_3       = (4 << 20) | 3,

    UNKNOWN_8_0       = (8 << 20) | 0,
    R8_UNORM_8_1      = (8 << 20) | 1,
    BC2_UNORM         = (8 << 20) | 2,
    BC3_UNORM         = (8 << 20) | 3,
    UNKNOWN_8_4       = (8 << 20) | 4, 
    R8_UNORM_8_5      = (8 << 20) | 5,
    BC7_UNORM         = (8 << 20) | 6,

    UNKNOWN_32_0      = (32 << 20) | 0,
    B8G8R8A8_UNORM    = (32 << 20) | 1,
    R8G8B8A8_UNORM_2  = (32 << 20) | 2,
    R8G8B8A8_UNORM_3  = (32 << 20) | 3,
    R32_UINT          = (32 << 20) | 4,
    R8G8B8A8_UNORM_5  = (32 << 20) | 5, 
    R11G11B10_FLOAT   = (32 << 20) | 6,
    R10G10B10A2_UNORM = (32 << 20) | 7,  
    R32_FLOAT         = (32 << 20) | 8,  
    B8G8R8X8_UNORM    = (32 << 20) | 9, 
};

enum Nmpl::Gra::EPrimitiveType : u8 {
    
};

enum Nmpl::Gra::EMemoryLocale {
    
};

enum Nmpl::Gra::CGraTexBase::ETexMemOwn {
    
};

struct __cppobj Nmpl::Gra::CreateTexOption {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

class Microsoft::WRL::ComPtr__ID3D11Buffer {
    /* 0x00 */ ID3D11Buffer* ptr;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraVertexBuffer : Nmpl::Core::RefCountForIntrusivePtr, Nmpl::Gra::IGraLostDeviceResourceInterface {
    /* 0x28 */ s32 num_buffers;
    /* 0x2C */ s32 d3d11_buffer_index;
    /* 0x30 */ Nmpl::Gra::CGraVertexFormat* format;
    /* 0x38 */ void** buffer;
    /* 0x40 */ s64 size_bytes;
    /* 0x48 */ Nmpl::Gra::EMemoryLocale memory_locale;
    /* 0x4C */ char unk4C[0x50 - 0x4C];
    /* 0x50 */ s32 num_components;
    /* 0x58 */ ID3D11Buffer*** d3d11_buffers; // ptr to array of num_components Microsoft::WRL::ComPtr<ID3D11Buffer>
    /* 0x60 */ bool buffer_stored;
    /* 0x64 */ s32 num_vertices;
    /* 0x68 */ char unk68[0x70 - 0x68];
}; // size = 0x70

struct __cppobj Nmpl::Gra::CGraVertexBuffer_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraVertexBuffer*, bool dealloc);
};

class __cppobj Nmpl::Core::intrusive_ptr__CGraVertexBuffer {
    /* 0x00 */ Nmpl::Gra::CGraVertexBuffer* ptr;
}; // size = 0x8

class __cppobj VertexBuffer_Data {
    /* 0x00 */ Nmpl::Gra::CGraVertexBuffer* vertex_buffer;
}; // size >= 0x8

class __cppobj Nmpl::Core::Memory::CFreeList__CGraVertexBuffer {
    /* 0x00 */ Nmpl::Core::Memory::CFreeList__CGraVertexBuffer* next;
}; // size = 0x70

class __cppobj Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256_Holder {
    /* 0x0000 */ Nmpl::Gra::CGraVertexBuffer buffer[256];
    /* 0x7000 */ s32 num_allocated;
    /* 0x7004 */ char unk7004[0x7008 - 0x7004];
    /* 0x7008 */ Nmpl::Core::Memory::CFreeList__CGraVertexBuffer* free;
    /* 0x7010 */ Nmpl::Core::Memory::CFreeList__CGraVertexBuffer* next;
    /* 0x7018 */ char unk7018[0x7020 - 0x7018];
}; // size = 0x7020

class __cppobj Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256 {
    /* 0x0000 */ struct Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256_vtbl* __vftable;
    /* 0x0008 */ char unk0008[0x0010 - 0x0008];
    /* 0x0010 */ Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256_Holder* head;
    /* 0x0018 */ char unk0018[0x0020 - 0x0018];
    /* 0x0020 */ Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256_Holder holder;
}; // size = 0x7040 ?

struct Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256*, bool dealloc);
};

class __cppobj Nmpl::Core::Memory::CFreeListThreadSafe__CGraVertexBuffer_256 : Nmpl::Core::Memory::CFreeList__CGraVertexBuffer_256 {
    /* 0x7040 */ s32 unk_7040;
    /* 0x7044 */ char unk7044[0x7050 - 0x7044];
    /* 0x7050 */ s32 tls_slot;
};// size = 0x7060

class __cppobj Nmpl::Gra::CGraIndexBuffer : Nmpl::Core::RefCountForIntrusivePtr, Nmpl::Gra::IGraLostDeviceResourceInterface {
    /* 0x28 */ char unk28[0x2C - 0x28];
    /* 0x2C */ s32 num_indices;
    /* 0x30 */ void* buffer;
    /* 0x38 */ char unk38[0x40 - 0x38];
    /* 0x40 */ ID3D11Resource* resource;
    /* 0x48 */ bool has_been_uploaded;
}; // size = 0x50

class __cppobj Nmpl::Core::intrusive_ptr__CGraIndexBuffer {
    /* 0x00 */ Nmpl::Gra::CGraIndexBuffer* ptr;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraMesh {
    /* 0x00 */ struct Nmpl::Gra::CGraMesh_vtbl* __vftable;
    /* 0x08 */ Nmpl::Gra::CGraVertexFormat* vertex_format;
    /* 0x10 */ Nmpl::Gra::CGraVertexBuffer* vertex_buffer;
    /* 0x18 */ Nmpl::Gra::CGraIndexBuffer* index_buffer;
    /* 0x20 */ s32 num_vertices;
    /* 0x24 */ s32 draw_vertices;
}; // size >= 0x28

struct __cppobj Nmpl::Gra::CGraMesh_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraMesh*, bool dealloc);
    /* 0x08 */ u32 (*segments)(Nmpl::Gra::CGraMesh*);
    /* 0x10 */ void (*__purecall1)(Nmpl::Gra::CGraMesh*);
    /* 0x18 */ void (*__purecall2)(Nmpl::Gra::CGraMesh*);
    /* 0x20 */ void (*setVertices)(Nmpl::Gra::CGraMesh*, u32);
    /* 0x28 */ void (*setDrawVertices)(Nmpl::Gra::CGraMesh*, u32);
};

class __cppobj Nmpl::Core::intrusive_ptr__CGraMesh {
    /* 0x00 */ Nmpl::Gra::CGraMesh* ptr;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraStructuredMesh : Nmpl::Gra::CGraMesh {
    /* 0x28 */ Nmpl::Gra::EPrimitiveType primitive_type;
    /* 0x29 */ char unk29[0x34 - 0x29];
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ char unk38[0x78 - 0x38];
}; // size = 0x78

struct __cppobj Nmpl::Gra::CGraStructuredMesh_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraStructuredMesh*, bool dealloc);
    /* 0x08 */ u32 (*segments)(Nmpl::Gra::CGraMesh*);
    /* 0x10 */ void* (*segmentBuffer)(Nmpl::Gra::CGraStructuredMesh*, u32);
    /* 0x18 */ void* (*offsetSegmentBuffer)(Nmpl::Gra::CGraStructuredMesh*, u32);
    /* 0x20 */ void (*setVertices)(Nmpl::Gra::CGraMesh*, u32);
    /* 0x28 */ void (*setDrawVertices)(Nmpl::Gra::CGraMesh*, u32);
};

class __cppobj Nmpl::Gra::CGraSegmentsMesh : Nmpl::Gra::CGraMesh {
    /* 0x028 */ Nmpl::Gra::EPrimitiveType primitive_type;
    /* 0x029 */ char unk029[0x02C - 0x029];
    /* 0x02C */ s32 unk_02C;
    /* 0x030 */ char unk030[0x034 - 0x030];
    /* 0x034 */ s32 unk_034;
    /* 0x038 */ char unk038[0x078 - 0x038];
    /* 0x078 */ void* segments[1]; // unk size
    /* 0x080 */ char unk080[0x108 - 0x080];
    /* 0x108 */ s32 num_segments;
}; // size = 0x110

struct __cppobj Nmpl::Gra::CGraSegmentsMesh_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraSegmentsMesh*, bool dealloc);
    /* 0x08 */ u32 (*segments)(Nmpl::Gra::CGraMesh*);
    /* 0x10 */ void* (*segmentBuffer)(Nmpl::Gra::CGraSegmentsMesh*, u32);
    /* 0x18 */ void* (*offsetSegmentBuffer)(Nmpl::Gra::CGraSegmentsMesh*, u32);
    /* 0x20 */ void (*setVertices)(Nmpl::Gra::CGraMesh*, u32);
    /* 0x28 */ void (*setDrawVertices)(Nmpl::Gra::CGraMesh*, u32);
};

class __cppobj Nmpl::Gra::CGraMeshInstance : Nmpl::Core::RefCountForIntrusivePtr {
    /* 0x10 */ Nmpl::Gra::CGraShaderBase* shader;
    /* 0x18 */ Nmpl::Gra::CGraShaderParameterBuffer* shader_parameter_buffer;
    /* 0x20 */ Nmpl::Gra::CGraMesh* mesh;
    /* 0x28 */ char unk28[0x30 - 0x28];
    /* 0x30 */ Nmpl::Core::CMtx44 mtx;
}; // size >= 0x70

struct __cppobj Nmpl::Gra::CGraMeshInstance_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraMeshInstance*, bool dealloc);
};

class __cppobj Nmpl::Gra::IGraLostDeviceResourceInterface /*: Nmpl::Core::CList */ {
    /* 0x00 */ struct Nmpl::Gra::IGraLostDeviceResourceInterface_vtbl* __vftable;
    /* 0x08 */ Nmpl::Core::CList parent;
}; // size = 0x18

struct Nmpl::Gra::IGraLostDeviceResourceInterface_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::IGraLostDeviceResourceInterface*, bool dealloc);
    /* 0x08 */ bool (*lostDeviceRecover)(Nmpl::Gra::IGraLostDeviceResourceInterface*);
};

class Nmpl::Gra::Renderer::CGraRenderTargetBase::CAllocateMemory {

}; // size = ???

class __cppobj Nmpl::Gra::Renderer::CGraRenderTargetBase {
    /* 0x00 */ struct Nmpl::Gra::Renderer::CGraRenderTargetBase_vtbl* __vftable;
    /* 0x08 */ Nmpl::Gra::Renderer::CGraRenderTargetBase::EColorSurfaceFormat surface_format;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
    /* 0x1C */ char unk1C[0x28 - 0x1C];
    /* 0x28 */ Nmpl::Core::CNmplString unk_28;
    /* 0x40 */ Nmpl::Gra::Renderer::CGraRenderTargetBase::CAllocateMemory* allocators[3];
}; // size = 0x58

struct Nmpl::Gra::Renderer::CGraRenderTargetBase_vtbl {
    void (*D0)(Nmpl::Gra::Renderer::CGraRenderTargetBase*, bool dealloc);
    void (*createColorTarget)(Nmpl::Gra::Renderer::CGraRenderTargetBase*, Nmpl::Gra::Renderer::CGraRenderTargetBase::EColorSurfaceFormat, u32, u32, u32, Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*createDepthTarget1)(Nmpl::Gra::Renderer::CGraRenderTargetBase*, Nmpl::Gra::Renderer::CGraRenderTargetBase::EDepthSurfaceFormat, u32, u32, u32, u8, u8, u8, Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*createDepthTarget2)(Nmpl::Gra::Renderer::CGraRenderTargetBase*, Nmpl::Gra::Renderer::CGraRenderTargetBase::EDepthSurfaceFormat, u32, u32, u32, Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*destroyTarget)(Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void* (*buffer)(Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    s32 (*subSurfaces)(Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*setName)(Nmpl::Gra::Renderer::CGraRenderTargetBase*, char const*);
    void (*createTex)(Nmpl::Gra::Renderer::CGraRenderTargetBase*);
};

class __cppobj Nmpl::Gra::Renderer::CGraRenderTargetWin : Nmpl::Gra::Renderer::CGraRenderTargetBase, Nmpl::Gra::IGraLostDeviceResourceInterface {
    /* 0x70 */ ID3D11Texture2D* texture_2d;
    /* 0x78 */ ID3D11RenderTargetView* render_target_view;
    /* 0x80 */ char unk80[0x88 - 0x80];
    /* 0x88 */ ID3D11ShaderResourceView* shader_resource_view1; // depth or colour
    /* 0x90 */ ID3D11UnorderedAccessView* unordered_access_view;
    /* 0x98 */ char unk98[0xA0 - 0x98];
    /* 0xA0 */ ID3D11ShaderResourceView* shader_resource_view2; // depth or colour
    /* 0xA8 */ bool unk_A8;
}; // size >= 0xB0

struct Nmpl::Gra::Renderer::CGraRenderTargetWin_vtbl {
    void (*D0)(Nmpl::Gra::Renderer::CGraRenderTargetWin*, bool dealloc);
    void (*createColorTarget)(Nmpl::Gra::Renderer::CGraRenderTargetWin*, Nmpl::Gra::Renderer::CGraRenderTargetBase::EColorSurfaceFormat, u32, u32, u32, Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*createDepthTarget1)(Nmpl::Gra::Renderer::CGraRenderTargetWin*, Nmpl::Gra::Renderer::CGraRenderTargetBase::EDepthSurfaceFormat, u32, u32, u32, u8, u8, u8, Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*createDepthTarget2)(Nmpl::Gra::Renderer::CGraRenderTargetWin*, Nmpl::Gra::Renderer::CGraRenderTargetBase::EDepthSurfaceFormat, u32, u32, u32, Nmpl::Gra::Renderer::CGraRenderTargetBase*);
    void (*destroyTarget)(Nmpl::Gra::Renderer::CGraRenderTargetWin*);
    void* (*buffer)(Nmpl::Gra::Renderer::CGraRenderTargetWin*);
    s32 (*subSurfaces)(Nmpl::Gra::Renderer::CGraRenderTargetWin*);
    void (*setName)(Nmpl::Gra::Renderer::CGraRenderTargetWin*, char const*);
    void (*createTex)(Nmpl::Gra::Renderer::CGraRenderTargetWin*);
};

struct Nmpl::Gra::Renderer::CGraRenderTargetWin_0058_vtbl {
    void (*D0)(Nmpl::Gra::Renderer::CGraRenderTargetWin*, bool dealloc);
    bool (*lostDeviceRecover)(Nmpl::Gra::Renderer::CGraRenderTargetWin*);
};

class __cppobj Nmpl::Gra::Renderer::CGraRenderTarget : Nmpl::Gra::Renderer::CGraRenderTargetWin {
}; // size = 0xB0

class __cppobj Nmpl::Gra::Renderer::CGraRenderTargetTexture : Nmpl::Gra::Renderer::CGraRenderTarget {
    /* 0xB0 */ Nmpl::Gra::CGraTex* tex;
}; // size = 0xB8

class __cppobj MikPcGraphics {
    /* 0x00 */ char unk00[0x54 - 0x00];
    /* 0x54 */ s32 window_x;
    /* 0x58 */ s32 window_y;
    /* 0x5C */ s32 screen_width;
    /* 0x60 */ s32 screen_height;
    /* 0x64 */ char unk64[0x7C - 0x64];
    /* 0x7C */ tagSIZE resolution;
}; // size = 0x84

class __cppobj Nmpl::Core::intrusive_ptr__CGraTex {
    /* 0x00 */ Nmpl::Gra::CGraTex* ptr;
}; // size = 0x8

// std::vector<Nmpl::Core::intrusive_ptr<Nmpl::Gra::CGraTex>>
class __cppobj std::vector__CGraTex_p {
    /* 0x00 */ Nmpl::Core::intrusive_ptr__CGraTex* first;
    /* 0x08 */ Nmpl::Core::intrusive_ptr__CGraTex* last;
    /* 0x10 */ Nmpl::Core::intrusive_ptr__CGraTex* end;
}; // size = 0x18

class __cppobj NisGraphicsTexture {
    /* 0x00 */ std::vector__CGraTex_p textures; // Nmpl::Core::intrusive_ptr<Nmpl::Gra::CGraTex>
    /* 0x18 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture* target_texture;
    /* 0x20 */ char unk20[0x28 - 0x20];
    /* 0x28 */ s32 width;
    /* 0x2C */ s32 height;
    /* 0x30 */ char unk30[0x50 - 0x30];
}; // size = 0x50

class __cppobj Nmpl::Gra::CNmplGra::CSetting {
    /* 0x00 */ char unk00[0x04 - 0x00];
    /* 0x04 */ s32 link_heap1_size;
    /* 0x08 */ s32 link_heap2_size;
    /* 0x0C */ s32 once_heap1_size;
    /* 0x10 */ s32 once_heap2_size;
    /* 0x14 */ s32 window_width;
    /* 0x18 */ s32 window_height;
    /* 0x1C */ char unk1C[0x20 - 0x1C];
    /* 0x20 */ Nmpl::Core::System::CWinTargetSystem::EWindowMode window_mode;
    /* 0x24 */ char unk24[0x28 - 0x24];
    /* 0x28 */ HWND window_handle;
    /* 0x30 */ char unk30[0x34 - 0x30];
    /* 0x34 */ s32 feature_level_min;
    /* 0x38 */ s32 feature_level_max;
    /* 0x3C */ char unk3C[0x40 - 0x3C];
    /* 0x40 */ char* window_title;
    /* 0x48 */ s64 window_title_length;
    /* 0x50 */ bool is_window_title_allocated;
    /* 0x51 */ char unk51[0x64 - 0x51];
}; // size >= 0x64

class __cppobj Nmpl::Gra::CGraMgrWin::CScratchBuffer {
    /* 0x000 */ std::vector unk_000[10]; // ID3D11Buffer**
    /* 0x0F0 */ char unk0F0[0x240 - 0x0F0];
    /* 0x240 */ D3D11_BIND_FLAG bind_flag;
    /* 0x244 */ char unk244[0x248 - 0x244];
}; // size = 0x248

class __cppobj Nmpl::Gra::CGraPostEffectRenderer::CPostEffectColors : Nmpl::Gra::Renderer::CGraRenderTarget {
    /* 0xB0 */ Nmpl::Gra::CGraTex* tex;
}; // size = 0xB8

class __cppobj Nmpl::Gra::CGraDoubleTempBuffer::RenderTargetTexture : Nmpl::Gra::Renderer::CGraRenderTarget {
    /* 0xB0 */ Nmpl::Gra::CGraTex* tex;
}; // size = 0xB8

class __cppobj Nmpl::Gra::CGraDoubleTempBuffer {
    /* 0x000 */ char unk000[0x008 - 0x000];
    /* 0x008 */ Nmpl::Gra::CGraDoubleTempBuffer::RenderTargetTexture rts[18];
}; // size = 0xCF8

class __cppobj Nmpl::Gra::CGraPostEffectRenderer {
    /* 0x000 */ char unk000[0x008 - 0x000];
    /* 0x008 */ Nmpl::Gra::CGraPostEffectRenderer::CPostEffectColors colours[3];
    /* 0x230 */ char unk230[0x248 - 0x230];
    /* 0x248 */ Nmpl::Gra::CGraDoubleTempBuffer double_temp_buffer;
}; // size = 0xF40

class __cppobj Nmpl::Gra::CGraPostEffectBase {
    /* 0x00 */ char unk00[0x30 - 0x00];
    /* 0x30 */ Nmpl::Gra::CGraStructuredMesh* post_effect_fullscreen_mesh;
}; // size = 0x38

class __cppobj Nmpl::Gra::CGraPostEffectFXAA : Nmpl::Gra::CGraPostEffectBase {
    /* 0x038 */ Nmpl::Gra::CGraShader* illuminance_to_alpha_shader;
    /* 0x040 */ char unk040[0x100 - 0x040];
    /* 0x100 */ Nmpl::Gra::CGraShader* apply_shader;
    /* 0x108 */ char unk108[0x110 - 0x108];
}; // size = 0x110

struct __cppobj Nmpl::Gra::Renderer::CGraRenderStateBase_depth {
    /* 0 - 3 */ u32 depth_func       : 4;
    /* 4 - 5 */ u32 depth_unk_4_5    : 2; // if == 0, depth disabled
    /* 6 - 7 */ u32 depth_write_mask : 2;
};

struct __cppobj Nmpl::Gra::Renderer::CGraRenderStateBase_04 {
    ///*  0 - 20 */ u32 stencil_ref : 21;
    /*  0 - 1  */ u32 unk_0_1 : 2;
    /*  2 - 3  */ u32 unk_2_3 : 2;
    /*  4 - 5  */ u32 unk_4_5 : 2;
    /*  6 - 7  */ u32 unk_6_7 : 2;
    /*  8 - 10 */ u32 unk_8_10 : 3;
    /* 11 - 18 */ u32 unk_11_18 : 8;
    /* 19 - 20 */ u32 unk_19_20 : 2;
    /* 21 - 23 */ u32 unk_21_23 : 3;
};

struct __cppobj Nmpl::Gra::Renderer::CGraRenderStateBase_stencil {
    /* 0 - 3 */ u32 stencil_func            : 4;
    /* 4 - 7 */ u32 stencil_fail_op         : 4;
    /* 8 -12 */ u32 stencil_depth_fail_op   : 4;
    /* 12-16 */ u32 stencil_pass_op         : 4;
    /* 16-23 */ u32 stencil_read_mask       : 8;
    /* 24-31 */ u32 stencil_write_mask      : 8;
};

class __cppobj Nmpl::Gra::Renderer::CGraRenderStateBase {
    /* 0x00 */ Nmpl::Gra::Renderer::CGraRenderStateBase_depth depth;
    /* 0x04 */ Nmpl::Gra::Renderer::CGraRenderStateBase_04 unk_04;
    /* 0x08 */ Nmpl::Gra::Renderer::CGraRenderStateBase_stencil stencil;
    /* 0x0C */ u16 unk_0C;
}; // size >= 0x10

class __cppobj Nmpl::Gra::Renderer::CGraRenderStateWin : Nmpl::Gra::Renderer::CGraRenderStateBase {

}; // size >= 0x10

class __cppobj Nmpl::Gra::Renderer::CGraRenderState : Nmpl::Gra::Renderer::CGraRenderStateWin {

}; // size >= 0x10

enum Nmpl::Gra::Renderer::CGraRenderer::ERenderCommand {
    
};

// seems to be stored transposed? x is all the xs, y is all the ys etc
class __cppobj Nmpl::Gra::Renderer::CGraRenderer::CMatrixRegister {
    /* 0x000 */ s64 size;
    /* 0x008 */ char unk008[0x010 - 0x008];
    /* 0x010 */ NisMatrix44 x;
    /* 0x050 */ NisMatrix44 y;
    /* 0x090 */ NisMatrix44 z;
    /* 0x0D0 */ NisMatrix44 w;
}; // size = 0x110

// Nmpl::Core::CArray<Nmpl::Gra::Renderer::CGraRenderer::CMatrixRegister>
struct __cppobj Nmpl::Core::CArray__CMatrixRegister {
    /* 0x00 */ size_t capacity;
    /* 0x08 */ size_t size;
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderer::CMatrixRegister* buffer;
    /* 0x18 */ bool unk_18;
}; // size = 0x20

class __cppobj Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand::CCmdSortInc {

}; // size = 0x0

class __cppobj Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand::CCmdSortDec {

}; // size = 0x0

class __cppobj Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand {
    /* 0x000 */ Nmpl::Gra::Renderer::CGraRenderer::ERenderCommand command_type;
    /* 0x004 */ s32 num_render_commands;
    /* 0x008 */ f32 depth;
    /* 0x00C */ f32 unk_0C;
    /* 0x010 */ Nmpl::Gra::EPrimitiveType primitive_type;
    /* 0x018 */ VertexV3* vertex_buffer;
    /* 0x020 */ s16* index_buffer;
    /* 0x028 */ s32 num_vertexes1;
    /* 0x02C */ s32 num_vertexes2;
    /* 0x030 */ char unk030[0x058 - 0x030];
    /* 0x058 */ s64 unk_058;
    /* 0x060 */ char unk060[0x068 - 0x060];
    /* 0x068 */ Nmpl::Gra::Renderer::CGraRenderState render_state;
    /* 0x078 */ char unk078[0x1A8 - 0x078];
    /* 0x1A8 */ Nmpl::Gra::Renderer::CGraRenderer::CMatrixRegister* matrix_registers; // from Nmpl::Gra::Renderer::CGraRenderer::matrix1/2/3
}; // size = 0x1B0

// std::vector<Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand*>
class __cppobj std::vector__CGraRenderCommand {
    /* 0x00 */ Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand* first;
    /* 0x08 */ Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand* last;
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand* end;
}; // size = 0x18

// Nmpl::Core::CArray<Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand>
struct __cppobj Nmpl::Core::CArray__CGraRenderCommand {
    /* 0x00 */ size_t capacity;
    /* 0x08 */ size_t size;
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand* buffer;
    /* 0x18 */ bool unk_18;
}; // size = 0x20

// Nmpl::Core::CArray<Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand*>
struct __cppobj Nmpl::Core::CArray__CGraRenderCommand_p {
    /* 0x00 */ size_t capacity;
    /* 0x08 */ size_t size;
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderer::CGraRenderCommand** buffer;
    /* 0x18 */ bool unk_18;
}; // size = 0x20

class __cppobj Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater::SortInfo {
    /* 0x00 */ s32 unk_00; // from Nmpl::Gra::Renderer::CGraRenderer::unk_338C
    /* 0x04 */ s32 prev_num_render_commands;
    /* 0x08 */ s32 num_render_commands;
}; // size = 0xC

// std::vector<Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater::SortInfo>
class __cppobj std::vector__CCommandParamater_SortInfo {
    /* 0x00 */ Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater::SortInfo* first;
    /* 0x08 */ Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater::SortInfo* last;
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater::SortInfo* end;
}; // size = 0x18

class __cppobj Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater {
    /* 0x00 */ char unk00[0x08 - 0x00];
    /* 0x08 */ Nmpl::Core::CArray__CGraRenderCommand render_commands; // init'd to 1024 elements
    /* 0x28 */ char unk28[0x48 - 0x28];
    /* 0x48 */ std::vector__CCommandParamater_SortInfo sort_infos;
    /* 0x60 */ s32 num_render_commands;
    /* 0x64 */ char unk64[0x68 - 0x64];
}; // size = 0x68

class __cppobj Nmpl::Gra::Renderer::CGraRendererBase::RenderContextState {
    /* 0x000 */ Nmpl::Gra::Renderer::CGraRenderState render_state;
    /* 0x010 */ char unk010[0x150 - 0x010];
    /* 0x150 */ s32 viewport_left;
    /* 0x154 */ f32 viewport_right;
    /* 0x158 */ s32 viewport_top;
    /* 0x15C */ f32 viewport_bottom;
    /* 0x160 */ s32 unk_160;
    /* 0x164 */ f32 rt_width2;
    /* 0x168 */ s32 unk_168;
    /* 0x16C */ f32 rt_height2;
}; // size = 0x170

class __cppobj Nmpl::Gra::Renderer::CGraRendererBase : Nmpl::Core::CZeroFillNew {
    /* 0x0000 */ struct Nmpl::Gra::Renderer::CGraRendererBase_vtbl* __vftable;
    /* 0x0008 */ Nmpl::Gra::Renderer::CGraRendererBase::RenderContextState context_states[32];
    /* 0x2E08 */ Nmpl::Gra::Renderer::CGraRendererBase::RenderContextState context_state; // default?
    /* 0x2F78 */ char unk2F78[0x2F80 - 0x2F78];
}; // size >= 0x2F80

struct Nmpl::Gra::Renderer::CGraRendererBase_vtbl {
    /* 0x00 */ void (*__purecall00)(Nmpl::Gra::Renderer::CGraRendererBase*);
    /* 0x08 */ void (*__purecall08)(Nmpl::Gra::Renderer::CGraRendererBase*);
    /* 0x10 */ void (*__purecall10)(Nmpl::Gra::Renderer::CGraRendererBase*);
    /* 0x18 */ void (*__purecall18)(Nmpl::Gra::Renderer::CGraRendererBase*);
    /* 0x20 */ void (*D0)(Nmpl::Gra::Renderer::CGraRendererBase*, bool dealloc);
};

class __cppobj Nmpl::Gra::Renderer::CGraRendererWin : Nmpl::Gra::Renderer::CGraRendererBase {
    /* 0x2F80 */ Nmpl::Gra::Renderer::CGraRenderState render_state;
    /* 0x2F90 */ char unk2F90[0x30A0 - 0x2F90];
    /* 0x30A0 */ Nmpl::Core::CMtx44 matrix1;
    /* 0x30E0 */ Nmpl::Core::CMtx44 matrix2;
    /* 0x3120 */ Nmpl::Core::CMtx44 matrix3;
    /* 0x3160 */ char unk3160[0x3168 - 0x3160];
    /* 0x3168 */ Nmpl::Gra::CGraShaderParameterBufferBase* shader_parameter_buffer_base;
    /* 0x3170 */ Nmpl::Core::CArray__CMatrixRegister matrix_registers; // init'd to 128 elements
    /* 0x3190 */ char unk3190[0x3210 - 0x3190];
    /* 0x3210 */ Nmpl::Core::intrusive_ptr__CGraTex textures[16];
    /* 0x3290 */ char unk3290[0x32F8 - 0x3290];
    /* 0x32F8 */ Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater* command_parameter_ptr;
    /* 0x3300 */ Nmpl::Gra::Renderer::CGraRenderer::CCommandParamater command_parameters[1];
    /* 0x3368 */ s32 unk_3368;
    /* 0x336C */ char unk336C[0x3370 - 0x336C];
    /* 0x3370 */ std::vector__CGraRenderCommand render_commands_vec;
    /* 0x3388 */ s32 unk_3388;
    /* 0x338C */ s32 unk_338C;
    /* 0x3390 */ char unk3390[0x33A8 - 0x3390];
    /* 0x33A8 */ bool unk_33A8;
    /* 0x33A9 */ char unk33A9[0x33B0 - 0x33A9];
}; // size <= 0x33B0

struct Nmpl::Gra::Renderer::CGraRendererWin_vtbl {
    /* 0x00 */ void (*setViewportInScene)(Nmpl::Gra::Renderer::CGraRendererWin*, f32, f32, f32, f32);
    /* 0x08 */ void (*setScissorClipInScene)(Nmpl::Gra::Renderer::CGraRendererWin*, f32, f32, f32, f32);
    /* 0x10 */ void (*NullSub10)(Nmpl::Gra::Renderer::CGraRendererWin*);
    /* 0x18 */ void (*drawPrimitive)(Nmpl::Gra::Renderer::CGraRendererWin*, Nmpl::Core::intrusive_ptr__CGraShader*, Nmpl::Gra::EPrimitiveType, void*, u32, u16*, u32);
    /* 0x20 */ void (*D0)(Nmpl::Gra::Renderer::CGraRendererWin*, bool dealloc);
};

class __cppobj Nmpl::Gra::Renderer::CGraRenderer : Nmpl::Gra::Renderer::CGraRendererWin {

}; // size = 0x33B0

class __cppobj Nmpl::Gra::Renderer::CGraRendererMgr {
    /* 0x00 */ Nmpl::Gra::Renderer::CGraRenderer* renderer;
}; // size >= 0x8

class __cppobj Nmpl::Gra::CGraMgrBase : Nmpl::Core::CZeroFillNew {
    /* 0x00 */ struct Nmpl::Gra::CGraMgrBase_vtbl* __vftable;
    /* 0x08 */ ID3D11DeviceContext* device_context;
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture* unk_10; // front/back buffer in the swapchain? why so far away from the other one
    /* 0x18 */ char unk18[0x28 - 0x18];
    /* 0x28 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture* depth_target;
    /* 0x30 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture* color_target;
    /* 0x38 */ char unk38[0x5C - 0x38];
    /* 0x5C */ s32 unk_5C;
    /* 0x60 */ char unk60[0x98 - 0x60];
    /* 0x98 */ u64 unk_98[3];
    /* 0xB0 */ u64 unk_B0[3];
    /* 0xC8 */ s32 test_rt_width;
    /* 0xCC */ s32 test_rt_height;
}; // size >= 0xD0

struct Nmpl::Gra::CGraMgrBase_vtbl {
    void (*D0)(Nmpl::Gra::CGraMgrBase*, bool dealloc);
    void (*setRendertarget)(Nmpl::Gra::CGraMgrBase*, Nmpl::Gra::Renderer::CGraRenderer*);
    void (*swapBufferRq)(Nmpl::Gra::CGraMgrBase*, Nmpl::Gra::Renderer::CGraRenderer*);
    void (*swapBuffer)(Nmpl::Gra::CGraMgrBase*);
    void (*NullSub1)(Nmpl::Gra::CGraMgrBase*);
    f32 (*gpuProcPer)(Nmpl::Gra::CGraMgrBase*);
    f32 (*cpuProcPer)(Nmpl::Gra::CGraMgrBase*);
    u64 (*gpuProcTime)(Nmpl::Gra::CGraMgrBase*);
    u64 (*cpuProcTime)(Nmpl::Gra::CGraMgrBase*);
    void (*NullSub2)(Nmpl::Gra::CGraMgrBase*);
    s32 (*getShaderModel)(Nmpl::Gra::CGraMgrBase*);
    bool (*isComputeSupport)(Nmpl::Gra::CGraMgrBase*);
};

class __cppobj Nmpl::Gra::CGraMgrWin : Nmpl::Gra::CGraMgrBase {
    /* 0x00D0 */ char unk00D0[0x0138 - 0x00D0];
    /* 0x0138 */ ID3D11DeviceContext* device_context;
    /* 0x0140 */ ID3D11Device* device;
    /* 0x0148 */ IDXGISwapChain1* swapchain;
    /* 0x0150 */ char unk0150[0x0160 - 0x0150];
    /* 0x0160 */ ID3D10Multithread* multithread;
    /* 0x0168 */ HWND timer_handle;
    /* 0x0170 */ char unk0170[0x0214 - 0x0170];
    /* 0x0214 */ D3D11_FORMAT_SUPPORT format_support[115];
    /* 0x03E0 */ char unk03E0[0x03E8 - 0x03E0];
    /* 0x03E8 */ D3D_FEATURE_LEVEL feature_level;
    /* 0x03EC */ s32 shader_model;
    /* 0x03F0 */ char unk03F0[0x03F8 - 0x03F0];
    /* 0x03F8 */ s32 width;
    /* 0x03FC */ s32 height;
    /* 0x0400 */ s32 refresh_rate;
    /* 0x0404 */ char unk0404[0x0428 - 0x0404];
    /* 0x0428 */ DXGI_ADAPTER_DESC* adapter_desc;
    /* 0x0430 */ char unk0430[0x0558 - 0x0430];
    /* 0x0558 */ ID3D11Query* query_timestamp_disjoint[3];
    /* 0x0570 */ ID3D11Query* query_timestamp1[3];
    /* 0x0588 */ ID3D11Query* query_timestamp2[3];
    /* 0x05A0 */ char unk05A0[0x05A8 - 0x05A0];
    /* 0x05A8 */ Nmpl::Gra::CGraMgrWin::CScratchBuffer vertex_buffers[3];
    /* 0x0C80 */ Nmpl::Gra::CGraMgrWin::CScratchBuffer index_buffers[3];
    /* 0x1358 */ char unk1358[0x1368 - 0x1358];
    /* 0x1368 */ HWND window_handle1;
    /* 0x1370 */ HWND window_handle2;
    /* 0x1378 */ Nmpl::Core::CNmplString window_title;
    /* 0x1390 */ char unk1390[0x1438 - 0x1390];
}; // size = 0x1438

class __cppobj Nmpl::Gra::CGraMgr : Nmpl::Gra::CGraMgrWin {
}; // size = 0x1438

struct Nmpl::Gra::CGraMgr_vtbl {
    void (*D0)(Nmpl::Gra::CGraMgr*, bool dealloc);
    void (*setRendertarget)(Nmpl::Gra::CGraMgr*, Nmpl::Gra::Renderer::CGraRenderer*);
    void (*swapBufferRq)(Nmpl::Gra::CGraMgr*, Nmpl::Gra::Renderer::CGraRenderer*);
    void (*swapBuffer)(Nmpl::Gra::CGraMgr*);
    void (*NullSub1)(Nmpl::Gra::CGraMgr*);
    f32 (*gpuProcPer)(Nmpl::Gra::CGraMgr*);
    f32 (*cpuProcPer)(Nmpl::Gra::CGraMgr*);
    u64 (*gpuProcTime)(Nmpl::Gra::CGraMgr*);
    u64 (*cpuProcTime)(Nmpl::Gra::CGraMgr*);
    void (*NullSub2)(Nmpl::Gra::CGraMgr*);
    s32 (*getShaderModel)(Nmpl::Gra::CGraMgr*);
    bool (*isComputeSupport)(Nmpl::Gra::CGraMgr*);
};

class __cppobj Nmpl::Core::Memory::CLinkBlockHeap {
    /* 0x00 */ void* buffer;
    /* 0x08 */ s32 buffer_size;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ char unk10[0x18 - 0x10];
    /* 0x18 */ void* start;
    /* 0x20 */ void* end;
    /* 0x28 */ char unk28[0x58 - 0x28];
}; // size = 0x58

class __cppobj Nmpl::Gra::CGraOnceHeap {
    /* 0x00 */ char unk00[0x50 - 0x00];
}; // size = 0x50

class __cppobj Nmpl::Gra::CGraDelayFreeMgr {
    /* 0x00000 */ char unk00000[0x1B008];
}; // size = 0x1B008

class __cppobj Nmpl::Gra::CGraMemMgr {
    /* 0x00 */ s32 heap1_size;
    /* 0x08 */ void* heap1_buffer;
    /* 0x10 */ s32 heap2_size;
    /* 0x18 */ void* heap2_buffer;
    /* 0x20 */ Nmpl::Core::Memory::CLinkBlockHeap link_block_heap1;
    /* 0x78 */ Nmpl::Core::Memory::CLinkBlockHeap link_block_heap2;
}; // size = 0xD0

struct __cppobj Nmpl::Gra::CGraVertexAttributeComponent {
    /* 0x00 */ s32 type;
    /* 0x04 */ u8 num_components;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraVertexFormat {
    /* 0x00 */ char name[64];
    /* 0x40 */ s32 id;
    /* 0x44 */ Nmpl::Gra::CGraVertexAttributeComponent unk_44[16];
    /* 0xC4 */ s32 num_unused_components; // ?
    /* 0xC8 */ s32 num_components;
    /* 0xCC */ s32 total_size;
    /* 0xD0 */ u8 component_offsets[16];
    /* 0xE0 */ u8 component_sizes[16];
}; // size = 0xF0

class __cppobj Nmpl::Gra::CGraVertexFormatMgr {
    /* 0x00 */ std::vector unk_00; // Nmpl::Gra::CGraVertexFormat
    /* 0x18 */ std::map unk_18; // std::map<std::string, int>
    /* 0x20 */ char unk20[0x28 - 0x20];
}; // size = 0x28

enum Nmpl::Gra::EAlphaBlendMode {

};

enum Nmpl::Gra::EStencilFunc {

};

class __cppobj Nmpl::Gra::AlphaBlendSetting {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 blend_op;
    /* 0x02 */ u8 blend_op_alpha;
    /* 0x03 */ u8 blend_src;
    /* 0x04 */ u8 blend_src_alpha;
    /* 0x05 */ u8 blend_dst;
    /* 0x06 */ u8 blend_dst_alpha;
    /* 0x07 */ u8 unk_07;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraShaderParameterBufferBase::CTexUnitParam {
    /* 0x00 */ Nmpl::Gra::CGraTex* texture;
    /* 0x08 */ char unk08[0x10 - 0x08];
    /* 0x10 */ s32 unk_10; // set from Nmpl::Gra::CGraTex::unk_40
    /* 0x14 */ char unk14[0x18 - 0x14];
}; // size = 0x18

class __cppobj Nmpl::Gra::CGraShaderParameterBufferBase::CBufferSet {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size = 0x08

class __cppobj Nmpl::Gra::CGraShaderParameterBufferBase::ParamRegister {
    /* 0x000 */ s32 size;
    /* 0x004 */ char unk004[0x008 - 0x004];
    /* 0x008 */ void* globals_const_buffer;
    /* 0x010 */ Nmpl::Gra::CGraShaderParameterBufferBase::CTexUnitParam tex_unit_params1[16];
    /* 0x190 */ Nmpl::Gra::CGraShaderParameterBufferBase::CTexUnitParam tex_unit_params2[16];
    /* 0x310 */ Nmpl::Gra::CGraShaderParameterBufferBase::CBufferSet buffer_sets1[32];
    /* 0x410 */ Nmpl::Gra::CGraShaderParameterBufferBase::CBufferSet buffer_sets2[32];
    /* 0x510 */ Nmpl::Gra::CGraShaderParameterBufferBase::CBufferSet buffer_sets3[15];
}; // size = 0x588

enum Nmpl::Gra::EShaderStage {

};

class __cppobj Nmpl::Gra::CGraShaderParameterBufferBase {
    /* 0x0000 */ struct Nmpl::Gra::CGraShaderParameterBufferBase_vtbl* __vftable;
    /* 0x0008 */ Nmpl::Gra::CGraShader* shader;
    /* 0x0010 */ char unk0010[0x0014 - 0x0010];
    /* 0x0014 */ s32 uses;
    /* 0x0018 */ Nmpl::Gra::CGraShaderParameterBufferBase::ParamRegister param_registers[3];
}; // size = 0x10B0

struct __cppobj Nmpl::Gra::CGraShaderParameterBufferBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShaderParameterBufferBase*, bool dealloc);
    /* 0x08 */ void (*fixParameter)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x10 */ void (*__purecall1)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x18 */ bool (*isEffectShaderParameter)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x20 */ bool (*isPlatformShader)(Nmpl::Gra::CGraShaderParameterBufferBase*);
};

class __cppobj Nmpl::Core::intrusive_ptr__CGraShaderParameterBufferBase {
    /* 0x00 */ Nmpl::Gra::CGraShaderParameterBufferBase* ptr;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraShaderParameterBufferWin::CGraNativeBufferCache::CBufferList {
    /* 0x00 */ char unk00[0x20 - 0x00];
}; // size = 0x20

class __cppobj Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache {
    /* 0x00 */ Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache* next;
}; // size = 0x20

class __cppobj Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256_Holder {
    /* 0x0000 */ Nmpl::Gra::CGraShaderParameterBufferWin::CGraNativeBufferCache::CBufferList buffer[256];
    /* 0x2000 */ s32 num_allocated;
    /* 0x2004 */ char unk2004[0x2008 - 0x2004];
    /* 0x2008 */ Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache* free;
    /* 0x2010 */ Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache* next;
    /* 0x2018 */ char unk2018[0x2020 - 0x2018];
}; // size = 0x2020

class __cppobj Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256 {
    /* 0x0000 */ struct Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256_vtbl* __vftable;
    /* 0x0008 */ char unk0008[0x0010 - 0x0008];
    /* 0x0010 */ Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256_Holder* head;
    /* 0x0018 */ char unk0018[0x0020 - 0x0018];
    /* 0x0020 */ Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256_Holder holder;
}; // size = 0x2040 ?

struct Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256*, bool dealloc);
};

class __cppobj Nmpl::Core::Memory::CFreeListThreadSafe__CGraNativeBufferCache_256 : Nmpl::Core::Memory::CFreeList__CGraNativeBufferCache_256 {
    /* 0x2040 */ s32 unk_2040;
    /* 0x2044 */ char unk2044[0x2050 - 0x2044];
    /* 0x2050 */ s32 tls_slot;
};// size = 0x2058

class __cppobj Nmpl::Core::Memory::CFreeListThreadSafeWithTLS__CGraNativeBufferCache_256 : Nmpl::Core::Memory::CFreeListThreadSafe__CGraNativeBufferCache_256 {
};// size = 0x2058

class __cppobj Nmpl::Gra::CGraShaderParameterBufferWin::CGraNativeBufferCache {
    /* 0x00 */ s32 unk_00;
    /* 0x08 */ Nmpl::Core::System::CLMutex mutex;
    /* 0x18 */ char unk18[0x48 - 0x18];
}; // size = 0x48

class __cppobj Nmpl::Gra::CGraShaderParameterBufferWin : Nmpl::Gra::CGraShaderParameterBufferBase, Nmpl::Gra::IGraLostDeviceResourceInterface {
    /* 0x10C8 */ Microsoft::WRL::ComPtr__ID3D11Buffer d3d11_buffers[3];
}; // size <= 0x10E0

struct __cppobj Nmpl::Gra::CGraShaderParameterBufferWin_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShaderParameterBufferWin*, bool dealloc);
    /* 0x08 */ void (*fixParameter)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x10 */ void (*storeBuffer)(Nmpl::Gra::CGraShaderParameterBufferWin*, ID3D11DeviceContext*);
    /* 0x18 */ bool (*isEffectShaderParameter)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x20 */ bool (*isPlatformShader)(Nmpl::Gra::CGraShaderParameterBufferBase*);
};

class __cppobj Nmpl::Gra::CGraShaderParameterBuffer : Nmpl::Gra::CGraShaderParameterBufferWin {
}; // size = 0x10E0

struct __cppobj Nmpl::Gra::CGraShaderParameterBuffer_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShaderParameterBuffer*, bool dealloc);
    /* 0x08 */ void (*fixParameter)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x10 */ void (*storeBuffer)(Nmpl::Gra::CGraShaderParameterBufferWin*, ID3D11DeviceContext*);
    /* 0x18 */ bool (*isEffectShaderParameter)(Nmpl::Gra::CGraShaderParameterBufferBase*);
    /* 0x20 */ bool (*isPlatformShader)(Nmpl::Gra::CGraShaderParameterBufferBase*);
};

class __cppobj Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer {
    /* 0x00 */ Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer* next;
}; // size = 0x70

class __cppobj Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512_Holder {
    /* 0x000000 */ Nmpl::Gra::CGraShaderParameterBuffer buffer[512];
    /* 0x21C000 */ s32 num_allocated;
    /* 0x21C004 */ char unk21C004[0x21C008 - 0x21C004];
    /* 0x21C008 */ Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer* free;
    /* 0x21C010 */ Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer* next;
    /* 0x21C018 */ char unk21C018[0x21C020 - 0x21C018];
}; // size = 0x21C020

class __cppobj Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512 {
    /* 0x000000 */ struct Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512_vtbl* __vftable;
    /* 0x000008 */ char unk0008[0x0010 - 0x0008];
    /* 0x000010 */ Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512_Holder* head;
    /* 0x000018 */ char unk0018[0x0020 - 0x0018];
    /* 0x000020 */ Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512_Holder holder;
}; // size = 0x21C040 ?

struct Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512*, bool dealloc);
};

class __cppobj Nmpl::Core::Memory::CFreeListThreadSafe__CGraShaderParameterBuffer_512 : Nmpl::Core::Memory::CFreeList__CGraShaderParameterBuffer_512 {
    /* 0x21C040 */ s32 unk_21C040;
    /* 0x21C044 */ char unk21C044[0x21C050 - 0x21C044];
    /* 0x21C050 */ s32 tls_slot;
    /* 0x21C054 */ char unk21C054[0x2230C0 - 0x21C054];
};// size = 0x2230C0

class __cppobj Nmpl::Core::Memory::CFreeListThreadSafeWithTLS__CGraShaderParameterBuffer_512_256 : Nmpl::Core::Memory::CFreeListThreadSafe__CGraShaderParameterBuffer_512 {
    /* 0x000000 */ 
}; // size = 0x2230C0

class __cppobj Nmpl::Gra::CGraShaderBase::CParamInfo {
    /* 0x00 */ ID3D11ShaderReflectionVariable* variable;
    /* 0x08 */ s16 num_dwords;
    /* 0x0A */ s16 offset;
    /* 0x0C */ s32 size; // aligned up to 4
}; // size = 0x10

class __cppobj std::_Tree_node__CNmplString_CParamInfoP {
    /* 0x00 */ std::_Tree_node__CNmplString_CParamInfoP* _Left;
    /* 0x08 */ std::_Tree_node__CNmplString_CParamInfoP* _Parent;
    /* 0x10 */ std::_Tree_node__CNmplString_CParamInfoP* _Right;
    /* 0x18 */ char _Color;
    /* 0x19 */ char _Isnil;
    /* 0x20 */ Nmpl::Core::CNmplString key_type;
    /* 0x38 */ Nmpl::Gra::CGraShaderBase::CParamInfo* value_type;
}; // size = 0x40

class __cppobj std::map__CNmplString_CParamInfoP {
    /* 0x00 */ std::_Tree_node__CNmplString_CParamInfoP* head;
    /* 0x10 */ size_t size;
}; // size = 0x10

class __cppobj std::_Tree_node__CNmplString_u32 {
    /* 0x00 */ std::_Tree_node__CNmplString_u32* _Left;
    /* 0x08 */ std::_Tree_node__CNmplString_u32* _Parent;
    /* 0x10 */ std::_Tree_node__CNmplString_u32* _Right;
    /* 0x18 */ char _Color;
    /* 0x19 */ char _Isnil;
    /* 0x20 */ Nmpl::Core::CNmplString key_type;
    /* 0x38 */ u32 value_type;
}; // size = 0x40

class __cppobj std::map__CNmplString_u32 {
    /* 0x00 */ std::_Tree_node__CNmplString_u32* head;
    /* 0x08 */ size_t size;
}; // size = 0x10

class Nmpl::Gra::CGraShaderBase::ShaderProgParamData::CBufferSlot_32 {
    /* 0x000 */ std::map__CNmplString_u32 name_to_bind_point_map; // std::map<Nmpl::Core::CNmplString, unsigned int>
    /* 0x010 */ bool is_used[32];
    /* 0x030 */ ID3D11ShaderReflectionVariable* variables[32];
    /* 0x130 */ s32 end_bind_point;
    /* 0x134 */ char unk134[0x1B8 - 0x134];
}; // size <= 0x1B8

class __cppobj Nmpl::Gra::CGraShaderBase::ShaderProgParamData {
    /* 0x000 */ char unk000[0x008 - 0x000];
    /* 0x008 */ std::map__CNmplString_u32 texture_sampler_name_to_bind_point_map;
    /* 0x018 */ std::map__CNmplString_u32 uav_name_to_bind_point_map;
    /* 0x028 */ ID3D11ShaderReflectionVariable* textures_samplers[16];
    /* 0x0A8 */ ID3D11ShaderReflectionVariable* uavs[16];
    /* 0x128 */ s32 bind_point_after_texture_samplers;
    /* 0x12C */ s32 bind_point_after_uav_buffers;
    /* 0x130 */ Nmpl::Gra::CGraShaderBase::ShaderProgParamData::CBufferSlot_32 read_write_structured_byteaddress_buffers;
    /* 0x2E8 */ Nmpl::Gra::CGraShaderBase::ShaderProgParamData::CBufferSlot_32 read_only_structured_byteaddress_buffers;
    /* 0x4A0 */ std::map__CNmplString_u32 const_buffer_name_to_bind_point_map;
    /* 0x4B0 */ char unk4B0[0x4D0 - 0x4B0];
    /* 0x4D0 */ ID3D11ShaderReflectionVariable* const_buffers[32];
    /* 0x5D0 */ s32 const_buffers_end_bind_point;
    /* 0x5D4 */ s32 const_buffer_sizes[32];
    /* 0x658 */ std::map__CNmplString_CParamInfoP const_buffer_variable_name_to_bind_point_map;
    /* 0x668 */ Nmpl::Gra::CGraShaderBase::CParamInfo* projection_matrix_param_info;
    /* 0x670 */ Nmpl::Gra::CGraShaderBase::CParamInfo* view_matrix_param_info;
    /* 0x678 */ Nmpl::Gra::CGraShaderBase::CParamInfo* world_matrix_param_info;
    /* 0x680 */ Nmpl::Gra::CGraShaderBase::CParamInfo* view_projection_matrix_param_info;
    /* 0x688 */ s32 globals_const_buffer_bind_point;
    /* 0x68C */ s32 globals_const_buffer_size;
}; // size = 0x690

class __cppobj Nmpl::Gra::CGraShaderBase : Nmpl::Core::RefCountForIntrusivePtr, Nmpl::Core::CZeroFillNew {
    /* 0x0010 */ s32 pipeline_type; // 1 = vertex/geo/pixel, 3 = vertex/geo/compute for some reason
    /* 0x0018 */ Nmpl::Gra::CGraShaderBase::ShaderProgParamData prog_param_data[3];
    /* 0x13C8 */ u32 num_input_parameters;
    /* 0x13CC */ char unk13CC[0x1420 - 0x13CC];
    /* 0x1420 */ Nmpl::Core::CNmplString attribute_names[16];
    /* 0x15A0 */ char* unk_15A0;
    /* 0x15A8 */ char unk15A8[0x15B8 - 0x15A8];
}; // size = 0x15B8

struct Nmpl::Gra::CGraShaderBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShaderBase*, bool dealloc);
    /* 0x08 */ s32 (*__purecall1)(Nmpl::Gra::CGraShaderBase*, Nmpl::Gra::AlphaBlendSetting const*);
    /* 0x10 */ bool (*isEfectShader)(Nmpl::Gra::CGraShaderBase*);
    /* 0x18 */ void (*__purecall2)(Nmpl::Gra::CGraShaderBase*, void*, Nmpl::Gra::CGraShaderBase::CParamInfo const*, u32, u32, void const*);
};

enum Nmpl::Gra::CGraShaderResourceBufferBase::EStructuredType {

};

class __cppobj Nmpl::Gra::CGraShaderResourceBufferBase {
    /* 0x00 */ struct Nmpl::Gra::CGraShaderResourceBufferBase_vtbl* __vftable;
    /* 0x08 */ s32 uses;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s64 num_buffers1;
    /* 0x18 */ void* data_buffer[1]; // unk size
    /* 0x20 */ char unk20[0x30 - 0x20];
    /* 0x30 */ s32 num_buffers2;
    /* 0x34 */ char unk34[0x38 - 0x34];
    /* 0x38 */ u8 unk_38[1]; // unk size, maybe 4
    /* 0x39 */ char unk39[0x40 - 0x39];
    /* 0x40 */ s64 buffer_size_bytes;
    /* 0x48 */ s32 unk_48;
    /* 0x4C */ s32 usage; // used to set BindFlags and CPUAccessFlags
    /* 0x50 */ Nmpl::Gra::CGraShaderResourceBufferBase::EStructuredType structure_type;
    /* 0x54 */ char unk54[0x58 - 0x54];
}; // size = 0x58

struct Nmpl::Gra::CGraShaderResourceBufferBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShaderResourceBufferBase*, bool dealloc);
    /* 0x08 */ void (*allocateBufferConstant)(Nmpl::Gra::CGraShaderResourceBufferBase*, u32, u32, u32, void*);
    /* 0x10 */ void (*allocateBufferStructured)(Nmpl::Gra::CGraShaderResourceBufferBase*, u32, Nmpl::Gra::CGraShaderResourceBufferBase::EStructuredType, u32, u32, u32, void*);
    /* 0x18 */ void (*nativeBuffer)(Nmpl::Gra::CGraShaderResourceBufferBase*);
    /* 0x20 */ void (*getBufferSize)(Nmpl::Gra::CGraShaderResourceBufferBase*);
    /* 0x28 */ void (*shaderResourceViews)(Nmpl::Gra::CGraShaderResourceBufferBase*);
    /* 0x30 */ void (*unorderedAccessViews)(Nmpl::Gra::CGraShaderResourceBufferBase*);
    /* 0x38 */ void (*flush)(Nmpl::Gra::CGraShaderResourceBufferBase*, ID3D11DeviceContext*);
};

class __cppobj Nmpl::Core::intrusive_ptr__CGraShaderResourceBufferBase {
    /* 0x00 */ Nmpl::Gra::CGraShaderResourceBufferBase* ptr;
}; // size = 0x8

class __cppobj Nmpl::Gra::CGraShaderResourceBufferWin : Nmpl::Gra::CGraShaderResourceBufferBase {
    /* 0x58 */ Nmpl::Core::k_vector__ID3D11Buffer_3 d3d_buffers;
    /* 0x78 */ s32 unk_78;
    /* 0x7C */ char unk7C[0x80 - 0x7C];
    /* 0x80 */ Nmpl::Core::k_vector__ID3D11ShaderResourceView_3 resource_views;
    /* 0xA0 */ Nmpl::Core::k_vector__ID3D11UnorderedAccessView_3 unordered_access_views;
}; // size = 0xC0

struct Nmpl::Gra::CGraShaderResourceBufferWin_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShaderResourceBufferWin*, bool dealloc);
    /* 0x08 */ void (*allocateBufferConstant)(Nmpl::Gra::CGraShaderResourceBufferWin*, u32, u32, u32, void*);
    /* 0x10 */ void (*allocateBufferStructured)(Nmpl::Gra::CGraShaderResourceBufferWin*, u32, Nmpl::Gra::CGraShaderResourceBufferBase::EStructuredType, u32, u32, u32, void*);
    /* 0x18 */ void (*nativeBuffer)(Nmpl::Gra::CGraShaderResourceBufferWin*);
    /* 0x20 */ void (*getBufferSize)(Nmpl::Gra::CGraShaderResourceBufferWin*);
    /* 0x28 */ void (*shaderResourceViews)(Nmpl::Gra::CGraShaderResourceBufferWin*);
    /* 0x30 */ void (*unorderedAccessViews)(Nmpl::Gra::CGraShaderResourceBufferWin*);
    /* 0x38 */ void (*flush)(Nmpl::Gra::CGraShaderResourceBufferBase*, ID3D11DeviceContext*);
};

class __cppobj Nmpl::Gra::CGraShaderResourceBuffer : Nmpl::Gra::CGraShaderResourceBufferWin {
}; // size = 0xC0

class __cppobj DrawShaderData {
    /* 0x00 */ Nmpl::Gra::CGraShader* shader;
    /* 0x08 */ Nmpl::Gra::CGraShaderParameterBuffer* paramater_buffer;
    /* 0x10 */ Nmpl::Gra::CGraShaderResourceBuffer* resource_buffer1;
    /* 0x18 */ char unk18[0x20 - 0x18];
    /* 0x20 */ Nmpl::Gra::CGraShaderResourceBuffer* resource_buffer2;
    /* 0x28 */ char unk28[0x30 - 0x28];
}; // size = 0x30

class __cppobj Nmpl::Gra::CGraShaderWin::D3DVertexLayout {
    /* 0x00 */ struct Nmpl::Gra::CGraShaderWin::D3DVertexLayout_vtbl* __vftable;
    /* 0x08 */ char unk08[0x10 - 0x08];
}; // size = 0x10 or 0x14, depending on alignment

struct Nmpl::Gra::CGraShaderWin::D3DVertexLayout_vtbl {

};

class __cppobj Nmpl::Core::CShaderBinaryInner : Nmpl::Core::RefCountForIntrusivePtr {
    /* 0x10 */ void const* code;
    /* 0x18 */ u64 size;
}; // size >= 0x20

class __cppobj Nmpl::Gra::CGraShaderWin::CShaderBinary {
    /* 0x00 */ void* shader;
    /* 0x08 */ Nmpl::Core::CShaderBinaryInner* ptr;
}; // size = 0x10

class __cppobj Nmpl::Gra::CGraShaderWin : Nmpl::Gra::CGraShaderBase, Nmpl::Gra::IGraLostDeviceResourceInterface {
    /* 0x15D0 */ ID3D11BlendState* blend_state;
    /* 0x15D8 */ Nmpl::Gra::AlphaBlendSetting blend_settings;
    /* 0x15E0 */ char unk15E0[0x15E8 - 0x15E0];
    /* 0x15E8 */ std::unordered_map vertex_layouts; // std::unordered_map<int, Nmpl::Gra::CGraShaderWin::D3DVertexLayout>
    /* 0x1628 */ s32 unk_1628;
    /* 0x1630 */ Nmpl::Gra::CGraShaderWin::CShaderBinary shader_binaries[3];
}; // size = 0x1660

class __cppobj Nmpl::Core::intrusive_ptr__CGraShader {
    /* 0x08 */ Nmpl::Gra::CGraShader* shader;
};

class __cppobj Nmpl::Gra::CGraShader : Nmpl::Gra::CGraShaderWin {
}; // size = 0x1660

struct Nmpl::Gra::CGraShader_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Gra::CGraShader*, bool dealloc);
    /* 0x08 */ s32 (*compile)(Nmpl::Gra::CGraShader*, Nmpl::Gra::AlphaBlendSetting const*);
    /* 0x10 */ bool (*isEfectShader)(Nmpl::Gra::CGraShader*);
    /* 0x18 */ void (*setParameterToBuffer)(Nmpl::Gra::CGraShader*, void*, Nmpl::Gra::CGraShaderBase::CParamInfo const*, u32, u32, void const*);
};

class __cppobj Nmpl::Gra::CGraShaderMgrBase {
    /* 0x00 */ struct Nmpl::Gra::CGraShaderMgrBase_vtbl* __vftable;
    /* 0x08 */ std::vector shaders; // Nmpl::Core::intrusive_ptr<Nmpl::Gra::CGraShader>
    /* 0x20 */ char unk20[0x40 - 0x20];
}; // size = 0x40

struct Nmpl::Gra::CGraShaderMgrBase_vtbl {
    void (*D0)(Nmpl::Gra::CGraShaderMgrBase*, bool dealloc);
};

class __cppobj Nmpl::Gra::CGraShaderMgrWin : Nmpl::Gra::CGraShaderMgrBase {
}; // size = 0x40

class __cppobj Nmpl::Gra::CGraShaderMgr : Nmpl::Gra::CGraShaderMgrWin {
}; // size = 0x40

class __cppobj Nmpl::Gra::CGraTexBase {
    /* 0x00 */ struct Nmpl::Gra::CGraTexBase_vtbl* __vftable;
    /* 0x08 */ ID3D11ShaderResourceView* shader_resource_view;
    /* 0x10 */ DXGI_FORMAT dxgi_format;
    /* 0x14 */ Nmpl::Gra::ETextureFormat format; // 2 parts, 0xFFF00000 bit size, and 0xFFFFF sub type, e.g you can have 16-bit R5G6B5 or R5G6B5A1
    /* 0x18 */ Nmpl::Core::CList list;
    /* 0x28 */ char unk28[0x40 - 0x28];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ char unk44[0x48 - 0x44];
    /* 0x48 */ u8 fmt_bit_size;
    /* 0x49 */ char unk49[0x4C - 0x49];
    /* 0x4C */ s16 index;
    /* 0x4E */ s16 fmt_byte_size;
    /* 0x50 */ s16 width;
    /* 0x52 */ s16 height;
    /* 0x54 */ char unk54[0x58 - 0x54];
    /* 0x58 */ char name[64];
}; // size = 0x98

struct Nmpl::Gra::CGraTexBase_vtbl {
    void (*D0)(Nmpl::Gra::CGraTexBase*, bool dealloc);
    void (*forceRelease)(Nmpl::Gra::CGraTexBase*);
    void (*create1)(Nmpl::Gra::CGraTexBase*, Nmpl::Gra::Renderer::CGraRenderTarget*, u32, u32, u32, char const*, bool);
    void (*create2)(Nmpl::Gra::CGraTexBase*, void*, u32*, u32, u32, u32, u32, Nmpl::Gra::ETextureFormat, u8, const char*, Nmpl::Gra::CGraTexBase::ETexMemOwn, bool, u32, bool, Nmpl::Gra::CreateTexOption const*);
    void (*forceRelease_impl)(Nmpl::Gra::CGraTexBase*);
};

class __cppobj Nmpl::Gra::CGraTexWin : Nmpl::Gra::CGraTexBase, Nmpl::Gra::IGraLostDeviceResourceInterface {
    /* 0xB0 */ char unkB0[0xC0 - 0xB0];
    /* 0xC0 */ s32 texture_type; // 2 = compressed BC texture
    /* 0xC8 */ Nmpl::Gra::Renderer::CGraRenderTarget* render_target;
    /* 0xD0 */ ID3D11Texture2D* tex_2d;
    /* 0xD8 */ ID3D11UnorderedAccessView* unordered_access_view;
}; // size = 0xE0

class __cppobj Nmpl::Gra::CGraTex : Nmpl::Gra::CGraTexWin {
}; // size = 0xE0

struct Nmpl::Gra::CGraTex_vtbl {
    void (*D0)(Nmpl::Gra::CGraTex*, bool dealloc);
    void (*forceRelease)(Nmpl::Gra::CGraTex*);
    void (*create1)(Nmpl::Gra::CGraTex*, Nmpl::Gra::Renderer::CGraRenderTarget*, u32, u32, u32, char const*, bool);
    void (*create2)(Nmpl::Gra::CGraTex*, void*, u32*, u32, u32, u32, u32, Nmpl::Gra::ETextureFormat, u8, const char*, Nmpl::Gra::CGraTexBase::ETexMemOwn, bool, u32, bool, Nmpl::Gra::CreateTexOption const*);
    void (*forceRelease_impl)(Nmpl::Gra::CGraTex*);
};

struct Nmpl::Gra::CGraTex_0098_vtbl {
    void (*D0)(Nmpl::Gra::CGraTex*, bool dealloc);
    bool (*lostDeviceRecover)(Nmpl::Gra::CGraTex*);
};

class __cppobj Nmpl::Gra::CGraTexMgr {
    /* 0x000 */ Nmpl::Gra::CGraTex* textures; // 16385 textures
    /* 0x008 */ Nmpl::Gra::CGraTex tex1;
    /* 0x0E8 */ Nmpl::Gra::CGraTex tex2;
    /* 0x1C8 */ Nmpl::Core::System::CLMutex mutex;
}; // size = 0x1D8

struct Nmpl::Gra::CGraTexMgr_vtbl {
    void (*D0)(Nmpl::Gra::CGraTexMgr*, bool dealloc);
};

class __cppobj clsTextureManager {
    /* 0x00 */ std::vector unk_00; // Nmpl::Core::intrusive_ptr<Nmpl::Gra::CGraTex>
    /* 0x18 */ char unk18[0xB0 - 0x18];
}; // size = 0xB0

class __cppobj clsGraphics {
    /* 0x00 */ Nmpl::Gra::Renderer::CGraRenderer* renderer;
    /* 0x08 */ char unk08[0x10 - 0x08];
    /* 0x10 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture* renderer_target1;
    /* 0x18 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture* renderer_target2;
    /* 0x20 */ Nmpl::Gra::CGraPostEffectRenderer* post_effect_renderer;
    /* 0x28 */ Nmpl::Gra::CGraPostEffectFXAA* post_effect_fxaa;
    /* 0x30 */ char unk30[0x34 - 0x30];
    /* 0x34 */ NisVector4 global_directional_light_direction;
    /* 0x44 */ NisVector4 global_directional_light_ambient;
    /* 0x54 */ NisVector4 global_directional_light_diffuse;
    /* 0x64 */ NisVector4 global_directional_light_specular;
    /* 0x74 */ char unk74[0x78 - 0x74];
}; // size = 0x78

class __cppobj RenderInfo {
    /* 0x00 */ GraphPrimitiveData* primitive_data;
    /* 0x08 */ Nmpl::Gra::CGraShader* shader;
    /* 0x10 */ Nmpl::Gra::CGraShaderParameterBuffer* paramater_buffer;
    /* 0x18 */ Nmpl::Gra::CGraShaderResourceBuffer* resource_buffer1;
    /* 0x20 */ void* unk_20;
    /* 0x28 */ Nmpl::Gra::CGraShaderResourceBuffer* resource_buffer2;
    /* 0x30 */ void* unk_30;
    /* 0x38 */ Nmpl::Gra::CGraVertexFormat* vertex_format;
}; // size >= 0x40

class __cppobj clsGraphicsDrawPacket {
    /* 0x0000 */ Nmpl::Gra::Renderer::CGraRenderer* renderer;
    /* 0x0008 */ s64 num_graph_primitive_datas;
    /* 0x0010 */ GraphPrimitiveData* graph_nodes[5120];
    /* 0xA010 */ char unkA010[0xA020 - 0xA010];
    /* 0xA020 */ std::vector* shader_data_vecs[1][2]; // std::vector<DrawShaderData>*, unk outer size
    /* 0xA030 */ char unkA030[0xA180 - 0xA030];
    /* 0xA180 */ s32 num_shader_datas[22]; // unk size, at least 22
    /* 0xA1D8 */ char unkA1D8[0xA208 - 0xA1D8];
    /* 0xA208 */ s32 unk_A208;
    /* 0xA20C */ char unkA20C[0xA210 - 0xA20C];
    /* 0xA210 */ Nmpl::Core::CJobWorker* culling_job_worker;
    /* 0xA218 */ char unkA218[0xA220 - 0xA218];
    /* 0xA220 */ Nmpl::Core::CMtx44 matrix;
    /* 0xA260 */ char unkA260[0xA270 - 0xA260];
    /* 0xA270 */ std::unordered_map* map_anime_constant_to_shader_resource_buffer;
    /* 0xA278 */ char unkA278[0xA280 - 0xA278];
}; // size = 0xA280

enum Nmpl::Core::System::CWinTargetSystem::EMessageType {

};

enum Nmpl::Core::System::CWinTargetSystem::EWindowMode {
    Windowed = 0,
    Borderless = 1,
    Fullscreen = 2,
};

enum Nmpl::Core::System::CWinTargetSystem::EWindowResizeType : u8 {
    Lock = 0,
    SetToWindowSize = 1,
};

enum Nmpl::Core::System::CWinTargetSystem::EWinWmdCallbackReturn {

};

class __cppobj Nmpl::Core::System::CWinTargetSystem::ResolutionInfo {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
}; // size = 0x08

class __cppobj std::_Deque_val__ResolutionInfo : std::_Container_base12 {
    /* 0x00 */ Nmpl::Core::System::CWinTargetSystem::ResolutionInfo** _Map;
    /* 0x08 */ size_t _Mapsize;
    /* 0x10 */ size_t _Myoff;
    /* 0x18 */ size_t _Mysize;
}; // size = 0x20

// std::deque<Nmpl::Core::System::CWinTargetSystem::ResolutionInfo>
class __cppobj std::deque__ResolutionInfo {
    /* 0x00 */ std::_Deque_val__ResolutionInfo _Mypair;
}; // size = 0x28

class __cppobj Nmpl::Core::System::CWinTargetSystem {
    /* 0x0000 */ u64 this_handle;
    /* 0x0008 */ u64 window_handle;
    /* 0x0010 */ char unk0010[0x0020 - 0x0010];
    /* 0x0020 */ Nmpl::Core::CNmplString unk_0020;
    /* 0x0038 */ Nmpl::Core::CNmplString initial_window_title;
    /* 0x0050 */ Nmpl::Core::CNmplString window_title;
    /* 0x0068 */ char unk0068[0x1068 - 0x0068];
    /* 0x1068 */ std::deque__ResolutionInfo resolution_list1;
    /* 0x1090 */ std::deque__ResolutionInfo resolution_list2;
    /* 0x10B8 */ Nmpl::Core::System::CLMutex resolution_list_mutex;
    /* 0x10C8 */ char unk10C8[0x1148 - 0x10C8];
    /* 0x1148 */ Nmpl::Core::System::CLMutex unk_1148;
    /* 0x1158 */ char unk1158[0x1188 - 0x1158];
    /* 0x1188 */ Nmpl::Core::System::CLMutex unk_1188;
    /* 0x1198 */ Nmpl::Core::System::CWinTargetSystem::EWindowResizeType window_resize_type;
    /* 0x1199 */ char unk1199[0x119C - 0x1199];
    /* 0x119C */ Nmpl::Core::System::CWinTargetSystem::EWindowMode window_mode;
    /* 0x11A0 */ char unk11A0[0x11A8 - 0x11A0];
    /* 0x11A8 */ s32 resolution_width;
    /* 0x11AC */ s32 resolution_height;
    /* 0x11B0 */ char unk11B0[0x11B8 - 0x11B0];
    /* 0x11B8 */ tagRECT window_size;
    /* 0x11C8 */ char unk11C8[0x11D8 - 0x11C8];
    /* 0x11D8 */ bool set_resolution_to_window_size;
    /* 0x11D9 */ char unk11D9[0x11F0 - 0x11D9];
}; // size = 0x11F0

class __cppobj HexPack {
    /* 0x000 */ char unk000[0x4];
}; // size = ???

class clsEnvironmentalParticle::Draw::SetFloat {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
}; // size = 0x8

class __cppobj clsEnvironmentalInfomation {
    /* 0x000 */ u8 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x008 */ u64 unk_008;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ s32 unk_014;
    /* 0x018 */ u64 unk_018;
    /* 0x020 */ s16 unk_020;
    /* 0x024 */ s32 unk_024;
    /* 0x028 */ s32 unk_028;
    /* 0x02C */ s32 unk_02C;
    /* 0x030 */ s32 unk_030;
    /* 0x034 */ char unk034[0x058 - 0x034];
    /* 0x058 */ void* buffer; // 0x88 * 256 in size
    /* 0x060 */ char unk060[0x064 - 0x060];
    /* 0x064 */ s32 width;
    /* 0x068 */ s32 height;
    /* 0x06C */ s32 num_buff_elements;
    /* 0x070 */ char unk070[0x140 - 0x070];
}; // size = 0x140

class __cppobj clsEnvironmental {
    /* 0x000 */ clsEnvironmentalInfomation info[3];
    /* 0x3C0 */ NisGraphicsTexture* unk_3C0;
}; // size = 0x3C8

enum clsNoResidentObjManager::eNO_RESIDENT_3DOBJ_TYPE {
    eNO_RESIDENT_3DOBJ_TYPE_0 = 0,
    eNO_RESIDENT_3DOBJ_TYPE_1 = 1,
};

struct __cppobj clsNoResidentObjManager::stc3DOBJLoadInfo {
    /* 0x00 */ std::shared_ptr__clsFile_Archive* archive_sp;
    /* 0x08 */ char file_name[64]; // unk size
    /* 0x48 */ char unk48[0x88 - 0x48];
    /* 0x88 */ s32 obf_index;
    /* 0x8C */ s32 use_count;
    /* 0x90 */ char unk90[0x98 - 0x90];
}; // size = 0x98

class __cppobj clsNoResidentObjManager {
    /* 0x00 */ std::map__s32_s32 map;
    /* 0x10 */ std::vector objs_type_0; // eNO_RESIDENT_3DOBJ_TYPE_0
    /* 0x28 */ std::vector objs_type_1; // eNO_RESIDENT_3DOBJ_TYPE_1
    /* 0x40 */ std::vector unk_40;
}; // size = 0x58

class __cppobj clsRD_SetTreasure {
    /* 0x00 */ ChrAnmObj* chr;
    /* 0x08 */ s32 bchr_index;
    /* 0x0C */ s32 level;
}; // size = 0x10

class __cppobj clsRD_ItemSymbol {
    /* 0x0000 */ char unk0000[0x0E00 - 0x0000];
    /* 0x0E00 */ C_NisModel models[4];
    /* 0x1740 */ char unk1740[0x1758 - 0x1740];
    /* 0x1758 */ s32 count; // number of item symbols?
    /* 0x175C */ s32 unk_175C[4]; // set to 1 in clsRD_ItemSymbol::SetItemSymbol, is active/in use?
    /* 0x176C */ char unk176C[0x1790 - 0x176C];
    /* 0x1790 */ s32 unk_1790[4]; // set to a2 if a8 is non-zero in clsRD_ItemSymbol::SetItemSymbol
    /* 0x17A0 */ s32 unk_17A0[4]; // set to a3 if a8 is non-zero in clsRD_ItemSymbol::SetItemSymbol
    /* 0x17B0 */ s32 pos_x[4];
    /* 0x17C0 */ f32 pos_y[4];
    /* 0x17D0 */ s32 pos_z[4];
    /* 0x17E0 */ s32 unk_17E0; // set to count if a8 is non-zero in clsRD_ItemSymbol::SetItemSymbol
    /* 0x17E4 */ char unk17E4[0x17F0 - 0x17E4];
}; // size = 0x17F0

class __cppobj clsRD_Info {
    /* 0x000 */ char unk000[0x010 - 0x000];
    /* 0x010 */ stcItem* item;
    /* 0x018 */ char unk018[0x01C - 0x018];
    /* 0x01C */ s32 rarity_tier;
    /* 0x020 */ s32 bgm;
    /* 0x024 */ char unk024[0x310 - 0x024];
}; // size = 0x310

class __cppobj clsRD_Ship {
    /* 0x0000 */ char unk0000[0x0010 - 0x0000];
    /* 0x0010 */ C_NisModel unk_0010[2];
    /* 0x04B0 */ char unk04B0[0x04D0 - 0x04B0];
    /* 0x04D0 */ f32 colours1[4]; // colours for unk_0010 models
    /* 0x04E0 */ f32 colour_delta_a;
    /* 0x04E4 */ f32 colour_delta_r;
    /* 0x04E8 */ f32 colour_delta_b;
    /* 0x04EC */ f32 colour_delta_g;
    /* 0x04F0 */ s32 colour_num_frames;
    /* 0x04F4 */ char unk04F4[0x1D10 - 0x04F4];
    /* 0x1D10 */ NisGraphicsTexture* unk_1D10[32][4];
    /* 0x2110 */ C_NisModel unk_2110[2][6];
    /* 0x3CD0 */ HexPack* unk_3CD0[6][64];
    /* 0x48D0 */ char unk48D0[0x4930 - 0x48D0];
    /* 0x4930 */ s32 unk_4930[2][6];
    /* 0x4960 */ f32 unk_4960[2][6];
    /* 0x4990 */ f32 unk_4990[2][6];
    /* 0x49C0 */ f32 unk_49C0[2][6];
    /* 0x49F0 */ s16 unk_49F0[2][6];
    /* 0x4A08 */ char unk4A08[0x4A18 - 0x4A08];
    /* 0x4A18 */ f32 colours2[6][4]; // colours for unk_2110 models
}; // size = 0x4A78

struct __cppobj clsRD_SetEnemy {
    /* 0x0000 */ char unk0000[0x3390 - 0x0000];
}; // size >= 0x3390

struct __cppobj clsRD_PirateInfo {
    /* 0x00 */ char unk00[0x20 - 0x00];
}; // size >= 0x20

struct __cppobj stcTreasurePoint {
    /* 0x000 */ s32 type;
    /* 0x004 */ s32 value;
    /* 0x008 */ s16 dungeon_id;
    /* 0x00A */ char unk00A[0x010 - 0x00A];
    /* 0x010 */ stcItem item;
    /* 0x210 */ char unk210[0x218 - 0x210];
}; // size = 0x218

class __cppobj clsTreasureInfo {
    /* 0x000 */ u8 num_points;
    /* 0x001 */ char unk001[0x008 - 0x001];
    /* 0x008 */ stcTreasurePoint treasure_points[16];
}; // size >= 0x10C8

class __cppobj clsCharDungeonSelect {
    /* 0x00 */ char unk00[0xAC - 0x00];
}; // size <= 0xAC

struct __cppobj DUNGEON {
    /* 0x00 */ char unk00[0x34 - 0x00];
    /* 0x34 */ s16 id;
    /* 0x36 */ s16 score_bonus;
    /* 0x38 */ s16 unlock_flag;
    /* 0x3A */ char name[64];
    /* 0x7A */ char unk7A[0xA4 - 0x7A];
}; // size = 0xA4

class __cppobj clsUnionStatus {
    /* 0x00 */ s64 stats[8];
    /* 0x40 */ s16 unit_ids[4];
    /* 0x48 */ bool is_big_unit;
    /* 0x49 */ char unk49[0x50 - 0x49];
}; // size >= 0x50

struct __cppobj HABIT {
    /* 0x00 */ s32 amount;
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 name_seed;
    /* 0x07 */ bool is_subdued;
}; // size = 0x8

struct __cppobj stcItem {
    /* 0x000 */ char unk000[0x004 - 0x000];
    /* 0x004 */ HABIT innocents[8];
    /* 0x044 */ s32 shop_price;
    /* 0x048 */ s64 current_stats[8]; // ePARAM_TYPE
    /* 0x088 */ s64 base_stats[8]; // ePARAM_TYPE
    /* 0x0C8 */ s16 id;
    /* 0x0CA */ s16 level;
    /* 0x0CC */ char unk0CC[0x0CE - 0x0CC];
    /* 0x0CE */ s16 image_id;
    /* 0x0D0 */ char unk0D0[0x0D2 - 0x0D0];
    /* 0x0D2 */ u8 icon; // set to monster face palette when equipping a monster
    /* 0x0D3 */ char unk0D3[0x0DF - 0x0D3];
    /* 0x0DF */ u8 item_world_floor;
    /* 0x0E0 */ char unk0E0[0x0E6 - 0x0E0];
    /* 0x0E6 */ u8 rarity;
    /* 0x0E7 */ u8 type;
    /* 0x0E8 */ char unk0E8[0x0E9 - 0x0E8];
    /* 0x0E9 */ u8 max_pop; // rarity_tier + 4
    /* 0x0EA */ u8 move;
    /* 0x0EB */ u8 jump;
    /* 0x0EC */ u8 rank;
    /* 0x0ED */ u8 range;
    /* 0x0EE */ char unk0EE[0x0EF - 0x0EE];
    /* 0x0EF */ u8 crit;
    /* 0x0F0 */ u8 palette;
    /* 0x0F1 */ char unk0F1[0x0F2 - 0x0F1];
    /* 0x0F2 */ u8 rarity_tier; // 0 (common): >= 32, 1 (rare): >= 8, 2 (legendary): < 8
    /* 0x0F3 */ char unk0F3[0x0F4 - 0x0F3];
    /* 0x0F4 */ s8 stat_remainders[8]; // leftovers from stat increases, accumulates <100 and is added next levelup
    /* 0x0FC */ char unk0FC[0x104 - 0x0FC];
    /* 0x104 */ char name[64];
    /* 0x144 */ u8 collector_rarity_boost;
    /* 0x145 */ char unk_name[64]; // set to monster name when equipping a monster unit
    /* 0x185 */ char unk185[0x186 - 0x185];
    /* 0x186 */ s16 skill_id; // from unique innocent?
    /* 0x188 */ char unk188[0x18E - 0x188];
    /* 0x18E */ s16 enemy_kill_count;
    /* 0x190 */ char unk190[0x200 - 0x190];
}; // size = 0x200

enum stcRelatedChartData::eCONDITION_TYPE {

};

class __cppobj clsRelatedChart {
    /* 0x00 */ s32 in_use[8];
    /* 0x20 */ s32 is_fix[8];
    /* 0x40 */ s32 unique_ids[8];
    /* 0x60 */ s16 counts[8];
    /* 0x70 */ s16 data_ids[8];
}; // size >= 0x80

enum stcStatus::eMAGIC_LEARN_TYPE : u8 {

};

enum ePARAM_TYPE {
    Hp = 0,
    Sp = 1,
    Atk = 2,
    Def = 3,
    Int = 4,
    Speed = 5,
    Hit = 6,
    Res = 7,
    _Max = 8,
};

enum stcStatus::eTRANSFORM_SLOT {

};

// unit -Id / 1000
//     0 = unique player, 
//     1 = recruitable generic human
//     2 = recruitable generic monster
//     3 = unique NPCs
//     4 = pirate shop/senators
//     5 = chests/items
//     6 = other stuff

struct __cppobj stcStatus {
    /* 0x0000 */ char unk0000[0x0004 - 0x0000];
    /* 0x0004 */ s32 is_active;
    /* 0x0008 */ s64 exp;
    /* 0x0010 */ stcItem items[4]; // weapon = 0, armour = 1-3
    /* 0x0810 */ char name[64];
    /* 0x0850 */ char title[64];
    /* 0x0890 */ s16 num_alchemists;
    /* 0x0892 */ s16 num_hypnotists;
    /* 0x0894 */ s16 num_witch_doctors;
    /* 0x0896 */ s16 num_amnesiacs;
    /* 0x0898 */ s16 num_gangsters;
    /* 0x089A */ s16 num_professionals;
    /* 0x089C */ s16 unk_89C; // innocent ids 27 - 30
    /* 0x089E */ s16 unk_89E;
    /* 0x08A0 */ s16 unk_8A0;
    /* 0x08A2 */ s16 unk_8A2;
    /* 0x08A4 */ s16 num_collector1s;
    /* 0x08A6 */ s16 num_collector2s;
    /* 0x08A8 */ s16 num_collector3s;
    /* 0x08AA */ s16 num_collector4s;
    /* 0x08AC */ s16 unk_8AC; // innocent ids 35 - 40
    /* 0x08AE */ s16 unk_8AE;
    /* 0x08B0 */ s16 unk_8B0;
    /* 0x08B2 */ s16 unk_8B2;
    /* 0x08B4 */ s16 unk_8B4;
    /* 0x08B6 */ s16 unk_8B6;
    /* 0x08B8 */ s16 num_pharmicists;
    /* 0x08BA */ s16 num_coffee_makers;
    /* 0x08BC */ s16 num_medicine_mans;
    /* 0x08BE */ s16 num_psychologists;
    /* 0x08C0 */ s16 num_social_workers;
    /* 0x08C2 */ s16 num_fire_fighters;
    /* 0x08C4 */ s16 num_aeronauts;
    /* 0x08C6 */ s16 num_cryophiles;
    /* 0x08C8 */ s16 num_8C8; // innocent ids 49 - 50
    /* 0x08CA */ s16 num_8CA;
    /* 0x08CC */ s16 num_fist_fighters;
    /* 0x08CE */ s16 num_fencers;
    /* 0x08D0 */ s16 num_lancers;
    /* 0x08D2 */ s16 num_eros;
    /* 0x08D4 */ s16 num_deadeyes;
    /* 0x08D6 */ s16 num_lumberjacks;
    /* 0x08D8 */ s16 num_cane_mans;
    /* 0x08DA */ s16 num_monster_hunters;
    /* 0x08DC */ s16 num_guardians;
    /* 0x08DE */ s16 unk_8DE; // innocent id 60
    /* 0x08E0 */ s16 num_brokers;
    /* 0x08E2 */ s16 num_statisticians;
    /* 0x08E4 */ s16 num_managers;
    /* 0x08E6 */ s16 unk_8E6; // innocent id 64
    /* 0x08E8 */ s16 num_mentors;
    /* 0x08EA */ s16 num_lose_loses;
    /* 0x08EC */ s16 unk_8EC; // innocent ids 67 - 70
    /* 0x08EE */ s16 unk_8EE;
    /* 0x08F0 */ s16 unk_8F0;
    /* 0x08F2 */ s16 unk_8F2;
    /* 0x08F4 */ s16 num_fusion_lovers;
    /* 0x08F6 */ s16 num_magichange_lovers;
    /* 0x08F8 */ s16 unk_8F8;  // innocent ids 73 - 84
    /* 0x08FA */ s16 unk_8FA;
    /* 0x08FC */ s16 unk_8FC;
    /* 0x08FE */ s16 unk_8FE;
    /* 0x0900 */ s16 unk_900;
    /* 0x0902 */ s16 unk_902;
    /* 0x0904 */ s16 unk_904;
    /* 0x0906 */ s16 unk_906;
    /* 0x0908 */ s16 unk_908;
    /* 0x090A */ s16 unk_90A;
    /* 0x090C */ s16 unk_90C;
    /* 0x090E */ s16 unk_90E;
    /* 0x0910 */ u8 condition_values[32];
    /* 0x0930 */ char unk0930[0x0950 - 0x0930];
    /* 0x0950 */ s32 skill_experiences[96];
    /* 0x0AD0 */ s16 skill_ids[96]; // used in learn_ExtraGainMagic
    /* 0x0B90 */ u8 skill_levels[96];
    /* 0x0BF0 */ u8 skill_boosts[96];
    /* 0x0C50 */ u8 unk_0C50[96];
    /* 0x0CB0 */ stcStatus::eMAGIC_LEARN_TYPE learn_types[96];
    /* 0x0D10 */ s64 current_hp;
    /* 0x0D18 */ s64 current_sp;
    /* 0x0D20 */ s64 stats[8];
    /* 0x0D60 */ s64 stats_boosted[8]; // final stats after all boosts applied as shown on stat screen
    /* 0x0DA0 */ s32 mana;
    /* 0x0DA4 */ u16 unk_0DA4[48][8];
    /* 0x10A4 */ u8 stat_level_up_remainder[8]; // stat after growth % 100, the remaining fraction from leveling up
    /* 0x10AC */ u8 base_stats[8]; // stats copied from char dat base_stats. If enemy and comd->unk16F8E9 >= 100, * 2, stat growths?
    /* 0x10B4 */ char unk10B4[0x1130 - 0x10B4];
    /* 0x1130 */ u16 level;
    /* 0x1132 */ eUnits unit_id;
    /* 0x1134 */ char unk1134[0x1136 - 0x1134];
    /* 0x1136 */ s16 data_index;
    /* 0x1138 */ char unk1138[0x113C - 0x1138];
    /* 0x113C */ s16 random_name_index;
    /* 0x113E */ char unk113E[0x1142 - 0x113E];
    /* 0x1142 */ u8 fire_res_base;
    /* 0x1143 */ u8 wind_res_base;
    /* 0x1144 */ u8 ice_res_base;
    /* 0x1145 */ u8 fire_res_boost;
    /* 0x1146 */ u8 wind_res_boost;
    /* 0x1147 */ u8 ice_res_boost;
    /* 0x1148 */ u8 jump_base;
    /* 0x1149 */ u8 jump;
    /* 0x114A */ u8 move_base;
    /* 0x114B */ u8 move; // loaded as the base in clsCharacter::mGetMove
    /* 0x114C */ u8 counter_base;
    /* 0x114D */ u8 counter;
    /* 0x114E */ u8 throw_range;
    /* 0x114F */ u8 throw_range_base;
    /* 0x1150 */ char unk1150[0x1152 - 0x1150];
    /* 0x1152 */ u8 move_boosted; // updated and stored in clsCharacter::mGetMove
    /* 0x1153 */ u8 gender;
    /* 0x1154 */ u8 npc_prism_ranger_unit_index; // if non-player prism ranger, this adds 60 to species id, mapping it into a dummy character. e.g 1220 -> 1260
    /* 0x1155 */ u8 num_skill_ids; // number of 0x0AD0
    /* 0x1156 */ char unk1156[0x1157 - 0x1156];
    /* 0x1157 */ u8 item_world_innocent_index; // indexes into comd 0x16F780 when adding innocent to the item world item
    /* 0x1158 */ u8 movement_type_base;
    /* 0x1159 */ u8 movement_type; // 1 = flying
    /* 0x115A */ u8 range;
    /* 0x115B */ u8 equipped_weapon_type; // stcStatus::mGetAtkParam_Weapon, why not used for magic variants?
    /* 0x115C */ u8 face_palette;
    /* 0x115D */ char unk115D[0x115E - 0x115D];
    /* 0x115E */ u8 stat_coefficient; // char_addTK_hex given to gGetBossEnemyHpRate and the result multiplies hp
    /* 0x115F */ u8 reincarnate_candidate_rank; // 0 = good for nothing, 1 = incompetent, 2 = average, 3 = skilled, 4 = distinguished, 5 = genius
    /* 0x1160 */ u8 enemy_tk_status_index; // index into tk_status array
    /* 0x1161 */ u8 operate_npc_type;
    /* 0x1162 */ char unk1162[0x1164 - 0x1162];
    /* 0x1164 */ u16 face_index;
    /* 0x1166 */ char unk1166[0x1170 - 0x1166];
    /* 0x1170 */ s32 reincarnation_stored_levels;
    /* 0x1174 */ s16 num_reincarnations1; // used almost everywhere
    /* 0x1176 */ s16 num_reincarnations2; // only used in gTransmigration ? How is this different to above?
    /* 0x1178 */ u16 class_id;
    /* 0x117A */ char unk117A[0x117C - 0x117A];
    /* 0x117C */ u8 num_times_thrown_this_turn;
    /* 0x117D */ char unk117D[0x1181 - 0x117D];
    /* 0x1181 */ u8 crit;
    /* 0x1182 */ char unk1182[0x118C - 0x1182];
    /* 0x118C */ s16 fire_res;
    /* 0x118E */ s16 wind_res;
    /* 0x1190 */ s16 ice_res;
    /* 0x1192 */ s16 evilities[6];
    /* 0x119E */ s16 learnable_skills[256];
    /* 0x139E */ s16 num_evilities;
    /* 0x13A0 */ s16 num_learnable_skills;
    /* 0x13A2 */ s16 max_equippable_evilities;
    /* 0x13A4 */ char unk13A4[0x13A8 - 0x13A4];
    /* 0x13A8 */ s16 num_equipped_skills;
    /* 0x13AA */ char unk13AA[0x13AC - 0x13AA];
    /* 0x13AC */ bool has_condition[32];
    /* 0x13CC */ char unk13CC[0x13D8 - 0x13CC];
    /* 0x13D8 */ u8 num_support_received_this_turn;
    /* 0x13D9 */ char unk13D9[0x13F0 - 0x13D9];
    /* 0x13F0 */ stcItem unk_13F0[2];
    /* 0x17F0 */ u8 equip_item_transform;
    /* 0x17F1 */ char unk17F1[0x17F3 - 0x17F1];
    /* 0x17F3 */ u8 move_boost; // added with Hit and Away value when clsCharacter->unk_5C7 is >= 2, action count?
    /* 0x17F4 */ s16 param_boosts[8];
    /* 0x1804 */ s16 num_depraved_effects;
    /* 0x1806 */ s16 species; // unit_id / 10
    /* 0x1808 */ s16 unit_type; // unit_id / 100
    /* 0x180A */ u8 unk_180A; // clsCharacter::mLiftUp
    /* 0x180B */ u8 unk_180B; // clsCharacter::mLiftUp
    /* 0x180C */ s16 seat_index; // index into comd.unk_167330
    /* 0x180E */ s8 unk_180E[48]; // indexes into comd.fix_units
    /* 0x183E */ u8 commu_ids[48];
    /* 0x186E */ u8 commu_num_members[48];
    /* 0x189E */ u8 commu_num;
    /* 0x189F */ char unk189F[0x18B0 - 0x189F];
    /* 0x18B0 */ s16 stat_aptitudes[8];
    /* 0x18C0 */ char unk18C0[0x18D0 - 0x18C0];
    /* 0x18D0 */ s16 equipped_skill_ids[64]; // tst_mskill
    /* 0x1950 */ char unk1950[0x1BD0 - 0x1950];
    /* 0x1BD0 */ s32 reserve_skill_experiences[160];
    /* 0x1E50 */ s16 reserve_skill_ids[160];
    /* 0x1F90 */ u8 reserve_skill_levels[160];
    /* 0x2030 */ u8 reserve_skill_boosts[160];
    /* 0x20D0 */ s16 num_reserve_skills;
    /* 0x20D2 */ char unk20D2[0x20D6 - 0x20D2];
    /* 0x20D6 */ s16 weapon_magichange_status_indexes[2]; // addTransformMagic
    /* 0x20DA */ s16 weapon_magichange_unit_ids[2];
    /* 0x20DE */ char unk20DE[0x20E0 - 0x20DE];
    /* 0x20E0 */ clsUnionStatus union_status;
    /* 0x2130 */ char unk2130[0x213C - 0x2130];
    /* 0x213C */ u8 enemy_battle_facility_index;
    /* 0x213D */ char unk213D[0x213E - 0x213D];
    /* 0x213E */ s16 enemy_facility_skills[6];
    /* 0x214A */ char unk214A[0x214C - 0x214A];
    /* 0x214C */ s32 has_valid_help_strings;
    /* 0x2150 */ char unk2150[0x22D8 - 0x2150];
    /* 0x22D8 */ s32 unique_id; // SetCharacterUniqueID
    /* 0x22DC */ char unk22DC[0x22E0 - 0x22DC];
    /* 0x22E0 */ clsRelatedChart related_chart;
    /* 0x2360 */ s16 unk_2360;
    /* 0x2362 */ char unk2362[0x2368 - 0x2362];
    /* 0x2368 */ u8 attack_chain_count;
    /* 0x2369 */ u8 evasion_count;
    /* 0x236A */ char unk236A[0x236B - 0x236A];
    /* 0x236B */ u8 num_times_magichanged;
    /* 0x236C */ char unk236C[0x236D - 0x236C];
    /* 0x236D */ u8 num_times_damage_taken;
    /* 0x236E */ char unk236E[0x2370 - 0x236E];
    /* 0x2370 */ u8 stage_dead_count;
    /* 0x2371 */ char unk2371[0x2800 - 0x2371];
}; // size = 0x2800

class __cppobj ChrShotObj {
    /* 0x000 */ char unk000[0x180];
}; // size = 0x180

struct __cppobj stcCaptiveStatus {
    /* 0x0068 */ char unk0000[0x68];
    /* 0x0068 */ stcStatus status;
}; // size = 0x2868

struct __cppobj SEAT {
    /* 0x00 */ char unk00[0x01 - 0x00];
    /* 0x01 */ char name[64];
    /* 0x41 */ char unk41[0x42 - 0x41];
    /* 0x42 */ s16 id;
    /* 0x44 */ char unk44[0x4A - 0x44];
    /* 0x4A */ s16 num_units;
    /* 0x4C */ char unk4C[0x54 - 0x4C];
    /* 0x54 */ s16 land_panel_x;
    /* 0x56 */ s16 land_panel_z;
    /* 0x58 */ char unk58[0x60 - 0x58];
    /* 0x60 */ s16 facility_id;
    /* 0x62 */ char unk62[0x64 - 0x62];
}; // size = 0x64

struct __cppobj EQUIP_BUF {
    /* 0x000 */ char unk000[0x800];
}; // size = 0x800

enum FACILITIY_TYPE {
    Shop,
    Hospital,
    Evility,
    Training,
    Painter,
    Personality,
    EvilArea,
    ItemWorlder,
    CharaWorlder,
    SphereGiveawayTrade,
    CarnageHadesRanking,
    SaveIcon,
    OperaHouse,
    Data,
    PirateEditor,
    MapEditor,
    BaseEditor,
    Music,
    User,
    EventViewer,
    Tournament,
    Cheat,
    Ranking,
    DLC,
    Keybinds,
    AdjustButtons,
};

struct __cppobj stcFacilitySetData {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0x04 - 0x02];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unk_0A;
}; // size <= 0x10

struct __cppobj stcWorldMap::stcFacility {
    /* 0x00 */ s16 id;
    /* 0x02 */ char name[64];
    /* 0x42 */ char unk42[0x4C - 0x42];
    /* 0x4C */ s16 power_skill_id;
    /* 0x4E */ char unk4E[0x50 - 0x4E];
    /* 0x50 */ s32 committee_size_index;
}; // size = 0x54

class __cppobj COMMITTEE {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0xA2 - 0x02];
    /* 0xA2 */ u8 num_members;
    /* 0xA3 */ char unkA3[0xA4 - 0xA3];
    /* 0xA4 */ u8 member_ids[4]; // unk size
    /* 0xA8 */ char unkA8[0xD6 - 0xA8];
}; // size = 0xD6

struct __cppobj stcWorldMap::stcPower {
    /* 0x00 */ COMMITTEE committee;
}; // size = 0xD6

struct __cppobj stcWorldMap {
    /* 0x0000 */ stcWorldMap::stcFacility facilities[48];
    /* 0x0FC0 */ s16 facility_num;
    /* 0x0FC2 */ stcWorldMap::stcPower powers[48];
    /* 0x37E2 */ s16 num_powers;
    /* 0x37E4 */ s16 unk_37E4[64];
}; // size = 0x3864


struct __cppobj stcTutorialAllUnitStatusSave {
    /* 0x00000 */ stcStatus statuses[64];
    /* 0xA0000 */ s16 num_units;
    /* 0xA0002 */ s16 unk_A0002;
    /* 0xA0004 */ s16 unk_A0004;
    /* 0xA0006 */ SEAT seats[256];
    /* 0xA6406 */ s16 unk_A6406;
}; // size = 0xA6408

struct __cppobj stcTutorialWorldMapSave {
    /* 0x00000 */ stcStatus statuses[64];
    /* 0xA0000 */ s32 num_units;
    /* 0xA0004 */ s32 unk_A0004;
    /* 0xA0008 */ stcWorldMap world_map;
    /* 0xA386C */ s16 unk_A386C;
    /* 0xA386E */ s16 unk_A386E;
    /* 0xA3870 */ SEAT seats[256];
}; // size = 0xA9C70

struct __cppobj stcEnemyFacility {
    /* 0x000 */ stcWorldMap::stcFacility facilities[48];
    /* 0xFC0 */ s16 unk_FC0;
    /* 0xFC2 */ char unkFC2[0x1024 - 0xFC2];
}; // size = 0x1024

class __cppobj Battle::clsEnemyFacility_Battle {
    /* 0x0000 */ stcEnemyFacility facility;
    /* 0x1024 */ char unk1024[0x5598 - 0x1024];
}; // size = 0x5598

class __cppobj clsEditBase {
    /* 0x00 */ struct clsEditBase_vtbl* __vftable;
    /* 0x08 */ char unk08[0x14 - 0x08];
    /* 0x14 */ s16 num_bgms;
    /* 0x16 */ char unk16[0x18 - 0x16];
    /* 0x18 */ s32 bgm_id;
    /* 0x1C */ char unk1C[0x20 - 0x1C];
}; // size >= 0x20

struct __cppobj clsEditBase_vtbl {
    void (*D0)(clsEditBase*, bool dealloc);
};

enum eUSER_PIRATE_RANK {
    
};

class __cppobj clsPirate {
    /* 0x00000 */ struct clsPirate_vtbl* __vftable;
    /* 0x00008 */ stcStatus status[15];
    /* 0x25808 */ char unk25808[0x25D14 - 0x25808];
    /* 0x25D14 */ stcEnemyFacility enemy_facility;
}; // size = 0x26D38

struct __cppobj clsPirate_vtbl {
    void (*D0)(clsPirate*, bool dealloc);
};

class __cppobj clsPirateEdit : clsPirate, clsEditBase {
    /* 0x26D58 */ char unk26D58[0x26EE0 - 0x26D58];
    /* 0x26EE0 */ s32 unk_26EE0;
    /* 0x26EE4 */ char unk26EE4[0x26EF0 - 0x26EE4];
}; // size = 0x26EF0

struct __cppobj clsPirateEdit_vtbl {
    void (*D0)(clsPirateEdit*, bool dealloc);
};

struct PirateBattle::stcResult {
    /* 0x000 */ char unk000[0x004 - 0x000];
    /* 0x004 */ s32 is_win;
    /* 0x008 */ stcItem item;
    /* 0x208 */ char unk208[0x210 - 0x208];
}; // size = 0x210

struct PirateBattle::stcJudge {
    /* 0x00 */ char unk00[0x10 - 0x00];
    /* 0x10 */ Vec2_s16 centers[2]; // unk size, at least 2
    /* 0x18 */ char unk14[0x20 - 0x18];
}; // size = 0x20

class __cppobj Battle::clsTreasureWork {
    /* 0x0000 */ stcTreasurePoint points[16];
    /* 0x2180 */ s32 unk_2180;
}; // size = 0x2190

struct __cppobj stcOriginalMap {
    /* 0x00000 */ char unk00000[0x27658];
}; // size = 0x27658

struct __cppobj clsOtherUserSenator::stcInfo {
    /* 0x00 */ char unk00[0x98 - 0x00];
}; // size = 0x98

struct __cppobj SKILL {
    /* 0x00 */ u8 values[2];
    /* 0x02 */ char unk02[0x05 - 0x02];
    /* 0x05 */ u8 hp_required_percent;
    /* 0x06 */ char unk06[0x08 - 0x06];
    /* 0x08 */ s16 id;
    /* 0x0A */ s16 unk_0A; // maybe multiplier? See SKILL::mGetVal
    /* 0x0C */ char unk0C[0x14 - 0x0C];
}; // size = 0x14

class __cppobj clsCursor : ChrAnmObj {
    /* 0x388 */ char unk388[0x3A8 - 0x388];
    /* 0x3A8 */ f32 unk_3A8;
    /* 0x3AC */ f32 unk_3AC;
    /* 0x3B0 */ char unk3B0[0x3C8 - 0x3B0];
}; // size = 0x3C8

class __cppobj clsWindowForm {
    /* 0x00 */ struct clsWindowForm_vtbl* __vftable;
    /* 0x08 */ char unk08[0x18 - 0x08];
    /* 0x18 */ clsFade__clsVector3 fade_vec3;
    /* 0x60 */ clsFade__clsColor fade_color;
    /* 0x88 */ char unk88[0x90 - 0x88];
}; // size = 0x90

struct clsWindowForm_vtbl {
    /* 0x00 */ void (*D0)(clsWindowForm*, bool dealloc);
};

class __cppobj clsGameWindowManager {
    /* 0x0000 */ clsWindowForm windows[64];
    /* 0x2400 */ s32 unk_2400;
}; // size >= 0x2408

class __cppobj clsMinistry {
    /* 0x000 */ s32 unk_000[32];
    /* 0x080 */ s16 unk_080[32];
    /* 0x0C0 */ SKILL skills[32][4];
}; // size >= 0xAC0

struct __cppobj stcBattleActionCount {
    /* 0x00 */ char unk00[0x12 - 0x00];
    /* 0x12 */ s16 two_ally_dead_count;
    /* 0x14 */ char unk14[0x1C - 0x14];
    /* 0x1C */ s32 num_treasures_opened;
}; // size >= 0x20

class __cppobj OBSTATUS {
    /* 0x00 */ s16 level;
    /* 0x02 */ s16 unit_id;
    /* 0x04 */ char unk04[0x09 - 0x04];
    /* 0x09 */ u8 opinion;
    /* 0x0A */ char unk0A[0x0F - 0x0A];
    /* 0x0F */ char name[64];
    /* 0x4F */ char unk4F[0x52 - 0x4F];
}; // size = 0x52

// make-up name
class __cppobj clsShipParts {
    /* 0x00 */ s32 in_use; // set to 1 when collected
    /* 0x04 */ s16 id;
    /* 0x06 */ char unk06[0x08 - 0x06];
    /* 0x08 */ s32 skill_id;
    /* 0x0C */ u8 unk_0C; // set with a random from stcShipPartsData unk_161 + 1
    /* 0x0D */ char unk0D[0x10 - 0x0D];
}; // size = 0x10

struct __cppobj stcOriginalTown {
    /* 0x000 */ s16 unk_000[64][5];
    /* 0x280 */ char unk280[0x8C8 - 0x280];
    /* 0x8C8 */ s16 unk_8C8[32][6];
    /* 0xA48 */ char unkA48[0xA58 - 0xA48];
}; // size >= 0xA58

struct __cppobj KILLDAT {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unit_id;
}; // size = 0x4

enum eCHEAT_SETTING_TYPE {
    Exp = 2,
    Mana = 3,
    HL = 4,
    EnemyRank = 5,
    AutoHealAtBase = 11,
    PirateEncounters = 12,
};

struct __cppobj COMMONDATA {
    /* 0x000000 */ s32 version; // set to 110
    /* 0x000004 */ s16 unk_000004;
    /* 0x000006 */ u8 hours;
    /* 0x000007 */ u8 minutes;
    /* 0x000008 */ u8 seconds;
    /* 0x000009 */ char unk000009[0x000050 - 0x000009];
    /* 0x000050 */ u8 cycle_num;
    /* 0x000051 */ bool game_completed;
    /* 0x000052 */ char unk000052[0x0000D2 - 0x000052];
    /* 0x0000D2 */ bool flags[0x000FF8 - 0x0000D2]; // unknown size
    /* 0x000FF8 */ s64 money1;
    /* 0x001000 */ char unk001000[0x001008 - 0x001000];
    /* 0x001008 */ s64 money2;
    /* 0x001010 */ char unk001010[0x0010A8 - 0x001010];
    /* 0x0010A8 */ stcStatus fix_units[64];
    /* 0x0A10A8 */ OBSTATUS senators[101];
    /* 0x0A3102 */ char unk0A3102[0x0A39A8 - 0x0A3102];
    /* 0x0A39A8 */ stcCaptiveStatus captives[16];
    /* 0x0CC028 */ clsTreasureInfo treasure_info;
    /* 0x0CE1B0 */ char unk0CE1B0[0x0CE1B4 - 0x0CE1B0];
    /* 0x0CE1B4 */ DUNGEON current_dungeon;
    /* 0x0CE258 */ DUNGEON dungeons[500];
    /* 0x0E22A8 */ stcItem item_world_item[1]; // item we're inside in the item world
    /* 0x0E24A8 */ stcItem unk_0E24A8[64];
    /* 0x0EA4A8 */ stcItem inventory[999];
    /* 0x1672A8 */ s16 num_inventory_items;
    /* 0x1672AA */ s16 num_warehouse_items;
    /* 0x1672AC */ char unk1672AC[0x16732C - 0x1672AC];
    /* 0x16732C */ s16 unk_16732C; // backups for seats, see Tutorial_LoadWorldMap, Tutorial_SaveWorldMap
    /* 0x16732E */ s16 unk_16732E;
    /* 0x167330 */ SEAT seats[256];
    /* 0x16D730 */ char unk16D730[0x16D780 - 0x16D730];
    /* 0x16D780 */ stcItem unk_16D780[16];
    /* 0x16F780 */ HABIT item_world_temp_innocents[1]; // unk size, 8 or 16? maybe holds temporary defeated innocents?
    /* 0x16F788 */ char unk16F788[0x16F814 - 0x16F788];
    /* 0x16F814 */ s16 town_camera_rot_x; // set when flag 3413 is not set
    /* 0x16F816 */ s16 town_camera_rot_y;
    /* 0x16F818 */ s16 town_camera_zoom;
    /* 0x16F81A */ s16 cursor_saved_pos_x;
    /* 0x16F81C */ s16 cursor_saved_pos_z;
    /* 0x16F81E */ s16 cursor_saved_pos_rot;
    /* 0x16F820 */ s16 town_camera_rot_x_flag3413; // set in saveTownCamera instead of regular ones if flag 3413 is set
    /* 0x16F822 */ s16 town_camera_rot_y_flag3413;
    /* 0x16F824 */ s16 town_camera_zoom_flag3413;
    /* 0x16F826 */ s16 town_cursor_default_x;
    /* 0x16F828 */ s16 town_cursor_default_z;
    /* 0x16F82A */ s16 town_cursor_default_rot;
    /* 0x16F82C */ s16 world_map_camera_rot_x;
    /* 0x16F82E */ s16 world_map_camera_rot_y;
    /* 0x16F830 */ s16 world_map_camera_zoom;
    /* 0x16F832 */ s16 world_map_cursor_x;
    /* 0x16F834 */ s16 world_map_cursor_z;
    /* 0x16F836 */ char unk16F836[0x16F8C2 - 0x16F836];
    /* 0x16F8C2 */ s16 num_ship_items; // set in AddItem from sAttack_PirateKill
    /* 0x16F8C4 */ char unk16F8C4[0x16F8C6 - 0x16F8C4];
    /* 0x16F8C6 */ s16 num_fix_units;
    /* 0x16F8C8 */ char unk16F8C8[0x16F8CA - 0x16F8C8];
    /* 0x16F8CA */ s16 num_senators;
    /* 0x16F8CC */ s16 num_captives;
    /* 0x16F8CE */ s16 num_ship_parts;
    /* 0x16F8D0 */ char unk16F8D0[0x16F8D4 - 0x16F8D0];
    /* 0x16F8D4 */ s16 turn_number;
    /* 0x16F8D6 */ s16 camera_zoom;
    /* 0x16F8D8 */ s16 current_item_world_bgm;
    /* 0x16F8DA */ char unk16F8DA[0x16F8E4 - 0x16F8DA];
    /* 0x16F8E4 */ u8 num_base_units; // comapred with global BaseUnitMax
    /* 0x16F8E5 */ char unk16F8E5[0x16F8E7 - 0x16F8E5];
    /* 0x16F8E7 */ u8 customer_rank;
    /* 0x16F8E8 */ u8 product_rank;
    /* 0x16F8E9 */ u8 enemy_rank; // incremented and decremented by 100 with shura mode
    /* 0x16F8EA */ char unk16F8EA[0x16F920 - 0x16F8EA];
    /* 0x16F920 */ u8 text_language;
    /* 0x16F921 */ char unk16F921[0x16F939 - 0x16F921];
    /* 0x16F939 */ u8 bgm_vol_balance;
    /* 0x16F93A */ u8 se_vol_balance;
    /* 0x16F93B */ u8 msg_vol_balance;
    /* 0x16F93C */ u8 voice_vol_balance;
    /* 0x16F93D */ char unk16F93D[0x16F9E1 - 0x16F93D];
    /* 0x16F9E1 */ u8 item_world_num_temp_innocents;
    /* 0x16F9E2 */ u8 item_world_temp_innocent_indexes[1]; // unk size, holds stcStatus 0x1157
    /* 0x16F9E3 */ char unk16F9E3[0x16F9F2 - 0x16F9E3];
    /* 0x16F9F2 */ s16 num_charmakes_available1; // total number of characters which are available to create, e.g warrior and destroyer count as 2
    /* 0x16F9F2 */ s16 num_charmakes_available2;
    /* 0x16F9F6 */ char unk16F9F6[0x16FA00 - 0x16F9F6];
    /* 0x16FA00 */ s16 cheat_configs[16]; // unk size, maybe smaller
    /* 0x16FA20 */ u8 music_collection[100]; // unk size, music.dat goes up to 100
    /* 0x16FA84 */ char unk16FA84[0x16FAB8 - 0x16FA84];
    /* 0x16FAB8 */ s32 item_world_bgms[2];
    /* 0x16FAC0 */ char unk16FAC0[0x16FB42 - 0x16FAC0];
    /* 0x16FB42 */ s16 cursor_saved_pos_y;
    /* 0x16FB44 */ s16 town_cursor_default_hy;
    /* 0x16FB46 */ char unk16FB46[0x16FB4C - 0x16FB46];
    /* 0x16FB4C */ s32 current_map_level_or_rank;
    /* 0x16FB50 */ char unk16FB50[0x16FD06 - 0x16FB50];
    /* 0x16FD06 */ s16 current_item_world_floor;
    /* 0x16FD08 */ char unk16FD08[0x16FD0C - 0x16FD08];
    /* 0x16FD0C */ s16 item_world_floor; // C_HexMap::SaveComdFloor, non-capped raw floor number?
    /* 0x16FD0E */ char unk16FD0E[0x16FD12 - 0x16FD0E];
    /* 0x16FD12 */ u8 num_punish_status;
    /* 0x16FD13 */ char unk16FD13[0x16FD18 - 0x16FD13];
    /* 0x16FD18 */ stcStatus punish_status[64];
    /* 0x20FD18 */ char unk20FD18[0x20FD20 - 0x20FD18];
    /* 0x20FD20 */ EQUIP_BUF unk_20FD20[20];
    /* 0x219D20 */ stcItem unk_219D20[64];
    /* 0x221D20 */ char unk221D20[0x221D21 - 0x221D20];
    /* 0x221D21 */ u8 num_exploded_ally_prinnies[4];
    /* 0x221D25 */ char unk221D25[0x221D26 - 0x221D25];
    /* 0x221D26 */ KILLDAT char_make_collection[294];
    /* 0x2221BE */ KILLDAT unk_2221BE[294];
    /* 0x222656 */ char unk222656[0x2226D9 - 0x222656];
    /* 0x2226D9 */ u8 item_collection[1200]; // unk size, maybe smaller
    /* 0x222B89 */ u8 ship_parts_collection[245]; // unk size, probably 256
    /* 0x222C7E */ char unk222C7E[0x222D55 - 0x222C7E];
    /* 0x222D55 */ u8 magic_collection[1]; // unk size
    /* 0x222D56 */ char unk222D56[0x223078 - 0x222D56];
    /* 0x223078 */ s64 max_damage_dealt;
    /* 0x223080 */ s64 max_total_damage_dealt;
    /* 0x223088 */ s16 max_geo_chain;
    /* 0x22308A */ char unk22308A[0x223098 - 0x22308A];
    /* 0x223098 */ u16 max_level_reached;
    /* 0x22309A */ u16 max_reincarnation_level;
    /* 0x22309C */ char unk22309C[0x22309E - 0x22309C];
    /* 0x22309E */ u16 num_use_freq_item_world;
    /* 0x2230A0 */ s16 highest_item_world_floor_cleared;
    /* 0x2230A2 */ char unk2230A2[0x2230A4 - 0x2230A2];
    /* 0x2230A4 */ u32 num_item_world_floors_cleared;
    /* 0x2230A8 */ char unk2230A8[0x2230AC - 0x2230A8];
    /* 0x2230AC */ u32 extra_enemy_kill_flags;
    /* 0x2230B0 */ char unk2230B0[0x2230B8 - 0x2230B0];
    /* 0x2230B8 */ u32 total_num_reincarnations;
    /* 0x2230BC */ s16 num_use_freq_character_world;
    /* 0x2230BE */ s16 num_max_character_world_floor;
    /* 0x2230C0 */ u32 num_character_world_floors_cleared;
    /* 0x2230C4 */ char unk2230C4[0x2230F8 - 0x2230C4];
    /* 0x2230F8 */ s64 num_times_used_hospital;
    /* 0x223100 */ s64 num_maps_cleared;
    /* 0x223108 */ s64 num_ura_maps_cleared;
    /* 0x223110 */ s64 num_story_clears;
    /* 0x223118 */ s64 num_all_ura_maps_cleared;
    /* 0x223120 */ char unk223120[0x2234D0 - 0x223120];
    /* 0x2234D0 */ u32 num_prinnies_bombed;
    /* 0x2234D4 */ u32 num_items_stolen;
    /* 0x2234D8 */ u32 num_rooms_entered;
    /* 0x2234DC */ u32 num_room_battle_count;
    /* 0x2234E0 */ char unk2234E0[0x2234E4 - 0x2234E0];
    /* 0x2234E4 */ u32 num_assemblies_organised;
    /* 0x2234E8 */ u32 num_throws;
    /* 0x2234EC */ u32 num_tower_attacks;
    /* 0x2234F0 */ u32 num_brides;
    /* 0x2234F4 */ char unk2234F4[0x2235C8 - 0x2234F4];
    /* 0x2235C8 */ clsPirate unk_2235C8[3];
    /* 0x297D70 */ stcOriginalMap unk_297D70[3];
    /* 0x30E078 */ s32 next_unique_id; // some counter, SetCharacterUniqueID
    /* 0x30E07C */ char unk30E07C[0x30E150 - 0x30E07C];
    /* 0x30E150 */ stcOriginalTown original_town;
    /* 0x30EBA8 */ stcStatus unk_30EBA8;
    /* 0x3113A8 */ char unk3113A8[0x3113F8 - 0x3113A8];
    /* 0x3113F8 */ clsOtherUserSenator::stcInfo unk_3113F8[100];
    /* 0x314F58 */ stcWorldMap world_map;
    /* 0x3187BC */ clsShipParts ship_parts[1]; // unk size
    /* 0x3187CC */ char unk3187CC[0x319A7C - 0x3187CC];
    /* 0x319A7C */ clsMinistry ministry;
    /* 0x31A53C */ char unk31A53C[0x31A540 - 0x31A53C];
    /* 0x31A540 */ stcStatus unk_31A540;
    /* 0x31CD40 */ char unk31CD40[0x31CD48 - 0x31CD40];
    /* 0x31CD48 */ stcStatus unk_31CD48;
    /* 0x31F548 */ char unk31F548[0x31F594 - 0x31F548];
    /* 0x31F594 */ stcBattleActionCount battle_action_count1;
    /* 0x31F5B4 */ char unk31F5B4[0x31F5C0 - 0x31F5B4];
    /* 0x31F5C0 */ HABIT innocent_warehouse[256];
    /* 0x31FDC0 */ char unk31FDC0[0x31FE40 - 0x31FDC0];
    /* 0x31FE40 */ stcStatus unk_31FE40[1];
    /* 0x322640 */ char unk322640[0x323A70 - 0x322640];
    /* 0x323A70 */ u16 unk_323A70[3][64];
    /* 0x323BF0 */ char unk323BF0[0x323CAC - 0x323BF0];
    /* 0x323CAC */ s32 ranking_score_innocent_defeat;
    /* 0x323CB0 */ char unk323CB0[0x4FFDA8 - 0x323CB0];
}; // size = 0x4FFDA8

enum eDAMAGE_MODE {

};

enum RESULT::eATTACK_TYPE {

};

class __cppobj RESULT {
    /* 0x0000 */ char unk0000[0x0008 - 0x0000];
    /* 0x0008 */ s64 damage[96];
    /* 0x0308 */ s16 self[10]; // RESULT::mGetSelf
    /* 0x031C */ s16 targets[96];
    /* 0x03DC */ s16 target_by_area[96];
    /* 0x049C */ s32 status[96]; // miss == 0, graze == 2
    /* 0x061C */ s32 target_npcs[96];
    /* 0x079C */ s16 num_self;
    /* 0x079E */ s16 num_targets;
    /* 0x07A0 */ s16 unk_07A0; // Script::clsScriptWork::mGetStateFlag
    /* 0x07A2 */ s16 unk_07A2; // RESULT::mIsSubResult if != 0
    /* 0x07A4 */ s16 attack_facing; // degrees
    /* 0x07A6 */ s16 station_pos_x;
    /* 0x07A8 */ s16 station_pos_y;
    /* 0x07AA */ s16 station_pos_z;
    /* 0x07AC */ char unk07AC[0x07B0 - 0x07AC];
    /* 0x07B0 */ s32 use_hit_event;
    /* 0x07B4 */ char unk07B4[0x07CA - 0x07B4];
    /* 0x07CA */ u8 condition_values[96][64];
    /* 0x1FCA */ u8 condition_turns[96][64];
    /* 0x37CA */ char unk37CA[0x3894 - 0x37CA];
    /* 0x3894 */ bool is_crit[96];
    /* 0x38F4 */ bool is_dead1[96]; // RESULT::mIsDeath
    /* 0x3954 */ char unk3954[0x3E98 - 0x3954];
    /* 0x3E98 */ bool is_dead2[96]; // Maybe wrong
    /* 0x3EF8 */ bool is_half_damage[96];
    /* 0x3F58 */ char unk3F58[0x401C - 0x3F58];
    /* 0x401C */ u8 battle_flag_type; // Script::clsScriptDecoder::BattleFlagClear, if zero, bf_clear clears flags 2500 - 2532, otherwise clears 2532 - 2564
    /* 0x401D */ char unk401D[0x402C - 0x401D];
    /* 0x402C */ bool is_guard_area_action[96];
    /* 0x408C */ s16 blow_length[96];
    /* 0x414C */ s16 blow_pos_x[96];
    /* 0x420C */ s16 blow_pos_z[96];
    /* 0x42CC */ Vec2_s16 break_land_pos[96];
    /* 0x444C */ s32 break_land_num;
    /* 0x4450 */ s32 use_break_land_effect;
    /* 0x4454 */ s32 is_break_event_flat;
    /* 0x4458 */ s32 is_break_event_floor_down;
    /* 0x445C */ char unk445C[0x4460 - 0x445C];
    /* 0x4460 */ RESULT::eATTACK_TYPE attack_type;
    /* 0x4464 */ s16 main_weapon_slot;
    /* 0x4466 */ char unk4466[0x4468 - 0x4466];
    /* 0x4468 */ s32 is_substitute;
    /* 0x446C */ s32 is_sleep_revival_prohibited;
    /* 0x4470 */ s32 is_magic_defeated_enemy;
    /* 0x4474 */ char unk4474[0x4478 - 0x4474];
}; // size = 0x4478

class __cppobj BONUS {
    /* 0x000 */ stcItem item;
    /* 0x200 */ s32 bonus_type; // 0 = item, 1 = money, 2 = exp, 3 = ???
    /* 0x204 */ s32 bonus;
}; // size = 0x208

class __cppobj SAVE_STATUS {
    /* 0x0000 */ s32 panel_x;
    /* 0x0004 */ s32 panel_z;
    /* 0x0008 */ s16 facing;
    /* 0x000C */ s32 event_id;
    /* 0x0010 */ stcStatus status;
}; // size = 0x2810

// Script::Math::clsInt24<u32>
class __cppobj Script::Math::clsInt24 {
    /* 0x00 */ u8 low;
    /* 0x01 */ u8 mid;
    /* 0x02 */ u8 high;
}; // size = 0x3

// Script::Math::clsInt24<int>
class __cppobj Script::Math::clsInt24__s32 {
    /* 0x00 */ u8 low;
    /* 0x01 */ u8 mid;
    /* 0x02 */ u8 high;
}; // size = 0x3

// Script::Math::clsDecimalN<short, 10>
class __cppobj Script::Math::clsDecimalN__s16_10 {
    /* 0x00 */ s16 val;
}; // size = 0x2

// Script::Math::clsDecimalN<int, 10>
class __cppobj Script::Math::clsDecimalN__s32_10 {
    /* 0x00 */ s32 val;
}; // size = 0x4

class __cppobj Script::f16x10Rate {
    /* 0x00 */ s16 val;
}; // size = 0x2

class __cppobj Script::f16x10Inv {
    /* 0x00 */ s16 val;
}; // size = 0x2

class Script::Math::clsVector3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
}; // size = 0xC

enum Script::clsWordListManager::clsWord::eIndex {
    Grave = 0,
    HL = 1,
    SlimeParty = 2,
    PrinnyParty = 3,
    ZombieParty = 4,
    GargoyleParty = 5,
    CuSithParty = 6,
    NekomataParty = 7,
    BoneDragonParty = 8,
    DragonParty = 9,
    RifleDemonParty = 10,
    Is = 11,
    Obtained = 12,
    SentToWarehouse = 13,
    ObtainedButCannotCarryMore = 14,
    TheNoOfTimesTheItemWillLevelUp = 15,
    GreatlyIncreased = 16,
    HasSlightlyIncreased = 17,
    Decreased = 18,
    GreatlyDecreased = 19,
    BonusGaugeOfTheNextStage = 20,
    PartiallyFilledFromTheBeginning = 21,
    FullFromTheBeginning = 22,
    HaveAppeared = 23,
    PatrolHasComeAround = 24,
    InnocentWedding = 25,
    IsBorn = 26,
    PoweredUpDueToTraining = 27,
    PaidHoggmeiserBack = 28,
    GotALoanFromHoggmeiser = 29,
    SenatorsInThisPartyAre = 30,
    TowardsAnAgreement = 31,
};

class __cppobj Script::clsWordListManager::clsWord {
    /* 0x00 */ char word[128];
}; // size = 0x1000

class __cppobj Script::clsWordListManager {
    /* 0x00 */ char unk00[0x10 - 0x00];
}; // size = 0x10

class __cppobj Script::clsTalkBUAnmList {
    /* 0x00 */ std::shared_ptr__clsAnime animes[8]; // std::shared_ptr<clsAnime>
    /* 0x80 */ s32 ids[8];
}; // size = 0xA0

class __cppobj Script::clsEffectObj : clsTraceObj {
    /* 0x1A8 */ EffectWork* effect_work;
    /* 0x1B0 */ s32 status; // maybe just a BOOL for if initialised
    /* 0x1B4 */ char unk1B4[0x1BC - 0x1B4];
    /* 0x1BC */ s32 draw_offset_z;
    /* 0x1C0 */ f32 pos_x; // set to same as model->pos in Script::clsEffectObj::mPlayInit
    /* 0x1C4 */ f32 pos_y;
    /* 0x1C8 */ f32 pos_z;
    /* 0x1CC */ char unk1CC[0x1D0 - 0x1CC];
    /* 0x1D0 */ FADECOL fade1;
    /* 0x230 */ FADECOL rotation_fade; // world rot? set by EffectRot
    /* 0x290 */ FADECOL rotation_local_fade; // local rot? set by EffectRotLocal
    /* 0x2F0 */ FADECOL scale_fade;
    /* 0x350 */ FADECOL scale_local_fade;
    /* 0x3B0 */ bool do_trace_scale;
    /* 0x3B1 */ bool do_trace_direction;
    /* 0x3B2 */ bool do_trace_unk2;
    /* 0x3B3 */ bool do_trace_unk3;
    /* 0x3B4 */ bool is_reverse_size; // set from Script::clsScriptDecoder->is_reverse_size
}; // size = 0x3B8

struct __cppobj Script::clsEffectObj_vtbl {
    void (*D0)(Script::clsEffectObj*, bool dealloc);
    s32 (*mGetObjType)(Script::clsEffectObj*);
    void (*mUpdate)(clsTraceObj*, s32, s32);
    void (*mGetPosBase)(clsTraceObj*, NisVector4*);
    void (*mSetMove)(clsTraceObj*, f32, f32, f32, f32);
    void (*mSetPos0FEvent)(Script::clsEffectObj*);
    void (*mClearTrace)(Script::clsEffectObj*);
    void (*mSetPos0FTraceEvent)(Script::clsEffectObj*);
    void (*mBeforeTraceChildUpdateEvent)(Script::clsEffectObj*);
    NisVector4* (*mGetExTraceScale)(Script::clsEffectObj*, NisVector4*);
    NisVector4* (*mGetExTraceDirection)(Script::clsEffectObj*, NisVector4*);
    void (*mExTraceScaleChanged)(clsTraceObj*);
    void (*mExTraceDirectionChanged)(clsTraceObj*);
    void (*mUpDate)(Script::clsEffectObj*);
};

class __cppobj Script::clsMovePoint {
    /* 0x00 */ Script::Math::clsVector3 point;
    /* 0x0C */ char unk0C[0x10 - 0x0C];
}; // size = 0x10

class __cppobj Script::clsMovePointMaster {
    /* 0x000 */ Script::clsMovePoint move_points[150];
}; // size = 0x960

class __cppobj Script::clsEffectTargetManager {
    /* 0x00 */ u32 effect_id;
}; // size >= 0x04

class __cppobj Script::clsEffectIterator {
    /* 0x00 */ Script::clsEffectTargetManager* target_manager;
    /* 0x08 */ Script::clsEffectObj* effect_obj;
    /* 0x10 */ s32 unk_10;
}; // size = 0x18

// Script::clsUnitTargetManager<clsMoveObj>
class __cppobj Script::clsUnitTargetManager__clsMoveObj {
    /* 0x00 */ u32 unit_index;
    /* 0x08 */ Script::clsScriptWork* script_work;
}; // size >= 0x10

// Script::clsUnitIterator<clsMoveObj>
class __cppobj Script::clsUnitIterator__clsMoveObj {
    /* 0x00 */ Script::clsUnitTargetManager__clsMoveObj* target_manager;
    /* 0x08 */ clsMoveObj* chr_anm_obj;
    /* 0x10 */ s32 index;
}; // size = 0x18

// Script::clsUnitTargetManager<ChrAnmObj>
class __cppobj Script::clsUnitTargetManager__ChrAnmObj {
    /* 0x00 */ u32 unit_index;
    /* 0x08 */ Script::clsScriptWork* script_work;
}; // size >= 0x10

// Script::clsUnitIterator<ChrAnmObj>
class __cppobj Script::clsUnitIterator__ChrAnmObj {
    /* 0x00 */ Script::clsUnitTargetManager__ChrAnmObj* target_manager;
    /* 0x08 */ ChrAnmObj* chr_anm_obj;
    /* 0x10 */ s32 index;
}; // size = 0x18

// Script::clsUnitTargetManager<clsCharacter>
class __cppobj Script::clsUnitTargetManager__clsCharacter {
    /* 0x00 */ u32 unit_index;
    /* 0x08 */ Script::clsScriptWork* script_work;
}; // size >= 0x10

// Script::clsUnitIterator<clsCharacter>
class __cppobj Script::clsUnitIterator__clsCharacter {
    /* 0x00 */ Script::clsUnitTargetManager__clsCharacter* target_manager;
    /* 0x08 */ clsCharacter* chr_anm_obj;
    /* 0x10 */ s32 index;
}; // size = 0x18

// talk.dat entries
struct __cppobj Script::TalkEntry {
    /* 0x00 */ s32 offset; // from 8 + num_TalkEntry * sizeof(TalkEntry)
    /* 0x04 */ s32 id;
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unk_0A;
    /* 0x0C */ s16 num_flags_required;
    /* 0x0E */ s16 num_flags_not_required;
    /* 0x10 */ s16 flags_required[10];
    /* 0x24 */ s16 flags_not_required[10];
}; // size = 0x38

enum Script::clsScriptWork::eRUN_TYPE {
    Stopped = 2,
};

class __cppobj Script::clsScriptWork : Anm::clsTree {
    /* 0x020 */ ChrAnmObj* unk_020;
    /* 0x028 */ char unk028[0x038 - 0x028];
    /* 0x038 */ u8* script_buffer;
    /* 0x040 */ u32 script_id;
    /* 0x044 */ s32 unk_044; // Script::clsScriptWork::mUpdateWaitState
    /* 0x048 */ char unk048[0x058 - 0x048];
    /* 0x058 */ RESULT* result;
    /* 0x060 */ char unk060[0x0E8 - 0x060];
    /* 0x0E8 */ u8 is_recall;
    /* 0x0E9 */ char unk0E9[0x0EC - 0x0E9];
    /* 0x0EC */ s32 key_wait;
    /* 0x0F0 */ char unk0F0[0x0F4 - 0x0F0];
    /* 0x0F4 */ s32 view_angle;
    /* 0x0F8 */ s32 view_angle_code; // degrees / 90
    /* 0x0FC */ s32 effect_angle;
    /* 0x100 */ f32 args[16];
    /* 0x140 */ s16 loop_starts[8];
    /* 0x150 */ s16 loop_ends[8];
    /* 0x160 */ void* loop_script_ptrs[8];
    /* 0x1A0 */ u8 loop_index;
    /* 0x1A4 */ Script::clsScriptWork::eRUN_TYPE run_type;
}; // size = 0x1A8

struct __cppobj Script::stcScriptArg {
    /* 0x00 */ s32* return_value;
    /* 0x08 */ Script::clsScriptWork* work;
    /* 0x10 */ s32 opcode_size; // size in bytes of the current command and all its args
}; // size >= 0x18

enum Script::TalkOpcodes {
    
};

class __cppobj Script::clsICommandForm {
    /* 0x00 */ Script::clsICommandForm_vtbl* __vftable;
};

struct __cppobj Script::clsICommandForm_vtbl {
    /* 0x00 */ void (*D0)(Script::clsICommandForm*, bool dealloc);
    /* 0x08 */ s32 (*GetCategoryCode)(Script::clsICommandForm*);
    /* 0x10 */ s32 (*GetSubNum)(Script::clsICommandForm*);
    /* 0x18 */ s32 (*GetCommandCode)(Script::clsICommandForm*);
    /* 0x20 */ s32 (*Run)(Script::clsICommandForm*, Script::stcScriptArg*, Script::clsScriptDecoder*);
};

class __cppobj Script::clsCommandForm : Script::clsICommandForm {
    /* 0x08 */ u32 id;
    /* 0x10 */ void* func;
}; // size <= 0x18

class __cppobj Script::clsCommandForm0 : Script::clsCommandForm {

}; // size = 0x18

class __cppobj Script::clsCommandForm1 : Script::clsCommandForm {

}; // size = 0x18

class __cppobj Script::clsCommandForm2 : Script::clsCommandForm {

}; // size = 0x18

class __cppobj Script::clsScriptTargetPosManager {

}; // size = ??? probably 0

class __cppobj Script::clsScriptDecoder {
    /* 0x00 */ bool is_reverse_camera_yz; // if set, Script::clsScriptDecoder::CameraRot inverts y and z
    /* 0x01 */ bool is_reverse_camera_x; // if set, Script::clsScriptDecoder::CameraMove inverts x
    /* 0x02 */ bool is_reverse_rot; // if set, Script::clsScriptDecoder::EffectRot inverts y and z
    /* 0x03 */ bool is_reverse_size;
    /* 0x04 */ bool is_reverse_pos;
    /* 0x05 */ char unk05[0x06 - 0x05];
    /* 0x06 */ bool is_reverse_animation; // if set, Script::clsScriptDecoder::CharAnm2D inverts sequence id, Script::clsScriptDecoder::CharAnmMetamorphose inverts angle
    /* 0x07 */ bool is_reverse_facing;
    /* 0x08 */ bool is_reverse_move;
    /* 0x09 */ bool is_reverse_parent;
    /* 0x0A */ char unk0A[0x0B - 0x0A];
    /* 0x0B */ bool is_reverse_move_point; // Script::clsScriptDecoder::MovePointReverse
    /* 0x0C */ bool is_reverse_bg_colour; // Script::clsScriptDecoder::BgColorReverse
    /* 0x0D */ char unk0D[0x10 - 0x0D];
    /* 0x10 */ f32 scale_x_multiplier; // used in Script::clsScriptDecoder::CharDrawMode
    /* 0x14 */ f32 scale_z_multiplier; // used in Script::clsScriptDecoder::CharDrawMode
    /* 0x18 */ bool do_scale_text_pos; // Script::clsScriptDecoder::TextPos
    /* 0x19 */ bool do_scale_text_size; // Script::clsScriptDecoder::TextSize
    /* 0x1A */ char unk1A[0x20 - 0x1A];
    /* 0x20 */ Script::clsScriptTargetPosManager target_pos_manager;
    /* 0x24 */ char unk24[0x28 - 0x24];
}; // size >= 0x28

class __cppobj SCRIPT_000F0 {
    /* 0x00 */ char unk00[0x08 - 0x00];
    /* 0x08 */ Script::clsScriptWork* work;
}; // size >= 0x10

class __cppobj SCRIPT {
    /* 0x00000 */ Script::clsTalkBUAnmList talk_bu_anm_list;
    /* 0x000A0 */ Script::clsScriptDecoder script_decoder;
    /* 0x000C8 */ char unk000C8[0x000F0 - 0x000C8];
    /* 0x000F0 */ SCRIPT_000F0* unk_000F0[256];
    /* 0x008F0 */ char unk008F0[0x00A10 - 0x008F0];
    /* 0x00A10 */ s16 max_text_choice_string_width; 
    /* 0x00A12 */ s16 num_text_choices; 
    /* 0x00A14 */ char unk00A14[0x00A16 - 0x00A14];
    /* 0x00A16 */ char choice_strings[11][192]; // unk outer count, 11 is the most used in talk.txt
    /* 0x01256 */ char unk01256[0x15A2C - 0x01256];
    /* 0x15A2C */ s16 text_window_open; // TextWindowDestroy
    /* 0x15A2E */ s16 unk_15A2E; // SCRIPT::mSetScriptTextMode sets it to 0
    /* 0x15A30 */ char unk15A30[0x15A34 - 0x15A30];
    /* 0x15A34 */ s16 message_index; // capped to 223
    /* 0x15A36 */ char unk15A36[0x15A38 - 0x15A36];
    /* 0x15A38 */ s16 text_pos_x;
    /* 0x15A3A */ s16 text_pos_z;
    /* 0x15A3C */ char unk15A3C[0x15A42 - 0x15A3C];
    /* 0x15A42 */ char messages[224][192];
    /* 0x20242 */ char unk20242[0x2AA58 - 0x20242];
    /* 0x2AA58 */ FADECOL text_fade;
    /* 0x2AAB8 */ clsTransferPoint__f32_2 text_scale;
    /* 0x2AAE8 */ s32 text_mode;
    /* 0x2AAEC */ char unk2AAEC[0x2AB2C - 0x2AAEC];
    /* 0x2AB2C */ s16 bu_anime_file_indexes[8]; // low 10000 of talk's AnimeLoad
    /* 0x2AB3C */ char unk2AB3C[0x2ABB4 - 0x2AB3C];
    /* 0x2ABB4 */ f32 bu_pos_x[3];
    /* 0x2ABC0 */ f32 bu_pos_z[3];
    /* 0x2ABCC */ f32 bu_move_target_x[3];
    /* 0x2ABD8 */ f32 bu_move_target_z[3];
    /* 0x2ABE4 */ s32 bu_move_target_num_frames[3];
    /* 0x2ABF0 */ char unk2ABF0[0x2AC08 - 0x2ABF0];
    /* 0x2AC08 */ f32 bu_size_target_x[3];
    /* 0x2AC14 */ f32 bu_size_taget_z[3];
    /* 0x2AC20 */ s32 bu_size_taget_num_frames[3];
    /* 0x2AC2C */ char unk2AC2C[0x2ACB0 - 0x2AC2C];
    /* 0x2ACB0 */ clsTransferPoint__f32_3 transfer_points[3];
    /* 0x2AD64 */ char unk2AD64[0x2AD72 - 0x2AD64];
    /* 0x2AD72 */ s16 wait_time;
    /* 0x2AD74 */ char unk2AD74[0x2AD78 - 0x2AD74];
    /* 0x2AD78 */ s16 current_choice_select_index;
    /* 0x2AD7A */ char unk2AD7A[0x2AD7E - 0x2AD7A];
    /* 0x2AD7E */ u8 msg_queue_index; // which sndres index to use in clsSound_Msg
    /* 0x2AD7F */ char unk2AD7F[0x2AD8C - 0x2AD7F];
    /* 0x2AD8C */ s32 key_wait; // set to 1 with talk funcs waitinput
    /* 0x2AD90 */ s32 text_window_width;
    /* 0x2AD94 */ s32 text_window_height;
    /* 0x2AD98 */ char unk2AD98[0x2ADA8 - 0x2AD98];
    /* 0x2ADA8 */ ChrAnmObj unk_2ADA8;
    /* 0x2B130 */ ChrAnmObj unk_2B130;
    /* 0x2B4B8 */ ChrAnmObj unk_2B4B8;
    /* 0x2B840 */ ChrAnmObj unk_2B840;
    /* 0x2BBC8 */ u32 talk_number; // % 10000 is a face index
    /* 0x2BBCC */ char unk2BBCC[0x2BBE8 - 0x2BBCC];
    /* 0x2BBE8 */ Script::TalkEntry* talk_entry;
    /* 0x2BBF0 */ s32 num_talk_entries;
    /* 0x2BBF4 */ char unk2BBF4[0x2BBF8 - 0x2BBF4];
    /* 0x2BBF8 */ s32 is_talking;
    /* 0x2BBFC */ s32 is_tutorial_talking;
    /* 0x2BC00 */ s16 unk_2BC00;
    /* 0x2BC02 */ s16 unk_2BC02;
    /* 0x2BC04 */ char unk2BC04[0x2BC10 - 0x2BC04];
    /* 0x2BC10 */ u8* talk_data;
    /* 0x2BC18 */ u8 unk_2BC18; // wait input 1 = no close, 2 = close
    /* 0x2BC19 */ char unk2BC19[0x2BC1D - 0x2BC19];
    /* 0x2BC1D */ bool all_reset;
    /* 0x2BC1E */ char unk2BC1E[0x2BC20 - 0x2BC1E];
    /* 0x2BC20 */ char* text_choice_end_data_ptrs[11]; // unk size
    /* 0x2BC78 */ char unk2BC78[0x2BF20 - 0x2BC78];
    /* 0x2BF20 */ stcStatus* talk_character_status;
    /* 0x2BF28 */ s32 help_message_flag;
    /* 0x2BF2C */ s32 face_index;
    /* 0x2BF30 */ s32 face_palette;
    /* 0x2BF34 */ char unk2BF34[0x2BF40 - 0x2BF34];
    /* 0x2BF40 */ RESULT* result;
    /* 0x2BF48 */ char unk2BF48[0x2C2A0 - 0x2BF48];
}; // size <= 0x2C2A0

struct __cppobj TPOS {
    /* 0x00 */ char unk00[0x8E];
}; // size = 0x8E

class __cppobj clsVertexArray {
    /* 0x00 */ char unk00[0x18 - 0x00];
    /* 0x18 */ NisGraphicsTexture* texture;
    /* 0x20 */ char unk20[0x48 - 0x20];
    /* 0x48 */ s32 unk_48; // vertex count set to this if not given to clsVertexArray::setRenderVertexCount
    /* 0x4C */ char unk4C[0x50 - 0x4C];
    /* 0x50 */ s32 vertex_count;
    /* 0x54 */ char unk54[0xE0 - 0x54];
}; // size = 0xE0

class __cppobj C_HexMap_000008 {
    /* 0x00 */ s32 panel_x;
    /* 0x04 */ s32 panel_z;
    /* 0x08 */ char unk08[0x20 - 0x08];
}; // size = 0x20

class __cppobj C_HexMap_112718 {
    /* 0x00 */ s32 panel_x;
    /* 0x04 */ s32 panel_z;
    /* 0x08 */ char unk08[0x0C - 0x08];
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
}; // size = 0x14

class __cppobj C_HexMap {
    /* 0x000000 */ s32 width;
    /* 0x000004 */ s32 height;
    /* 0x000008 */ C_HexMap_000008 unk_000008[128];
    /* 0x001008 */ f32 unk_001008[80][80];
    /* 0x007408 */ char unk007408[0x0B0008 - 0x007408];
    /* 0x0B0008 */ bool unk_0B0008[80][80];
    /* 0x0B1908 */ bool walkable[80][80];
    /* 0x0B3208 */ f32 panel_heights[80][80][4];
    /* 0x0CC208 */ bool unk_0CC208[80][80];
    /* 0x0CDB08 */ bool unk_0CDB08[80][80];
    /* 0x0CF408 */ s8 enemy_facility_indexes[80][80];
    /* 0x0D0D08 */ s16 unk_0D0D08[4][255];
    /* 0x0D1500 */ char unk0D1500[0x0D1508 - 0x0D1500];
    /* 0x0D1508 */ s32 do_render_cursor;
    /* 0x0D150C */ char unk0D150C[0x0D1620 - 0x0D150C];
    /* 0x0D1620 */ s32 unk_0D1620[4][2];
    /* 0x0D1640 */ char unk0D1640[0x0D1650 - 0x0D1640];
    /* 0x0D1650 */ s32 section2_id; // given to model Setup as id into obf section 2
    /* 0x0D1654 */ s32 section3_ids[4]; // given to model Setup_No as id into obf section 3
    /* 0x0D1664 */ char unk0D1664[0x0D1668 - 0x0D1664];
    /* 0x0D1668 */ C_NisModel unk_0D1668;
    /* 0x0D18B8 */ C_NisModel unk_0D18B8;
    /* 0x0D1B08 */ C_NisModel unk_0D1B08[4];
    /* 0x0D2448 */ clsVertexArray unk_0D2448;
    /* 0x0D2528 */ clsVertexArray geo_panel_vertices1;
    /* 0x0D2608 */ u8 geo_panels_x[80 * 80];
    /* 0x0D3F08 */ u8 geo_panels_z[80 * 80];
    /* 0x0D5808 */ u8 geo_panels_colour[80 * 80]; // indexed linearly, how is this different to geo_colours?
    /* 0x0D7108 */ s32 num_geo_panels;
    /* 0x0D710C */ s8 geo_colours[80][80];
    /* 0x0D8A0C */ u8 unk_0D8A0C; // clsGeoPanel::GeoPanelAlphaJob
    /* 0x0D8A0D */ u8 geo_panel_alpha;
    /* 0x0D8A0E */ char unk0D8A0E[0x0D8A20 - 0x0D8A0E];
    /* 0x0D8A20 */ clsVertexArray geo_panels_vertices2;
    /* 0x0D8B00 */ char unk0D8B00[0x0DEF0E - 0x0D8B00];
    /* 0x0DEF0E */ s8 unk_0DEF0E[80][80];
    /* 0x0E080E */ u8 unk_0E080E; // Script::clsScriptDecoder::MapDisp and MapFade
    /* 0x0E0810 */ f32 fade_colour_r; // Script::clsScriptDecoder::MapDisp to fade out? global map colour?
    /* 0x0E0814 */ f32 fade_colour_g;
    /* 0x0E0818 */ f32 fade_colour_b;
    /* 0x0E081C */ f32 fade_colour_a;
    /* 0x0E0820 */ f32 fade_colour_delta_r;
    /* 0x0E0824 */ f32 fade_colour_delta_g;
    /* 0x0E0828 */ f32 fade_colour_delta_b;
    /* 0x0E082C */ f32 fade_colour_delta_a;
    /* 0x0E0830 */ s32 fade_colour_num_frames;
    /* 0x0E0834 */ char unk0E0834[0x0E0838 - 0x0E0834];
    /* 0x0E0838 */ void* unk_0E0838; // points to some struct with a texture array in it
    /* 0x0E0840 */ bool unk_0E0840[80][80];
    /* 0x0E2140 */ char unk0E2140[0x0FB170 - 0x0E2140];
    /* 0x0FB170 */ s32 num_meshes;
    /* 0x0FB174 */ s32 num_models;
    /* 0x0FB178 */ C_NisMesh unk_0FB178[90];
    /* 0x105768 */ C_NisModel unk_105768[16];
    /* 0x107C68 */ NisGraphicsTexture* unk_107C68[32][4];
    /* 0x108068 */ char unk108068[0x108088 - 0x108068];
    /* 0x108088 */ C_NisMesh unk_108088[90];
    /* 0x112678 */ NisGraphicsTexture* unk_112678[4][4];
    /* 0x1126F8 */ char unk1126F8[0x112718 - 0x1126F8];
    /* 0x112718 */ C_HexMap_112718 event_areas[3];
    /* 0x112754 */ s16 num_event_areas;
    /* 0x112756 */ char unk112756[0x112759 - 0x112756];
    /* 0x112759 */ bool judge_free_pos[80][80];
    /* 0x114059 */ char unk114059[0x114060 - 0x114059];
    /* 0x114060 */ C_NisMesh unk_114060[90];
    /* 0x11E650 */ char unk11E650[0x11E704 - 0x11E650];
    /* 0x11E704 */ s32 item_map_width;
    /* 0x11E708 */ s32 item_map_height;
    /* 0x11E70C */ char unk11E70C[0x11E710 - 0x11E70C];
    /* 0x11E710 */ u64 unk_11E710[1]; // unk size
    /* 0x11E718 */ char unk11E718[0x120360 - 0x11E718];
    /* 0x120360 */ s32 is_event_floor_connected;
    /* 0x120364 */ tag_chrFileData chars1[160];
    /* 0x127B64 */ tag_chrFileData chars2[160];
    /* 0x12F364 */ tag_chrFileData chars3[160];
    /* 0x136B64 */ tag_chrFileData chars4[160];
    /* 0x13E364 */ char unk13E364[0x13E370 - 0x13E364];
}; // size = 0x13E370

enum eTACTICS_AI {

};

class __cppobj Tactics::clsMagicMap {
    /* 0x0000 */ char unk0000[0x1010 - 0x0000];
}; // size = 0x1010

class __cppobj clsTacticsMap {
    /* 0x0000 */ s16 unk_0000[80][80];
    /* 0x3200 */ u8 unk_3200[80][80];
    /* 0x4B00 */ s32 unk_4B00[9][4];
    /* 0x4B90 */ C_HexMap* hexmap;
}; // size = 0x4B98

class __cppobj TACTICS {
    /* 0x000000 */ TPOS tpos[4096];
    /* 0x08E000 */ s16 tpos_count;
    /* 0x08E002 */ char unk08E002[0x097A48 - 0x08E002];
    /* 0x097A48 */ s16 unk_097A48[4096][32];
    /* 0x0D7A48 */ char unk0D7A48[0x0DFA48 - 0x0D7A48];
    /* 0x0DFA48 */ u8 unk_0DFA48[4096][32];
    /* 0x0FFA48 */ char unk0FFA48[0x102A48 - 0x0FFA48];
    /* 0x102A48 */ s8 unk_102A48[4096][32];
    /* 0x122A48 */ char unk122A48[0x126A50 - 0x122A48];
}; // size <= 0x126A50

class __cppobj clsDimensionMap {
    /* 0x00000 */ char unk00000[0x22128 - 0x00000];
}; // size = 0x22128

enum DEVICE_TYPE {

};

struct __cppobj MapSubFileHeader {
    /* 0x00 */ s32 offset; // from end of file list
    /* 0x04 */ char name[28]; // unk size, may be smaller
}; // size = 0x20

// big endian, gets flipped
struct __cppobj MapFileSectionHex {
    /* 0x00 */ s32 unk_00; // only reads geo panels if >= 5
    /* 0x04 */ s32 width;
    /* 0x08 */ s32 height;
    /* 0x0C */ s32 unk_0D18B8_in_use;
    /* 0x10 */ s32 unk_0D1B08_in_use[4];
    /* 0x20 */ clsNisLight global_light;
    /* 0xE0 */ char unkE0[0xF0 - 0xE0];
}; // size = 0xF0

struct __cppobj MapFileSectionChr {
    /* 0x00 */ char unk00[0x02 - 0x00];
    /* 0x02 */ s16 num_units;
    /* 0x04 */ u8 battle_type;
    /* 0x05 */ u8 end_turn;
    /* 0x06 */ char unk06[0x10 - 0x06];
}; // size = 0x10

// big endian, gets flipped
struct __cppobj tag_chrFileData {
    /* 0x00 */ s16 unit_id;
    /* 0x02 */ s16 level;
    /* 0x04 */ s16 facing_index; // / 90
    /* 0x06 */ s16 x;
    /* 0x08 */ s16 y;
    /* 0x0A */ s16 z;
    /* 0x0C */ u8 operate_type;
    /* 0x0D */ char unk0D[0x0F - 0x0D];
    /* 0x0F */ u8 boss_flag; // multiplies stats both up and down
    /* 0x10 */ char unk10[0xC0 - 0x10];
}; // size = 0xC0

class __cppobj MapPack {
    /* 0x000 */ s32 num_files; // files inside the .pac, usually 3: .hex, .chr, .obf
    /* 0x008 */ u8* compressed_data;
    /* 0x010 */ u8* decompressed_data;
    /* 0x018 */ u8* data_ptr; // left at the offset for the file data, so this + offset is correct
    /* 0x020 */ s32 map_section; // e.g map00103, hi = 001, lo = 03
    /* 0x024 */ s32 map_id;
    /* 0x028 */ MapSubFileHeader** file_headers;
    /* 0x030 */ char unk030[0x034 - 0x030];
    /* 0x034 */ s32 load_screen_alpha;
    /* 0x038 */ std::shared_ptr__clsFile_Archive archive_sp;
    /* 0x048 */ char file_name[256];
}; // size = 0x148

class __cppobj clsMapEdit {
    /* 0x00000 */ char unk00000[0x2FBB0 - 0x00000];
}; // size = 0x2FBB0

class __cppobj clsEventPopCharacter::stcEventData {
    /* 0x00 */ char unk00[0x30];
}; // size = 0x30

class __cppobj clsEventArea {
    /* 0x00000 */ clsVertexArray unk_00000;
    /* 0x000E0 */ char unk000E0[0x200EC - 0x000E0];
    /* 0x200EC */ f32 fade_end_r;
    /* 0x200F0 */ f32 fade_end_g;
    /* 0x200F3 */ f32 fade_end_b;
    /* 0x200F8 */ f32 fade_end_a;
    /* 0x200FC */ char unk200FC[0x20128 - 0x200FC];
}; // size >= 0x20128

class __cppobj clsEventPopCharacter {
    /* 0x000 */ clsEventPopCharacter::stcEventData unk_00[32];
    /* 0x600 */ s16 unk_600;
    /* 0x604 */ s32 unk_604;
}; // size >= 0x608

class __cppobj clsTownEdit {
    /* 0x00000 */ char unk00000[0x9DB90 - 0x00000];
}; // size = 0x9DB90

enum eGateType {
    BasePanel = 0,
    EnemyOne_1 = 1,
    EnemyOne_2 = 2,
    EnemyOne_3 = 3,
    EnemyOne_4 = 4,
    Goal = 5,
    Mystery = 6,
    SuperGate = 7,
    Court = 8,
    ForgeItemGate = 9,
    GetItemGate = 10,
    InnocentGate = 11,
    Max = 12,
};

class __cppobj clsGatePanel {
    /* 0x0000 */ ChrAnmObj base_panel;
    /* 0x0388 */ ChrAnmObj enemy_base_panel[4];
    /* 0x11A8 */ ChrAnmObj goal_gate_panel;
    /* 0x1530 */ ChrAnmObj mystery_gate_panel;
    /* 0x18B8 */ ChrAnmObj super_gate_panel;
    /* 0x1C40 */ ChrAnmObj job_court_gate_panel;
    /* 0x1FC8 */ Nmpl::Core::CVector2 base_panel_pos;
    /* 0x1FD0 */ Nmpl::Core::CVector2 enemy_base_panel_pos[4];
    /* 0x1FF0 */ Nmpl::Core::CVector2 item_goal_panel_pos;
    /* 0x1FF8 */ Nmpl::Core::CVector2 mystery1_panel_pos;
    /* 0x2000 */ bool base_active; // guess, set in all the Set functions
    /* 0x2001 */ bool enemy_base_active[4];
    /* 0x2005 */ char unk2005[0x2008 - 0x2005];
    /* 0x2008 */ s32 num_enemy_panels_active;
    /* 0x200C */ bool goal_active;
    /* 0x200D */ bool mystery_active;
    /* 0x2010 */ Nmpl::Core::CVector2 goal2_panel_pos;
    /* 0x2018 */ Nmpl::Core::CVector2 mystery2_panel_pos;
    /* 0x2020 */ bool super_gate_active;
    /* 0x2021 */ bool job_court_active;
    /* 0x2022 */ char unk2022[0x2034 - 0x2022];
    /* 0x2034 */ s32 forge_item_active;
    /* 0x2038 */ Nmpl::Core::CVector2 forge_item_panel_pos;
    /* 0x2040 */ s32 item_active;
    /* 0x2044 */ Nmpl::Core::CVector2 item_panel_pos;
    /* 0x204C */ s32 innocent_active;
    /* 0x2050 */ Nmpl::Core::CVector2 innocent_panel_pos;
    /* 0x2058 */ char unk2058[0x2070 - 0x2058];
    /* 0x2070 */ ChrAnmObj forge_item_gate;
    /* 0x23F8 */ ChrAnmObj item_gate;
    /* 0x2780 */ ChrAnmObj innocent_gate_panel;
}; // size >= 0x2B08

class __cppobj NameInput::clsNameInput {
    /* 0x000 */ char name[64];
    /* 0x040 */ char user_char_help1[128];
    /* 0x0C0 */ char user_char_help2[128];
    /* 0x140 */ char user_char_help3[128];
    /* 0x1C0 */ char pirate_help1[128];
    /* 0x240 */ char pirate_help2[128];
    /* 0x2C0 */ char pirate_help3[128];
    /* 0x340 */ char char_help1[128];
    /* 0x3C0 */ char char_help2[128];
    /* 0x440 */ char char_help3[128];
    /* 0x4C0 */ char unk4C0[0x4D0 - 0x4C0];
    /* 0x4D0 */ s32 cursor_pos; // in chars, not bytes
    /* 0x4D4 */ char unk4D4[0x4DC - 0x4D4];
    /* 0x4DC */ s32 unit_id;
    /* 0x4E0 */ char unk4E0[0x4F0 - 0x4E0];
}; // size <= 0x4F0

enum eASAGI_CHANGE {
    
};

class __cppobj clsGallery {
    /* 0x0000 */ ChrAnmObj chars[32];
    /* 0x7100 */ s32 free_index;
}; // size = 0x7108

class __cppobj clsRelatedChartComb {
    /* 0x000 */ s16 unit_indexes[960];
    /* 0x780 */ s16 free_index;
}; // size = 0x782

class __cppobj Station::clsStationUnit : clsCharacter {
    /* 0x07D0 */ ChrAnmObj unk_07D0[32];
    /* 0x78D0 */ s32 unk_78D0[32];
    /* 0x7950 */ s16 num_unk_07D0;
}; // size = 0x7958

struct __cppobj Station::clsStationUnit_vtbl {
    void (*D0)(Station::clsStationUnit*, bool dealloc);
    s32 (*mGetObjType)(Station::clsStationUnit*);
    void (*mUpdate)(ChrAnmObj*, s32, s32);
    void (*mGetPosBase)(ChrAnmObj*, NisVector4*);
    void (*mSetMove)(clsMoveObj*, f32, f32, f32, f32);
    void (*mSetPos0FEvent)(ChrAnmObj*);
    void (*mClearTrace)(clsTraceObj*);
    void (*mSetPos0FTraceEvent)(ChrAnmObj*);
    void (*NullSub2)(void*);
    void (*mGetExTraceScale)(ChrAnmObj*);
    void (*mGetExTraceDirection)(clsTraceObj*);
    void (*mExTraceScaleChanged)(clsTraceObj*);
    void (*mExTraceDirectionChanged)(clsTraceObj*);
};

class __cppobj Station::clsStationControl {
    /* 0x0000 */ Station::clsStationUnit unit;
}; // size = 0x7958

enum Battle::eBATTLE_MODE {

};

struct Assembly::MO_INFO {
    /* 0x00 */ char unk00[0x04 - 0x00];
}; // size = 0x4

class __cppobj Assembly::clsAssemblyBattle {
    /* 0x0000 */ char unk0000[0x000A - 0x0000];
    /* 0x000A */ s8 unk_0008[128][16];
    /* 0x0810 */ ChrAnmObj unk_0810[9];
    /* 0x27D8 */ char unk27D8[0x2928 - 0x27D8];
}; // size = 0x2928

class __cppobj Assembly::clsMakeUnitSelect {
    /* 0x000 */ char unk000[0x25E - 0x000];
    /* 0x25E */ s16 unk_25E[64][6];
    /* 0x55E */ char unk55E[0x5E0 - 0x55E];
    /* 0x5E0 */ s32 unk_5E0;
    /* 0x5E4 */ s32 unk_5E4;
    /* 0x5E8 */ char unk5E8[0xD00 - 0x5E8];
}; // size = 0xD00

class __cppobj Assembly::clsItemRename {
    /* 0x00 */ char unk00[0x50 - 0x00];
}; // size = 0x50

class __cppobj Assembly::clsItemImageChange {
    /* 0x000 */ char unk000[0x380 - 0x000];
}; // size = 0x380

class __cppobj Assembly::SOSITU {
    /* 0x00 */ char unk00[0x04 - 0x00];
    /* 0x04 */ s16 mana_required;
    /* 0x06 */ u8 bonus;
    /* 0x07 */ u8 inherit_rate;
}; // size = 0x8

struct __cppobj clsCharaPromotion::stcCharaPromotionTask {
    /* 0x00 */ s32 id;
    /* 0x08 */ void (*init_func)();
    /* 0x10 */ void (*update_func)();
    /* 0x18 */ void (*render_func)();
}; // size = 0x20

class __cppobj clsCharaPromotion {
    /* 0x0000 */ clsCharaPromotion::stcCharaPromotionTask task;
    /* 0x0020 */ char unk0020[0x5050 - 0x0020];
}; // size = 0x5050

class __cppobj clsGovernmentFacility {
    /* 0x000 */ char unk000[0x0FC - 0x000];
    /* 0x0FC */ s32 unk_0FC[11][11];
    /* 0x2E0 */ char unk2E0[0x2E4 - 0x2E0];
    /* 0x2E4 */ s32 unk_2E4[11][11];
    /* 0x4C8 */ char unk4C8[0x4D8 - 0x4C8];
    /* 0x4D8 */ s32 unk_4D8;
    /* 0x4DC */ s32 unk_4DC;
}; // size >= 0x4E0

class __cppobj clsGovernment {
    /* 0x0000 */ char unk0000[0x0004 - 0x0000];
    /* 0x0004 */ clsGovernmentFacility facility;
    /* 0x04E4 */ char unk04E4[0x09E8 - 0x04E4];
    /* 0x09E8 */ ChrAnmObj unk_9E8;
    /* 0x0D70 */ char unk0D70[0x0DE0 - 0x0D70];
    /* 0x0DE0 */ stcStatus unk_0DE0;
    /* 0x35E0 */ char unk35E0[0x3948 - 0x35E0];
}; // size >= 0x3948

class __cppobj Battle::clsUnitCounter::stcNpcCounter {
    /* 0x000 */ s16 num_units;
    /* 0x002 */ char unk002[0x120 - 0x002];
    /* 0x120 */ u8 tyrant_counters;
    /* 0x121 */ char unk121[0x124 - 0x121];
}; // size = 0x124

class __cppobj Battle::clsUnitCounter {
    /* 0x000 */ Battle::clsUnitCounter::stcNpcCounter counters[4];
}; // size >= 0x490

class __cppobj Battle::clsEndTurn {
    /* 0x00000 */ char unk_00000[20][64]; // some object, not char array
    /* 0x00500 */ char unk00500[0x00510 - 0x00500];
    /* 0x00510 */ s16 unk_00510[6400][8];
    /* 0x19510 */ u8 unk_19510;
    /* 0x19511 */ char unk19511[0x19618 - 0x19511];
}; // size = 0x19618

enum Battle::clsEnemyTurn::eMODE {

};

class __cppobj Battle::clsEnemyTurn {
    /* 0x000 */ char unk000[0x008 - 0x000];
    /* 0x008 */ s32 unk_008[1]; // unk size
    /* 0x00C */ char unk00C[0x01C - 0x00C];
    /* 0x01C */ s8 unk_01C[0x144];
    /* 0x160 */ s16 unk_160;
}; // size >= 0x168

class __cppobj Battle::clsStageCounter {
    /* 0x0000 */ char unk0000[0x0120 - 0x0000];
    /* 0x0120 */ u8 death_counts[4]; // unk size, probably num max chars per map
    /* 0x0124 */ char unk0124[0x012A - 0x0124];
    /* 0x012A */ u8 num_prinnies_killed;
    /* 0x012B */ char unk012B[0x1130 - 0x012B];
    /* 0x1130 */ s32 use_ending_check;
    /* 0x1134 */ u8 ally_member_attack;
    /* 0x1135 */ char unk1135[0x1140 - 0x1135];
}; // size <= 0x1140

class __cppobj Battle::clsReceiveControl {
    /* 0x000 */ char unk000[0x208 - 0x000];
}; // size = 0x208

struct __cppobj Battle::stcMenuPosControl {
    /* 0x00 */ char unk00[0x90 - 0x00];
}; // size = 0x90

struct __cppobj Battle::stcCharWorldResult {
    /* 0x000 */ char unk000[0x128 - 0x000];
}; // size = 0x128

struct __cppobj Battle::stcBasePanelResult {
    /* 0x0000 */ RESULT result;
    /* 0x4478 */ char unk4478[0x4480 - 0x4478];
}; // size <= 0x4480

enum Battle::USERMAP_BATTLE_RESULT {

};

enum Battle::eBASEUNIT_CONDITION {

};

struct __cppobj Battle::BATTLE_INFO {
    /* 0x00 */ s32 initalise_type;
}; // size = 0x4

class __cppobj clsGovernmentTorture {
    /* 0x0000 */ char unk0000[0x0040 - 0x0000];
    /* 0x0040 */ ChrAnmObj* unk_0040;
    /* 0x0048 */ char unk0048[0x0500 - 0x0048];
    /* 0x0500 */ ChrAnmObj unk_0500;
    /* 0x0888 */ s32 unk_0888;
    /* 0x088C */ char unk088C[0x08F8 - 0x088C];
    /* 0x08F8 */ stcStatus unk_08F8;
    /* 0x30F8 */ s32 key_stick_convert_mode;
}; // size = 0x3100

class __cppobj clsWorldMapView {
    /* 0x00000 */ char unk00000[0x00018 - 0x00000];
    /* 0x00018 */ ChrAnmObj unk_00018[48];
    /* 0x0A998 */ char unk0A998[0x0A9A0 - 0x0A998];
    /* 0x0A9A0 */ ChrAnmObj unk_0A9A0[16];
    /* 0x0E220 */ char unk0E220[0x0E228 - 0x0E220];
    /* 0x0E228 */ ChrAnmObj unk_0E228[16];
    /* 0x11AA8 */ char unk11AA8[0x11AAA - 0x11AA8];
    /* 0x11AAA */ s8 unk_11AAA[32][32];
    /* 0x11EAA */ s8 unk_11EAA[32][32];
    /* 0x122AA */ s16 unk_122AA[32][32];
    /* 0x12AAA */ char unk12AAA[0x12C08 - 0x12AAA];
}; // size <= 0x12C08

class __cppobj clsSchoolView : clsWorldMapView {
}; // size = 0x12C08

class __cppobj clsWorldMap {
    /* 0x00 */ char unk00[0x70 - 0x00];
}; // size = 0x70

class __cppobj WORLD_ADM {
    /* 0x000 */ C_NisCamera_Base camera;
    /* 0x0D0 */ f32 pos_x;
    /* 0x0D4 */ f32 pos_y;
    /* 0x0D8 */ f32 pos_z;
    /* 0x0DC */ f32 rot_x;
    /* 0x0E0 */ f32 rot_y;
    /* 0x0E4 */ f32 rot_z;
    /* 0x0E8 */ char unk0E8[0x124 - 0x0E8];
    /* 0x124 */ f32 current_rot_x; // used in saveTownCamera, why are these different from rot_x ?
    /* 0x128 */ f32 current_rot_y; // used in saveTownCamera, why are these different from rot_y ?
    /* 0x12C */ f32 current_rot_z; // used in saveTownCamera, why are these different from rot_y ?
    /* 0x130 */ char unk130[0x144 - 0x130];
    /* 0x144 */ f32 pos_target_x;
    /* 0x148 */ f32 pos_target_y;
    /* 0x14C */ f32 pos_target_z;
    /* 0x150 */ f32 pos_delta_x;
    /* 0x154 */ f32 pos_delta_y;
    /* 0x158 */ f32 pos_delta_z;
    /* 0x15C */ char unk15C[0x160 - 0x15C];
    /* 0x160 */ f32 pos_num_frames;
    /* 0x164 */ clsTransferPoint__f32_1 unk_164;
    /* 0x188 */ clsTransferPoint__f32_1 lens_point;
    /* 0x1AC */ f32 lens;
    /* 0x1B0 */ char unk1B0[0x258 - 0x1B0];
    /* 0x258 */ f32 rot_target_x;
    /* 0x25C */ f32 rot_target_y;
    /* 0x260 */ f32 rot_target_z;
    /* 0x264 */ f32 rot_delta_x;
    /* 0x268 */ f32 rot_delta_y;
    /* 0x26C */ f32 rot_delta_z;
    /* 0x270 */ f32 rot_num_frames;
    /* 0x274 */ char unk274[0x28C - 0x274];
    /* 0x28C */ f32 vibration;
    /* 0x290 */ f32 vibration_direction;
    /* 0x294 */ s16 vibration_num_frames;
    /* 0x296 */ char unk296[0x29C - 0x296];
    /* 0x29C */ f32 acceleration;
    /* 0x2A0 */ f32 pos_accel_x;
    /* 0x2A4 */ f32 pos_accel_y;
    /* 0x2A8 */ f32 pos_accel_z;
    /* 0x2AC */ s32 accel_duration;
    /* 0x2B0 */ s16 acceleration_rate_in_frames; // number of frames for each "step" of acceleration increase
    /* 0x2B2 */ s16 acceleration_direction; // 1 = positive, 2 = negative
    /* 0x2B4 */ FADECOL rotate_accel_fade;
    /* 0x314 */ s16 unk_314; // set in WORLD_ADM::mAddAcceleRotate
    /* 0x316 */ char unk316[0x350 - 0x316];
}; // size = 0x350

class __cppobj stcKeeperItemData_ {
    /* 0x000 */ char unk000[0x180 - 0x000];
    /* 0x180 */ s16 collection_indexes[128]; // item indexes? Used as index into comd.item_collection
    /* 0x280 */ char unk280[0x29C - 0x280];
}; // size = 0x29C

class __cppobj stcItemRateData_ {
    /* 0x00 */ char unk00[0x1C];
}; // size = 0x1C

class __cppobj stcKeeperShipPartsData_ {
    /* 0x000 */ char unk000[0x0C8 - 0x000];
    /* 0x0C8 */ s16 collection_indexes[100]; // unk size
    /* 0x190 */ s16 num_indexes;
}; // size = 0x192

class __cppobj stcKeeperMagicData_ {
    /* 0x000 */ char unk000[0x190 - 0x000];
    /* 0x190 */ s16 collection_indexes[200]; // unk size
    /* 0x320 */ s16 num_indexes;
}; // size = 0x322

class __cppobj clsSHOP_RECORD {
    /* 0x0000 */ char unk0000[0x0108 - 0x0000];
    /* 0x0108 */ stcKeeperItemData_ keeper_item_data[18];
    /* 0x3000 */ char unk3000[0x301C - 0x3000];
    /* 0x301C */ stcItemRateData_ item_rate_data[3];
    /* 0x3070 */ char unk3070[0x3072 - 0x3070];
    /* 0x3072 */ stcKeeperShipPartsData_ keeper_ship_parts_data[6];
    /* 0x39DE */ char unk39DE[0x3BA8 - 0x39DE];
    /* 0x3BA8 */ stcKeeperMagicData_ keeper_magic_data[12];
    /* 0x6140 */ char unk6140[0x65AC - 0x6140];
    /* 0x65AC */ u8 unk_65AC;
    /* 0x65AD */ char unk65AD[0x65C0 - 0x65AD];
}; // size <= 0x65C0

class __cppobj clsShopCommitte {
    /* 0x000 */ char unk000[0x006 - 0x000];
    /* 0x006 */ s16 unk_006[1][64];
    /* 0x086 */ char unk086[0x08A - 0x086];
    /* 0x08A */ s16 unk_08A[1][64];
    /* 0x10A */ s16 unk_10A[1][64];
    /* 0x18A */ char unk18A[0x1A0 - 0x18A];
}; // size >= 0x1A0

struct __cppobj SND_COMBO_VOICE_SEARCH_TBL {
    /* 0x00 */ char unk00[0x0C - 0x00];
}; // size = 0xC

class __cppobj Nmpl::Sound::CSndRes {
    /* 0x00 */ char unk00[0x60 - 0x00];
}; // size = 0x60

class __cppobj Nmpl::Core::intrusive_ptr__CSndRes {
    /* 0x00 */ Nmpl::Sound::CSndRes* ptr;
}; // size = 0x8

class __cppobj Nmpl::Sound::CSndPlayBase {
    /* 0x00 */ struct Nmpl::Sound::CSndPlayBase_vtbl* __vftable;
    /* 0x08 */ char unk08[0xE0 - 0x08];
}; // size >= 0xE0

struct Nmpl::Sound::CSndPlayBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Sound::CSndPlayBase*, bool dealloc);
    /* 0x08 */ void (*prepare)(Nmpl::Sound::CSndPlayBase*);
    /* 0x10 */ void (*play)(Nmpl::Sound::CSndPlayBase*);
    /* 0x18 */ void (*__purecall1)(Nmpl::Sound::CSndPlayBase*);
    /* 0x20 */ void (*getCurrentPlayingSample)(Nmpl::Sound::CSndPlayBase*);
    /* 0x28 */ void (*getSoundPressure)(Nmpl::Sound::CSndPlayBase*);
    /* 0x30 */ void (*__purecall2)(Nmpl::Sound::CSndPlayBase*);
    /* 0x38 */ void (*setRes)(Nmpl::Sound::CSndPlayBase*, Nmpl::Sound::CSndRes*);
    /* 0x40 */ void (*__purecall3)(Nmpl::Sound::CSndPlayBase*);
    /* 0x48 */ void (*__purecall4)(Nmpl::Sound::CSndPlayBase*);
    /* 0x50 */ void (*__purecall5)(Nmpl::Sound::CSndPlayBase*);
    /* 0x58 */ void (*__purecall6)(Nmpl::Sound::CSndPlayBase*);
    /* 0x60 */ void (*NullSub1)(Nmpl::Sound::CSndPlayBase*);
    /* 0x68 */ void (*resetSettings)(Nmpl::Sound::CSndPlayBase*, Nmpl::Sound::CSndRes*);
    /* 0x70 */ void (*__purecall7)(Nmpl::Sound::CSndPlayBase*);
};

class __cppobj Nmpl::Sound::CSndPlayWin::SasVoiceUseInfo {
    /* 0x00 */ std::vector unk_00;
    /* 0x18 */ char unk18[0x20 - 0x18];
}; // size = 0x20

class __cppobj Nmpl::Sound::CSndPlayWin : Nmpl::Sound::CSndPlayBase {
    /* 0x0E0 */ char unk0E0[0x190 - 0x0E0];
}; // size >= 0x190

struct Nmpl::Sound::CSndPlayWin_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Sound::CSndPlayWin*, bool dealloc);
    /* 0x08 */ void (*prepare)(Nmpl::Sound::CSndPlayWin*);
    /* 0x10 */ void (*play)(Nmpl::Sound::CSndPlayWin*);
    /* 0x18 */ void (*stop)(Nmpl::Sound::CSndPlayWin*);
    /* 0x20 */ void (*getCurrentPlayingSample)(Nmpl::Sound::CSndPlayBase*);
    /* 0x28 */ void (*getSoundPressure)(Nmpl::Sound::CSndPlayBase*);
    /* 0x30 */ void (*setVolume)(Nmpl::Sound::CSndPlayWin*, f32, f32);
    /* 0x38 */ void (*setRes)(Nmpl::Sound::CSndPlayWin*, Nmpl::Sound::CSndRes*);
    /* 0x40 */ void (*setRes_)(Nmpl::Sound::CSndPlayWin*);
    /* 0x48 */ void (*play_)(Nmpl::Sound::CSndPlayWin*);
    /* 0x50 */ void (*run)(Nmpl::Sound::CSndPlayWin*);
    /* 0x58 */ void (*stop2)(Nmpl::Sound::CSndPlayWin*);
    /* 0x60 */ void (*release)(Nmpl::Sound::CSndPlayWin*);
    /* 0x68 */ void (*resetSettings)(Nmpl::Sound::CSndPlayBase*, Nmpl::Sound::CSndRes*);
    /* 0x70 */ void (*prepareForPlay)(Nmpl::Sound::CSndPlayWin*);
};

class __cppobj Nmpl::Sound::CSndPlay : Nmpl::Sound::CSndPlayWin {
    /* 0x190 */ char unk190[0x1A0 - 0x190];
}; // size = 0x1A0

struct Nmpl::Sound::CSndPlay_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Sound::CSndPlay*, bool dealloc);
    /* 0x08 */ void (*prepare)(Nmpl::Sound::CSndPlayWin*);
    /* 0x10 */ void (*play)(Nmpl::Sound::CSndPlayWin*);
    /* 0x18 */ void (*stop)(Nmpl::Sound::CSndPlayWin*);
    /* 0x20 */ void (*getCurrentPlayingSample)(Nmpl::Sound::CSndPlayBase*);
    /* 0x28 */ void (*getSoundPressure)(Nmpl::Sound::CSndPlayBase*);
    /* 0x30 */ void (*setVolume)(Nmpl::Sound::CSndPlayWin*, f32, f32);
    /* 0x38 */ void (*setRes)(Nmpl::Sound::CSndPlayWin*, Nmpl::Sound::CSndRes*);
    /* 0x40 */ void (*setRes_)(Nmpl::Sound::CSndPlayWin*);
    /* 0x48 */ void (*play_)(Nmpl::Sound::CSndPlayWin*);
    /* 0x50 */ void (*run)(Nmpl::Sound::CSndPlayWin*);
    /* 0x58 */ void (*stop2)(Nmpl::Sound::CSndPlayWin*);
    /* 0x60 */ void (*release)(Nmpl::Sound::CSndPlayWin*);
    /* 0x68 */ void (*resetSettings)(Nmpl::Sound::CSndPlayBase*, Nmpl::Sound::CSndRes*);
    /* 0x70 */ void (*prepareForPlay)(Nmpl::Sound::CSndPlayWin*);
};

class __cppobj Nmpl::Sound::CSndMgrBase {
    /* 0x000 */ struct Nmpl::Sound::CSndMgrBase_vtbl* __vftable;
    /* 0x008 */ char unk008[0x018 - 0x008];
    /* 0x018 */ s32 unk_018;
    /* 0x01C */ s32 unk_01C;
    /* 0x020 */ Nmpl::Sound::CSndRes unk_020;
    /* 0x080 */ Nmpl::Sound::CSndRes unk_080;
    /* 0x0E0 */ Nmpl::Sound::CSndPlay unk_0E0;
    /* 0x280 */ Nmpl::Sound::CSndPlay unk_280;
    /* 0x420 */ Nmpl::Sound::CSndPlay unk_420;
    /* 0x5C0 */ Nmpl::Sound::CSndPlay unk_5C0;
    /* 0x760 */ char unk760[0x768 - 0x760];
    /* 0x768 */ s32 num_sound_players;
    /* 0x76C */ s32 num_sound_res;
    /* 0x770 */ s32 num_sound_res_pointers;
    /* 0x774 */ char unk774[0x790 - 0x774];
    /* 0x790 */ Nmpl::Core::CJobWorker* job_worker;
    /* 0x798 */ char unk798[0x7E0 - 0x798];
}; // size <= 0x7E0

struct Nmpl::Sound::CSndMgrBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Sound::CSndMgrBase*, bool dealloc);
    /* 0x08 */ void (*open1)(Nmpl::Sound::CSndMgrBase*, Nmpl::File::CFile*, bool);
    /* 0x10 */ void (*open2)(Nmpl::Sound::CSndMgrBase*, char const*, bool);
    /* 0x18 */ void (*openMem)(Nmpl::Sound::CSndMgrBase*, void*);
    /* 0x20 */ void (*openMmlStr)(Nmpl::Sound::CSndMgrBase*, char const*);
    /* 0x28 */ void (*play)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, f32, f32, s32, s32, u32, bool, bool);
    /* 0x30 */ void (*playShot)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, f32, f32, s32, s32, u32, bool);
    /* 0x38 */ void (*getPlayer1)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, s32);
    /* 0x40 */ void (*getPlayer2)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x48 */ void (*NullSub1)(Nmpl::Sound::CSndMgrBase*);
    /* 0x50 */ void (*pushResEmpty)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x58 */ void (*addResReleaseStack)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x60 */ void (*pushPlayEmpty)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndPlay*);
    /* 0x68 */ void (*pushPlayReleaseWait)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndPlay*);
    /* 0x70 */ void (*__purecall1)(Nmpl::Sound::CSndMgrBase*);
    /* 0x78 */ void (*pauseAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x80 */ void (*resumeAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x88 */ void (*stopAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x90 */ void (*isStopAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x98 */ void (*NullSub2)(Nmpl::Sound::CSndMgrBase*);
    /* 0xA0 */ void (*NullSub3)(Nmpl::Sound::CSndMgrBase*);
    /* 0xA8 */ void (*NullSub4)(Nmpl::Sound::CSndMgrBase*);
    /* 0xB0 */ void (*NullSub5)(Nmpl::Sound::CSndMgrBase*);
    /* 0xB8 */ void (*__purecall2)(Nmpl::Sound::CSndMgrBase*);
    /* 0xC0 */ void (*popResEmpty)(Nmpl::Sound::CSndMgrBase*);
    /* 0xC8 */ void (*popPlayEmpty)(Nmpl::Sound::CSndMgrBase*);
};

class __cppobj Nmpl::Sound::CSndMgrWin : Nmpl::Sound::CSndMgrBase {
    /* 0x7E0 */ std::shared_ptr unk_7E0;
    /* 0x7F0 */ std::shared_ptr unk_7F0;
    /* 0x800 */ char unk800[0x4];
    /* 0x804 */ u8 unk_804;
}; // size >= 0x808

struct Nmpl::Sound::CSndMgrWin_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Sound::CSndMgrWin*, bool dealloc);
    /* 0x08 */ void (*open1)(Nmpl::Sound::CSndMgrBase*, Nmpl::File::CFile*, bool);
    /* 0x10 */ void (*open2)(Nmpl::Sound::CSndMgrBase*, char const*, bool);
    /* 0x18 */ void (*openMem)(Nmpl::Sound::CSndMgrBase*, void*);
    /* 0x20 */ void (*openMmlStr)(Nmpl::Sound::CSndMgrBase*, char const*);
    /* 0x28 */ void (*play)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, f32, f32, s32, s32, u32, bool, bool);
    /* 0x30 */ void (*playShot)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, f32, f32, s32, s32, u32, bool);
    /* 0x38 */ void (*getPlayer1)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, s32);
    /* 0x40 */ void (*getPlayer2)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x48 */ void (*run)(Nmpl::Sound::CSndMgrWin*);
    /* 0x50 */ void (*pushResEmpty)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x58 */ void (*addResReleaseStack)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x60 */ void (*pushPlayEmpty)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndPlay*);
    /* 0x68 */ void (*pushPlayReleaseWait)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndPlay*);
    /* 0x70 */ void (*setMasterVolume)(Nmpl::Sound::CSndMgrWin*, f32);
    /* 0x78 */ void (*pauseAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x80 */ void (*resumeAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x88 */ void (*stopAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x90 */ void (*isStopAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x98 */ void (*NullSub2)(Nmpl::Sound::CSndMgrBase*);
    /* 0xA0 */ void (*NullSub3)(Nmpl::Sound::CSndMgrBase*);
    /* 0xA8 */ void (*NullSub4)(Nmpl::Sound::CSndMgrBase*);
    /* 0xB0 */ void (*NullSub5)(Nmpl::Sound::CSndMgrBase*);
    /* 0xB8 */ void (*init)(Nmpl::Sound::CSndMgrWin*);
    /* 0xC0 */ void (*popResEmpty)(Nmpl::Sound::CSndMgrBase*);
    /* 0xC8 */ void (*popPlayEmpty)(Nmpl::Sound::CSndMgrBase*);
};

class __cppobj Nmpl::Sound::CSndMgr : Nmpl::Sound::CSndMgrWin {
    /* 0x808 */ char unk808[0x810 - 0x808];
}; // size = 0x810

struct Nmpl::Sound::CSndMgr_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Sound::CSndMgr*, bool dealloc);
    /* 0x08 */ void (*open1)(Nmpl::Sound::CSndMgrBase*, Nmpl::File::CFile*, bool);
    /* 0x10 */ void (*open2)(Nmpl::Sound::CSndMgrBase*, char const*, bool);
    /* 0x18 */ void (*openMem)(Nmpl::Sound::CSndMgrBase*, void*);
    /* 0x20 */ void (*openMmlStr)(Nmpl::Sound::CSndMgrBase*, char const*);
    /* 0x28 */ void (*play)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, f32, f32, s32, s32, u32, bool, bool);
    /* 0x30 */ void (*playShot)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, f32, f32, s32, s32, u32, bool);
    /* 0x38 */ void (*getPlayer1)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*, s32);
    /* 0x40 */ void (*getPlayer2)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x48 */ void (*run)(Nmpl::Sound::CSndMgrWin*);
    /* 0x50 */ void (*pushResEmpty)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x58 */ void (*addResReleaseStack)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndRes*);
    /* 0x60 */ void (*pushPlayEmpty)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndPlay*);
    /* 0x68 */ void (*pushPlayReleaseWait)(Nmpl::Sound::CSndMgrBase*, Nmpl::Sound::CSndPlay*);
    /* 0x70 */ void (*setMasterVolume)(Nmpl::Sound::CSndMgrWin*, f32);
    /* 0x78 */ void (*pauseAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x80 */ void (*resumeAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x88 */ void (*stopAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x90 */ void (*isStopAllPlayer)(Nmpl::Sound::CSndMgrBase*);
    /* 0x98 */ void (*NullSub2)(Nmpl::Sound::CSndMgrBase*);
    /* 0xA0 */ void (*NullSub3)(Nmpl::Sound::CSndMgrBase*);
    /* 0xA8 */ void (*NullSub4)(Nmpl::Sound::CSndMgrBase*);
    /* 0xB0 */ void (*NullSub5)(Nmpl::Sound::CSndMgrBase*);
    /* 0xB8 */ void (*init)(Nmpl::Sound::CSndMgrWin*);
    /* 0xC0 */ void (*popResEmpty)(Nmpl::Sound::CSndMgrBase*);
    /* 0xC8 */ void (*popPlayEmpty)(Nmpl::Sound::CSndMgrBase*);
};

class __cppobj clsSound_BGM {
    /* 0x00 */ char unk00[0x48 - 0x00];
}; // size = 0x48

class __cppobj clsSound_Msg::stcMsgPlayQueue {
    /* 0x00 */ char unk00[0x10 - 0x00];
    /* 0x10 */ s32 msg_id;
    /* 0x14 */ char unk14[0x20 - 0x14];
}; // size = 0x20

class __cppobj std::shared_ptr__make_clsSound_Msg__stcMsgPlayQueue {
    /* 0x00 */ std::shared_pointer_ref_count_base ref_count_base;
    /* 0x10 */ clsSound_Msg::stcMsgPlayQueue play_queue;
}; // size = 0x30

class __cppobj std::shared_ptr__clsSound_Msg__stcMsgPlayQueue {
    /* 0x00 */ clsSound_Msg::stcMsgPlayQueue* ptr;
    /* 0x08 */ std::shared_pointer_ref_count_base* rep;
}; // size = 0x10

class __cppobj clsSound_Msg {
    /* 0x00 */ char unk00[0x08 - 0x00];
    /* 0x08 */ std::shared_ptr__clsSound_Msg__stcMsgPlayQueue play_queues[2]; // unk size
    /* 0x28 */ s32 queue_state[2];
}; // size = 0x30

class __cppobj clsSound_SE {
    /* 0x0000 */ char unk0000[0x1050 - 0x0000];
}; // size = 0x1050

class __cppobj clsSound_Voice {
    /* 0x000 */ char unk000[0xC28 - 0x000];
}; // size = 0xC28

class __cppobj clsSaleByAgent {
    /* 0x00 */ char unk00[0x60 - 0x00];
}; // size <= 0x60

class __cppobj clsUserRQShopSalesItem {
    /* 0x0000 */ char shop_name[64];
    /* 0x0040 */ stcItem unk_0040[10];
    /* 0x1440 */ stcItem unk_1400[10];
    /* 0x2840 */ s64 sales; // unsure if total number of sales, or total money made from sales
    /* 0x2848 */ char unk2848[0x2850 - 0x2848];
}; // size <= 0x2850

class __cppobj clsShopSkill {
    /* 0x00000 */ char unk00000[0x0002A - 0x00000];
    /* 0x0002A */ s16 unk_0002A[8][64];
    /* 0x0042A */ char unk0042A[0x8043C - 0x0042A];
    /* 0x8043C */ s16 unk_8043C[8][64];
    /* 0x8083C */ char unk8083C[0x80860 - 0x8083C];
}; // size <= 0x80860

class __cppobj clsShopTraining {
    /* 0x000 */ char unk000[0x00C - 0x000];
    /* 0x00C */ s16 unk_00C[5][64];
    /* 0x28C */ char unk28C[0x298 - 0x28C];
    /* 0x298 */ s16 unk_298[5][64];
    /* 0x518 */ s16 unk_518[5][64];
    /* 0x798 */ char unk798[0x7B0 - 0x798];
}; // size = 0x7B0

class __cppobj clsTitleReload : clsTaskBase {
    /* 0x088 */ char unk088[0x0A0 - 0x088];
    /* 0x0A0 */ clsGameStartupItemLoadFullLoadPack startup_load_full_pack;
    /* 0x0E8 */ char unk0E8[0x168 - 0x0E8];
    /* 0x168 */ clsGameStartupItemLoadEffect startup_load_effect;
}; // size = 0x690

struct __cppobj clsTitleReload_vtbl {
    /* 0x00 */ void (*D0)(clsTitleReload*, bool dealloc);
    /* 0x08 */ void (*initialize)(clsTaskBase*);
    /* 0x10 */ bool (*initialize_Wait)(clsTaskBase*);
    /* 0x18 */ void (*finalize)(clsTaskBase*);
    /* 0x20 */ bool (*finalize_Wait)(clsTaskBase*);
    /* 0x28 */ void (*update_Before)(clsTaskBase*);
    /* 0x30 */ void (*NullSub1)(clsTaskBase*);
    /* 0x38 */ void (*render_Before)(clsTaskBase*);
    /* 0x40 */ void (*NullSub2)(clsTaskBase*);
    /* 0x48 */ void (*NullSub3)(clsTaskBase*);
    /* 0x50 */ void (*NullSub4)(clsTitleReload*);
    /* 0x58 */ void (*stateFunction)(clsTaskBase*, clsTaskBase::eFUNC_TYPE);
    /* 0x60 */ void (*Initialize)(clsTitleReload*);
    /* 0x68 */ void (*NullSub5)(clsTitleReload*);
    /* 0x70 */ void (*NullSub6)(clsTitleReload*);
    /* 0x78 */ void (*NullSub7)(clsTitleReload*);
};

struct __cppobj NisUtilityFontConvertImageTable_ {
    /* 0x00 */ char unk00[0x28 - 0x00];
}; // size = 0x28

struct __cppobj NisUtilityFontInfo {
    /* 0x00 */ char unk00[0x60 - 0x00];
}; // size = 0x60

struct __cppobj NisFontDrawerHeader {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size >= 0x8

struct __cppobj NisFontDrawerCode {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size >= 0x8

enum NIS_RESULT {

};

class __cppobj Nmpl::Framework::GraUtil::CMojiFont::SChrInfo {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18

class __cppobj Nmpl::Framework::GraUtil::CMojiFont {
    /* 0x00 */ struct Nmpl::Framework::GraUtil::CMojiFont_vtbl* __vftable;
    /* 0x08 */ std::vector font_textures; // Nmpl::Core::intrusive_ptr<Nmpl::Gra::CGraTex>
    /* 0x20 */ char unk20[0x24 - 0x20];
    /* 0x24 */ s32 texture_bit_size;
    /* 0x28 */ char unk28[0x38 - 0x28];
    /* 0x38 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* schar_info_head;
    /* 0x40 */ s16 tex_width;
    /* 0x42 */ s16 tex_height;
    /* 0x44 */ s16 gylph_width;
    /* 0x46 */ s16 gylph_height;
    /* 0x48 */ char unk48[0x60 - 0x48];
}; // size >= 0x60

struct __cppobj Nmpl::Framework::GraUtil::CMojiFont_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Framework::GraUtil::CMojiFont*, bool dealloc);
    /* 0x08 */ s32 (*code2no)(Nmpl::Framework::GraUtil::CMojiFont*, u64);
    /* 0x10 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* (*no2chrInfo)(Nmpl::Framework::GraUtil::CMojiFont*, s32);
    /* 0x18 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* (*code2chrInfo)(Nmpl::Framework::GraUtil::CMojiFont*, u64);
    /* 0x20 */ void (*no2uv)(Nmpl::Framework::GraUtil::CMojiFont*, s32, u32*, u32*, u32*);
};

class __cppobj Nmpl::Framework::GraUtil::CMojiFontScalableBase : Nmpl::Framework::GraUtil::CMojiFont {
    /* 0x60 */ std::unordered_map fonts; // std::unordered_map<u64, u64>
    /* 0xA0 */ std::vector schar_infos; // std::vector<Nmpl::Framework::GraUtil::CMojiFont::SChrInfo>
    /* 0xB8 */ s32 width;
    /* 0xBC */ s32 height;
}; // size >= 0xC0

struct __cppobj Nmpl::Framework::GraUtil::CMojiFontScalableBase_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Framework::GraUtil::CMojiFontScalableBase*, bool dealloc);
    /* 0x08 */ s32 (*code2no)(Nmpl::Framework::GraUtil::CMojiFontScalableBase*, u64);
    /* 0x10 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* (*no2chrInfo)(Nmpl::Framework::GraUtil::CMojiFont*, s32);
    /* 0x18 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* (*code2chrInfo)(Nmpl::Framework::GraUtil::CMojiFont*, u64);
    /* 0x20 */ void (*no2uv)(Nmpl::Framework::GraUtil::CMojiFont*, s32, u32*, u32*, u32*);
    /* 0x28 */ void (*Initialize)(Nmpl::Framework::GraUtil::CMojiFontScalableBase*, char const*, char const*, s32, s32, s32, s32);
    /* 0x30 */ bool (*WriteFont)(Nmpl::Framework::GraUtil::CMojiFontScalableBase*, Nmpl::Framework::GraUtil::CMojiFont::SChrInfo*, char const*, s32);
    /* 0x38 */ void (*AddTexture)(Nmpl::Framework::GraUtil::CMojiFontScalableBase*);
};

struct __cppobj Nmpl::Framework::GraUtil::CMojiFontScalableWin::stcFontSurface {
    /* 0x00 */ void* data_buffer;
    /* 0x08 */ Nmpl::Core::intrusive_ptr tex; // Nmpl::Gra::CGraTex*
}; // size = 0x10

class __cppobj std::shared_ptr__make_stcFontSurface {
    /* 0x00 */ std::shared_pointer_ref_count_base ref_count_base;
    /* 0x10 */ Nmpl::Framework::GraUtil::CMojiFontScalableWin::stcFontSurface surface;
}; // size = 0x20

class __cppobj Nmpl::Framework::GraUtil::CMojiFontScalableWin : Nmpl::Framework::GraUtil::CMojiFontScalableBase {
    /* 0x0C0 */ Nmpl::File::CFile* file;
    /* 0x0C8 */ void* buffer;
    /* 0x0D0 */ HANDLE font_file_handle;
    /* 0x0D8 */ HFONT* hfont;
    /* 0x0E0 */ HDC hdc;
    /* 0x0E8 */ std::vector font_surfaces;
}; // size = 0x100

struct __cppobj Nmpl::Framework::GraUtil::CMojiFontScalableWin_vtbl {
    /* 0x00 */ void (*D0)(Nmpl::Framework::GraUtil::CMojiFontScalableWin*, bool dealloc);
    /* 0x08 */ s32 (*code2no)(Nmpl::Framework::GraUtil::CMojiFontScalableBase*, u64);
    /* 0x10 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* (*no2chrInfo)(Nmpl::Framework::GraUtil::CMojiFont*, s32);
    /* 0x18 */ Nmpl::Framework::GraUtil::CMojiFont::SChrInfo* (*code2chrInfo)(Nmpl::Framework::GraUtil::CMojiFont*, u64);
    /* 0x20 */ void (*no2uv)(Nmpl::Framework::GraUtil::CMojiFont*, s32, u32*, u32*, u32*);
    /* 0x28 */ void (*Initialize)(Nmpl::Framework::GraUtil::CMojiFontScalableWin*, char const*, char const*, s32, s32, s32, s32);
    /* 0x30 */ bool (*WriteFont)(Nmpl::Framework::GraUtil::CMojiFontScalableWin*, Nmpl::Framework::GraUtil::CMojiFont::SChrInfo*, char const*, s32);
    /* 0x38 */ void (*AddTexture)(Nmpl::Framework::GraUtil::CMojiFontScalableWin*);
};

class __cppobj Nmpl::Framework::GraUtil::CMojiFontScalable : Nmpl::Framework::GraUtil::CMojiFontScalableWin {
    
}; // size = 0x100

class __cppobj Nmpl::Framework::GraUtil::CMojiFontDraw {
    /* 0x0000 */ char unk0000[0x2A80 - 0x0000];
}; // size = 0x2A80

class __cppobj Nmpl::Fairy::CFairyMgr::CFairyWorkerThreadInfo {
    /* 0x00 */ Nmpl::Fairy::CFairyMgr* manager;
    /* 0x08 */ Nmpl::Core::System::CEventFlag event_flag1;
    /* 0x10 */ Nmpl::Core::System::CEventFlag event_flag2;
    /* 0x18 */ char unk18[0xD8 - 0x18];
}; // size = 0xD8

class __cppobj Nmpl::Fairy::CFairyHitArea {
    /* 0x00 */ Nmpl::Core::CList list;
    /* 0x10 */ char unk10[0x88 - 0x10];
}; // size = 0x88

class __cppobj Nmpl::Fairy::CFairyResAnm {

}; // size = ???

class __cppobj Nmpl::Fairy::FairyAnmSeqInfo {

}; // size = ???

struct __cppobj Nmpl::Fairy::FairyAnmKey {
    /* 0x00 */ char unk00[0xA0 - 0x00];
}; // size = 0xA0

struct __cppobj Nmpl::Fairy::FairyAnmAttrKey {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18

struct __cppobj Nmpl::Fairy::FairyAnmKeyDivVertex {
    /* 0x000 */ char unk000[0x530 - 0x000];
}; // size = 0x530

enum Nmpl::Fairy::CFairyPlayer::EDrawJudge {

};

struct __cppobj Nmpl::Fairy::CFairyPlayer::LayerIdData {
    /* 0x00 */ char unk00[0xA0 - 0x00];
}; // size = 0xA0

class __cppobj Nmpl::Fairy::CFairyPlayer::CurrentAttribute {
    /* 0x00 */ char unk00[0x30 - 0x00];
}; // size = 0x30

class __cppobj Nmpl::Fairy::CFairyPlayer::FrameControl {
    /* 0x00 */ char unk00[0x04 - 0x00];
    /* 0x04 */ f32 frame;
    /* 0x08 */ char unk08[0x0C - 0x08];
    /* 0x0C */ f32 speed;
    /* 0x10 */ char unk10[0x38 - 0x10];
}; // size >= 0x38

class __cppobj Nmpl::Fairy::CFairyPlayer {
    /* 0x000 */ char unk000[0x050 - 0x000];
    /* 0x050 */ Nmpl::Fairy::CFairyResAnm* res_anm;
    /* 0x058 */ char unk058[0x05C - 0x058];
    /* 0x05C */ s32 anime_id;
    /* 0x060 */ Nmpl::Fairy::FairyAnmSeqInfo* seq_info;
    /* 0x068 */ Nmpl::Fairy::CFairyPlayer::FrameControl frame_control;
    /* 0x0A0 */ u8 unk_0A0;
    /* 0x0A1 */ char unk0A1[0x0A5 - 0x0A1];
    /* 0x0A5 */ u8 view;
    /* 0x0A6 */ char unk0A6[0x13C - 0x0A6];
    /* 0x13C */ f32 x;
    /* 0x140 */ f32 y;
    /* 0x144 */ f32 z;
    /* 0x148 */ f32 screen_scale_x;
    /* 0x14C */ f32 screen_scale_y;
    /* 0x150 */ f32 screen_rot;
    /* 0x154 */ char unk154[0x160 - 0x154];
    /* 0x160 */ f32 colour_r;
    /* 0x164 */ f32 colour_g;
    /* 0x168 */ f32 colour_b;
    /* 0x16C */ f32 colour_a;
    /* 0x170 */ char unk170[0x188 - 0x170];
    /* 0x188 */ std::map layer_id_data_map; // std::map<u64, Nmpl::Fairy::CFairyPlayer::LayerIdData>
    /* 0x198 */ char unk198[0x1F4 - 0x198];
    /* 0x1F4 */ f32 unk_1F4;
    /* 0x1F8 */ char unk1F8[0x230 - 0x1F8];
    /* 0x230 */ std::map anm_info_map; // std::map<Nmpl::Fairy::CFairyPlayer::CCallAnmKey, Nmpl::Fairy::CFairyPlayer::CCallAnmInfo>
    /* 0x240 */ std::map callback_info_map; // std::map<Nmpl::Fairy::CFairyPlayer::CCallAnmKey, Nmpl::Fairy::CFairyPlayer::CCallbackInfo>
    /* 0x250 */ std::map call_effect_info_map1; // std::map<Nmpl::Fairy::CFairyPlayer::CCallAnmKey,Nmpl::Fairy::CFairyPlayer::CCallEffectInfo>
    /* 0x260 */ std::multimap call_effect_info_map2; // std::multimap<Nmpl::Fairy::CFairyPlayer::CCallAnmKey,Nmpl::Fairy::CFairyPlayer::CCallEffectInfo>
    /* 0x270 */ char unk270[0x310 - 0x270];
    /* 0x310 */ Nmpl::Gra::Renderer::CGraRenderer* renderer;
    /* 0x318 */ char unk318[0x370 - 0x318];
}; // size = 0x370

class __cppobj Nmpl::Fairy::CFairyEfctPlayer {
    /* 0x000 */ Nmpl::Core::CList list;
    /* 0x010 */ char unk010[0x120 - 0x010];
}; // size = 0x120

// <Nmpl::Fairy::CFairyEfctPlayer>
class __cppobj Nmpl::Fairy::CFairyMgr::CPlayerManager {
    /* 0x000 */ Nmpl::Fairy::CFairyEfctPlayer* unk_000;
    /* 0x008 */ char unk008[0x258 - 0x008];
    /* 0x258 */ s32 unk_258;
}; // size >= 0x260

class __cppobj Nmpl::Fairy::CFairyMgr {
    /* 0x000 */ Nmpl::Fairy::CFairyPlayer* unk_000;
    /* 0x008 */ char unk008[0x010 - 0x008];
    /* 0x010 */ Nmpl::Fairy::CFairyPlayer unk_010;
    /* 0x380 */ Nmpl::Fairy::CFairyPlayer unk_380;
    /* 0x6F0 */ char unk6F0[0x700 - 0x6F0];
    /* 0x700 */ Nmpl::Fairy::CFairyMgr::CPlayerManager player_manager;
    /* 0x960 */ char unk960[0x978 - 0x960];
    /* 0x978 */ std::unordered_map unk_978; // std::unordered_map<u64, Nmpl::Fairy::CFairyDatBank*>
    /* 0x9B8 */ std::unordered_map unk_9B8; // std::unordered_map<u64, Nmpl::Core::intrusive_ptr<Nmpl::File::CFile>>
    /* 0x9F8 */ char unk9F8[0xA00 - 0x9F8];
    /* 0xA00 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture rt1;
    /* 0xAB8 */ Nmpl::Gra::Renderer::CGraRenderTargetTexture rt2;
    /* 0xB70 */ char unkB70[0xB80 - 0xB70];
    /* 0xB80 */ s32 num_worker_threads;
    /* 0xB88 */ Nmpl::Core::System::CThread* worker_threads[16];
    /* 0xC08 */ s32 num_worker_thread_infos;
    /* 0xC10 */ Nmpl::Fairy::CFairyMgr::CFairyWorkerThreadInfo* worker_thread_infos[16];
    /* 0xC90 */ s32 num_system_job_workers;
    /* 0xC94 */ char unkC94[0xCC0 - 0xC94];
}; // size = 0xCC0

struct __cppobj stcParticleBankData {

}; // size = ???

struct __cppobj stcParticleParam {

}; // size = ???

class __cppobj clsParticleManager_Unk00 {
    /* 0x000 */ char unk000[0x184 - 0x000];
}; // size = 0x184

class __cppobj clsParticlePlayer_Base {
    /* 0x00 */ struct clsParticlePlayer_Base_vtbl* __vftable;
    /* 0x08 */ char unk08[0x48 - 0x08];
}; // size = 0x48

struct __cppobj clsParticlePlayer_Base_vtbl {
    /* 0x00 */ void (*D0)(clsParticlePlayer_Base*, bool dealloc);
    /* 0x08 */ void (*mInitialize)(clsParticlePlayer_Base*, clsParticleManager*, stcParticleBankData*, s32);
    /* 0x10 */ void (*mGetOffset)(clsParticlePlayer_Base*);
    /* 0x18 */ void (*mGetMatrix)(clsParticlePlayer_Base*);
    /* 0x20 */ void (*mPlay)(clsParticlePlayer_Base*);
    /* 0x28 */ void (*mPlayParticle)(clsParticlePlayer_Base*, stcParticleParam*);
    /* 0x30 */ void (*mUpdate)(clsParticlePlayer_Base*);
    /* 0x38 */ void (*mRender)(clsParticlePlayer_Base*, NisGraphicsTexture*);
};

class __cppobj clsParticlePlayer : clsParticlePlayer_Base {
    /* 0x48 */ NisMatrix44 matrix;
    /* 0x88 */ char unk88[0xB0 - 0x88];
}; // size = 0xB0

struct __cppobj clsParticlePlayer_vtbl {
    /* 0x00 */ void (*D0)(clsParticlePlayer*, bool dealloc);
    /* 0x08 */ void (*mInitialize)(clsParticlePlayer_Base*, clsParticleManager*, stcParticleBankData*, s32);
    /* 0x10 */ void (*mGetOffset)(clsParticlePlayer*);
    /* 0x18 */ void (*mGetMatrix)(clsParticlePlayer*);
    /* 0x20 */ void (*mPlay)(clsParticlePlayer*);
    /* 0x28 */ void (*mPlayParticle)(clsParticlePlayer_Base*, stcParticleParam*);
    /* 0x30 */ void (*mUpdate)(clsParticlePlayer*);
    /* 0x38 */ void (*mRender)(clsParticlePlayer_Base*, NisGraphicsTexture*);
};

class __cppobj clsParticleTracePlayer : clsParticlePlayer_Base {
    /* 0x48 */ char unk48[0x70 - 0x48];
    /* 0x70 */ NisMatrix44 matrix;
    /* 0xB0 */ char unkB0[0xD0 - 0xB0];
}; // size = 0xD0

class __cppobj clsParticleManager_Unk30 {
    /* 0x00 */ char unk00[0x2C - 0x00];
}; // size = 0x2C

struct __cppobj clsParticleTracePlayer_vtbl {
    /* 0x00 */ void (*D0)(clsParticleTracePlayer*, bool dealloc);
    /* 0x08 */ void (*mInitialize)(clsParticleTracePlayer*, clsParticleManager*, stcParticleBankData*, s32);
    /* 0x10 */ void (*mGetOffset)(clsParticlePlayer*);
    /* 0x18 */ void (*mGetMatrix)(clsParticleTracePlayer*);
    /* 0x20 */ void (*mPlay)(clsParticleTracePlayer*);
    /* 0x28 */ void (*mPlayParticle)(clsParticlePlayer_Base*, stcParticleParam*);
    /* 0x30 */ void (*mUpdate)(clsParticleTracePlayer*);
    /* 0x38 */ void (*mRender)(clsParticleTracePlayer*, NisGraphicsTexture*);
};

class __cppobj clsParticleManager {
    /* 0x00 */ clsParticleManager_Unk00* unk_00;
    /* 0x08 */ s32 num_00;
    /* 0x10 */ clsParticlePlayer* players;
    /* 0x18 */ s32 num_players;
    /* 0x20 */ clsParticleTracePlayer* trace_players;
    /* 0x28 */ s32 num_trace_players;
    /* 0x30 */ clsParticleManager_Unk30* unk_30;
    /* 0x38 */ s32 num_30;
    /* 0x40 */ clsParticleManager_Unk30* unk_30_copy;
    /* 0x48 */ NisGraphicsTexture* texture;
    /* 0x50 */ char unk50[0x58 - 0x50];
}; // size = 0x58

class __cppobj clsBuryObject {
    /* 0x000 */ char unk000[0x2D0 - 0x000];
}; // size = 0x2D0

enum Trial::ModeType::eTYPE : s32 {
    TrialMode_CommandAttack = 0,
    TrialMode_TimeAttack = 1,
    TrialMode_CommandTimeAttack = 2,
    TrialMode_CommandSurvival = 3,
    TrialMode_TimeSurvival = 4,
    TrialMode_DimensionGate = 5,
    TrialMode_None = 6, // amx or none?
};

class __cppobj Trial::clsTrial {
    /* 0x000 */ Trial::ModeType::eTYPE trial_mode;
    /* 0x004 */ char unk004[0x008 - 0x004];
    /* 0x008 */ s32 added_points; // Trial::AddPoint
    /* 0x00C */ char unk00C[0x014 - 0x00C];
    /* 0x014 */ s32 decremented_points; // Trial::DecPoint
    /* 0x018 */ SKILL skills[6];
    /* 0x090 */ u8 time_minutes; // if !f_get(3433)
    /* 0x091 */ u8 time_seconds; // if !f_get(3433)
    /* 0x092 */ u8 time_frames;
    /* 0x093 */ u8 unk_93;
    /* 0x094 */ u8 unk_94;
    /* 0x095 */ u8 bonus_time_minutes;
    /* 0x096 */ u8 bonus_time_seconds;
    /* 0x098 */ stcItem item;
    /* 0x298 */ s32 unk_298;
    /* 0x29C */ s32 use_time;
    /* 0x2A0 */ s32 time_stop_flag;
    /* 0x2A4 */ char unk2A4[0x2A8 - 0x2A4];
    /* 0x2A8 */ s16 old_floor_zoom;
    /* 0x2AA */ char unk2AA[0x2B0 - 0x2AA];
}; // size = 0x2B0

class __cppobj Trial::clsTrialRankingView {
    /* 0x0000 */ char unk0000[0x4020 - 0x0000];
}; // size = 0x4020

class __cppobj Trial::clsNetData {
    /* 0x0000 */ char unk0000[0x50B0 - 0x0000];
}; // size = 0x50B0

class __cppobj Nmpl::Input::CMouse {
    /* 0x00 */ IDirectInputDevice8A* direct_input_device;
    /* 0x08 */ DIMOUSESTATE2 mouse_state;
    /* 0x1C */ s32 axis_x_movement;
    /* 0x20 */ s32 axis_y_movement;
    /* 0x24 */ s32 axis_z_trigger;
    /* 0x28 */ u8 button_trigger[8];
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x38 */ HWND window_handle;
}; // size = 0x40

class __cppobj Nmpl::Input::CKeyboard {
    /* 0x000 */ IDirectInputDevice8A* direct_input_device;
    /* 0x008 */ u8 key_states[256];
    /* 0x108 */ u8 is_triggered[256];
    /* 0x208 */ u8 unk_208[256];
    /* 0x308 */ u8 unk_308[256];
    /* 0x408 */ u8 unk_408[256];
    /* 0x508 */ u8 unk_508[256];
    /* 0x608 */ s32 unk_608[256];
    /* 0xA08 */ s32 unk_A08;
    /* 0xA0C */ s32 unk_A0C;
    /* 0xA10 */ u8 unk_A10;
    /* 0xA11 */ char unkA11[0xA18 - 0xA11];
}; // size >= 0xA18

class __cppobj Nmpl::Input::CRawPad1 {
    /* 0x000 */ IDirectInputDevice8A* direct_input_device;
    /* 0x008 */ char unk008[0x130 - 0x008];
}; // size = 0x130

class __cppobj Nmpl::Input::CRawPad1Holder {
    /* 0x0000 */ s64 count;
    /* 0x0008 */ Nmpl::Input::CRawPad1 raw_pads[32];
}; // size = 0x2608

class __cppobj Nmpl::Input::CRawPad {
    /* 0x00 */ Nmpl::Input::CRawPad1* pads;
    /* 0x08 */ s32 num_pads;
}; // size = 0x10

class __cppobj Nmpl::Input::CPad {
    /* 0x000 */ char unk000[0x258 - 0x000];
}; // size = 0x258

class __cppobj Nmpl::Input::CPadMgr {
    /* 0x00 */ s16 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ Nmpl::Core::System::CThread* check_thread;
}; // size = 0x10

class __cppobj clsKeyConfig : clsTaskBase {
    /* 0x0088 */ ChrAnmObj unk_0088;
    /* 0x0410 */ char unk0410[0x25F8 - 0x0410];
}; // size = 0x25F8

struct __cppobj clsKeyConfig_vtbl {
    /* 0x00 */ void (*D0)(clsKeyConfig*, bool dealloc);
    /* 0x08 */ void (*initialize)(clsTaskBase*);
    /* 0x10 */ bool (*initialize_Wait)(clsTaskBase*);
    /* 0x18 */ void (*NullSub1)(clsTaskBase*);
    /* 0x20 */ bool (*finalize_Wait)(clsKeyConfig*);
    /* 0x28 */ void (*NullSub2)(clsTaskBase*);
    /* 0x30 */ void (*NullSub3)(clsTaskBase*);
    /* 0x38 */ void (*render_Before)(clsKeyConfig*);
    /* 0x40 */ void (*render_After)(clsKeyConfig*);
    /* 0x48 */ void (*NullSub4)(clsTaskBase*);
    /* 0x50 */ void (*NullSub5)(clsTaskBase*);
    /* 0x58 */ void (*stateFunction)(clsKeyConfig*, clsTaskBase::eFUNC_TYPE);
};

struct __cppobj stcDLCMapData {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0x14 - 0x02];
    /* 0x14 */ s32 required_game_version;
}; // size = 0x18

struct __cppobj stcDLCCharData {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 unit_id;
    /* 0x04 */ char unk04[0x24 - 0x04];
}; // size = 0x24

struct __cppobj stcDLCItemData {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 type;
    /* 0x04 */ s16 item_ids[4];
}; // size = 0x0C

struct __cppobj stcDLCShipData {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 ship_id;
    /* 0x04 */ char unk04[0x0C - 0x04];
    /* 0x0C */ s16 parts_by_type[6];
    /* 0x18 */ s32 required_game_version;
}; // size = 0x1C

struct __cppobj stcDLCScenarioData {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0x04 - 0x02];
    /* 0x04 */ s16 flag1;
    /* 0x06 */ char unk06[0x10 - 0x06];
    /* 0x10 */ s16 flag2;
    /* 0x12 */ char unk12[0x18 - 0x12];
}; // size = 0x18

struct __cppobj stcDLCSystemData {
    /* 0x00 */ s16 id;
    /* 0x02 */ char unk02[0x08 - 0x02];
    /* 0x08 */ s32 required_game_version;
}; // size = 0x0C

class __cppobj C_NisCamera_Base {
    /* 0x000 */ NisMatrix44 view_matrix;
    /* 0x040 */ NisMatrix44 projection_matrix;
    /* 0x080 */ char unk080[0x0BC - 0x080];
    /* 0x0BC */ s32 lens;
    /* 0x0C0 */ char unk0C0[0x0D0 - 0x0C0];
}; // size >= 0x0D0

class __cppobj C_NisCamera : C_NisCamera_Base {
}; // size = ???

class __cppobj clsGraphicsCamera {
    /* 0x000 */ NisMatrix44 view_matrix;
    /* 0x040 */ NisMatrix44 projection_matrix;
    /* 0x080 */ NisMatrix44 view_projection_matrix;
    /* 0x0C0 */ NisMatrix44 transpose_view_matrix;
    /* 0x100 */ NisMatrix44 transpose_projection_matrix;
    /* 0x140 */ NisMatrix44 transpose_view_projection_matrix;
    /* 0x180 */ NisVector4 look_at;
    /* 0x190 */ NisVector4 eye_pos;
    /* 0x1A0 */ NisVector4 unk_1A0;
    /* 0x1B0 */ NisVector4 eye_vector;
    /* 0x1C0 */ f32 left;
    /* 0x1C4 */ f32 right;
    /* 0x1C8 */ f32 top;
    /* 0x1CC */ f32 bottom;
    /* 0x1D0 */ f32 z_near;
    /* 0x1D4 */ f32 z_far;
}; // size = 0x1D8

class __cppobj _HEN_SOUNDFADE {
    /* 0x00 */ char unk00[0x98 - 0x00];
}; // size = 0x98

enum GameTrophy::TrophyID {

};

class __cppobj clsRDCounter {
    /* 0x00 */ char unk00[0x58 - 0x00];
}; // size = 0x58

class __cppobj clsEventSpace {
    /* 0x000 */ char unk000[0x210 - 0x000];
}; // size = 0x210

enum eLOAD_ANIME_MODE {

};

struct __cppobj tag_FRMBUF_INFO {
    /* 0x00 */ char unk00[0x10 - 0x00];
    /* 0x10 */ s16 width;
    /* 0x12 */ s16 height;
    /* 0x14 */ char unk14[0x98 - 0x14];
}; // size = 0x98

struct __cppobj tag_WAVE_INFO {
    /* 0x0000 */ char unk0000[0x80 - 0x00];
}; // size = 0x80

struct __cppobj tag_WATER_EFFECT_INFO {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size >= 0x18

struct __cppobj tag_BLUR_INFO {
    /* 0x00 */ char unk00[0x40 - 0x00];
}; // size <= 0x40

class __cppobj clsNisLight {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 is_active;
    /* 0x08 */ char unk08[0x20 - 0x08];
    /* 0x20 */ NisVector4 direction;
    /* 0x30 */ char unk30[0x40 - 0x30];
    /* 0x40 */ NisVector4 ambient; // default ambient colour? Script::clsScriptDecoder::LightAmbientReset
    /* 0x50 */ NisVector4 diffuse; // default diffuse colour? Script::clsScriptDecoder::LightDiffuseReset
    /* 0x60 */ NisVector4 specular;
    /* 0x70 */ char unk70[0x80 - 0x70];
    /* 0x80 */ NisMatrix44 unk_80;
}; // size = 0xC0

class __cppobj clsNisLightManager {
    /* 0x000 */ char unk000[0x010 - 0x000];
    /* 0x010 */ clsNisLight lights[1]; // unk size, probably 4
    /* 0x0D0 */ char unk0D0[0x310 - 0x0D0];
    /* 0x310 */ clsNisLight light2;
}; // size = 0x3D0

struct __cppobj stcSoundDataLoadWork {
    /* 0x000 */ char unk000[0x1E0 - 0x000];
}; // size <= 0x1E0

struct __cppobj soundInfo {
    /* 0x00 */ u8 bgm_vol_balance;
    /* 0x01 */ u8 song_vol_balance;
    /* 0x02 */ u8 msg_vol_balance;
    /* 0x03 */ u8 voice_vol_balance;
    /* 0x04 */ u8 se_vol_balance;
    /* 0x05 */ u8 language;
    /* 0x06 */ char unk06[0x20 - 0x06];
}; // size = 0x20

struct __cppobj BSPLINE {
    /* 0x00 */ char unk00[0xA0 - 0x00];
}; // size = 0xA0

struct __cppobj stcDebugPerfInfo {
    /* 0x00 */ char unk00[0x54 - 0x00];
}; // size = 0x54

struct __cppobj DEBUGITEMLAND_INFO {
    /* 0x00 */ char unk00[0x04 - 0x00];
}; // size = 0x4

class __cppobj clsDebugTimeCheck {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18, IDA thinks 0x18, go with that for now

struct __cppobj stcCbResult {
    /* 0x00 */ char unk00[0x10 - 0x00];
}; // size = 0x10

struct nis::np::AccountId {
    /* 0x00 */ char unk00[0x40 - 0x00];
}; // size = 0x40

struct clsFriendUserSenator::stcInfo {
    /* 0x00 */ char unk00[0x98 - 0x00];
}; // size = 0x98

struct __cppobj stcMenuPos {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size = 0x8

struct __cppobj StructChapt {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18

struct __cppobj StructEvent {
    /* 0x00 */ char unk00[0x28 - 0x00];
}; // size = 0x28

class __cppobj WeaponViewWindow {
    /* 0x00 */ char unk00[0x70 - 0x00];
}; // size = 0x70

struct __cppobj TargetMemInfo {
    /* 0x00 */ char unk00[0xC0 - 0x00];
}; // size = 0xC0

struct __cppobj malloc_params {
    /* 0x00 */ char unk00[0x30 - 0x00];
}; // size = 0x30

class __cppobj Nmpl::Framework::DeveView::CDeveLogger {

}; // size = ???

class __cppobj Nmpl::Framework::DeveView::CDeveView {

}; // size = ???

class __cppobj clsSkillTextMaker {
    /* 0x00 */ char unk00[0x18 - 0x00];
}; // size = 0x18

struct __cppobj DEBUGMENU_INFO {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size <= 0x8

struct __cppobj S_GAMEMODE {
    /* 0x00 */ s16 game_mode;
    /* 0x02 */ s16 task_id;
}; // size = 0x4

class __cppobj clsTrackingChara {
    /* 0x000 */ char unk000[0x200 - 0x000];
}; // size = 0x200

struct __cppobj BOOST::stcBoostDataManagement {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size = 0x8

class __cppobj clsGameMain {
    /* 0x00 */ char unk00[0x04 - 0x00];
}; // size = 0x4

enum clsGameNetwork::eNoConnectedState {

};

class __cppobj DKTABLE {
    /* 0x00 */ char unk00[0xA4 - 0x00];
}; // size = 0xA4

struct __cppobj BU_CENTER {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size <= 0x8 ???

struct __cppobj MONACTION {
    /* 0x00 */ s16 unit_id;
    /* 0x02 */ s16 sequence_ids[1]; // unk size
    /* 0x04 */ char unk04[0x22 - 0x04];
    /* 0x22 */ u8 frames[1]; // unk size
    /* 0x23 */ char unk23[0x36 - 0x23];
}; // size = 0x36

struct __cppobj JUDGMENT {
    /* 0x00 */ char unk00[0x60 - 0x00];
}; // size = 0x60

struct __cppobj MUSICALDAT {
    /* 0x00 */ s64 price;
    /* 0x08 */ char unk08[0xD0 - 0x08];
}; // size = 0xD0

struct __cppobj DARKSUN {
    /* 0x00 */ char unk00[0x50 - 0x00];
}; // size = 0x50

struct __cppobj DARKSUN2 {
    /* 0x00 */ char unk00[0x50 - 0x00];
}; // size = 0x50

class __cppobj clsStoryDungeonSelect {
    /* 0x000 */ s32 dungeon_type;
    /* 0x004 */ s32 initialise_type;
    /* 0x008 */ char unk008[0x236 - 0x008];
    /* 0x236 */ s16 dungeon_indexes[256];
    /* 0x436 */ s16 num_dungeons;
    /* 0x438 */ s16 dungeon_clear_nums[256];
    /* 0x638 */ char unk638[0xA40 - 0x638];
}; // size = 0xA40

class __cppobj clsChallengeDungeonSelect {
    /* 0x000 */ char unk000[0x144 - 0x000];
}; // size = 0x144

class __cppobj clsItemDungeonSelect {
    /* 0x000 */ char unk000[0x268 - 0x000];
}; // size = 0x268

class __cppobj clsBattleState {
    /* 0x000000 */ char unk000000[0x150488 - 0x000000];
}; // size = 0x150488

enum Geo::Read::eREAD_TYPE {

};

struct __cppobj GEOCHR {
    /* 0x00 */ char unk00[0x08 - 0x00];
}; // size = 0x8

struct __cppobj GEOPOS {
    /* 0x00 */ char unk00[0x02 - 0x00];
}; // size = 0x2

class __cppobj clsGeoPanel {
    /* 0x00 */ u8 pad;
}; // size = 0x1

enum Disk::eTYPE {

};

class __cppobj clsShopCheat {
    /* 0x00 */ char unk00[0xA8 - 0x00];
}; // size = 0xA8

class __cppobj ScoutUserChar::stcScoutChar {
    /* 0x0000 */ stcStatus status;
}; // size = 0x2800

class __cppobj clsScoutUserCharacter {
    /* 0x00000 */ char unk00000[0x00BD4 - 0x00000];
    /* 0x00BD4 */ u32 escape_and_game_over_flag;
    /* 0x00BD8 */ char unk00BD8[0x00BE4 - 0x00BD8];
    /* 0x00BE4 */ s32 select_class;
    /* 0x00BE8 */ char unk00BE8[0x033F0 - 0x00BE8];
    /* 0x033F0 */ ScoutUserChar::stcScoutChar scout_char1[1];
    /* 0x05BF0 */ ScoutUserChar::stcScoutChar scout_char2[9];
}; // size = 0x1C3F0

struct TLS {
    /* 0x0000 */ char unk0000[0x0010 - 0x0000];
    /* 0x0010 */ Nmpl::Core::CFunctionJobWithDelete* cfunctionjobwithdelete_head;
    /* 0x0018 */ s64 num_cfunctionjobwithdelete;
    /* 0x0020 */ char unk0020[0x1750 - 0x0020];
    /* 0x1750 */ u32 unk_1750;
    /* 0x1758 */ Nmpl::Gra::CGraVertexFormat* vertex_format;
    /* 0x1760 */ void* unk_1760;
    /* 0x1768 */ char unk1768[0x1778 - 0x1768];
    /* 0x1778 */ s32 render_context_state_index;
    /* 0x177C */ char unk177C[0x2220 - 0x177C];
    /* 0x2220 */ void* unk_2220;
    /* 0x2228 */ u32 unk_2228;
    /* 0x2230 */ void* unk_2230;
    /* 0x2238 */ void* unk_2238;
    /* 0x2240 */ void* unk_2240;
    /* 0x2248 */ void* unk_2248;
    /* 0x2250 */ void* unk_2250;
    /* 0x2258 */ void* unk_2258;
    /* 0x2260 */ u32 free_safe_list_cfunctionjobwithdelete_init_once;
}; // size >= 0x2268
